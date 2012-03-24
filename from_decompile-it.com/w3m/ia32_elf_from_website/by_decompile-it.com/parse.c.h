/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef long __off_t;
typedef void _IO_lock_t;
typedef long long __quad_t;
typedef __quad_t __off64_t;
typedef unsigned int size_t;
typedef struct _IO_FILE FILE;
typedef union {
     double constant;
     long variable;
     int operatr;
  } storage_type;
typedef struct {
     enum kind_list { CONSTANT = 0, VARIABLE = 1, OPERATOR = 2, } kind;
     int level;
     storage_type token;
  } token_type;
typedef int __jmp_buf[6];
typedef struct {
     unsigned long __val[32];
  } __sigset_t;
typedef struct __jmp_buf_tag {
     __jmp_buf __jmpbuf;
     int __mask_was_saved;
     __sigset_t __saved_mask;
  } jmp_buf[1];
typedef char sign_array_type[64];
typedef struct complexs complexs;
typedef struct {
     char *name;
     char *secondary_name;
     int (*func)( void );
     char *usage;
     char *info;
     char *extra;
  } com_type;
typedef struct {
     long v;
     int count;
  } sort_type;
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
     struct _IO_marker {
       struct _IO_marker  *_next;
       struct _IO_FILE  *_sbuf;
       int _pos;
    } *_markers;
     struct _IO_FILE  *_chain;
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
struct complexs {
     double re;
     double im;
  } ;
enum language_list { C = 1, JAVA = 2, PYTHON = 3, } ;
struct complex {
     double real;
     double imaginary;
  } ;
struct winsize {
     unsigned short ws_row;
     unsigned short ws_col;
     unsigned short ws_xpixel;
     unsigned short ws_ypixel;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void fphandler( int sig );
void exit_program( int exit_value );
void exithandler( int sig );
void alarmhandler( int sig );
void inthandler( int sig );
void usage( void );
void resizehandler( int sig );
int load_rc( void );
int set_signals( void );
void main_io_loop( void );
int main( int argc, char **argv );
void init_gvars( void );
int next_sign( long *vp );
int found_var( token_type *p1, int n, long v );
int solved_equation( int i );
int var_in_equation( int i, long v );
int min_level( token_type *expression, int n );
int level_plus_count( token_type *p1, int n1, int level );
int level1_plus_count( token_type *p1, int n1 );
int var_count( token_type *p1, int n1 );
int no_vars( token_type *source, int n, long *vp );
int exp_is_numeric( token_type *p1, int n1 );
int exp_contains_nan( token_type *p1, int n1 );
int exp_contains_infinity( token_type *p1, int n1 );
int isdelimiter( int ch );
int strcmp_tospace( char *cp1, char *cp2 );
int is_all( char *cp );
char *skip_space( char *cp );
char *skip_param( char *cp );
long decstrtol( char *cp, char **cpp );
void free_result_str( void );
int return_result( int en );
char *get_string( char *string, int n );
int get_yes_no( void );
int get_expr( token_type *equation, int *np );
void copy_espace( int src, int dest );
void error_huge( void );
void subst_var_with_exp( token_type *equation, int *np, token_type *expression, int len, long v );
int alloc_espace( int i );
void clean_up( void );
void get_screen_size( void );
void warning( char *str );
int check_divide_by_zero( double denominator );
int alloc_next_espace( void );
void error( char *str );
int extra_characters( char *cp );
int prompt_var( long *vp );
int current_not_defined( void );
int not_defined( int i );
int get_default_en( char *cp );
int get_range( char **cpp, int *ip, int *jp );
int get_range_eol( char **cpp, int *ip, int *jp );
int next_espace( void );
void check_err( void );
void error_bug( char *str );
void clear_all( void );
int init_mem( void );
void set_sign_array( void );
int flip( token_type *side1p, int *side1np, token_type *side2p, int *side2np );
int g_of_f( int op, token_type *operandp, token_type *side1p, int *side1np, token_type *side2p, int *side2np );
int quad_solve( long v );
int solve_sub( token_type *wantp, int wantn, token_type *leftp, int *leftnp, token_type *rightp, int *rightnp );
int solve_espace( int want, int have );
int display_command( int i );
char *parse_var2( long *vp, char *cp );
int shell_out( char *cp );
int parse( int n, char *cp );
int process_parse( int n, char *cp );
int process( char *cp );
int display_process( char *cp );
int read_examples( char **cpp );
int help_cmd( char *cp );
int var_is_const( long v, double *dp );
int subst_constants( token_type *equation, int *np );
int my_strlcpy( char *dest, char *src, int n );
void remove_trailing_spaces( char *cp );
void set_error_level( char *cp );
void binary_parenthesize( token_type *p1, int n, int i );
void give_priority( token_type *equation, int *np );
void handle_negate( token_type *equation, int *np );
int isvarchar( int ch );
char *parse_var( long *vp, char *cp );
void put_up_arrow( int cnt, char *cp );
char *parse_section( token_type *equation, int *np, char *cp, int allow_space );
void str_tolower( char *cp );
char *parse_expr( token_type *equation, int *np, char *cp );
char *parse_equation( int n, char *cp );
int vcmp( sort_type *p1, sort_type *p2 );
int quit_cmd( char *cp );
int fraction_cmd( char *cp );
int unfactor_cmd( char *cp );
int skip_no( char **cpp );
int factor_cmd( char *cp );
int echo_cmd( char *cp );
void output_options( FILE *ofp );
int save_set_options( void );
int version_report( void );
int version_cmd( char *cp );
int copy_cmd( char *cp );
int replace_cmd( char *cp );
int approximate_cmd( char *cp );
int variables_cmd( char *cp );
int code_cmd( char *cp );
int list_cmd( char *cp );
int save_cmd( char *cp );
int clear_cmd( char *cp );
int elim_sub( int i, long v );
int display_fraction( double value );
int divide_cmd( char *cp );
int compare_rhs( int i, int j, int *diff_signp );
int compare_es( int i, int j );
int compare_cmd( char *cp );
int find_more( token_type *equation, int *np, int en );
int tally_cmd( char *cp );
int complex_func( char *cp, int imag_flag );
int imaginary_cmd( char *cp );
int real_cmd( char *cp );
int pause_cmd( char *cp );
int output_current_directory( FILE *ofp );
int set_options( char *cp );
int set_cmd( char *cp );
int push_en( int en );
int push_cmd( char *cp );
int opt_es( token_type *equation, int *np );
int optimize_cmd( char *cp );
int sum_product( char *cp, int product_flag );
int product_cmd( char *cp );
int sum_cmd( char *cp );
int solve_cmd( char *cp );
int plot_cmd( char *cp );
int read_sub( FILE *fp );
int read_file( char *cp );
int read_cmd( char *cp );
int edit_sub( char *cp );
int edit_cmd( char *cp );
int display_cmd( char *cp );
int eliminate_cmd( char *cp );
int simplify_cmd( char *cp );
int calculate_cmd( char *cp );
void org_up_level( token_type *bp, token_type *ep, int level, int invert );
int org_recurse( token_type *equation, int *np, int loc, int level, int *elocp );
int simpb_vcmp( sort_type *p1, sort_type *p2 );
int div_imaginary( token_type *equation, int *np );
int simp2_power( token_type *equation, int *np );
int simp_constant_power( token_type *equation, int *np );
int rationalize( token_type *equation, int *np );
int order_recurse( token_type *equation, int *np, int loc, int level );
int reorder( token_type *equation, int *np );
int elim_sign( token_type *equation, int *np );
int simp_pp( token_type *equation, int *np );
int compare_recurse( token_type *p1, int n1, int l1, token_type *p2, int n2, int l2, int *diff_signp );
int se_compare( token_type *p1, int n1, token_type *p2, int n2, int *diff_signp );
int elim_k( token_type *equation, int *np );
int calc( int *op1p, double *k1p, int op2, double k2 );
int const_recurse( token_type *equation, int *np, int loc, int level, int iflag );
int combine_constants( token_type *equation, int *np, int iflag );
int integer_root_simp( token_type *equation, int *np );
void organize( token_type *equation, int *np );
void elim_loop( token_type *equation, int *np );
int simp_loop( token_type *equation, int *np );
void simp_divide( token_type *equation, int *np );
void factorv( token_type *equation, int *np, long v );
void simp_equation( int n );
void simp2_divide( token_type *equation, int *np, long v, int fc_level );
void simp_ssub( token_type *equation, int *np, long v, double d, int power_flag, int times_flag, int fc_level );
void simpb_side( token_type *equation, int *np, int uf_power_flag, int power_flag, int fc_level );
void simple_frac_side( token_type *equation, int *np );
void simpv_side( token_type *equation, int *np, long v );
void simp_side( token_type *equation, int *np );
void calc_simp( token_type *equation, int *np );
void simps_side( token_type *equation, int *np, int zsolve );
void simp_i( token_type *equation, int *np );
void simpa_side( token_type *equation, int *np, int quick_flag, int frac_flag );
void simpa_repeat_side( token_type *equation, int *np, int quick_flag, int frac_flag );
int fpower_recurse( token_type *equation, int *np, int loc, int level );
int factor_power( token_type *equation, int *np );
int ftimes_recurse( token_type *equation, int *np, int loc, int level );
int factor_times( token_type *equation, int *np );
int big_fplus( token_type *equation, int level, int diff_sign, int sop1, int op1, int op2, int i1, int i2, int b1, int b2, int ai, int aj, int i, int j, int e1, int e2 );
int fplus_recurse( token_type *equation, int *np, int loc, int level, long v, double d, int whole_flag, int div_only );
int factor_plus( token_type *equation, int *np, long v, double d );
int subtract_itself( token_type *equation, int *np );
int factor_divide( token_type *equation, int *np, long v, double d );
int sf_recurse( token_type *equation, int *np, int loc, int level, int start_flag );
void group_recurse( token_type *equation, int *np, int loc, int level );
void group_proc( token_type *equation, int *np );
int super_factor( token_type *equation, int *np, int start_flag );
int fractions_and_group( token_type *equation, int *np );
int make_fractions_and_group( int n );
int patch_root_div( token_type *equation, int *np );
void uf_neg_help( token_type *equation, int *np );
int unsimp_power( token_type *equation, int *np );
int sub_ufactor( token_type *equation, int *np, int ii );
void uf_repeat_always( token_type *equation, int *np );
void uf_repeat( token_type *equation, int *np );
void uf_allpower( token_type *equation, int *np );
int uf_pplus( token_type *equation, int *np );
int uf_power( token_type *equation, int *np );
int uf_times( token_type *equation, int *np );
int ufactor( token_type *equation, int *np );
int uf_tsimp( token_type *equation, int *np );
void uf_simp_no_repeat( token_type *equation, int *np );
void uf_simp( token_type *equation, int *np );
int vcmp( sort_type *p1, sort_type *p2 );
int get_term( token_type *p1, int n1, int count, int *tp1, int *lentp1 );
void term_value( double *dp, token_type *p1, int n1, int loc );
int basic_size( token_type *p1, int len );
int poly_in_v( token_type *p1, int n, long v, int allow_divides );
int smart_div( token_type *d1, int len1, token_type *d2, int len2 );
void save_factors( token_type *equation, int *np, int loc1, int len, int level );
int is_integer_var( long v );
int is_integer_expr( token_type *p1, int n );
int remove_factors( void );
int find_greatest_power( token_type *p1, int n1, long *vp1, double *pp1, int *tp1, int *lentp1, int *dcodep );
int find_highest_count( token_type *p1, int n1, token_type *p2, int n2, long *vp1 );
int poly_div( token_type *d1, int len1, token_type *d2, int len2, long *vp );
int do_gcd( long *vp );
int pdiv_recurse( token_type *equation, int *np, int loc, int level, int code );
int div_remainder( token_type *equation, int *np, int poly_flag, int quick_flag );
int mod_recurse( token_type *equation, int *np, int loc, int level );
int mod_simp( token_type *equation, int *np );
int poly_gcd( token_type *larger, int llen, token_type *smaller, int slen, long v );
int poly2_gcd( token_type *larger, int llen, token_type *smaller, int slen, long v );
int polydiv_recurse( token_type *equation, int *np, int loc, int level );
int poly_gcd_simp( token_type *equation, int *np );
int pf_sub( token_type *equation, int *np, int loc, int len, int level, int do_repeat );
int pf_recurse( token_type *equation, int *np, int loc, int level, int do_repeat );
int poly_factor( token_type *equation, int *np, int do_repeat );
int limit_cmd( char *cp );
int d_recurse( token_type *equation, int *np, int loc, int level, long v );
int differentiate( token_type *equation, int *np, long v );
int taylor_cmd( char *cp );
int extrema_cmd( char *cp );
int derivative_cmd( char *cp );
int nintegrate_cmd( char *cp );
void make_powers( token_type *equation, int *np, long v );
int int_dispatch( token_type *equation, int *np, long v, int (*func)( void ) );
int laplace_cmd( char *cp );
int laplace_sub( token_type *equation, int *np, int loc, int eloc, long v );
int inv_laplace_sub( token_type *equation, int *np, int loc, int eloc, long v );
int integrate_sub( token_type *equation, int *np, int loc, int eloc, long v );
int integrate_cmd( char *cp );
int get_constant( token_type *p1, int n, double *dp );
int parse_complex( token_type *p1, int n, complexs *cp );
int complex_root_simp( token_type *equation, int *np );
void approximate_complex_roots( token_type *equation, int *np );
void rect_to_polar( double x, double y, double *radiusp, double *thetap );
int roots_cmd( char *cp );
int complex_fixup( complexs *ap );
complexs complex_add( complexs a, complexs b );
complexs complex_negate( complexs a );
complexs complex_mult( complexs a, complexs b );
complexs complex_div( complexs a, complexs b );
complexs complex_exp( complexs a );
complexs complex_log( complexs a );
complexs complex_pow( complexs a, complexs b );
char *var_name( long v );
void trim_zeros( char *buf );
int int_expr( token_type *p1, int n );
int list_var( long v, int lang_code );
int list_code( token_type *equation, int *np, enum language_list  language, int int_flag );
int list_c_equation( int en, enum language_list  language, int int_flag );
void set_color( int color );
int flist_recurse( token_type *p1, int n, int out_flag, int line, int pos, int cur_level, int *highp, int *lowp );
int list_string_sub( token_type *p1, int n, int outflag, char *string, int export_flag );
int list_string( token_type *p1, int n, char *string, int export_flag );
char *list_expression( token_type *p1, int n, int export_flag );
char *list_equation( int n, int export_flag );
int list_proc( token_type *p1, int n, int export_flag );
void list_debug( int level, token_type *p1, int n1, token_type *p2, int n2 );
int list1_sub( int n, int export_flag );
void default_color( void );
int flist_sub( token_type *p1, int n, int out_flag, int pos, int *highp, int *lowp );
int flist_equation( int n );
int list_sub( int n );
void reset_attr( void );
double gcd( double d1, double d2 );
double gcd_verified( double d1, double d2 );
double my_round( double d1 );
int f_to_fraction( double d, double *numeratorp, double *denominatorp );
int make_fractions( token_type *equation, int *np );
double multiply_out_unique( void );
int is_prime( void );
int fc_recurse( token_type *equation, int *np, int loc, int level, int level_code );
int factor_constants( token_type *equation, int *np, int level_code );
void display_unique( void );
void try_factor( double arg );
int factor_one( double value );
int factor_int( token_type *equation, int *np );
int list_factor( token_type *equation, int *np, int factor_flag );
void factor_int_sub( int n );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern int n_tokens;
extern int n_equations;
extern int cur_equation;
extern token_type *lhs[100];
extern token_type *rhs[100];
extern int n_lhs[100];
extern int n_rhs[100];
extern int case_sensitive_flag;
extern char special_variable_characters[256];
extern int right_associative_power;
extern int negate_highest_precedence;
extern int html_flag;
extern int input_column;
extern char *var_names[8000];
extern sign_array_type sign_array;
extern FILE *gfp;
extern int point_flag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/