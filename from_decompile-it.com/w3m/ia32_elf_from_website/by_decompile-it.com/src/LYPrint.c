#include "LYPrint.c.h"
static void set_environ( int name, char *value, char *no_value );
static char *suggested_filename( DocInfo *newdoc );
static void SetupFilename( char *filename, char *sug_filename );
static int RecallFilename( char *filename, BOOLEAN *first, int *now, int *total, int flag );
static BOOLEAN confirm_by_pages( char *prompt, int lines_in_file, int lines_per_page );
static void send_file_to_file( DocInfo *newdoc, char *content_base, char *sug_filename );
static void send_file_to_mail( DocInfo *newdoc, char *content_base, char *content_location );
static void send_file_to_printer( DocInfo *newdoc, char *content_base, char *sug_filename, int printer_number );
static void send_file_to_screen( DocInfo *newdoc, char *content_base, BOOLEAN Lpansi );
static char *subject_translate8bit( char *source );
void set_environ( int name, char *value, char *no_value )
{
  static char *names[4] = { "LYNX_PRINT_TITLE", "LYNX_PRINT_URL", "LYNX_PRINT_DATE", "LYNX_PRINT_LASTMOD",  };
  static char *pointers[4];
  char *envbuffer = 0;
  HTSACopy( &envbuffer, names[ name ] );
  HTSACat( &envbuffer, "=" );
  HTSACat( &envbuffer, value == 0 ? no_value : value );
  putenv( envbuffer );
  if ( pointers[ name ] != 0 )
  {
    free( pointers[ name ] );
    pointers[ name ] = 0;
  }
  pointers[ name ] = envbuffer;
  return;
}
char *suggested_filename( DocInfo *newdoc )
{
  char *sug_filename = 0;
  int rootlen;
  if ( HText_getSugFname( ) != 0 )
  {
    HTSACopy( &sug_filename, HText_getSugFname( ) );
  }
  HTSACopy( &sug_filename, newdoc->address );
  if ( HTCompressFileType( sug_filename, ".", &rootlen ) != 0 )
    sug_filename[ rootlen ] = 0;
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "suggest %s\n", sug_filename );
  }
  return sug_filename;
}
void SetupFilename( char *filename, char *sug_filename )
{
  HTFormat format;
  HTAtom *encoding;
  char *cp;
  LYstrncpy( filename, sug_filename, 255 );
  change_sug_filename( filename );
  if ( HTisDocumentSource( ) == 0 )
  {
    cp = strrchr( filename, 46 );
    if ( cp != 0 && cp - filename <= 249 )
    {
      format = HTFileFormat( filename, &encoding, 0 );
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "... format %s\n", format->name );
      }
      if ( strcasecomp( format->name, "text/html" ) == 0 || ( encoding != 0 && encoding != HTAtom_for( "identity" ) && encoding != HTAtom_for( "8bit" ) && encoding != HTAtom_for( "binary" ) && encoding != HTAtom_for( "7bit" ) ) )
        memcpy( cp, ".txt", 5 );
    }
  }
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "... result %s\n", filename );
  }
  return;
}
int RecallFilename( char *filename, BOOLEAN *first, int *now, int *total, int flag )
{
  int ch;
  char *cp;
  RecallType recall;
  if ( now[0] < 0 )
  {
    now[0] = total[0] = sug_filenames == 0 ? 0 : HTList_count( sug_filenames );
  }
  recall = total[0] > 0;
  ch = LYgetstr( filename, 0, 256, recall );
  if ( ch < 0 || ( filename[0] & 255 ) == 0 || ch == 256 || ch == 257 )
  {
    if ( recall != NORECALL && ch == 256 )
    {
      if ( ( first[0] & 255 ) != 0 )
      {
        first[0] = 0;
        now[0] = 0;
      }
      else
        now[0]++;
      if ( total[0] <= now[0] )
      {
        first[0] = 1;
        now[0] = total[0];
        mustshow = 1;
        statusline( gettext( "Enter a filename: " ) );
        return 0;
      }
      cp = HTList_objectAt( sug_filenames, now[0] );
      if ( cp != 0 )
      {
        LYstrncpy( filename, cp, 255 );
        if ( total[0] == 1 )
        {
          mustshow = 1;
          statusline( gettext( "Edit the previous filename: " ) );
        }
        mustshow = 1;
        statusline( gettext( "Edit a previous filename: " ) );
        return 1;
      }
    }
    else
    {
      if ( recall != NORECALL && ch == 257 )
      {
        if ( ( first[0] & 255 ) != 0 )
        {
          first[0] = 0;
          now[0] = total[0] - 1;
        }
        else
          now[0]--;
        if ( now[0] < 0 )
        {
          first[0] = 1;
          now[0] = total[0];
          mustshow = 1;
          statusline( gettext( "Enter a filename: " ) );
          return 0;
        }
        cp = HTList_objectAt( sug_filenames, now[0] );
        if ( cp != 0 )
        {
          LYstrncpy( filename, cp, 255 );
          if ( total[0] == 1 )
          {
            mustshow = 1;
            statusline( gettext( "Edit the previous filename: " ) );
          }
          mustshow = 1;
          statusline( gettext( "Edit a previous filename: " ) );
          return 1;
        }
      }
    }
    if ( flag == 0 )
    {
      HTInfoMsg( gettext( "Save request cancelled!!!" ) );
    }
    if ( flag == 1 )
    {
      return 3;
    }
    return 3;
  }
  else
  {
    return 2;
  }
}
BOOLEAN confirm_by_pages( char *prompt, int lines_in_file, int lines_per_page )
{
  int pages = lines_in_file / ( lines_per_page + 1 );
  int c;
  if ( lines_in_file % ( LYlines + 1 ) >= 1 )
    pages++;
  if ( pages > 4 )
  {
    char *msg = 0;
    HTSprintf0( &msg, prompt, pages );
    c = HTConfirmDefault( msg, 1 );
    if ( msg != 0 )
    {
      free( msg );
      msg = 0;
    }
    if ( c == 1 )
    {
      LYwaddnstr( LYwin, "   Ok...", 8 );
    }
    HTInfoMsg( gettext( "Print request cancelled!!!" ) );
    return 0;
  }
  else
  {
    return 0;
  }
}
void send_file_to_file( DocInfo *newdoc, char *content_base, char *sug_filename )
{
  BOOLEAN FirstRecall = 1;
  BOOLEAN use_cte;
  char *disp_charset;
  FILE *outfile_fp;
  char buffer[256];
  char filename[256];
  int FnameNum = -1;
  int FnameTotal;
  int c = 0;
  mustshow = 1;
  statusline( gettext( "Enter a filename: " ) );
  while ( 1 )
  {
    SetupFilename( filename, sug_filename );
    if ( lynx_save_space != 0 && strlen( lynx_save_space ) + strlen( filename ) <= 255 )
    {
      strcpy( buffer, lynx_save_space );
      strcat( buffer, filename );
      strcpy( filename, buffer );
  }
  else
  {
    while ( 1 )
    {
    }
  }
}
}
void send_file_to_mail( DocInfo *newdoc, char *content_base, char *content_location )
{
  static BOOLEAN first_mail_preparsed = 1;
  BOOLEAN use_mime;
  BOOLEAN use_cte;
  BOOLEAN use_type;
  char *disp_charset;
  FILE *outfile_fp;
  char *buffer = 0;
  char *subject = 0;
  char user_response[1024];
  if ( ( LYSystemMail( ) & 255 ) != 0 )
  {
    if ( ( LYPreparsedSource & 255 ) != 0 && ( first_mail_preparsed & 255 ) != 0 && HTisDocumentSource( ) != 0 )
    {
      if ( HTConfirmDefault( gettext( "Viewing preparsed source.  Are you sure you want to mail it?" ), 0 ) == 1 )
      {
        LYwaddnstr( LYwin, "   Ok...", 8 );
        first_mail_preparsed = 0;
      }
      else
      {
        HTInfoMsg( gettext( "Mail request cancelled!!!" ) );
      }
    }
    mustshow = 1;
    statusline( gettext( "Please enter a valid internet mail address: " ) );
    LYstrncpy( user_response, personal_mail_address, 1023 );
    if ( LYgetstr( user_response, 0, 1024, 3 ) < 0 || ( user_response[0] & 255 ) == 0 )
    {
      HTInfoMsg( gettext( "Mail request cancelled!!!" ) );
    }
    disp_charset = LYCharSet_UC[ current_char_set ].MIMEname;
    use_cte = HTLoadedDocumentEightbit( );
    if ( use_cte == 0 || strncasecomp( disp_charset, "x-", 2 ) == 0 )
    {
      disp_charset = 0;
      use_cte = 0;
    }
    use_type = disp_charset == 0 && HTisDocumentSource( ) == 0 ? 0 : 1;
    subject = subject_translate8bit( newdoc->title );
    if ( ( newdoc->isHEAD & 255 ) != 0 )
    {
      if ( subject != 0 )
      {
        free( subject );
        subject = 0;
      }
      HTSACopy( &subject, "HEAD  " );
      HTSACat( &subject, newdoc->address );
    }
    outfile_fp = LYPipeToMailer( );
    if ( outfile_fp == 0 )
    {
      HTAlert( gettext( "ERROR - Unable to mail file" ) );
    }
    use_cte = HTLoadedDocumentEightbit( );
    disp_charset = LYCharSet_UC[ current_char_set ].MIMEname;
    if ( use_cte == 0 || ( LYHaveCJKCharacterSet & 255 ) != 0 || strncasecomp( disp_charset, "x-", 2 ) == 0 )
      disp_charset = 0;
    use_type = disp_charset == 0 && HTisDocumentSource( ) == 0 ? 0 : 1;
    use_mime = use_cte == 0 && use_type == 0 ? 0 : 1;
    if ( use_mime != 0 )
    {
      fwrite( "Mime-Version: 1.0\n", 1, 18, outfile_fp );
      if ( use_cte != 0 )
        fwrite( "Content-Transfer-Encoding: 8bit\n", 1, 32, outfile_fp );
    }
    if ( HTisDocumentSource( ) != 0 )
    {
      fwrite( "Content-Type: text/html", 1, 23, outfile_fp );
      if ( disp_charset != 0 )
      {
        fprintf( outfile_fp, "; charset=%s\n", disp_charset );
      }
      fputc( 10, outfile_fp );
    }
    else
    {
      if ( disp_charset != 0 )
        fprintf( outfile_fp, "Content-Type: text/plain; charset=%s\n", disp_charset );
      if ( use_mime != 0 )
      {
        if ( content_base != 0 )
          fprintf( outfile_fp, "Content-Base: %s\n", content_base );
        if ( content_location != 0 )
          fprintf( outfile_fp, "Content-Location: %s\n", content_location );
      }
      fprintf( outfile_fp, "To: %s\nSubject: %s\n", user_response, subject );
      fprintf( outfile_fp, "X-URL: %s\n\n", newdoc->address );
      if ( ( LYPrependBaseToSource & 255 ) != 0 && HTisDocumentSource( ) != 0 )
        fprintf( outfile_fp, "&lt;!-- X-URL: %s --&gt;\n&lt;BASE HREF=\"%s\"&gt;\n\n", newdoc->address, content_base );
      print_wwwfile_to_fd( outfile_fp, 1, 0 );
      if ( keypad_mode != 0 )
        printlist( outfile_fp, 0 );
      pclose( outfile_fp );
      if ( buffer != 0 )
      {
        free( buffer );
        buffer = 0;
      }
      if ( subject != 0 )
      {
        free( subject );
        subject = 0;
      }
    }
  }
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
void send_file_to_printer( DocInfo *newdoc, char *content_base, char *sug_filename, int printer_number )
{
  BOOLEAN FirstRecall = 1;
  FILE *outfile_fp;
  char *the_command = 0;
  char my_file[256];
  char my_temp[256];
  int FnameTotal, FnameNum = -1;
  lynx_list_item_type *cur_printer;
  outfile_fp = LYOpenTemp( my_temp, HTisDocumentSource( ) == 0 ? ".txt" : ".html", "w" );
  if ( outfile_fp == 0 )
  {
    HTAlert( gettext( "ERROR - Unable to allocate file space!!!" ) );
  }
  else
  {
    if ( ( LYPrependBaseToSource & 255 ) != 0 && HTisDocumentSource( ) != 0 )
      fprintf( outfile_fp, "&lt;!-- X-URL: %s --&gt;\n&lt;BASE HREF=\"%s\"&gt;\n\n", newdoc->address, content_base );
    print_wwwfile_to_fd( outfile_fp, 0, 0 );
    if ( keypad_mode != 0 )
      printlist( outfile_fp, 0 );
    LYCloseTempFP( outfile_fp );
  {
    int count = 0;
    cur_printer = printers;
    for ( ; count < printer_number; cur_printer = &cur_printer )
    {
      count++;
      //cur_printer = &cur_printer;
    }
    if ( cur_printer->command == 0 )
    {
      HTAlert( gettext( "ERROR! - printer is misconfigured!" ) );
    }
    else
    {
      if ( HTCountCommandArgs( cur_printer->command ) > 1 )
      {
        mustshow = 1;
        statusline( gettext( "Enter a filename: " ) );
        SetupFilename( my_file, sug_filename );
    }
    HTAddParam( &the_command, cur_printer->command, 1, my_temp );
    HTAddParam( &the_command, cur_printer->command, 2, my_file );
    HTEndParam( &the_command, cur_printer->command, 2 );
    LYmove( 1, 1 );
    stop_curses( );
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "command: %s\n", the_command );
    }
    printf( gettext( "Printing file.  Please wait..." ) );
    set_environ( 0, HText_getTitle( ), "" );
    set_environ( 1, newdoc->address, "" );
    set_environ( 2, HText_getDate( ), "" );
    set_environ( 3, HText_getLastModified( ), "" );
    LYSystem( the_command );
    if ( the_command != 0 )
    {
      free( the_command );
      the_command = 0;
    }
    LYRemoveTemp( my_temp );
    set_environ( 0, "", "" );
    set_environ( 1, "", "" );
    set_environ( 2, "", "" );
    set_environ( 3, "", "" );
    fflush( *(int*)(135965440) );
    signal( 2, &cleanup_sig );
    LYSleepMsg( );
  }
}
}
start_curses( );
if ( ( 0 ^ 0 ) != 0 )
{
  __stack_chk_fail( );
  return;
}
else
{
  return;
}
}
void send_file_to_screen( DocInfo *newdoc, char *content_base, BOOLEAN Lpansi )
{
  FILE *outfile_fp;
  char prompt[80];
  if ( Lpansi != 0 )
  {
    mustshow = 1;
    statusline( gettext( "Be sure your printer is on-line.  Press &lt;return&gt; to start printing:" ) );
  }
  mustshow = 1;
  statusline( gettext( "Press &lt;return&gt; to begin: " ) );
  prompt[0] = 0;
  if ( LYgetstr( prompt, 0, 80, 0 ) < 0 )
  {
    HTInfoMsg( gettext( "Print request cancelled!!!" ) );
  }
  else
  {
    outfile_fp = *(int*)(135965440);
    stop_curses( );
    signal( 2, 1 );
    if ( ( LYPrependBaseToSource & 255 ) != 0 && HTisDocumentSource( ) != 0 )
      fprintf( outfile_fp, "&lt;!-- X-URL: %s --&gt;\n&lt;BASE HREF=\"%s\"&gt;\n\n", newdoc->address, content_base );
    if ( Lpansi != 0 )
      printf( "\033[5i" );
    print_wwwfile_to_fd( outfile_fp, 0, 0 );
    if ( keypad_mode != 0 )
      printlist( outfile_fp, 0 );
    if ( Lpansi != 0 )
    {
      printf( "\n" );
      printf( "\033[4i" );
      fflush( *(int*)(135965440) );
      Lpansi = 0;
    }
    else
    {
      fprintf( *(int*)(135965440), "\n\n%s", gettext( "Press &lt;return&gt; to finish: " ) );
      fflush( *(int*)(135965440) );
      LYgetch( );
    }
  }
  start_curses( );
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
int printfile( DocInfo *newdoc )
{
  BOOLEAN Lpansi = 0;
  DocAddress WWWDoc;
  char *content_base = 0;
  char *content_location = 0;
  char *cp = 0;
  char *link_info = 0;
  char *sug_filename = 0;
  int lines_in_file = 0;
  int pagelen = 0;
  int printer_number = 0;
  int type = 0;
  HTSACopy( &link_info, &newdoc->address[12] );
  LYpop( newdoc );
  WWWDoc.address = newdoc->address;
  WWWDoc.post_data = newdoc->post_data;
  WWWDoc.post_content_type = newdoc->post_content_type;
  WWWDoc.bookmark = newdoc->bookmark;
  WWWDoc.isHEAD = newdoc->isHEAD;
  WWWDoc.safe = newdoc->safe;
  if ( ( HTLoadAbsolute( &WWWDoc ) & 255 ) == 0 )
  {
    return 0;
  }
  if ( HText_getContentBase( ) != 0 )
  {
    HTSACopy( &content_base, HText_getContentBase( ) );
    LYRemoveBlanks( content_base );
    if ( ( content_base == 0 || ( content_base[0] & 255 ) == 0 ) && content_base != 0 )
    {
      free( content_base );
      content_base = 0;
    }
  }
  if ( HTisDocumentSource( ) != 0 )
  {
    if ( HText_getContentLocation( ) != 0 )
    {
      HTSACopy( &content_location, HText_getContentLocation( ) );
      LYRemoveBlanks( content_location );
      if ( ( content_location == 0 || ( content_location[0] & 255 ) == 0 ) && content_location != 0 )
      {
        free( content_location );
        content_location = 0;
      }
    }
    if ( content_base == 0 )
    {
      if ( content_location != 0 && is_url( content_location ) != 0 )
      {
        HTSACopy( &content_base, content_location );
      }
      HTSACopy( &content_base, newdoc->address );
    }
    if ( content_location == 0 )
      HTSACopy( &content_location, newdoc->address );
  }
  sug_filename = suggested_filename( newdoc );
  cp = strstr( link_info, "lines=" );
  if ( cp != 0 )
  {
    cp[0] = 0;
    cp += 6;
    lines_in_file = atoi( cp );
  }
  if ( strstr( link_info, "LOCAL_FILE" ) != 0 )
    type = 1;
  else
  {
    if ( strstr( link_info, "TO_SCREEN" ) != 0 )
      type = 2;
    else
    {
      if ( strstr( link_info, "LPANSI" ) != 0 )
      {
        Lpansi = 1;
        type = 2;
      }
      else
      {
        if ( strstr( link_info, "MAIL_FILE" ) != 0 )
          type = 4;
        else
        {
          if ( strstr( link_info, "PRINTER" ) != 0 )
          {
            type = 5;
            cp = strstr( link_info, "number=" );
            if ( cp != 0 )
            {
              cp += 7;
              printer_number = atoi( cp );
            }
            cp = strstr( link_info, "pagelen=" );
            if ( cp != 0 )
            {
              cp += 8;
              pagelen = atoi( cp );
            }
            else
              pagelen = 66;
          }
        }
      }
    }
  }
  switch ( type )
  {
    break;
  default:
    break;
  case 1:
    send_file_to_file( newdoc, content_base, sug_filename );
    break;
  case 4:
    send_file_to_mail( newdoc, content_base, content_location );
    break;
  case 2:
    if ( ( confirm_by_pages( gettext( "File is %d screens long.  Are you sure you want to print?" ), lines_in_file, LYlines ) & 255 ) != 0 )
      send_file_to_screen( newdoc, content_base, Lpansi );
      free( link_info );
      link_info = 0;
      if ( sug_filename != 0 )
      {
        free( sug_filename );
        sug_filename = 0;
      }
      if ( content_base != 0 )
      {
        free( content_base );
        content_base = 0;
      }
      if ( content_location != 0 )
      {
        free( content_location );
        content_location = 0;
        return 1;
      }
      else
      {
        return 1;
      }
    break;
  case 5:
    if ( ( confirm_by_pages( gettext( "File is %d pages long.  Are you sure you want to print?" ), lines_in_file, pagelen ) & 255 ) != 0 )
      send_file_to_printer( newdoc, content_base, sug_filename, printer_number );
    break;
  }
  if ( link_info != 0 )
  {
    free( link_info );
    link_info = 0;
  }
  else
  {
  }
}
char *subject_translate8bit( char *source )
{
  char *target = 0;
  int charset_in, charset_out;
  int i = outgoing_mail_charset;
  HTSACopy( &target, source );
  if ( i < 0 || i == current_char_set || LYCharSet_UC[ current_char_set ].enc == 5 || LYCharSet_UC[ i ].enc == 5 )
  {
    return target;
  }
  charset_out = i;
  charset_in = current_char_set;
  LYUCTranslateBackFormData( &target, charset_in, charset_out, 1 );
  return target;
}
int print_options( char **newfile, char *printed_url, int lines_in_file )
{
  static char my_temp[256];
  char *buffer = 0;
  int count;
  int pages;
  FILE *fp0 = InternalPageFP( my_temp, 1 );
  lynx_list_item_type *cur_printer;
  if ( fp0 == 0 )
  {
    return -1;
  }
  LYLocalFileToURL( newfile, my_temp );
  BeginInternalPage( fp0, gettext( "Printing Options" ), "keystrokes/print_help.html.gz" );
  fwrite( "&lt;pre&gt;\n", 1, 6, fp0 );
  pages = ( (/*HI*/int)( 1041204193 * ( lines_in_file + 65 ) ) >> 4 ) - ( ( lines_in_file + 65 ) >> 31 );
  HTSprintf0( &buffer, "   &lt;em&gt;%s&lt;/em&gt; %s\n   &lt;em&gt;%s&lt;/em&gt; %d\n   &lt;em&gt;%s&lt;/em&gt; %d %s %s\n", gettext( "Document:" ), printed_url, gettext( "Number of lines:" ), lines_in_file, gettext( "Number of pages:" ), pages, gettext( "page" ), gettext( "(approximately)" ) );
  fputs( buffer, fp0 );
  if ( buffer != 0 )
  {
    free( buffer );
    buffer = 0;
  }
  if ( ( no_print & 255 ) != 0 || ( no_disk_save & 255 ) != 0 || ( no_mail & 255 ) != 0 )
  {
    fprintf( fp0, "   &lt;em&gt;%s&lt;/em&gt;\n", gettext( "Some print functions have been disabled!" ) );
  }
  fprintf( fp0, "\n%s\n", gettext( "Standard print options:" ) );
  if ( ( no_disk_save & 255 ) == 0 && ( no_print & 255 ) == 0 )
  {
    fprintf( fp0, "   &lt;a href=\"%s//LOCAL_FILE/lines=%d\"&gt;%s&lt;/a&gt;\n", "LYNXPRINT:", lines_in_file, gettext( "Save to a local file" ) );
  }
  fprintf( fp0, "   &lt;em&gt;%s&lt;/em&gt;\n", gettext( "Save to disk disabled" ) );
  if ( ( no_mail & 255 ) == 0 && ( local_host_only & 255 ) == 0 )
  {
    fprintf( fp0, "   &lt;a href=\"%s//MAIL_FILE/lines=%d\"&gt;%s&lt;/a&gt;\n", "LYNXPRINT:", lines_in_file, gettext( "Mail the file" ) );
  }
  fprintf( fp0, "   &lt;a href=\"%s//TO_SCREEN/lines=%d\"&gt;%s&lt;/a&gt;\n", "LYNXPRINT:", lines_in_file, gettext( "Print to the screen" ) );
  fprintf( fp0, "   &lt;a href=\"%s//LPANSI/lines=%d\"&gt;%s&lt;/a&gt;\n", "LYNXPRINT:", lines_in_file, gettext( "Print out on a printer attached to your vt100 terminal" ) );
  if ( user_mode == 0 )
  {
    fprintf( fp0, "\n%s\n", gettext( "Local additions:" ) );
  }
  count = 0;
  cur_printer = printers;
  for ( ; cur_printer == 0; count++ )
  {
    if ( ( no_print & 255 ) == 0 || cur_printer->always_enabled != 0 )
    {
      fprintf( fp0, "   &lt;a href=\"%s//PRINTER/number=%d/pagelen=%d/lines=%d\"&gt;", "LYNXPRINT:", count, cur_printer->pagelen, lines_in_file );
      fputs( cur_printer->name == 0 ? "No Name Given" : cur_printer->name, fp0 );
      fwrite( "&lt;/a&gt;\n", 1, 5, fp0 );
      cur_printer = &cur_printer;
      //count++;
    }
    else
    {
      cur_printer = &cur_printer;
      //count++;
    }
  }
}
char *GetFileName( void )
{
  int eax;
  struct stat stat_info;
  char fbuf[256];
  char tbuf[256];
  char *fn;
  BOOLEAN FirstRecall = 1;
  int FnameNum = -1;
  int FnameTotal;
  mustshow = 1;
  statusline( gettext( "Enter a filename: " ) );
  while ( 1 )
  {
    SetupFilename( fbuf, "" );
    while ( 1 )
    {
    }
  }
}