#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
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
typedef char BOOLEAN;
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
struct _HTStream {
     HTStreamClass *isa;
     HTParentAnchor *anchor;
     FILE *fp;
     char *filename;
     HTChunk *chunk;
     HTChunk *last_chunk;
     HTStreamClass *actions;
     HTStream *target;
     int status;
  } ;
typedef unsigned long long __u_quad_t;
typedef __u_quad_t __dev_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef unsigned int __uid_t;
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
typedef struct {
     struct stat  file_info;
     char sort_tags;
     char file_name[1];
     char __pad[2];
  } DIRED;
typedef struct _HTStructured HTStructured;
typedef struct _HTStructuredClass HTStructuredClass;
struct _HTStructuredClass {
     char *name;
     void (*_free)( HTStructured * );
     void (*_abort)( HTStructured *, HTError  );
     void (*put_character)( HTStructured *, char  );
     void (*put_string)( HTStructured *, char * );
     void (*put_block)( HTStructured *, char *, int  );
     int (*start_element)( HTStructured *, int , BOOLEAN *, char **, int , char ** );
     int (*end_element)( HTStructured *, int , char ** );
     int (*put_entity)( HTStructured *, int  );
  } ;
struct _HTStructured {
     HTStructuredClass *isa;
  } ;
typedef struct __dirstream DIR;
struct __dirstream  ;
typedef enum  { ppUnknown = 0, ppBZIP2 = 1, ppCHMOD = 2, ppCOMPRESS = 3, ppCOPY = 4, ppCSWING = 5, ppGZIP = 6, ppINFLATE = 7, ppINSTALL = 8, ppMKDIR = 9, ppMV = 10, ppRLOGIN = 11, ppRM = 12, ppRMDIR = 13, ppSETFONT = 14, ppTAR = 15, ppTELNET = 16, ppTN3270 = 17, ppTOUCH = 18, ppUNCOMPRESS = 19, ppUNZIP = 20, ppUUDECODE = 21, ppZCAT = 22, ppZIP = 23, pp_Last = 24, } ProgramPaths;
typedef struct _HTBTree_element HTBTElement;
typedef void *voidp;
typedef voidp gzFile;
typedef struct _HTSuffix HTSuffix;
struct _HTSuffix {
     char *suffix;
     HTAtom *rep;
     HTAtom *encoding;
     char *desc;
     float quality;
  } ;
typedef enum  { NOCJK = 0, JAPANESE = 1, CHINESE = 2, KOREAN = 3, TAIPEI = 4, } HTCJKlang;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void LYLowerCase( char * );
void HTAlert( char * );
void HTProgress( char * );
void HTCheckFnameForCompression( char **, HTParentAnchor *, BOOLEAN  );
FILE *TraceFP( void );
char *LYGetEnv( char * );
int HTCheckForInterrupt( void );
char *LYPathLeaf( char * );
void LYLocalFileToURL( char **, char * );
void LYTrimPathSep( char * );
void LYAddPathSep( char ** );
void LYAddPathSep0( char * );
HTStructured *HTML_new( HTParentAnchor *, HTFormat , HTStream * );
int HTLoadError( HTStream *, int , char * );
HTStream *HTFWriter_new( FILE * );
void outofmem( char *, char * );
void Set_HTCJK( char *, char * );
int UCGetLYhndl_byMIME( char * );
BOOLEAN UCCanTranslateFromTo( int , int  );
char *HTParse( char *, char *, int  );
void HTSimplify( char * );
char *HTEscape( char *, unsigned char  );
char *HTUnEscape( char * );
char *HTUnEscapeSome( char *, char * );
char *FormatStr( char **, char *, char * );
char *FormatNum( char **, char *, int  );
void LYListFmtParse( char *, DIRED *, char *, HTStructured *, char * );
void HTSetSuffix5( char *, char *, char *, char *, double  );
char *HTCacheFileName( char * );
char *HTURLPath_toFile( char *, BOOLEAN , BOOLEAN  );
char *HTnameOfFile_WWW( char *, BOOLEAN , BOOLEAN  );
char *WWW_nameOfFile( char * );
char *HTFileSuffix( HTAtom *, char * );
HTFormat HTFileFormat( char *, HTAtom **, char ** );
HTFormat HTCharsetFormat( HTFormat , HTParentAnchor *, int  );
void LYGetFileInfo( char *, HTParentAnchor **, HTFormat *, HTAtom **, char **, char **, int * );
float HTFileValue( char * );
CompressFileType HTCompressFileType( char *, char *, int * );
CompressFileType HTEncodingToCompressType( char * );
CompressFileType HTContentTypeToCompressType( char * );
CompressFileType HTContentToCompressType( HTParentAnchor * );
BOOLEAN HTEditable( char * );
HTStream *HTFileSaveStream( HTParentAnchor * );
void HTDirEntry( HTStructured *, char *, char * );
BOOLEAN view_structured( HTFormat  );
void HTStructured_doctype( HTStructured *, HTFormat  );
void HTStructured_meta( HTStructured *, HTFormat  );
BOOLEAN HTDirTitles( HTStructured *, HTParentAnchor *, HTFormat , BOOLEAN  );
void do_readme( HTStructured *, char * );
char *file_type( char * );
int dired_cmp( void *, void * );
int print_local_dir( DIR *, char *, HTParentAnchor *, HTFormat , HTStream * );
int HTStat( char *, struct stat * );
int decompressAndParse( HTParentAnchor *, HTFormat , HTStream *, char *, char *, HTAtom *, HTFormat , int * );
int HTLoadFile( char *, HTParentAnchor *, HTFormat , HTStream * );
char *HTGetProgramPath( ProgramPaths  );
void HTSetProgramPath( ProgramPaths , char * );
void HTInitProgramPaths( void );
HTBTree *HTBTree_new( HTComparer  );
void HTBTree_add( HTBTree *, void * );
HTBTElement *HTBTree_next( HTBTree *, HTBTElement * );
int HTFTPLoad( char *, HTParentAnchor *, HTFormat , HTStream * );
char *HTHostName( void );
void HTStartAnchor( HTStructured *, char *, char * );
HTAtom *HTAtom_for( char * );
HTParentAnchor *HTAnchor_findSimpleAddress( char * );
void HTAnchor_setFormat( HTParentAnchor *, HTFormat  );
char *HTAnchor_content_encoding( HTParentAnchor * );
char *HTAnchor_content_type( HTParentAnchor * );
HTList *HTAnchor_methods( HTParentAnchor * );
LYUCcharset *HTAnchor_getUCInfoStage( HTParentAnchor *, int  );
int HTAnchor_getUCLYhndl( HTParentAnchor *, int  );
LYUCcharset *HTAnchor_setUCInfoStage( HTParentAnchor *, int , int , int  );
LYUCcharset *HTAnchor_copyUCInfoStage( HTParentAnchor *, int , int , int  );
HTList *HTList_new( void );
void HTList_addObject( HTList *, void * );
int HTList_count( HTList * );
int HTList_indexOf( HTList *, void * );
void *HTList_objectAt( HTList *, int  );
int strcasecomp( char *, char * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf0( char **, char *, ... );
float HTStackValue( HTFormat , HTFormat , float , long  );
void HTDisplayPartial( void );
int HTParseFile( HTFormat , HTFormat , HTParentAnchor *, FILE *, HTStream * );
int HTParseGzFile( HTFormat , HTFormat , HTParentAnchor *, gzFile , HTStream * );
int HTParseZzFile( HTFormat , HTFormat , HTParentAnchor *, FILE *, HTStream * );
char *HTAA_UidToName( int  );
char *HTAA_GidToName( int  );
int *__errno_location( void );
int sprintf( char *, char *, ... );
gzFile gzopen64( char *, char * );
char *strchr( char *, char  );
void *calloc( unsigned int , unsigned int  );
int toupper( int  );
FILE *fopen64( char *, char * );
char *strrchr( char *, char  );
char *gettext( char * );
void free( void * );
DIR *opendir( char * );
short **__ctype_b_loc( void );
int fclose( FILE * );
void *readdir64( DIR * );
unsigned int strlen( char * );
char *strcpy( char *, char * );
char *ctime( void * );
int closedir( DIR * );
unsigned int fwrite( void *, unsigned int , unsigned int , FILE * );
int fprintf( FILE *, char *, ... );
char *strstr( char *, char * );
time_t time( void * );
void *malloc( unsigned int  );
void __stack_chk_fail( void );
int getgroups( int , __gid_t [0] );
int strncmp( char *, char *, unsigned int  );
int strcmp( char *, char * );
__uid_t geteuid( void );
int lstat64( char *, void * );
int stat64( char *, void * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stderr;
extern BOOLEAN lynx_edit_mode;
extern int display_lines;
extern BOOLEAN no_dotfiles;
extern BOOLEAN show_dotfiles;
extern int dir_list_style;
extern BOOLEAN LYforce_HTML_mode;
extern BOOLEAN mustshow;
extern int dir_list_order;
extern BOOLEAN ftp_passive;
extern char *list_format;
extern int partial_threshold;
extern int current_char_set;
extern char *LYchar_set_names[61];
extern LYUCcharset LYCharSet_UC[60];
extern BOOLEAN force_old_UCLYhndl_on_reload;
extern int forced_UCLYhdnl;
extern BOOLEAN psrc_view;
extern int UCLYhndl_for_unspec;
extern int UCLYhndl_for_unrec;
extern int UCLYhndl_HTFile_for_unspec;
extern BOOLEAN HTSecure;
extern int HTDirAccess;
extern int HTDirReadme;
extern BOOLEAN ftp_local_passive;
extern char *ftp_lasthost;
extern HTCJKlang HTCJK;
extern BOOLEAN HTPassEightBitRaw;
extern BOOLEAN WWW_TraceFlag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/