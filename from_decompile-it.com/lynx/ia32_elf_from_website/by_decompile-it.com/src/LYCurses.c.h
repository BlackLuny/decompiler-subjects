#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct _IO_FILE FILE;
struct _IO_marker {
     struct _IO_marker *_next;
     struct _IO_FILE *_sbuf;
     int _pos;
  } ;
typedef long __off_t;
typedef void _IO_lock_t;
typedef long long __quad_t;
typedef __quad_t __off64_t;
typedef unsigned int size_t;
struct _IO_FILE {
     int _flags;
     char *_IO_read_ptr;
     char *_IO_read_end;
     char *_IO_read_base;
     char *_IO_write_base;
     char *_IO_write_ptr;
     char *_IO_write_end;
     char *_IO_buf_base;
     char *_IO_buf_end;
     char *_IO_save_base;
     char *_IO_backup_base;
     char *_IO_save_end;
     struct _IO_marker *_markers;
     struct _IO_FILE *_chain;
     int _fileno;
     int _flags2;
     __off_t _old_offset;
     unsigned short _cur_column;
     char _vtable_offset;
     char _shortbuf[1];
     _IO_lock_t *_lock;
     __off64_t _offset;
     void *__pad1;
     void *__pad2;
     void *__pad3;
     void *__pad4;
     size_t __pad5;
     int _mode;
     char _unused2[40];
  } ;
typedef struct _win_st WINDOW;
typedef unsigned long chtype;
typedef chtype attr_t;
struct pdat {
     short _pad_y;
     short _pad_x;
     short _pad_top;
     short _pad_left;
     short _pad_bottom;
     short _pad_right;
  } ;
typedef int wchar_t;
typedef struct {
     attr_t attr;
     wchar_t chars[5];
  } cchar_t;
struct _win_st {
     short _cury;
     short _curx;
     short _maxy;
     short _maxx;
     short _begy;
     short _begx;
     short _flags;
     attr_t _attrs;
     chtype _bkgd;
     _Bool _notimeout;
     _Bool _clear;
     _Bool _leaveok;
     _Bool _scroll;
     _Bool _idlok;
     _Bool _idcok;
     _Bool _immed;
     _Bool _sync;
     _Bool _use_keypad;
     int _delay;
     struct ldat *_line;
     short _regtop;
     short _regbottom;
     int _parx;
     int _pary;
     WINDOW *_parent;
     struct pdat  _pad;
     short _yoffset;
     cchar_t _bkgrnd;
  } ;
typedef char BOOLEAN;
typedef void (*__sighandler_t)( int  );
typedef unsigned long mmask_t;
typedef struct term TERMINAL;
typedef struct termtype TERMTYPE;
struct termtype {
     char *term_names;
     char *str_table;
     char *Booleans;
     short *Numbers;
     char **Strings;
     char *ext_str_table;
     char **ext_Names;
     unsigned short num_Booleans;
     unsigned short num_Numbers;
     unsigned short num_Strings;
     unsigned short ext_Booleans;
     unsigned short ext_Numbers;
     unsigned short ext_Strings;
  } ;
typedef unsigned int tcflag_t;
typedef unsigned char cc_t;
typedef unsigned int speed_t;
struct termios {
     tcflag_t c_iflag;
     tcflag_t c_oflag;
     tcflag_t c_cflag;
     tcflag_t c_lflag;
     cc_t c_line;
     cc_t c_cc[32];
     speed_t c_ispeed;
     speed_t c_ospeed;
  } ;
struct term {
     TERMTYPE type;
     short Filedes;
     struct termios  Ottyb;
     struct termios  Nttyb;
     int _baudrate;
     char *_termname;
  } ;
struct {
     char *name;
     int code;
  } ;
struct {
     int fg;
     int dft_fg;
     int bg;
     int dft_bg;
  } ;
struct {
     int fg;
     int bg;
  } ;
typedef struct {
     int color;
     int mono;
     int cattr;
  } HTCharStyle;
typedef struct _hashbucket bucket;
struct _hashbucket {
     char *name;
     int code;
     int color;
     int mono;
     int cattr;
     struct _hashbucket *next;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void cleanup_sig( int  );
int lynx_initialize_keymaps( void );
void LYTrimLeading( char * );
void LYTrimTrailing( char * );
char *LYSafeGets( char **, FILE * );
void HTAlert( char * );
void LYSleepMsg( void );
void exit_immediately( int  );
FILE *TraceFP( void );
int string_to_attr( char * );
char *attr_to_string( int  );
void LYbox( WINDOW *, BOOLEAN  );
void setHashStyle( int , int , int , int , char * );
void LYAttrset( WINDOW *, int , int  );
void curses_w_style( WINDOW *, int , int  );
void wcurses_css( WINDOW *, char *, int  );
void curses_css( char *, int  );
void curses_style( int , int  );
int get_color_pair( int  );
int lynx_color_cfg_attr( int  );
int encode_color_attr( int  );
int decode_mono_code( int  );
int LYgetTableAttr( void );
char *LYgetTableString( int  );
void lynx_init_color_pair( int  );
void lynx_map_color( int  );
int lynx_chg_color( int , int , int  );
void lynx_set_color( int  );
void lynx_standout( int  );
void lynx_init_colors( void );
void lynx_setup_colors( void );
void LYnoVideo( int  );
void start_curses( void );
void lynx_enable_mouse( int  );
void lynx_nl2crlf( int  );
void stop_curses( void );
BOOLEAN setup( char * );
int dumbterm( char * );
void LYpaddstr( WINDOW *, int , char * );
void LYsubwindow( WINDOW * );
WINDOW *LYstartPopup( int *, int *, int *, int * );
void LYstartTargetEmphasis( void );
void LYstopTargetEmphasis( void );
void LYtouchline( int  );
void LYwaddnstr( WINDOW *, char *, size_t  );
int LYstrExtent( char *, int , int  );
int LYstrExtent2( char *, int  );
int LYstrCells( char * );
int LYscreenHeight( void );
int LYscreenWidth( void );
void LYnormalColor( void );
void LYclear( void );
void LYclrtoeol( void );
void LYerase( void );
void LYmove( int , int  );
void LYrefresh( void );
void lynx_force_repaint( void );
void lynx_start_link_color( int , int  );
void lynx_stop_link_color( int , int  );
void lynx_stop_target_color( void );
void lynx_start_target_color( void );
void lynx_start_status_color( void );
void lynx_stop_status_color( void );
void lynx_start_h1_color( void );
void lynx_stop_h1_color( void );
void lynx_start_prompt_color( void );
void lynx_stop_prompt_color( void );
void lynx_start_radio_color( void );
void lynx_stop_radio_color( void );
void lynx_stop_all_colors( void );
void lynx_start_bold( void );
void lynx_start_reverse( void );
void lynx_start_underline( void );
void lynx_stop_bold( void );
void lynx_stop_reverse( void );
void lynx_stop_underline( void );
void LYstowCursor( WINDOW *, int , int  );
long LYgetattrs( WINDOW * );
char *LYGetEnv( char * );
int LYReopenInput( void );
BOOLEAN LYCanReadFile( char * );
void size_change( int  );
char *LYgetXDisplay( void );
char *lookup_color( int  );
void parse_userstyles( void );
int style_readFromFile( char * );
void SetCachedStyle( int , int , unsigned int  );
void FreeCachedStyles( void );
int hash_code( char * );
void UCSetBoxChars( int , int *, int *, int , int  );
int strcasecomp( char *, char * );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf0( char **, char *, ... );
int fileno( FILE * );
int scrollok( WINDOW *, int  );
int sprintf( char *, char *, ... );
int mouseinterval( int  );
WINDOW *newwin( int , int , int , int  );
int waddch( WINDOW *, unsigned long  );
int wmove( WINDOW *, int , int  );
int keypad( WINDOW *, int  );
__sighandler_t signal( int , __sighandler_t  );
int echo( void );
int endwin( void );
int doupdate( void );
WINDOW *derwin( WINDOW *, int , int , int , int  );
char *strrchr( char *, char  );
int delwin( WINDOW * );
int werase( WINDOW * );
WINDOW *initscr( void );
char *gettext( char * );
int pnoutrefresh( WINDOW *, int , int , int , int , int , int  );
int wclrtoeol( WINDOW * );
int clearok( WINDOW *, int  );
void free( void * );
int pair_content( short , short *, short * );
mmask_t mousemask( mmask_t , void * );
int nonl( void );
int fflush( FILE * );
int wtouchln( WINDOW *, int , int , int  );
int isatty( int  );
int wrefresh( WINDOW * );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
int cbreak( void );
int printf( char *, ... );
int start_color( void );
int putenv( char * );
unsigned int fwrite( void *, unsigned int , unsigned int , FILE * );
int wbkgd( WINDOW *, unsigned long  );
int fprintf( FILE *, char *, ... );
WINDOW *newpad( int , int  );
int has_colors( void );
int waddnstr( WINDOW *, char *, int  );
int wborder( WINDOW *, unsigned long , unsigned long , unsigned long , unsigned long , unsigned long , unsigned long , unsigned long , unsigned long  );
char *strcat( char *, char * );
int assume_default_colors( int , int  );
int tcsetattr( int , int , void * );
int wattr_off( WINDOW *, attr_t , void * );
int strncmp( char *, char *, unsigned int  );
int wnoutrefresh( WINDOW * );
int wclear( WINDOW * );
int nl( void );
int noecho( void );
int wattr_on( WINDOW *, attr_t , void * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stdout;
extern struct _IO_FILE  *stdin;
extern struct _IO_FILE  *stderr;
extern TERMINAL *cur_term;
extern BOOLEAN LYShowScrollbar;
extern int LYlines;
extern int LYcols;
extern BOOLEAN recent_sizechange;
extern int display_lines;
extern int user_mode;
extern BOOLEAN no_title;
extern WINDOW *stdscr;
extern BOOLEAN LYShowCursor;
extern WINDOW *curscr;
extern char ttytype[];
extern int COLORS;
extern int COLOR_PAIRS;
extern int COLS;
extern int LINES;
extern WINDOW *LYwin;
extern int LYshiftWin;
extern int LYwideLines;
extern BOOLEAN LYuseCursesPads;
extern int Current_Attr;
extern int LYShowColor;
extern BOOLEAN LYCursesON;
extern BOOLEAN LYUnderlineLinks;
extern BOOLEAN bold_H1;
extern BOOLEAN bold_headers;
extern char *x_display;
extern BOOLEAN LYUseMouse;
extern char *lynx_lss_file;
extern BOOLEAN LYuse_default_colors;
extern HTCharStyle displayStyles[133];
extern int lynx_has_color;
extern int default_fg;
extern int default_bg;
extern int current_char_set;
extern int last_styles[129];
extern int last_colorattr_ptr;
extern bucket hashStyles[8193];
extern bucket nostyle_bucket;
extern int s_a;
extern int s_aedit;
extern int s_aedit_arr;
extern int s_aedit_pad;
extern int s_aedit_sel;
extern int s_alink;
extern int s_curedit;
extern int s_menu_bg;
extern int s_menu_frame;
extern int s_normal;
extern int s_whereis;
extern BOOLEAN WWW_TraceFlag;
extern int WWW_TraceMask;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/