#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef char BOOLEAN;
typedef struct _HText HText;
typedef struct _HTParentAnchor HTParentAnchor;
typedef struct _HTParentAnchor0 HTParentAnchor0;
typedef struct _HTBTree_top HTBTree;
typedef int (*HTComparer)( void *, void * );
struct _HTBTree_element {
     void *object;
     struct _HTBTree_element *up;
     struct _HTBTree_element *left;
     int left_depth;
     struct _HTBTree_element *right;
     int right_depth;
  } ;
struct _HTBTree_top {
     HTComparer compare;
     struct _HTBTree_element *top;
  } ;
typedef struct _HTList HTList;
struct _HTList {
     void *object;
     HTList *next;
  } ;
struct _HTParentAnchor0 {
     HTParentAnchor0 *parent;
     char *address;
     HTParentAnchor *info;
     HTBTree *children;
     HTList sources;
     HTList _add_adult;
     short adult_hash;
     BOOLEAN underway;
     char __pad[1];
  } ;
typedef struct _HyperDoc HyperDoc;
struct _HyperDoc  ;
typedef struct {
     char *str;
     int len;
  } bstring;
typedef struct _HTAtom HTAtom;
struct _HTAtom {
     HTAtom *next;
     char *name;
  } ;
typedef HTAtom *HTFormat;
typedef struct _HTChunk HTChunk;
struct _HTChunk {
     int size;
     int growby;
     int allocated;
     char *data;
     int failok;
     HTChunk *next;
  } ;
typedef struct _UCAnchorInfo UCAnchorInfo;
typedef struct _LYUCcharset LYUCcharset;
struct _LYUCcharset {
     int UChndl;
     char *MIMEname;
     int enc;
     int codepage;
     int repertoire;
     int codepoints;
     int cpranges;
     int like8859;
  } ;
struct _UCStageInfo {
     int lock;
     int LYhndl;
     LYUCcharset C;
  } ;
struct _UCAnchorInfo {
     struct _UCStageInfo  s[4];
  } ;
struct _HTParentAnchor {
     HTParentAnchor0 *parent;
     HTList children_notag;
     HyperDoc *document;
     char *address;
     bstring *post_data;
     char *post_content_type;
     char *bookmark;
     HTFormat format;
     char *charset;
     BOOLEAN isIndex;
     char *isIndexAction;
     char *isIndexPrompt;
     char *title;
     char *owner;
     char *RevTitle;
     char *citehost;
     char *style;
     HTList *methods;
     void *protocol;
     char *physical;
     BOOLEAN isISMAPScript;
     BOOLEAN isHEAD;
     BOOLEAN safe;
     char *source_cache_file;
     HTChunk *source_cache_chunk;
     char *FileCache;
     char *SugFname;
     char *cache_control;
     BOOLEAN no_cache;
     BOOLEAN inBASE;
     char *content_type_params;
     char *content_type;
     char *content_language;
     char *content_encoding;
     char *content_base;
     char *content_disposition;
     char *content_location;
     char *content_md5;
     char *message_id;
     char *subject;
     int content_length;
     char *date;
     char *expires;
     char *last_modified;
     char *ETag;
     char *server;
     UCAnchorInfo *UCStages;
     HTList *imaps;
  } ;
typedef struct _line HTLine;
typedef struct {
     unsigned int bits_at_0;
  } HTStyleChange;
struct _line {
     struct _line *next;
     struct _line *prev;
     unsigned short offset;
     unsigned short size;
     HTStyleChange *styles;
     unsigned short numstyles;
     char data[1];
     char __pad[1];
  } ;
typedef struct {
     HTLine base;
     char data[1026];
     char __pad[2];
  } HTLineTemp;
typedef struct _TextAnchor TextAnchor;
typedef struct _FormInfo FormInfo;
typedef struct _OptionType OptionType;
struct _OptionType {
     char *name;
     char *cp_submit_value;
     int value_cs;
     struct _OptionType *next;
  } ;
struct _FormInfo {
     char *name;
     int number;
     int type;
     char *value;
     char *orig_value;
     int size;
     unsigned int maxlength;
     int group;
     int num_value;
     int hrange;
     int lrange;
     OptionType *select_list;
     char *submit_action;
     int submit_method;
     char *submit_enctype;
     char *submit_title;
     BOOLEAN no_cache;
     char *cp_submit_value;
     char *orig_submit_value;
     int size_l;
     int disabled;
     int name_cs;
     int value_cs;
     char *accept_cs;
  } ;
typedef struct {
     char *hl_text;
     short hl_x;
     char __pad[2];
  } HiliteInfo;
typedef struct {
     HiliteInfo *hl_info;
     HiliteInfo hl_base;
     short hl_len;
     char __pad[2];
  } HiliteList;
typedef struct _HTAnchor HTAnchor;
struct _HTAnchor {
     HTParentAnchor0 *parent;
  } ;
typedef HTAtom HTLinkType;
typedef struct {
     HTParentAnchor0 *parent;
     char *tag;
     HTAnchor *dest;
     HTLinkType *type;
     HTList _add_children_notag;
     HTList _add_sources;
  } HTChildAnchor;
struct _TextAnchor {
     struct _TextAnchor *next;
     struct _TextAnchor *prev;
     int sgml_offset;
     int number;
     int line_num;
     short line_pos;
     short extent;
     BOOLEAN show_anchor;
     BOOLEAN inUnderline;
     BOOLEAN expansion_anch;
     char link_type;
     FormInfo *input_field;
     HiliteList lites;
     HTChildAnchor *anchor;
  } ;
typedef struct _HTStyle HTStyle;
typedef long HTFont;
typedef int HTCoord;
typedef int HTColor;
typedef struct {
     short kind;
     HTCoord position;
  } HTTabStop;
struct _HTStyle {
     struct _HTStyle *next;
     char *name;
     int id;
     char *SGMLTag;
     HTFont font;
     HTCoord fontSize;
     HTColor color;
     int superscript;
     HTAnchor *anchor;
     HTCoord indent1st;
     HTCoord leftIndent;
     HTCoord rightIndent;
     short alignment;
     HTCoord lineHt;
     HTCoord descentLine;
     HTTabStop *tabs;
     BOOLEAN wordWrap;
     BOOLEAN freeFormat;
     HTCoord spaceBefore;
     HTCoord spaceAfter;
     int paraFlags;
  } ;
typedef struct _STable_info STable_info;
struct _STable_info  ;
typedef enum  { NOKANJI = 0, EUC = 1, SJIS = 2, JIS = 3, } HTkcode;
typedef enum  { DET_SJIS = 0, DET_EUC = 1, DET_NOTYET = 2, DET_MIXED = 3, } eDetectedKCode;
typedef enum  { SJIS_state_neutral = 0, SJIS_state_in_kanji = 1, SJIS_state_has_bad_code = 2, } eSJIS_status;
typedef enum  { EUC_state_neutral = 0, EUC_state_in_kanji = 1, EUC_state_in_kana = 2, EUC_state_has_bad_code = 3, } eEUC_status;
typedef enum  { S_text = 0, S_esc = 1, S_dollar = 2, S_paren = 3, S_nonascii_text = 4, S_dollar_paren = 5, S_jisx0201_text = 6, } eGridState;
typedef struct _UCTransParams UCTransParams;
struct _UCTransParams {
     BOOLEAN transp;
     BOOLEAN do_cjk;
     BOOLEAN decode_utf8;
     BOOLEAN output_utf8;
     BOOLEAN use_raw_char_in;
     BOOLEAN strip_raw_char_in;
     BOOLEAN pass_160_173_raw;
     BOOLEAN do_8bitraw;
     BOOLEAN trans_to_uni;
     BOOLEAN trans_C0_to_uni;
     BOOLEAN repl_translated_C0;
     BOOLEAN trans_from_uni;
  } ;
typedef struct _HTStream HTStream;
typedef struct _HTStreamClass HTStreamClass;
typedef void *HTError;
struct _HTStreamClass {
     char *name;
     void (*_free)( HTStream * );
     void (*_abort)( HTStream *, HTError  );
     void (*put_character)( HTStream *, char  );
     void (*put_string)( HTStream *, char * );
     void (*put_block)( HTStream *, char *, int  );
  } ;
struct _HTStream {
     HTStreamClass *isa;
  } ;
typedef struct _HTPool HTPool;
typedef HTStyleChange pool_data;
struct _HTPool {
     pool_data data[2042];
     struct _HTPool *prev;
     int used;
  } ;
struct _HText {
     HTParentAnchor *node_anchor;
     HTLine *last_line;
     HTLineTemp temp_line[2];
     int Lines;
     TextAnchor *first_anchor;
     TextAnchor *last_anchor;
     TextAnchor *last_anchor_before_stbl;
     TextAnchor *last_anchor_before_split;
     HTList *forms;
     int last_anchor_number;
     BOOLEAN source;
     BOOLEAN toolbar;
     HTList *tabs;
     HTList *hidden_links;
     int hiddenlinkflag;
     BOOLEAN no_cache;
     char LastChar;
     BOOLEAN IgnoreExcess;
     HTStyle *style;
     int display_on_the_fly;
     int top_of_screen;
     HTLine *top_of_screen_line;
     HTLine *next_line;
     unsigned int permissible_split;
     BOOLEAN in_line_1;
     BOOLEAN stale;
     BOOLEAN page_has_target;
     BOOLEAN has_utf8;
     BOOLEAN had_utf8;
     int first_lineno_last_disp_partial;
     int last_lineno_last_disp_partial;
     STable_info *stbl;
     HTList *enclosed_stbl;
     HTkcode kcode;
     HTkcode specified_kcode;
     eDetectedKCode detected_kcode;
     eSJIS_status SJIS_status;
     eEUC_status EUC_status;
     eGridState state;
     int kanji_buf;
     int in_sjis;
     int halted;
     BOOLEAN have_8bit_chars;
     LYUCcharset *UCI;
     int UCLYhndl;
     UCTransParams T;
     HTStream *target;
     HTStreamClass targetClass;
     HTPool *pool;
     BOOLEAN clickable_images;
     BOOLEAN pseudo_inline_alts;
     BOOLEAN verbose_img;
     BOOLEAN raw_mode;
     BOOLEAN historical_comments;
     BOOLEAN minimal_comments;
     BOOLEAN soft_dquotes;
     short old_dtd;
     short keypad_mode;
     short disp_lines;
     short disp_cols;
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
typedef unsigned int size_t;
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
typedef void LYSigHandlerFunc_t( int  );
typedef void (*__sighandler_t)( int  );
typedef struct siginfo siginfo_t;
typedef int __pid_t;
typedef unsigned int __uid_t;
struct {
     __pid_t si_pid;
     __uid_t si_uid;
  } ;
typedef union sigval sigval_t;
union sigval {
     int sival_int;
     void *sival_ptr;
  } ;
struct {
     int si_tid;
     int si_overrun;
     sigval_t si_sigval;
  } ;
struct {
     __pid_t si_pid;
     __uid_t si_uid;
     sigval_t si_sigval;
  } ;
typedef long __clock_t;
struct {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __clock_t si_utime;
     __clock_t si_stime;
  } ;
struct {
     void *si_addr;
  } ;
struct {
     long si_band;
     int si_fd;
  } ;
union {
     int _pad[29];
     struct {
       __pid_t si_pid;
       __uid_t si_uid;
    } _kill;
     struct {
       int si_tid;
       int si_overrun;
       sigval_t si_sigval;
    } _timer;
     struct {
       __pid_t si_pid;
       __uid_t si_uid;
       sigval_t si_sigval;
    } _rt;
     struct {
       __pid_t si_pid;
       __uid_t si_uid;
       int si_status;
       __clock_t si_utime;
       __clock_t si_stime;
    } _sigchld;
     struct {
       void *si_addr;
    } _sigfault;
     struct {
       long si_band;
       int si_fd;
    } _sigpoll;
  } ;
struct siginfo {
     int si_signo;
     int si_errno;
     int si_code;
     union {
       int _pad[29];
       struct {
         __pid_t si_pid;
         __uid_t si_uid;
      } _kill;
       struct {
         int si_tid;
         int si_overrun;
         sigval_t si_sigval;
      } _timer;
       struct {
         __pid_t si_pid;
         __uid_t si_uid;
         sigval_t si_sigval;
      } _rt;
       struct {
         __pid_t si_pid;
         __uid_t si_uid;
         int si_status;
         __clock_t si_utime;
         __clock_t si_stime;
      } _sigchld;
       struct {
         void *si_addr;
      } _sigfault;
       struct {
         long si_band;
         int si_fd;
      } _sigpoll;
    } _sifields;
  } ;
union {
     __sighandler_t sa_handler;
     void (*sa_sigaction)( int , siginfo_t *, void * );
  } ;
typedef struct {
     unsigned long __val[32];
  } __sigset_t;
struct sigaction {
     union {
       __sighandler_t sa_handler;
       void (*sa_sigaction)( int , siginfo_t *, void * );
    } __sigaction_handler;
     __sigset_t sa_mask;
     int sa_flags;
     void (*sa_restorer)( void );
  } ;
typedef struct _LYTemp LY_TEMP;
struct _LYTemp {
     struct _LYTemp *next;
     char *name;
     BOOLEAN outs;
     FILE *file;
  } ;
typedef enum  { UIP_UNKNOWN = -1, UIP_HISTORY = 0, UIP_DOWNLOAD_OPTIONS = 1, UIP_PRINT_OPTIONS = 2, UIP_SHOWINFO = 3, UIP_LIST_PAGE = 4, UIP_VLINKS = 5, UIP_LYNXCFG = 6, UIP_OPTIONS_MENU = 7, UIP_DIRED_MENU = 8, UIP_PERMIT_OPTIONS = 9, UIP_UPLOAD_OPTIONS = 10, UIP_ADDRLIST_PAGE = 11, UIP_CONFIG_DEF = 12, UIP_TRACELOG = 13, UIP_INSTALL = 14, } UIP_t;
typedef struct _DocAddress DocAddress;
struct _DocAddress {
     char *address;
     bstring *post_data;
     char *post_content_type;
     char *bookmark;
     BOOLEAN isHEAD;
     BOOLEAN safe;
     char __pad[2];
  } ;
typedef unsigned long long __u_quad_t;
typedef __u_quad_t __dev_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef unsigned int __gid_t;
typedef long __blksize_t;
typedef __quad_t __blkcnt64_t;
typedef long __time_t;
struct timespec {
     __time_t tv_sec;
     long tv_nsec;
  } ;
typedef __u_quad_t __ino64_t;
struct stat {
     __dev_t st_dev;
     unsigned short __pad1;
     __ino_t __st_ino;
     __mode_t st_mode;
     __nlink_t st_nlink;
     __uid_t st_uid;
     __gid_t st_gid;
     __dev_t st_rdev;
     unsigned short __pad2;
     __off64_t st_size;
     __blksize_t st_blksize;
     __blkcnt64_t st_blocks;
     struct timespec  st_atim;
     struct timespec  st_mtim;
     struct timespec  st_ctim;
     __ino64_t st_ino;
  } ;
typedef enum  { ppUnknown = 0, ppBZIP2 = 1, ppCHMOD = 2, ppCOMPRESS = 3, ppCOPY = 4, ppCSWING = 5, ppGZIP = 6, ppINFLATE = 7, ppINSTALL = 8, ppMKDIR = 9, ppMV = 10, ppRLOGIN = 11, ppRM = 12, ppRMDIR = 13, ppSETFONT = 14, ppTAR = 15, ppTELNET = 16, ppTN3270 = 17, ppTOUCH = 18, ppUNCOMPRESS = 19, ppUNZIP = 20, ppUUDECODE = 21, ppZCAT = 22, ppZIP = 23, pp_Last = 24, } ProgramPaths;
typedef long __fd_mask;
typedef struct {
     __fd_mask fds_bits[32];
  } fd_set;
typedef struct {
     char *lname;
     char *target;
     char *l_hightext;
     char *l_hightext2;
     int l_hightext2_offset;
     BOOLEAN inUnderline;
     int lx;
     int ly;
     int type;
     int sgml_offset;
     int anchor_number;
     int anchor_line_num;
     HiliteList list;
     struct _FormInfo *l_form;
  } LinkInfo;
typedef __time_t time_t;
struct {
     char *name;
     BOOLEAN *flag;
     BOOLEAN can;
     char __pad[3];
  } ;
typedef struct uipage_entry uip_entry;
struct uipage_entry {
     UIP_t type;
     unsigned int flags;
     char *url;
     HTList *alturls;
     char *file;
  } ;
typedef struct {
     int color;
     int mono;
     int cattr;
  } HTCharStyle;
typedef unsigned short LYKeymap_t;
typedef struct _hashbucket bucket;
struct _hashbucket {
     char *name;
     int code;
     int color;
     int mono;
     int cattr;
     struct _hashbucket *next;
  } ;
typedef enum  { NOCJK = 0, JAPANESE = 1, CHINESE = 2, KOREAN = 3, TAIPEI = 4, } HTCJKlang;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
char *LYstrncpy( char *, char *, int  );
char *LYmbcsstrncpy( char *, char *, int , int , BOOLEAN  );
char *LYmbcs_skip_glyphs( char *, int , BOOLEAN  );
char *LYmbcs_skip_cells( char *, int , BOOLEAN  );
int LYmbcsstrlen( char *, BOOLEAN , BOOLEAN  );
int LYgetch( void );
char *LYReduceBlanks( char * );
char *LYSkipBlanks( char * );
char *LYSkipNonBlanks( char * );
char *LYSkipCBlanks( char * );
char *LYno_attr_mbcs_case_strstr( char *, char *, BOOLEAN , BOOLEAN , int *, int * );
char *LYno_attr_mbcs_strstr( char *, char *, BOOLEAN , BOOLEAN , int *, int * );
BOOLEAN LYHaveCmdScript( void );
void HTAlert( char * );
void HTInfoMsg( char * );
void HTUserMsg( char * );
void HTProgress( char * );
BOOLEAN HTLastConfirmCancelled( void );
BOOLEAN HTConfirm( char * );
int HTGetLinkOrFieldStart( int , int *, int *, int , BOOLEAN  );
BOOLEAN HText_getFirstTargetInLine( HText *, int , BOOLEAN , int *, int *, char **, char * );
int HText_getNumOfLines( void );
int HText_LinksInLines( HText *, int , int  );
BOOLEAN HText_canScrollDown( void );
char *HTLoadedDocumentURL( void );
void redraw_lines_of_link( int  );
void exit_immediately( int  );
FILE *TraceFP( void );
void handle_LYK_TRACE_TOGGLE( void );
int LYGetNewline( void );
BOOLEAN LYMainLoop_pageDisplay( int  );
void handle_LYK_WHEREIS( int , BOOLEAN * );
char *LYDownLoadAddress( void );
void curses_style( int , int  );
void start_curses( void );
void stop_curses( void );
void LYstartTargetEmphasis( void );
void LYstopTargetEmphasis( void );
void LYwaddnstr( WINDOW *, char *, size_t  );
int LYstrExtent( char *, int , int  );
void LYclrtoeol( void );
void LYmove( int , int  );
void LYrefresh( void );
void lynx_stop_link_color( int , int  );
LY_TEMP *FindTempfileByName( char * );
LY_TEMP *FindTempfileByFP( FILE * );
char *LYGetEnv( char * );
size_t utf8_length( BOOLEAN , char * );
void LYFreeHilites( int , int  );
void LYSetHilite( int , char * );
void LYAddHilite( int , char *, int  );
char *LYGetHiliteStr( int , int  );
int LYGetHilitePos( int , int  );
BOOLEAN show_whereis_targets( int , int , int , char *, BOOLEAN , BOOLEAN  );
int find_cached_style( int , int  );
void LYhighlight( int , int , char * );
void free_and_clear( char ** );
void convert_to_spaces( char *, BOOLEAN  );
char *strip_trailing_slash( char * );
void remove_most_blanks( char * );
void statusline( char * );
char *novice_lines( int  );
void toggle_novice_line( void );
void noviceline( int  );
int LYReopenInput( void );
int LYConsoleInputFD( BOOLEAN  );
void LYFakeZap( BOOLEAN  );
int DontCheck( void );
int HTCheckForInterrupt( void );
BOOLEAN LYisAbsPath( char * );
BOOLEAN LYisRootPath( char * );
BOOLEAN LYisLocalFile( char * );
BOOLEAN LYisLocalHost( char * );
void LYFreeStringList( HTList * );
void LYLocalhostAliases_free( void );
void LYAddLocalhostAlias( char * );
BOOLEAN LYisLocalAlias( char * );
UrlTypes LYCheckForProxyURL( char * );
BOOLEAN compare_type( char *, char *, size_t  );
UrlTypes is_url( char * );
void LYFixCursesOn( char * );
BOOLEAN LYFixCursesOnForAccess( char *, char * );
BOOLEAN LYCanDoHEAD( char * );
BOOLEAN LYCloseInput( FILE * );
BOOLEAN LYCloseOutput( FILE * );
BOOLEAN LYCanWriteFile( char * );
BOOLEAN LYCanReadFile( char * );
BOOLEAN inlocaldomain( void );
void LYExtSignal( int , LYSigHandlerFunc_t * );
BOOLEAN LYToggleSigDfl( int , struct sigaction *, int  );
void size_change( int  );
void HTSugFilenames_free( void );
void HTAddSugFilename( char * );
void change_sug_filename( char * );
int fmt_tempname( char *, char *, char * );
BOOLEAN strn_dash_equ( char *, char *, int  );
int find_restriction( char *, int  );
void parse_restrictions( char * );
void print_restrictions_to_fd( FILE * );
void LYCheckMail( void );
void LYEnsureAbsoluteURL( char **, char *, int  );
void LYConvertToURL( char **, int  );
BOOLEAN LYExpandHostForURL( char **, char *, char * );
BOOLEAN LYAddSchemeForURL( char **, char * );
void LYTrimRelFromAbsPath( char * );
void LYDoCSI( char *, char *, char ** );
char *Current_Dir( char * );
char *CheckDir( char * );
char *HomeEnv( void );
char *Home_Dir( void );
char *LYPathLeaf( char * );
BOOLEAN LYPathOffHomeOK( char *, size_t  );
char *FindLeadingTilde( char *, BOOLEAN  );
char *LYAbsOrHomePath( char ** );
char *LYTildeExpand( char **, BOOLEAN  );
void LYAddPathToHome( char *, size_t , char * );
char *LYAddPathToSave( char * );
BOOLEAN IsOurSymlink( char * );
BOOLEAN IsOurFile( char * );
FILE *OpenHiddenFile( char *, char * );
FILE *LYNewBinFile( char * );
FILE *LYNewTxtFile( char * );
FILE *LYAppendToTxtFile( char * );
void LYRelaxFilePermissions( char * );
BOOLEAN LYCachedTemp( char *, char ** );
FILE *LYOpenTemp( char *, char *, char * );
FILE *LYReopenTemp( char * );
FILE *LYOpenTempRewrite( char *, char *, char * );
FILE *LYOpenScratch( char *, char * );
void LY_close_temp( LY_TEMP * );
void LYCloseTemp( char * );
void LYCloseTempFP( FILE * );
int LYRemoveTemp( char * );
void LYCleanupTemp( void );
void LYRenamedTemp( char *, char * );
void LYCheckBibHost( void );
BOOLEAN LYIsUIPage3( char *, UIP_t , int  );
void LYRegisterUIPage( char *, UIP_t  );
void LYUIPages_free( void );
char *wwwName( char * );
BOOLEAN LYValidateFilename( char *, char * );
int LYValidateOutput( char * );
void LYLocalFileToURL( char **, char * );
FILE *InternalPageFP( char *, int  );
void WriteInternalTitle( FILE *, char * );
void BeginInternalPage( FILE *, char *, char * );
void EndInternalPage( FILE * );
char *trimPoundSelector( char * );
void LYTrimPathSep( char * );
void LYAddPathSep( char ** );
void LYAddPathSep0( char * );
char *LYLastPathSep( char * );
void LYTrimHtmlSep( char * );
void LYAddHtmlSep( char ** );
void LYAddHtmlSep0( char * );
int LYCopyFile( char *, char * );
int LYSystem( char * );
char *LYgetXDisplay( void );
void LYsetXDisplay( char * );
void get_clip_release( void );
int clip_grab( void );
char *get_clip_grab( void );
int put_clip( char * );
void LYmsec_delay( unsigned int  );
void LYOpenlog( char * );
BOOLEAN looks_like_password( char *, char * );
void LYSyslog( char * );
void LYCloselog( void );
BOOLEAN LYwouldPush( char *, char * );
void outofmem( char *, char * );
void LYEntify( char **, BOOLEAN  );
void LYFillLocalFileURL( char **, char * );
void LYAddMETAcharsetToFD( FILE *, int  );
BOOLEAN ValidCachedStyle( int , int  );
unsigned int GetCachedStyle( int , int  );
void SetCachedStyle( int , int , unsigned int  );
char *HTParse( char *, char *, int  );
void HTSimplify( char * );
char *HTEscape( char *, unsigned char  );
char *HTUnEscape( char * );
BOOLEAN override_proxy( char * );
BOOLEAN HTLoadAbsolute( DocAddress * );
BOOLEAN HTEditable( char * );
int HTStat( char *, struct stat * );
char *HTGetProgramPath( ProgramPaths  );
struct hostent {
     char *h_name;
     char **h_aliases;
     int h_addrtype;
     int h_length;
     char **h_addr_list;
  } *LYGetHostByName( char * );
char *HTHostName( void );
unsigned char *TO_EUC( unsigned char *, unsigned char * );
HTList *HTList_new( void );
void HTList_delete( HTList * );
void HTList_addObject( HTList *, void * );
BOOLEAN HTList_removeObject( HTList *, void * );
void *HTList_removeFirstObject( HTList * );
int strcasecomp( char *, char * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf0( char **, char *, ... );
void HTAddParam( char **, char *, int , char * );
void HTEndParam( char **, char *, int  );
int fileno( FILE * );
int *__errno_location( void );
int sigemptyset( void * );
int sprintf( char *, char *, ... );
FILE *popen( char *, char * );
__pid_t getpid( void );
char *strerror( int  );
void syslog( int , char *, ... );
void *random( void );
int waddch( WINDOW *, unsigned long  );
int open64( char *, int , ... );
__sighandler_t signal( int , __sighandler_t  );
void *realloc( void *, unsigned int  );
char *strchr( char *, char  );
char *getenv( char * );
void *calloc( unsigned int , unsigned int  );
int system( char * );
char *strncpy( char *, char *, unsigned int  );
char *ttyname( int  );
int toupper( int  );
void *memset( void *, int , unsigned int  );
FILE *fopen64( char *, char * );
char *strrchr( char *, char  );
char *ctermid( char * );
int chmod( char *, __mode_t  );
char *gettext( char * );
int gettimeofday( void *, void * );
FILE *fdopen( int , char * );
void free( void * );
void openlog( char *, int , int  );
int truncate64( char *, __off64_t  );
int sigaction( int , void *, void * );
int fflush( FILE * );
int ioctl( int , void *, ... );
short **__ctype_b_loc( void );
int isatty( int  );
int getaddrinfo( char *, char *, void *, void * );
__mode_t umask( __mode_t  );
int fclose( FILE * );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
char *mkdtemp( char * );
void *getpwuid( __uid_t  );
char *strcpy( char *, char * );
int printf( char *, ... );
__uid_t getuid( void );
int putenv( char * );
int select( int , fd_set *, fd_set *, fd_set *, void * );
void srandom( unsigned int  );
int close( int  );
unsigned int fwrite( void *, unsigned int , unsigned int , FILE * );
int fprintf( FILE *, char *, ... );
char *strstr( char *, char * );
time_t time( void * );
int remove( char * );
void *malloc( unsigned int  );
void __stack_chk_fail( void );
int rmdir( char * );
unsigned int sleep( unsigned int  );
int readlink( char *, char *, unsigned int  );
char *strcat( char *, char * );
char *getcwd( char *, unsigned int  );
int puts( char * );
int strncmp( char *, char *, unsigned int  );
unsigned int fread( void *, unsigned int , unsigned int , FILE * );
void closelog( void );
int ferror( FILE * );
int strcmp( char *, char * );
void wbkgdset( WINDOW *, unsigned long  );
int pclose( FILE * );
int napms( int  );
FILE *freopen64( char *, char *, FILE * );
__uid_t geteuid( void );
int lstat64( char *, void * );
int stat64( char *, void * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stdout;
extern struct _IO_FILE  *stdin;
extern struct _IO_FILE  *stderr;
extern HText *HTMainText;
extern BOOLEAN LYShowScrollbar;
extern int LYlines;
extern int LYcols;
extern LinkInfo links[1024];
extern int nlinks;
extern BOOLEAN lynx_edit_mode;
extern BOOLEAN no_dired_support;
extern int HTCacheSize;
extern BOOLEAN local_exec_on_local_files;
extern BOOLEAN case_sensitive;
extern BOOLEAN dump_output_immediately;
extern BOOLEAN recent_sizechange;
extern char *helpfilepath;
extern char *lynx_temp_space;
extern int display_lines;
extern int user_mode;
extern int www_search_result;
extern BOOLEAN no_dotfiles;
extern BOOLEAN no_goto_lynxcgi;
extern BOOLEAN show_dotfiles;
extern BOOLEAN no_title;
extern BOOLEAN traversal;
extern int AlertSecs;
extern int LYStatusLine;
extern char *BibP_bibhost;
extern BOOLEAN BibP_bibhost_checked;
extern BOOLEAN BibP_bibhost_available;
extern BOOLEAN LYReuseTempfiles;
extern FILE *LYTraceLogFP;
extern BOOLEAN textfields_need_activation;
extern BOOLEAN LYShowCursor;
extern BOOLEAN no_goto;
extern BOOLEAN no_goto_lynxexec;
extern BOOLEAN no_goto_lynxprog;
extern BOOLEAN no_shell;
extern BOOLEAN display_partial;
extern int NumOfLines_partial;
extern WINDOW *LYwin;
extern int LYShowColor;
extern BOOLEAN LYCursesON;
extern char *x_display;
extern BOOLEAN syslog_requested_urls;
extern char *lynx_save_space;
extern int lynx_temp_subspace;
extern BOOLEAN no_suspend;
extern BOOLEAN no_statusline;
extern char *LYHostName;
extern char *LYLocalDomain;
extern char *URLDomainPrefixes;
extern char *URLDomainSuffixes;
extern BOOLEAN LYNonRestartingSIGWINCH;
extern BOOLEAN restore_sigpipe_for_children;
extern BOOLEAN mustshow;
extern HTCharStyle displayStyles[133];
extern int lynx_has_color;
extern BOOLEAN LYUseNoviceLineTwo;
extern HTList *sug_filenames;
extern LYKeymap_t keymap[661];
extern BOOLEAN LYHaveCJKCharacterSet;
extern HTkcode kanji_code;
extern int current_char_set;
extern LYUCcharset LYCharSet_UC[60];
extern bucket hashStyles[8193];
extern int s_a;
extern int s_alert;
extern int s_alink;
extern int s_curedit;
extern int s_normal;
extern int s_status;
extern int lynx_nsl_status;
extern HTCJKlang HTCJK;
extern BOOLEAN WWW_TraceFlag;
extern int WWW_TraceMask;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/