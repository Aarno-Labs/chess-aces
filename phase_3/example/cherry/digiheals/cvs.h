/* Auto-generated from /home/ricardo/code/aarno/amp/digiheals/chess-aces/phase_3/example/cherry/digiheals/unstripped/cvs */
/* Self-contained: requires no system headers. */
#ifndef CVS_H
#define CVS_H

#ifdef __cplusplus
extern "C" {
#endif

/* ── enums ───────────────────────────────────────────────── */

enum __anon_0x00000268 {
    null_method = 0,
    local_method = 1,
    server_method = 2,
    pserver_method = 3,
    kserver_method = 4,
    gserver_method = 5,
    ext_method = 6,
    extssh_method = 7,
    fork_method = 8,
};

enum __anon_0x00000769 {
    WRAP_TOCVS = 0,
    WRAP_FROMCVS = 1,
    WRAP_RCSOPTION = 2,
};

enum __anon_0x0000e66c {
    response_type_normal = 0,
    response_type_ok = 1,
    response_type_error = 2,
    response_type_redirect = 3,
};

enum __anon_0x0000e691 {
    rs_essential = 0,
    rs_optional = 1,
    rs_supported = 2,
    rs_not_supported = 3,
};

enum __anon_0x0000f262 {
    UPDATE_ENTRIES_CHECKIN = 0,
    UPDATE_ENTRIES_UPDATE = 1,
    UPDATE_ENTRIES_PATCH = 2,
    UPDATE_ENTRIES_RCS_DIFF = 3,
};

enum __anon_0x0000f288 {
    UPDATE_ENTRIES_EXISTING = 0,
    UPDATE_ENTRIES_NEW = 1,
    UPDATE_ENTRIES_EXISTING_OR_NEW = 2,
};

enum __anon_0x00059483 {
    FRAG_ADD = 0,
    FRAG_DELETE = 1,
};

enum __anon_0x0008f758 {
    WRAP_MERGE = 0,
    WRAP_COPY = 1,
};

enum __anon_0x000a5db0 {
    ALLOCA_LIMIT = 8000,
};

enum __anon_0x000a7305 {
    MERam = 0,
    MERpm = 1,
    MER24 = 2,
};

enum __anon_0x000a7322 {
    BILLION = 1000000000,
    LOG10_BILLION = 9,
};

enum __anon_0x000a7855 {
    TZBUFSIZE = 100,
};

enum __anon_0x000a8dc8 {
    REQUIRE_ORDER = 0,
    PERMUTE = 1,
    RETURN_IN_ORDER = 2,
};

enum __anon_0x000a8ebe {
    POSIXLY_CORRECT = 1,
};

enum __anon_0x000af1a4 {
    _REG_ENOSYS = -1,
    _REG_NOERROR = 0,
    _REG_NOMATCH = 1,
    _REG_BADPAT = 2,
    _REG_ECOLLATE = 3,
    _REG_ECTYPE = 4,
    _REG_EESCAPE = 5,
    _REG_ESUBREG = 6,
    _REG_EBRACK = 7,
    _REG_EPAREN = 8,
    _REG_EBRACE = 9,
    _REG_BADBR = 10,
    _REG_ERANGE = 11,
    _REG_ESPACE = 12,
    _REG_BADRPT = 13,
    _REG_EEND = 14,
    _REG_ESIZE = 15,
    _REG_ERPAREN = 16,
};

enum __anon_0x000af4b4 {
    INSIDE_WORD = 5,
    WORD_FIRST = 6,
    WORD_LAST = 9,
    INSIDE_NOTWORD = 10,
    LINE_FIRST = 16,
    LINE_LAST = 32,
    BUF_FIRST = 64,
    BUF_LAST = 128,
    WORD_DELIM = 256,
    NOT_WORD_DELIM = 512,
};

enum __anon_0x000af54d {
    NON_TYPE = 0,
    CHARACTER = 1,
    END_OF_RE = 2,
    SIMPLE_BRACKET = 3,
    OP_BACK_REF = 4,
    OP_PERIOD = 5,
    COMPLEX_BRACKET = 6,
    OP_UTF8_PERIOD = 7,
    OP_OPEN_SUBEXP = 8,
    OP_CLOSE_SUBEXP = 9,
    OP_ALT = 10,
    OP_DUP_ASTERISK = 11,
    ANCHOR = 12,
    CONCAT = 16,
    SUBEXP = 17,
    OP_DUP_PLUS = 18,
    OP_DUP_QUESTION = 19,
    OP_OPEN_BRACKET = 20,
    OP_CLOSE_BRACKET = 21,
    OP_CHARSET_RANGE = 22,
    OP_OPEN_DUP_NUM = 23,
    OP_CLOSE_DUP_NUM = 24,
    OP_NON_MATCH_LIST = 25,
    OP_OPEN_COLL_ELEM = 26,
    OP_CLOSE_COLL_ELEM = 27,
    OP_OPEN_EQUIV_CLASS = 28,
    OP_CLOSE_EQUIV_CLASS = 29,
    OP_OPEN_CHAR_CLASS = 30,
    OP_CLOSE_CHAR_CLASS = 31,
    OP_WORD = 32,
    OP_NOTWORD = 33,
    OP_SPACE = 34,
    OP_NOTSPACE = 35,
    BACK_SLASH = 36,
};

enum __anon_0x000b007b {
    SB_CHAR = 0,
    MB_CHAR = 1,
    EQUIV_CLASS = 2,
    COLL_SYM = 3,
    CHAR_CLASS = 4,
};

enum __anon_0x000c0685 {
    TYPE_NONE = 0,
    TYPE_SCHAR = 1,
    TYPE_UCHAR = 2,
    TYPE_SHORT = 3,
    TYPE_USHORT = 4,
    TYPE_INT = 5,
    TYPE_UINT = 6,
    TYPE_LONGINT = 7,
    TYPE_ULONGINT = 8,
    TYPE_LONGLONGINT = 9,
    TYPE_ULONGLONGINT = 10,
    TYPE_DOUBLE = 11,
    TYPE_LONGDOUBLE = 12,
    TYPE_CHAR = 13,
    TYPE_WIDE_CHAR = 14,
    TYPE_STRING = 15,
    TYPE_WIDE_STRING = 16,
    TYPE_POINTER = 17,
    TYPE_COUNT_SCHAR_POINTER = 18,
    TYPE_COUNT_SHORT_POINTER = 19,
    TYPE_COUNT_INT_POINTER = 20,
    TYPE_COUNT_LONGINT_POINTER = 21,
    TYPE_COUNT_LONGLONGINT_POINTER = 22,
};

enum __anon_0x000c2754 {
    HAVE_GNU_CALLOC = 0,
};

enum __anon_0x000c2dad {
    DEFAULT_MXFAST = 64,
};

enum __anon_0x000c4a67 {
    need_more = 0,
    block_done = 1,
    finish_started = 2,
    finish_done = 3,
};

enum __anon_0x000c8076 {
    CODES = 0,
    LENS = 1,
    DISTS = 2,
};

enum __anon_0x000c80a0 {
    HEAD = 0,
    FLAGS = 1,
    TIME = 2,
    OS = 3,
    EXLEN = 4,
    EXTRA = 5,
    NAME = 6,
    COMMENT = 7,
    HCRC = 8,
    DICTID = 9,
    DICT = 10,
    TYPE = 11,
    TYPEDO = 12,
    STORED = 13,
    COPY = 14,
    TABLE = 15,
    LENLENS = 16,
    CODELENS = 17,
    LEN = 18,
    LENEXT = 19,
    DIST = 20,
    DISTEXT = 21,
    MATCH = 22,
    LIT = 23,
    CHECK = 24,
    LENGTH = 25,
    DONE = 26,
    BAD = 27,
    MEM = 28,
    SYNC = 29,
};

enum base_walk {
    BASE_REGISTER = 0,
    BASE_GET = 1,
    BASE_DEREGISTER = 2,
};

enum canonicalize_mode_t {
    CAN_EXISTING = 0,
    CAN_ALL_BUT_LAST = 1,
    CAN_MISSING = 2,
};

enum classify_type {
    T_UNKNOWN = 1,
    T_CONFLICT = 2,
    T_NEEDS_MERGE = 3,
    T_MODIFIED = 4,
    T_CHECKOUT = 5,
    T_ADDED = 6,
    T_REMOVED = 7,
    T_REMOVE_ENTRY = 8,
    T_UPTODATE = 9,
    T_PATCH = 10,
    T_TITLE = 11,
};

enum diff_file {
    DIFF_ERROR = 0,
    DIFF_ADDED = 1,
    DIFF_REMOVED = 2,
    DIFF_DIFFERENT = 3,
    DIFF_SAME = 4,
};

enum diff_type {
    ERROR = 0,
    ADD = 1,
    CHANGE = 2,
    DELETE = 3,
    DIFF_ALL = 4,
    DIFF_1ST = 5,
    DIFF_2ND = 6,
    DIFF_3RD = 7,
};

enum direnter_type {
    R_PROCESS = 1,
    R_SKIP_FILES = 2,
    R_SKIP_DIRS = 3,
    R_SKIP_ALL = 4,
};

enum ent_type {
    ENT_FILE = 0,
    ENT_SUBDIR = 1,
};

enum keyword {
    KEYWORD_AUTHOR = 0,
    KEYWORD_DATE = 1,
    KEYWORD_CVSHEADER = 2,
    KEYWORD_HEADER = 3,
    KEYWORD_ID = 4,
    KEYWORD_LOCKER = 5,
    KEYWORD_LOG = 6,
    KEYWORD_NAME = 7,
    KEYWORD_RCSFILE = 8,
    KEYWORD_REVISION = 9,
    KEYWORD_SOURCE = 10,
    KEYWORD_STATE = 11,
    KEYWORD_MDOCDATE = 12,
    KEYWORD_LOCALID = 13,
};

enum kflag {
    KFLAG_KV = 0,
    KFLAG_KVL = 1,
    KFLAG_K = 2,
    KFLAG_V = 3,
    KFLAG_O = 4,
    KFLAG_B = 5,
};

enum line_class {
    OLD = 0,
    NEW = 1,
    UNCHANGED = 2,
    CHANGED = 3,
};

enum mtype {
    CHECKOUT = 0,
    TAG = 1,
    PATCH = 2,
    EXPORT = 3,
    MISC = 4,
};

enum ntype {
    NT_UNKNOWN = 0,
    HEADER = 1,
    ENTRIES = 2,
    FILES = 3,
    LIST = 4,
    RCSNODE = 5,
    RCSVERS = 6,
    DIRS = 7,
    UPDATE = 8,
    LOCK = 9,
    NDBMNODE = 10,
    FILEATTR = 11,
    VARIABLE = 12,
    RCSFIELD = 13,
    RCSCMPFLD = 14,
};

enum output_style {
    OUTPUT_NORMAL = 0,
    OUTPUT_CONTEXT = 1,
    OUTPUT_UNIFIED = 2,
    OUTPUT_ED = 3,
    OUTPUT_FORWARD_ED = 4,
    OUTPUT_RCS = 5,
    OUTPUT_IFDEF = 6,
    OUTPUT_SDIFF = 7,
};

enum password_entry_operation_e {
    password_entry_lookup = 0,
    password_entry_delete = 1,
    password_entry_add = 2,
};

enum quoting_style {
    literal_quoting_style = 0,
    shell_quoting_style = 1,
    shell_always_quoting_style = 2,
    c_quoting_style = 3,
    escape_quoting_style = 4,
    locale_quoting_style = 5,
    clocale_quoting_style = 6,
};

enum rcs_delta_op {
    RCS_ANNOTATE = 0,
    RCS_ANNOTATE_BACKWARDS = 1,
    RCS_FETCH = 2,
};

enum server_updated_arg4 {
    SERVER_UPDATED = 0,
    SERVER_MERGED = 1,
    SERVER_PATCHED = 2,
    SERVER_RCS_DIFF = 3,
};

/* ── forward declarations ────────────────────────────────── */

union YYSTYPE;
struct __anon_0x0000527e;
struct __anon_0x000064ac;
struct __anon_0x000064d9;
union __anon_0x00007ccd;
struct __anon_0x0000ae31;
struct __anon_0x0000e1ee;
struct __anon_0x0000f155;
struct __anon_0x00026627;
struct __anon_0x0002bd54;
struct __anon_0x0002dd38;
struct __anon_0x0002e278;
struct __anon_0x000308bf;
struct __anon_0x00033bca;
struct __anon_0x000350c6;
struct __anon_0x00035401;
struct __anon_0x00039b32;
struct __anon_0x0003a9c2;
struct __anon_0x0003d917;
struct __anon_0x00044026;
struct __anon_0x000467dd;
struct __anon_0x0004add0;
struct __anon_0x0004b192;
struct __anon_0x0004cc9d;
struct __anon_0x0004ccea;
struct __anon_0x0004fcc6;
struct __anon_0x0004fd13;
struct __anon_0x0005334b;
struct __anon_0x000558a8;
struct __anon_0x0006acb3;
struct __anon_0x0006d4f5;
struct __anon_0x0006d519;
union __anon_0x0006d53d;
struct __anon_0x0006d55c;
union __anon_0x0006d58d;
struct __anon_0x0006d5ac;
struct __anon_0x0006d5d0;
union __anon_0x0006d5f4;
struct __anon_0x0006d613;
struct __anon_0x0006d64b;
struct __anon_0x0006d66f;
union __anon_0x0006d6a0;
struct __anon_0x0006d6f0;
union __anon_0x0006d73a;
struct __anon_0x0006d89e;
struct __anon_0x0006f2ea;
struct __anon_0x0006f334;
struct __anon_0x0006f98f;
struct __anon_0x0007fac3;
struct __anon_0x0008361b;
struct __anon_0x00083668;
struct __anon_0x00086f59;
struct __anon_0x0008cb26;
struct __anon_0x0008f7b4;
struct __anon_0x0009288e;
struct __anon_0x00094cef;
struct __anon_0x00097b6a;
struct __anon_0x000998cb;
struct __anon_0x0009aa7f;
struct __anon_0x0009be9d;
struct __anon_0x0009c8e1;
struct __anon_0x0009cf65;
struct __anon_0x0009ddf5;
struct __anon_0x000a0227;
struct __anon_0x000a0cec;
struct __anon_0x000a1873;
struct __anon_0x000a1896;
union __anon_0x000a18b9;
struct __anon_0x000a18d8;
union __anon_0x000a1908;
struct __anon_0x000a1927;
struct __anon_0x000a194a;
union __anon_0x000a196d;
struct __anon_0x000a198c;
struct __anon_0x000a19c3;
struct __anon_0x000a19e6;
union __anon_0x000a1a16;
struct __anon_0x000a1a66;
union __anon_0x000a1aaf;
struct __anon_0x000a29ff;
struct __anon_0x000a425e;
struct __anon_0x000a7283;
struct __anon_0x000a72c5;
struct __anon_0x000a733c;
struct __anon_0x000aa6ef;
struct __anon_0x000aaa25;
struct __anon_0x000ad1f3;
struct __anon_0x000af35a;
struct __anon_0x000af509;
struct __anon_0x000af631;
union __anon_0x000af6e9;
struct __anon_0x000af730;
struct __anon_0x000afd10;
struct __anon_0x000afd51;
struct __anon_0x000afd92;
struct __anon_0x000afe87;
struct __anon_0x000aff80;
union __anon_0x000b00b4;
struct __anon_0x000b00df;
union __anon_0x000c072a;
struct __anon_0x000c0879;
struct __anon_0x000c08a6;
struct __anon_0x000c08da;
struct __anon_0x000c097e;
union __anon_0x000c1a32;
struct __anon_0x000c1ba0;
struct __anon_0x000c1bc9;
union __anon_0x000c1d7c;
struct __anon_0x000c1eea;
struct __anon_0x000c1f17;
struct __anon_0x000c1f4b;
struct __anon_0x000c1fef;
struct __anon_0x000c358c;
union __anon_0x000c48af;
union __anon_0x000c48ca;
union __anon_0x000c654c;
union __anon_0x000c6567;
struct __anon_0x000c8035;
struct __anon_0x000c90a8;
struct __anon_0x000c96b3;
struct __jmp_buf_tag;
struct __mbstate_t;
struct __sigset_t;
struct __va_list;
struct _getopt_data;
struct addremove_args;
struct addrinfo;
struct admin_data;
struct admin_file;
struct an_entry;
struct bin_tree_storage_t;
struct bin_tree_t;
struct buffer;
struct buffer_data;
struct cd_buf;
struct change;
struct cmd;
struct cmdline_bindings;
struct cmp_file_data;
struct commit_info;
struct compair;
struct compress_buffer;
struct config;
struct config_s;
struct ct_data_s;
struct cvsroot_s;
struct cycle_check_state;
struct datelist;
struct deltafrag;
struct deltatext;
struct dests_alloc;
struct dev_ino;
struct diff3_block;
struct diff_block;
struct diff_callbacks;
struct dir_to_build;
struct dirdata;
struct dirent;
struct entnode;
struct equivclass;
struct expand_buffer;
struct fd_buffer;
struct fd_set_wrapper;
struct file_data;
struct file_info;
struct file_list_str;
struct find_data;
struct format_cmdline_walklist_closure;
struct frame_and_entries;
struct frame_and_file;
struct globlink;
struct group;
struct gz_header_s;
struct hostent;
struct hrec;
struct in_addr;
struct inflate_state;
struct internal_state;
struct line;
struct linevector;
struct list;
struct lock;
struct log_buffer;
struct log_data;
struct log_data_and_rcs;
struct logfile_info;
struct long_format_data;
struct master_lists;
struct mbchar;
struct mbuiter_multi;
struct md5_ctx;
struct memnode_s;
struct ms_buffer;
struct msg;
struct node;
struct notify_note;
struct notify_proc_args;
struct option;
struct option_revlist;
struct packetizing_buffer;
struct partition;
struct passwd;
struct patch_file_data;
struct patternlist;
struct pretag_proc_data;
struct question;
struct quoting_options;
struct rcs_keyword;
struct rcsbuffer;
struct rcsnode;
struct rcsversnode;
struct re_backref_cache_entry;
struct re_dfa_t;
struct re_dfastate_t;
struct re_fail_stack_ent_t;
struct re_fail_stack_t;
struct re_pattern_buffer;
struct re_registers;
struct re_state_table_entry;
struct re_string_t;
struct recursion_frame;
struct regexp_list;
struct request;
struct response;
struct revlist;
union sai;
struct save_dir;
struct saved_cwd;
struct send_data;
struct servent;
struct sigaction;
union sigval;
struct slotvec;
struct sockaddr;
struct sockaddr_in;
struct sortrec;
struct spwd;
struct stat;
struct static_tree_desc_s;
struct stickydirtag;
struct tag_info;
struct template_proc_data;
struct termios;
struct timespec;
struct timeval;
struct timezone;
struct tm;
struct tree_desc_s;
struct ulp_data;
struct unrecog;
struct update_entries_data;
struct utimbuf;
struct val_args;
struct verifymsg_proc_data;
struct vers_ts;
union yyalloc;
struct z_stream_s;

/* ── typedefs, structs & unions (dependency-ordered) ──────── */

struct __anon_0x000064ac {
    long unsigned int fds_bits[32];
};

struct __anon_0x000064d9 {
    long int tv_sec;
    long int tv_nsec;
};

union __anon_0x00007ccd {
    char intbuf[4];
    int i;
};

struct __anon_0x0000e1ee {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0000f155 {
    int seen;
    int conflicts;
    char * mergetag1;
    char * mergetag2;
    char * repository;
};

struct __anon_0x00026627 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0002bd54 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0002dd38 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000308bf {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x00033bca {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000350c6 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x00039b32 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0003a9c2 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x00044026 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0004add0 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0004ccea {
    char * dptr;
    int dsize;
};

struct __anon_0x0004fd13 {
    char * dptr;
    int dsize;
};

struct __anon_0x000558a8 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0006d519 {
    int si_timerid;
    int si_overrun;
};

struct __anon_0x0006d5d0 {
    void * si_lower;
    void * si_upper;
};

struct __anon_0x0006d64b {
    long int si_band;
    int si_fd;
};

struct __anon_0x0006d66f {
    void * si_call_addr;
    int si_syscall;
    unsigned int si_arch;
};

struct __anon_0x0006d89e {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0006f2ea {
    long unsigned int fds_bits[32];
};

struct __anon_0x0006f334 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0007fac3 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x00083668 {
    char * dptr;
    int dsize;
};

struct __anon_0x00086f59 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0008cb26 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0009288e {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x00094cef {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x00097b6a {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000998cb {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0009aa7f {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0009be9d {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0009c8e1 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0009cf65 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0009ddf5 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000a0227 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000a0cec {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000a1896 {
    int si_timerid;
    int si_overrun;
};

struct __anon_0x000a194a {
    void * si_lower;
    void * si_upper;
};

struct __anon_0x000a19c3 {
    long int si_band;
    int si_fd;
};

struct __anon_0x000a19e6 {
    void * si_call_addr;
    int si_syscall;
    unsigned int si_arch;
};

struct __anon_0x000a29ff {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000a425e {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000a72c5 {
    const char * name;
    int type;
    int value;
};

struct __anon_0x000aaa25 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000ad1f3 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000c358c {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000c8035 {
    unsigned char op;
    unsigned char bits;
    short unsigned int val;
};

struct __anon_0x000c90a8 {
    unsigned char op;
    unsigned char bits;
    short unsigned int val;
};

struct __anon_0x000c96b3 {
    unsigned char op;
    unsigned char bits;
    short unsigned int val;
};

struct __mbstate_t {
    unsigned int __opaque1;
    unsigned int __opaque2;
};

struct __sigset_t {
    long unsigned int __bits[32];
};

struct __va_list {
    void * __ap;
};

struct _getopt_data {
    int rpl_optind;
    int rpl_opterr;
    int rpl_optopt;
    char * rpl_optarg;
    int __initialized;
    char * __nextchar;
    enum __anon_0x000a8dc8 __ordering;
    int __posixly_correct;
    int __first_nonopt;
    int __last_nonopt;
};

struct addremove_args {
    int edit;
    int unedit;
    int commit;
    int adding;
    int add_tedit;
    int add_tunedit;
    int add_tcommit;
    int remove_temp;
    int setting_default;
    const char * * dirs;
    int num_dirs;
    int local;
};

struct admin_data {
    char * branch;
    char * comment;
    int set_strict;
    int set_nonstrict;
    char * delete_revs;
    char * kflag;
    char * desc;
    int interactive;
    int ac;
    char * * av;
    int av_alloc;
};

struct admin_file {
    const char * filename;
    const char * errormsg;
    const char * * contents;
};

struct an_entry {
    struct an_entry * next;
    char * entry;
};

struct cd_buf {
    int fd;
};

struct change {
    struct change * link;
    int inserted;
    int deleted;
    int line0;
    int line1;
    char ignore;
};

struct cmd {
    const char * fullname;
    const char * nick1;
    const char * nick2;
    int (*func)(int, char * *);
    long unsigned int attr;
};

struct compair {
    const char * suffix;
    const char * comlead;
};

struct datelist {
    struct datelist * next;
    char * start;
    char * end;
    int inclusive;
};

struct dir_to_build {
    char * repository;
    char * dirpath;
    struct dir_to_build * next;
};

struct dirdata {
    const char * * names;
    char * data;
};

struct entnode {
    enum ent_type type;
    char * user;
    char * version;
    char * timestamp;
    char * options;
    char * tag;
    char * date;
    char * conflict;
};

struct file_list_str {
    char * l_file;
    char * l_module;
};

struct frame_and_file {
    struct recursion_frame * frame;
    struct file_info * finfo;
};

struct globlink {
    struct globlink * next;
    char * name;
};

struct hostent {
    char * h_name;
    char * * h_aliases;
    int h_addrtype;
    int h_length;
    char * * h_addr_list;
};

struct internal_state {
    int dummy;
};

struct linevector {
    unsigned int nlines;
    unsigned int lines_alloced;
    struct line * * vector;
};

struct lock {
    const char * repository;
    char * file1;
    char * file2;
    const char * lockdirname;
    char * lockdir;
    _Bool free_repository;
};

struct logfile_info {
    enum classify_type type;
    char * tag;
    char * rev_old;
    char * rev_new;
};

struct long_format_data {
    char * header;
    char * time;
    char * footer;
};

struct msg {
    struct msg * next;
    const char * format;
    const char * arg1;
    const char * arg2;
    const char * arg3;
    const char * arg4;
};

struct notify_note {
    char * dir;
    char * update_dir;
    char * filename;
    char * type;
    char * val;
    char * watches;
    struct notify_note * next;
};

struct notify_proc_args {
    const char * type;
    const char * who;
    const char * notifyee;
    const char * file;
};

struct option {
    const char * name;
    int has_arg;
    int * flag;
    int val;
};

struct option_revlist {
    struct option_revlist * next;
    char * first;
    char * last;
    int branchhead;
    int inclusive;
};

struct partition {
    int xmid;
    int ymid;
    int lo_minimal;
    int hi_minimal;
};

struct question {
    char * dir;
    char * repos;
    char * file;
    struct question * next;
};

struct quoting_options {
    enum quoting_style style;
    unsigned int quote_these_too[8];
};

struct request {
    const char * name;
    void (*func)(char *);
    int flags;
};

struct revlist {
    struct revlist * next;
    char * first;
    char * last;
    int fields;
    int inclusive;
};

struct save_dir {
    char * dir;
    struct save_dir * next;
};

struct saved_cwd {
    int desc;
    char * name;
};

struct send_data {
    int build_dirs;
    int force;
    int no_contents;
    int backup_modified;
};

struct servent {
    char * s_name;
    char * * s_aliases;
    int s_port;
    char * s_proto;
};

union sigval {
    int sival_int;
    void * sival_ptr;
};

struct sortrec {
    char * modname;
    char * status;
    char * rest;
    char * comment;
};

struct spwd {
    char * sp_namp;
    char * sp_pwdp;
    long int sp_lstchg;
    long int sp_min;
    long int sp_max;
    long int sp_warn;
    long int sp_inact;
    long int sp_expire;
    long unsigned int sp_flag;
};

struct static_tree_desc_s {
    int dummy;
};

struct stickydirtag {
    int aflag;
    char * tag;
    char * date;
    int nonbranch;
    int subdirs;
};

struct template_proc_data {
    const char * update_dir;
    const char * repository;
};

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long int tm_gmtoff;
    const char * tm_zone;
};

struct unrecog {
    char * line;
    struct unrecog * next;
};

struct update_entries_data {
    enum __anon_0x0000f262 contents;
    enum __anon_0x0000f288 existp;
    char * timestamp;
};

struct val_args {
    const char * name;
    int found;
};

typedef unsigned char Byte;
typedef int (*CALLBACKPROC)(int, char * *, char *, char *, char *, int, int, char *, char *);
typedef int (*CALLPROC)(const char *, const char *, void *);
typedef enum __anon_0x00000268 CVSmethod;
typedef enum classify_type Ctype;
typedef struct __anon_0x0000527e DBM;
typedef struct __dirstream DIR;
typedef struct deltatext Deltatext;
typedef enum direnter_type Dtype;
typedef struct entnode Entnode;
typedef struct _IO_FILE FILE;
typedef int (*FILEPROC)(void *, struct file_info *);
typedef unsigned int IPos;
typedef void (*Ignore_proc)(const char *, const char *);
typedef struct list List;
typedef struct node Node;
typedef enum ntype Ntype;
typedef struct rcsnode RCSNode;
typedef struct rcsversnode RCSVers;
typedef void (*SIGCLEANUPPROC)(int);
typedef struct vers_ts Vers_TS;
typedef enum __anon_0x00000769 WrapMergeHas;
typedef enum __anon_0x0008f758 WrapMergeMethod;
typedef struct __anon_0x0008f7b4 WrapperEntry;
typedef union YYSTYPE YYSTYPE;
typedef struct __va_list __isoc_va_list;
typedef long long unsigned int __jmp_buf[32];
typedef enum __anon_0x000c0685 arg_type;
typedef struct __anon_0x000c0879 argument;
typedef struct __anon_0x000c08a6 arguments;
typedef struct bin_tree_storage_t bin_tree_storage_t;
typedef struct bin_tree_t bin_tree_t;
typedef long unsigned int bitset_word;
typedef long long int blkcnt_t;
typedef long int blksize_t;
typedef enum __anon_0x000c4a67 block_state;
typedef struct __anon_0x000b00df bracket_elem_t;
typedef enum __anon_0x000b007b bracket_elem_type;
typedef enum canonicalize_mode_t canonicalize_mode_t;
typedef unsigned char cc_t;
typedef struct __anon_0x000c08da char_directive;
typedef struct __anon_0x000c097e char_directives;
typedef char charf;
typedef long int clock_t;
typedef int clockid_t;
typedef struct __anon_0x000c8035 code;
typedef enum __anon_0x000c8076 codetype;
typedef struct config_s config;
typedef struct ct_data_s ct_data;
typedef struct cvsroot_s cvsroot_t;
typedef struct __anon_0x0004ccea datum;
typedef struct internal_state deflate_state;
typedef long long unsigned int dev_t;
typedef struct __anon_0x000064ac fd_set;
typedef unsigned int gid_t;
typedef struct __anon_0x0002e278 glob_t;
typedef struct gz_header_s gz_header;
typedef enum __anon_0x000c80a0 inflate_mode;
typedef long long unsigned int ino_t;
typedef int intf;
typedef struct __mbstate_t mbstate_t;
typedef struct mbuiter_multi mbui_iterator_t;
typedef struct memnode_s memnode_t;
typedef unsigned int mode_t;
typedef int nl_item;
typedef unsigned int nlink_t;
typedef long long int off_t;
typedef struct __anon_0x000a733c parser_control;
typedef enum password_entry_operation_e password_entry_operation_t;
typedef int pid_t;
typedef int ptrdiff_t;
typedef struct __anon_0x000af631 re_charset_t;
typedef enum __anon_0x000af4b4 re_context_type;
typedef struct re_dfa_t re_dfa_t;
typedef struct re_dfastate_t re_dfastate_t;
typedef struct __anon_0x000afe87 re_match_context_t;
typedef struct __anon_0x000af509 re_node_set;
typedef struct __anon_0x000aff80 re_sift_context_t;
typedef struct re_string_t re_string_t;
typedef struct __anon_0x000afd51 re_sub_match_last_t;
typedef struct __anon_0x000afd92 re_sub_match_top_t;
typedef struct __anon_0x000af730 re_token_t;
typedef enum __anon_0x000af54d re_token_type_t;
typedef enum __anon_0x000af1a4 reg_errcode_t;
typedef long unsigned int reg_syntax_t;
typedef struct re_pattern_buffer regex_t;
typedef struct __anon_0x00035401 regmatch_t;
typedef short unsigned int sa_family_t;
typedef struct __anon_0x0006d6f0 siginfo_t;
typedef struct __sigset_t sigset_t;
typedef unsigned int size_t;
typedef unsigned int socklen_t;
typedef unsigned int speed_t;
typedef int ssize_t;
typedef struct __anon_0x000afd10 state_array_t;
typedef struct static_tree_desc_s static_tree_desc;
typedef long long int suseconds_t;
typedef struct __anon_0x000a72c5 table;
typedef unsigned int tcflag_t;
typedef struct __anon_0x000a7283 textint;
typedef long long int time_t;
typedef struct tree_desc_s tree_desc;
typedef int (*type_buf_block)(void *, _Bool);
typedef int (*type_buf_flush)(void *);
typedef int (*type_buf_get_fd)(void *);
typedef void (*type_buf_memory_error)(struct buffer *);
typedef int (*type_buf_shutdown)(struct buffer *);
typedef unsigned int u4;
typedef unsigned int uInt;
typedef long unsigned int uLong;
typedef unsigned char uch;
typedef unsigned int uid_t;
typedef short unsigned int uint16_t;
typedef unsigned int uint32_t;
typedef long long unsigned int uint64_t;
typedef unsigned char uint8_t;
typedef long long unsigned int uintmax_t;
typedef long unsigned int ulg;
typedef short unsigned int ush;
typedef struct __va_list va_list;
typedef void * voidpf;
typedef unsigned int wchar_t;
typedef long unsigned int wctype_t;
typedef unsigned int wint_t;
typedef short int yytype_int16;
typedef signed char yytype_int8;
typedef unsigned char yytype_uint8;
typedef struct z_stream_s z_stream;
union __anon_0x0006d5f4 {
    struct __anon_0x0006d5d0 __addr_bnd;
    unsigned int si_pkey;
};

union __anon_0x000a196d {
    struct __anon_0x000a194a __addr_bnd;
    unsigned int si_pkey;
};

typedef Byte Bytef;
struct cvsroot_s {
    char * original;
    CVSmethod method;
    char * directory;
    _Bool isremote;
    char * username;
    char * password;
    char * hostname;
    char * cvs_rsh;
    char * cvs_server;
    int port;
    char * proxy_hostname;
    int proxy_port;
    _Bool redirect;
};

struct commit_info {
    Ctype status;
    char * rev;
    char * tag;
    char * options;
};

struct tag_info {
    Ctype status;
    char * oldrev;
    char * rev;
    char * tag;
    char * options;
};

struct cmp_file_data {
    const char * filename;
    FILE * fp;
    int different;
};

struct find_data {
    List * ulist;
    int argc;
    char * * argv;
    List * ignlist;
    struct question * questionables;
    const char * repository;
    int force;
};

struct frame_and_entries {
    struct recursion_frame * frame;
    List * entries;
};

struct log_data {
    int nameonly;
    int header;
    int long_header;
    int notags;
    int default_branch;
    int sup_header;
    struct option_revlist * revlist;
    struct datelist * datelist;
    struct datelist * singledatelist;
    List * statelist;
    List * authorlist;
};

struct master_lists {
    List * ulist;
    List * cilist;
};

struct ms_buffer {
    struct buffer * buf;
    struct buffer * cur;
    List * bufs;
    _Bool block;
};

struct pretag_proc_data {
    List * tlist;
    _Bool delete_flag;
    _Bool force_tag_move;
    char * symtag;
};

struct rcsversnode {
    char * version;
    char * date;
    char * author;
    char * state;
    char * next;
    int dead;
    int outdated;
    Deltatext * text;
    List * branches;
    List * other;
    List * other_delta;
};

struct ulp_data {
    FILE * logfp;
    const char * message;
    List * changes;
};

typedef Dtype (*DIRENTPROC)(void *, const char *, const char *, const char *, List *);
typedef int (*DIRLEAVEPROC)(void *, const char *, int, const char *, List *);
typedef int (*FILESDONEPROC)(void *, int, const char *, const char *, List *);
struct __anon_0x0000527e {
    List * dbm_list;
    Node * dbm_next;
    char * name;
    int modified;
};

struct __anon_0x0000ae31 {
    List * dbm_list;
    Node * dbm_next;
    char * name;
    int modified;
};

struct __anon_0x0003d917 {
    List * dbm_list;
    Node * dbm_next;
    char * name;
    int modified;
};

struct __anon_0x000467dd {
    List * dbm_list;
    Node * dbm_next;
    char * name;
    int modified;
};

struct __anon_0x0004b192 {
    List * dbm_list;
    Node * dbm_next;
    char * name;
    int modified;
};

struct __anon_0x0004cc9d {
    List * dbm_list;
    Node * dbm_next;
    char * name;
    int modified;
};

struct __anon_0x0004fcc6 {
    List * dbm_list;
    Node * dbm_next;
    char * name;
    int modified;
};

struct __anon_0x0005334b {
    List * dbm_list;
    Node * dbm_next;
    char * name;
    int modified;
};

struct __anon_0x0006f98f {
    List * dbm_list;
    Node * dbm_next;
    char * name;
    int modified;
};

struct __anon_0x0008361b {
    List * dbm_list;
    Node * dbm_next;
    char * name;
    int modified;
};

struct list {
    Node * list;
    Node * hasharray[151];
    struct list * next;
};

typedef int (*CONVPROC_t)(Node *, void *);
struct node {
    Ntype type;
    struct node * next;
    struct node * prev;
    struct node * hashnext;
    struct node * hashprev;
    char * key;
    void * data;
    void (*delproc)(struct node *);
};

struct file_info {
    const char * file;
    const char * update_dir;
    const char * fullname;
    const char * repository;
    List * entries;
    RCSNode * rcs;
};

struct log_data_and_rcs {
    struct log_data * log_data;
    struct revlist * revlist;
    RCSNode * rcs;
};

struct vers_ts {
    char * vn_user;
    char * vn_rcs;
    char * vn_tag;
    char * ts_user;
    char * ts_rcs;
    char * options;
    char * ts_conflict;
    char * tag;
    char * date;
    int nonbranch;
    Entnode * entdata;
    RCSNode * srcfile;
    unsigned char ts_user_ists;
};

struct __anon_0x0008f7b4 {
    char * wildCard;
    char * tocvsFilter;
    char * fromcvsFilter;
    char * rcsOption;
    WrapMergeMethod mergeMethod;
};

struct __jmp_buf_tag {
    __jmp_buf __jb;
    long unsigned int __fl;
    long unsigned int __ss[32];
};

typedef bitset_word bitset[8];
typedef bitset_word * re_bitset_ptr_t;
typedef const bitset_word * re_const_bitset_ptr_t;
struct __anon_0x0006d55c {
    int si_status;
    clock_t si_utime;
    clock_t si_stime;
};

struct __anon_0x000a18d8 {
    int si_status;
    clock_t si_utime;
    clock_t si_stime;
};

typedef block_state (*compress_func)(deflate_state *, int);
struct fd_set_wrapper {
    fd_set fds;
};

struct group {
    char * gr_name;
    char * gr_passwd;
    gid_t gr_gid;
    char * * gr_mem;
};

typedef gz_header * gz_headerp;
struct dev_ino {
    ino_t st_ino;
    dev_t st_dev;
};

struct dirent {
    ino_t d_ino;
    off_t d_off;
    short unsigned int d_reclen;
    unsigned char d_type;
    char d_name[256];
};

struct rcsnode {
    int refcount;
    int flags;
    char * path;
    char * print_path;
    char * head;
    char * branch;
    char * symbols_data;
    char * expand;
    List * symbols;
    List * versions;
    char * access;
    char * locks_data;
    List * locks;
    int strict_locks;
    char * comment;
    char * desc;
    off_t delta_pos;
    List * other;
};

typedef off_t regoff_t;
struct fd_buffer {
    int fd;
    int blocking;
    pid_t child_pid;
    cvsroot_t * root;
};

struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

union __anon_0x0006d73a {
    void (*sa_handler)(int);
    void (*sa_sigaction)(int, siginfo_t *, void *);
};

union __anon_0x000a1aaf {
    void (*sa_handler)(int);
    void (*sa_sigaction)(int, siginfo_t *, void *);
};

struct __anon_0x0002e278 {
    size_t gl_pathc;
    char * * gl_pathv;
    size_t gl_offs;
    int gl_flags;
    void (*gl_closedir)(void *);
    struct dirent * (*gl_readdir)(void *);
    void * (*gl_opendir)(const char *);
    int (*gl_lstat)(const char * restrict, struct stat * restrict);
    int (*gl_stat)(const char * restrict, struct stat * restrict);
};

struct __anon_0x000a7283 {
    _Bool negative;
    long int value;
    size_t digits;
};

struct __anon_0x000aa6ef {
    size_t gl_pathc;
    char * * gl_pathv;
    size_t gl_offs;
    int gl_flags;
    void (*gl_closedir)(void *);
    struct dirent * (*gl_readdir)(void *);
    void * (*gl_opendir)(const char *);
    int (*gl_lstat)(const char * restrict, struct stat * restrict);
    int (*gl_stat)(const char * restrict, struct stat * restrict);
};

struct __anon_0x000c08a6 {
    size_t count;
    argument * arg;
};

struct __anon_0x000c08da {
    const char * dir_start;
    const char * dir_end;
    int flags;
    const char * width_start;
    const char * width_end;
    size_t width_arg_index;
    const char * precision_start;
    const char * precision_end;
    size_t precision_arg_index;
    char conversion;
    size_t arg_index;
};

struct __anon_0x000c097e {
    size_t count;
    char_directive * dir;
    size_t max_width_length;
    size_t max_precision_length;
};

struct __anon_0x000c1bc9 {
    size_t count;
    argument * arg;
};

struct __anon_0x000c1f17 {
    size_t count;
    argument * arg;
};

struct __anon_0x000c1f4b {
    const char * dir_start;
    const char * dir_end;
    int flags;
    const char * width_start;
    const char * width_end;
    size_t width_arg_index;
    const char * precision_start;
    const char * precision_end;
    size_t precision_arg_index;
    char conversion;
    size_t arg_index;
};

struct __anon_0x000c1fef {
    size_t count;
    char_directive * dir;
    size_t max_width_length;
    size_t max_precision_length;
};

struct buffer_data {
    struct buffer_data * next;
    char * bufp;
    size_t size;
    char * text;
};

struct config {
    void * keywords;
    _Bool top_level_admin;
    char * lock_dir;
    char * logHistory;
    char * HistoryLogPath;
    char * HistorySearchPath;
    char * TmpDir;
    int RereadLogAfterVerify;
    char * UserAdminOptions;
    _Bool ImportNewFilesToVendorBranchOnly;
    size_t MaxCommentLeaderLength;
    _Bool UseArchiveCommentLeader;
    _Bool system_auth;
    _Bool UseNewInfoFmtStrings;
    cvsroot_t * PrimaryServer;
    size_t MaxProxyBufferSize;
    unsigned int MinCompressionLevel;
    unsigned int MaxCompressionLevel;
};

struct deltafrag {
    enum __anon_0x00059483 type;
    long unsigned int pos;
    long unsigned int nlines;
    const char * new_lines;
    size_t len;
    struct deltafrag * next;
};

struct deltatext {
    char * version;
    char * log;
    char * text;
    size_t len;
    List * other;
};

struct diff3_block {
    enum diff_type correspond;
    int ranges[3][2];
    char * * lines[3];
    size_t * lengths[3];
    struct diff3_block * next;
};

struct diff_block {
    int ranges[2][2];
    char * * lines[2];
    size_t * lengths[2];
    struct diff_block * next;
};

struct diff_callbacks {
    void (*write_output)(const char *, size_t);
    void (*flush_output)(void);
    void (*write_stdout)(const char *);
    void (*error)(const char *, const char *, const char *);
};

struct equivclass {
    int next;
    unsigned int hash;
    const char * line;
    size_t length;
};

struct expand_buffer {
    struct expand_buffer * next;
    char * data;
    size_t len;
    int free_data;
};

struct format_cmdline_walklist_closure {
    const char * format;
    char * * buf;
    size_t * length;
    char * * d;
    char quotes;
    int onearg;
    int firstpass;
    const char * srepos;
    void * closure;
};

struct line {
    char * text;
    size_t len;
    RCSVers * vers;
    int has_newline;
    int refcount;
};

struct log_buffer {
    struct buffer * buf;
    FILE * log;
    _Bool fatal_errors;
    char * back_fn;
    _Bool disabled;
    struct buffer * back_buf;
    size_t max;
    _Bool tofile;
};

struct packetizing_buffer {
    struct buffer * buf;
    int (*inpfn)(void *, const char *, char *, size_t);
    int (*outfn)(void *, const char *, char *, size_t, size_t *);
    void * fnclosure;
    _Bool translated;
    size_t holdsize;
    char * holdbuf;
    size_t holdbufsize;
    char * holddata;
};

struct rcs_keyword {
    const char * string;
    size_t len;
    enum keyword expandto;
    _Bool expandit;
};

struct rcsbuffer {
    char * ptr;
    char * ptrend;
    FILE * fp;
    const char * filename;
    long unsigned int pos;
    size_t vlen;
    int at_string;
    int embedded_at;
};

struct response {
    const char * name;
    void (*func)(char *, size_t);
    enum __anon_0x0000e66c type;
    enum __anon_0x0000e691 status;
};

struct slotvec {
    size_t size;
    char * val;
};

typedef void (*RCSCHECKOUTPROC)(void *, const char *, size_t);
typedef size_t __re_idx_t;
typedef size_t __re_long_size_t;
typedef size_t __re_size_t;
typedef size_t info_t;
typedef int (*type_buf_input)(void *, char *, size_t, size_t, size_t *);
typedef int (*type_buf_output)(void *, const char *, size_t, size_t *);
struct addrinfo {
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    socklen_t ai_addrlen;
    struct sockaddr * ai_addr;
    char * ai_canonname;
    struct addrinfo * ai_next;
};

struct tree_desc_s {
    ct_data * dyn_tree;
    int max_code;
    static_tree_desc * stat_desc;
};

struct termios {
    tcflag_t c_iflag;
    tcflag_t c_oflag;
    tcflag_t c_cflag;
    tcflag_t c_lflag;
    cc_t c_line;
    cc_t c_cc[32];
    speed_t __c_ispeed;
    speed_t __c_ospeed;
};

struct hrec {
    char * type;
    char * user;
    char * dir;
    char * repos;
    char * rev;
    char * file;
    char * end;
    char * mod;
    time_t date;
    long int idx;
};

struct timespec {
    time_t tv_sec;
    long int tv_nsec;
};

struct timeval {
    time_t tv_sec;
    suseconds_t tv_usec;
};

struct utimbuf {
    time_t actime;
    time_t modtime;
};

typedef uLong uLongf;
typedef uch uchf;
struct __anon_0x0006d4f5 {
    pid_t si_pid;
    uid_t si_uid;
};

struct __anon_0x000a1873 {
    pid_t si_pid;
    uid_t si_uid;
};

struct passwd {
    char * pw_name;
    char * pw_passwd;
    uid_t pw_uid;
    gid_t pw_gid;
    char * pw_gecos;
    char * pw_dir;
    char * pw_shell;
};

typedef uint16_t in_port_t;
typedef uint32_t in_addr_t;
typedef uint32_t md5_uint32;
union __anon_0x000c48af {
    ush freq;
    ush code;
};

union __anon_0x000c48ca {
    ush dad;
    ush len;
};

union __anon_0x000c654c {
    ush freq;
    ush code;
};

union __anon_0x000c6567 {
    ush dad;
    ush len;
};

typedef ush Pos;
typedef ush ushf;
typedef voidpf (*alloc_func)(voidpf, uInt, uInt);
typedef void (*free_func)(voidpf, voidpf);
union __anon_0x000b00b4 {
    unsigned char ch;
    unsigned char * name;
    wchar_t wch;
};

struct mbchar {
    const char * ptr;
    size_t bytes;
    _Bool wc_valid;
    wchar_t wc;
    char buf[24];
};

struct patternlist {
    struct patternlist * next;
    wchar_t str[1];
};

union __anon_0x000c072a {
    signed char a_schar;
    unsigned char a_uchar;
    short int a_short;
    short unsigned int a_ushort;
    int a_int;
    unsigned int a_uint;
    long int a_longint;
    long unsigned int a_ulongint;
    long long int a_longlongint;
    long long unsigned int a_ulonglongint;
    float a_float;
    double a_double;
    long double a_longdouble;
    int a_char;
    wint_t a_wide_char;
    const char * a_string;
    const wchar_t * a_wide_string;
    void * a_pointer;
    signed char * a_count_schar_pointer;
    short int * a_count_short_pointer;
    int * a_count_int_pointer;
    long int * a_count_longint_pointer;
    long long int * a_count_longlongint_pointer;
};

union __anon_0x000c1a32 {
    signed char a_schar;
    unsigned char a_uchar;
    short int a_short;
    short unsigned int a_ushort;
    int a_int;
    unsigned int a_uint;
    long int a_longint;
    long unsigned int a_ulongint;
    long long int a_longlongint;
    long long unsigned int a_ulonglongint;
    float a_float;
    double a_double;
    long double a_longdouble;
    int a_char;
    wint_t a_wide_char;
    const char * a_string;
    const wchar_t * a_wide_string;
    void * a_pointer;
    signed char * a_count_schar_pointer;
    short int * a_count_short_pointer;
    int * a_count_int_pointer;
    long int * a_count_longint_pointer;
    long long int * a_count_longlongint_pointer;
};

union __anon_0x000c1d7c {
    signed char a_schar;
    unsigned char a_uchar;
    short int a_short;
    short unsigned int a_ushort;
    int a_int;
    unsigned int a_uint;
    long int a_longint;
    long unsigned int a_ulongint;
    long long int a_longlongint;
    long long unsigned int a_ulonglongint;
    float a_float;
    double a_double;
    long double a_longdouble;
    int a_char;
    wint_t a_wide_char;
    const char * a_string;
    const wchar_t * a_wide_string;
    void * a_pointer;
    signed char * a_count_schar_pointer;
    short int * a_count_short_pointer;
    int * a_count_int_pointer;
    long int * a_count_longint_pointer;
    long long int * a_count_longlongint_pointer;
};

typedef z_stream * z_streamp;
struct __anon_0x0006d613 {
    void * si_addr;
    short int si_addr_lsb;
    union __anon_0x0006d5f4 __first;
};

struct __anon_0x000a198c {
    void * si_addr;
    short int si_addr_lsb;
    union __anon_0x000a196d __first;
};

struct gz_header_s {
    int text;
    uLong time;
    int xflags;
    int os;
    Bytef * extra;
    uInt extra_len;
    uInt extra_max;
    Bytef * name;
    uInt name_max;
    Bytef * comment;
    uInt comm_max;
    int hcrc;
    int done;
};

struct recursion_frame {
    FILEPROC fileproc;
    FILESDONEPROC filesdoneproc;
    DIRENTPROC direntproc;
    DIRLEAVEPROC dirleaveproc;
    void * callerdat;
    Dtype flags;
    int which;
    int aflag;
    int locktype;
    int dosrcs;
    char * repository;
};

struct cmdline_bindings {
    char conversion;
    void * data;
    CONVPROC_t convproc;
    void * closure;
};

typedef struct __jmp_buf_tag jmp_buf[1];
union __anon_0x0006d58d {
    union sigval si_value;
    struct __anon_0x0006d55c __sigchld;
};

union __anon_0x000a1908 {
    union sigval si_value;
    struct __anon_0x000a18d8 __sigchld;
};

struct config_s {
    ush good_length;
    ush max_lazy;
    ush nice_length;
    ush max_chain;
    compress_func func;
};

struct inflate_state {
    inflate_mode mode;
    int last;
    int wrap;
    int havedict;
    int flags;
    unsigned int dmax;
    long unsigned int check;
    long unsigned int total;
    gz_headerp head;
    unsigned int wbits;
    unsigned int wsize;
    unsigned int whave;
    unsigned int write;
    unsigned char * window;
    long unsigned int hold;
    unsigned int bits;
    unsigned int length;
    unsigned int offset;
    unsigned int extra;
    const code * lencode;
    const code * distcode;
    unsigned int lenbits;
    unsigned int distbits;
    unsigned int ncode;
    unsigned int nlen;
    unsigned int ndist;
    unsigned int have;
    code * next;
    short unsigned int lens[320];
    short unsigned int work[288];
    code codes[2048];
};

struct cycle_check_state {
    struct dev_ino dev_ino;
    uintmax_t chdir_counter;
    int magic;
};

struct __anon_0x00035401 {
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x0006acb3 {
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x000af35a {
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct sigaction {
    union __anon_0x0006d73a __sa_handler;
    sigset_t sa_mask;
    int sa_flags;
    void (*sa_restorer)(void);
};

typedef __re_idx_t Idx;
struct re_pattern_buffer {
    unsigned char * buffer;
    __re_long_size_t allocated;
    __re_long_size_t used;
    reg_syntax_t syntax;
    char * fastmap;
    char * translate;
    size_t re_nsub;
    unsigned int can_be_null : 1;
    unsigned int regs_allocated : 2;
    unsigned int fastmap_accurate : 1;
    unsigned int no_sub : 1;
    unsigned int not_bol : 1;
    unsigned int not_eol : 1;
    unsigned int newline_anchor : 1;
};

struct re_registers {
    __re_size_t num_regs;
    regoff_t * start;
    regoff_t * end;
};

typedef __re_size_t re_hashval_t;
struct memnode_s {
    void * aligned_ptr;
    info_t info;
    memnode_t * next;
};

struct buffer {
    struct buffer_data * data;
    struct buffer_data * last;
    _Bool nonblocking;
    type_buf_input input;
    type_buf_output output;
    type_buf_flush flush;
    type_buf_block block;
    type_buf_get_fd get_fd;
    type_buf_shutdown shutdown;
    void * closure;
    type_buf_memory_error memory_error;
};

union YYSTYPE {
    long int intval;
    textint textintval;
    struct timespec timespec;
};

struct __anon_0x000a733c {
    const char * input;
    long int day_ordinal;
    int day_number;
    int local_isdst;
    long int time_zone;
    int meridian;
    textint year;
    long int month;
    long int day;
    long int hour;
    long int minutes;
    struct timespec seconds;
    long int rel_year;
    long int rel_month;
    long int rel_day;
    long int rel_hour;
    long int rel_minutes;
    long int rel_seconds;
    long int rel_ns;
    _Bool timespec_seen;
    _Bool rels_seen;
    size_t dates_seen;
    size_t days_seen;
    size_t local_zones_seen;
    size_t dsts_seen;
    size_t times_seen;
    size_t zones_seen;
    table local_time_zone_table[3];
};

struct stat {
    dev_t st_dev;
    int __st_dev_padding;
    long int __st_ino_truncated;
    mode_t st_mode;
    nlink_t st_nlink;
    uid_t st_uid;
    gid_t st_gid;
    dev_t st_rdev;
    int __st_rdev_padding;
    off_t st_size;
    blksize_t st_blksize;
    blkcnt_t st_blocks;
    struct __anon_0x000064d9 __st_atim32;
    struct __anon_0x000064d9 __st_mtim32;
    struct __anon_0x000064d9 __st_ctim32;
    ino_t st_ino;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
};

union __anon_0x0006d53d {
    struct __anon_0x0006d4f5 __piduid;
    struct __anon_0x0006d519 __timer;
};

union __anon_0x000a18b9 {
    struct __anon_0x000a1873 __piduid;
    struct __anon_0x000a1896 __timer;
};

struct in_addr {
    in_addr_t s_addr;
};

struct md5_ctx {
    md5_uint32 A;
    md5_uint32 B;
    md5_uint32 C;
    md5_uint32 D;
    md5_uint32 total[2];
    md5_uint32 buflen;
    char buffer[128];
};

struct ct_data_s {
    union __anon_0x000c48af fc;
    union __anon_0x000c48ca dl;
};

typedef Pos Posf;
struct z_stream_s {
    Bytef * next_in;
    uInt avail_in;
    uLong total_in;
    Bytef * next_out;
    uInt avail_out;
    uLong total_out;
    char * msg;
    struct internal_state * state;
    alloc_func zalloc;
    free_func zfree;
    voidpf opaque;
    int data_type;
    uLong adler;
    uLong reserved;
};

struct __anon_0x000b00df {
    bracket_elem_type type;
    union __anon_0x000b00b4 opr;
};

struct mbuiter_multi {
    _Bool in_shift;
    mbstate_t state;
    _Bool next_done;
    struct mbchar cur;
};

struct __anon_0x000c0879 {
    arg_type type;
    union __anon_0x000c072a a;
};

struct __anon_0x000c1ba0 {
    arg_type type;
    union __anon_0x000c1a32 a;
};

struct __anon_0x000c1eea {
    arg_type type;
    union __anon_0x000c1d7c a;
};

struct __anon_0x000af509 {
    Idx alloc;
    Idx nelem;
    Idx * elems;
};

struct __anon_0x000af631 {
    wchar_t * mbchars;
    wchar_t * range_starts;
    wchar_t * range_ends;
    wctype_t * char_classes;
    unsigned int non_match : 1;
    Idx nmbchars;
    Idx ncoll_syms;
    Idx nequiv_classes;
    Idx nranges;
    Idx nchar_classes;
};

union __anon_0x000af6e9 {
    unsigned char c;
    re_bitset_ptr_t sbcset;
    re_charset_t * mbcset;
    Idx idx;
    re_context_type ctx_type;
};

struct __anon_0x000afd10 {
    Idx next_idx;
    Idx alloc;
    re_dfastate_t * * array;
};

struct __anon_0x000afd92 {
    Idx str_idx;
    Idx node;
    state_array_t * path;
    Idx alasts;
    Idx nlasts;
    re_sub_match_last_t * * lasts;
};

struct re_backref_cache_entry {
    Idx node;
    Idx str_idx;
    Idx subexp_from;
    Idx subexp_to;
    char more;
    char unused;
    short unsigned int eps_reachable_subexps_map;
};

struct re_fail_stack_t {
    Idx num;
    Idx alloc;
    struct re_fail_stack_ent_t * stack;
};

struct re_state_table_entry {
    Idx num;
    Idx alloc;
    re_dfastate_t * * array;
};

struct re_string_t {
    const unsigned char * raw_mbs;
    unsigned char * mbs;
    wint_t * wcs;
    Idx * offsets;
    mbstate_t cur_state;
    Idx raw_mbs_idx;
    Idx valid_len;
    Idx valid_raw_len;
    Idx bufs_len;
    Idx cur_idx;
    Idx raw_len;
    Idx len;
    Idx raw_stop;
    Idx stop;
    unsigned int tip_context;
    unsigned char * trans;
    re_const_bitset_ptr_t word_char;
    unsigned char icase;
    unsigned char is_utf8;
    unsigned char map_notascii;
    unsigned char mbs_allocated;
    unsigned char offsets_needed;
    unsigned char newline_anchor;
    unsigned char word_ops_used;
    int mb_cur_max;
};

struct regexp_list {
    struct re_pattern_buffer buf;
    struct regexp_list * next;
};

struct re_dfa_t {
    re_token_t * nodes;
    Idx nodes_alloc;
    Idx nodes_len;
    Idx * nexts;
    Idx * org_indices;
    re_node_set * edests;
    re_node_set * eclosures;
    re_node_set * inveclosures;
    struct re_state_table_entry * state_table;
    re_dfastate_t * init_state;
    re_dfastate_t * init_state_word;
    re_dfastate_t * init_state_nl;
    re_dfastate_t * init_state_begbuf;
    bin_tree_t * str_tree;
    bin_tree_storage_t * str_tree_storage;
    re_bitset_ptr_t sb_char;
    int str_tree_storage_idx;
    re_hashval_t state_hash_mask;
    Idx init_node;
    Idx nbackref;
    bitset_word used_bkref_map;
    bitset_word completed_bkref_map;
    unsigned int has_plural_match : 1;
    unsigned int has_mb_node : 1;
    unsigned int is_utf8 : 1;
    unsigned int map_notascii : 1;
    unsigned int word_ops_used : 1;
    int mb_cur_max;
    bitset word_char;
    reg_syntax_t syntax;
    Idx * subexp_map;
};

union yyalloc {
    yytype_int16 yyss;
    YYSTYPE yyvs;
};

struct file_data {
    int desc;
    const char * name;
    struct stat stat;
    int dir_p;
    char * buffer;
    size_t bufsize;
    size_t buffered_chars;
    const char * * linbuf;
    int linbuf_base;
    int buffered_lines;
    int valid_lines;
    int alloc_lines;
    const char * prefix_end;
    int prefix_lines;
    const char * suffix_begin;
    int * equivs;
    int * undiscarded;
    int * realindexes;
    int nondiscarded_lines;
    char * changed_flag;
    int missing_newline;
    int equiv_max;
};

struct verifymsg_proc_data {
    char * fname;
    char * message;
    struct stat pre_stbuf;
    List * changes;
};

struct __anon_0x0006d5ac {
    union __anon_0x0006d53d __first;
    union __anon_0x0006d58d __second;
};

struct __anon_0x000a1927 {
    union __anon_0x000a18b9 __first;
    union __anon_0x000a1908 __second;
};

struct sockaddr_in {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;
    uint8_t sin_zero[8];
};

struct patch_file_data {
    const char * filename;
    FILE * fp;
    int compute_checksum;
    struct md5_ctx context;
    int final_nl;
};

struct compress_buffer {
    struct buffer * buf;
    z_stream zstr;
    int level;
};

struct __anon_0x000aff80 {
    re_dfastate_t * * sifted_states;
    re_dfastate_t * * limited_states;
    Idx last_node;
    Idx last_str_idx;
    re_node_set limits;
};

struct dests_alloc {
    re_node_set dests_node[256];
    bitset_word dests_ch[256][8];
};

struct re_dfastate_t {
    re_hashval_t hash;
    re_node_set nodes;
    re_node_set non_eps_nodes;
    re_node_set inveclosure;
    re_node_set * entrance_nodes;
    struct re_dfastate_t * * trtable;
    struct re_dfastate_t * * word_trtable;
    unsigned int context : 4;
    unsigned int halt : 1;
    unsigned int accept_mb : 1;
    unsigned int has_backref : 1;
    unsigned int has_constraint : 1;
};

struct re_fail_stack_ent_t {
    Idx idx;
    Idx node;
    regmatch_t * regs;
    re_node_set eps_via_nodes;
};

struct __anon_0x000af730 {
    union __anon_0x000af6e9 opr;
    re_token_type_t type : 8;
    unsigned int constraint : 10;
    unsigned int duplicated : 1;
    unsigned int opt_subexp : 1;
    unsigned int accept_mb : 1;
    unsigned int mb_partial : 1;
    unsigned int word_char : 1;
};

struct __anon_0x000afd51 {
    Idx node;
    Idx str_idx;
    state_array_t path;
};

struct __anon_0x000afe87 {
    re_string_t input;
    const re_dfa_t * dfa;
    int eflags;
    Idx match_last;
    Idx last_node;
    re_dfastate_t * * state_log;
    Idx state_log_top;
    Idx nbkref_ents;
    Idx abkref_ents;
    struct re_backref_cache_entry * bkref_ents;
    int max_mb_elem_len;
    Idx nsub_tops;
    Idx asub_tops;
    re_sub_match_top_t * * sub_tops;
};

union __anon_0x0006d6a0 {
    char __pad[116];
    struct __anon_0x0006d5ac __si_common;
    struct __anon_0x0006d613 __sigfault;
    struct __anon_0x0006d64b __sigpoll;
    struct __anon_0x0006d66f __sigsys;
};

union __anon_0x000a1a16 {
    char __pad[116];
    struct __anon_0x000a1927 __si_common;
    struct __anon_0x000a198c __sigfault;
    struct __anon_0x000a19c3 __sigpoll;
    struct __anon_0x000a19e6 __sigsys;
};

union sai {
    struct sockaddr_in addr_in;
    struct sockaddr addr;
};

struct bin_tree_t {
    struct bin_tree_t * parent;
    struct bin_tree_t * left;
    struct bin_tree_t * right;
    struct bin_tree_t * first;
    struct bin_tree_t * next;
    re_token_t token;
    Idx node_idx;
};

struct __anon_0x0006d6f0 {
    int si_signo;
    int si_errno;
    int si_code;
    union __anon_0x0006d6a0 __si_fields;
};

struct __anon_0x000a1a66 {
    int si_signo;
    int si_errno;
    int si_code;
    union __anon_0x000a1a16 __si_fields;
};

struct bin_tree_storage_t {
    struct bin_tree_storage_t * next;
    bin_tree_t data[31];
};


/* ── exported function declarations ──────────────────────── */

extern int Checkin(int, struct file_info *, char *, char *, char *, char *);
extern Ctype Classify_File(struct file_info *, char *, char *, char *, int, int, Vers_TS * *, int);
extern int Create_Admin(const char *, const char *, const char *, const char *, const char *, int, int, int);
extern void Create_Root(const char *, const char *);
extern void Entries_Close(List *);
extern List * Entries_Open(int, char *);
extern List * Find_Directories(char *, int, List *);
extern List * Find_Names(char *, int, int, List * *);
extern void Lock_Cleanup(void);
extern char * Make_Date(const char *);
extern char * Name_Repository(const char *, const char *);
extern cvsroot_t * Name_Root(const char * dir, const char * update_dir);
extern int No_Difference(struct file_info * finfo, Vers_TS * vers);
extern void ParseTag(char * *, char * *, int *);
extern int Parse_Info(const char *, const char *, CALLPROC, int, void *);
extern void RCS_abandon(RCSNode * rcs);
extern void RCS_addaccess(RCSNode * rcs, char * user);
extern char * RCS_branch_head(RCSNode * rcs, char * rev);
extern char * RCS_check_kflag(const char *);
extern void RCS_check_tag(const char *);
extern int RCS_checkin(RCSNode * rcs, const char * update_dir, const char * workfile_in, const char * message, const char * rev, time_t citime, int flags);
extern int RCS_checkout(RCSNode *, const char *, const char *, const char *, const char *, const char *, RCSCHECKOUTPROC, void *);
extern int RCS_cmp_file(RCSNode * rcs, const char * rev1, char * * rev1_cache, const char * rev2, const char * options, const char * filename);
extern int RCS_datecmp(const char * date1, const char * date2);
extern void RCS_delaccess(RCSNode * rcs, char * user);
extern int RCS_delete_revs(RCSNode * rcs, char * tag1, char * tag2, int inclusive);
extern int RCS_deltag(RCSNode *, const char *);
extern void RCS_deltas(RCSNode * rcs, FILE * fp, struct rcsbuffer * rcsbuf, const char * version, enum rcs_delta_op op, char * * text, size_t * len, char * * log, size_t * loglen);
extern int RCS_exec_rcsdiff(RCSNode * rcsfile, int diff_argc, const char * * diff_argv, const char * options, const char * rev1, const char * rev1_cache, const char * rev2, const char * label1, const char * label2, const char * workfile);
extern int RCS_exist_rev(RCSNode *, char *);
extern int RCS_exist_tag(RCSNode * rcs, char * tag);
extern void RCS_fully_parse(RCSNode * rcs);
extern char * RCS_getaccess(RCSNode * rcs);
extern char * RCS_getbranch(RCSNode * rcs, const char * tag, int force_tag_match);
extern char * RCS_getdate(RCSNode * rcs, const char * date, int force_tag_match);
extern char * RCS_getexpand(RCSNode *);
extern List * RCS_getlocks(RCSNode * rcs);
extern time_t RCS_getrevtime(RCSNode *, const char *, char *, int);
extern char * RCS_gettag(RCSNode *, const char *, int, int *);
extern char * RCS_getversion(RCSNode *, const char *, const char *, int, int *);
extern char * RCS_head(RCSNode * rcs);
extern int RCS_isbranch(RCSNode * rcs, const char * rev);
extern int RCS_isdead(RCSNode *, const char *);
extern int RCS_lock(RCSNode * rcs, const char * rev, int lock_quiet);
extern char * RCS_magicrev(RCSNode *, char *);
extern int RCS_merge(RCSNode *, const char *, const char *, const char *, const char *, const char *);
extern int RCS_nodeisbranch(RCSNode *, const char *);
extern RCSNode * RCS_parse(const char *, const char *);
extern RCSNode * RCS_parsercsfile(const char * rcsfile);
extern void RCS_reparsercsfile(RCSNode * rdata, FILE * * pfp, struct rcsbuffer * rcsbufp);
extern void RCS_rewrite(RCSNode *, Deltatext *, char *);
extern int RCS_setattic(RCSNode * rcs, int toattic);
extern int RCS_setbranch(RCSNode * rcs, const char * rev);
extern void RCS_setexpand(RCSNode * rcs, const char * expand);
extern void RCS_setincexc(void * * keywords_in, const char * arg);
extern void RCS_setlocalid(const char * infopath, unsigned int ln, void * * keywords_in, const char * arg);
extern int RCS_settag(RCSNode *, const char *, const char *);
extern List * RCS_symbols(RCSNode *);
extern char * RCS_tag2rev(RCSNode * rcs, char * tag);
extern int RCS_unlock(RCSNode * rcs, char * rev, int unlock_quiet);
extern int RCS_valid_rev(const char *);
extern char * RCS_whatbranch(RCSNode *, const char *);
extern int Reader_Lock(char *);
extern void Register(List *, const char *, const char *, const char *, const char *, const char *, const char *, const char *);
extern void SIG_beginCrSect(void);
extern void SIG_endCrSect(void);
extern int SIG_inCrSect(void);
extern void Sanitize_Repository_Name(char *);
extern void Scratch_Entry(List *, const char *);
extern const char * Short_Repository(const char *);
extern void Simple_Lock_Cleanup(void);
extern void Subdir_Deregister(List *, const char *, const char *);
extern void Subdir_Register(List *, const char *, const char *);
extern void Subdirs_Known(List *);
extern void Update_Logfile(const char * repository, const char * xmessage, FILE * xlogfp, List * xchanges);
extern Vers_TS * Version_TS(struct file_info * finfo, char * options, char * tag, char * date, int force_tag_match, int set_time);
extern void WriteTag(const char *, const char *, const char *, int, const char *, const char *);
extern void WriteTemplate(const char *, int, const char *);
extern char * Xasnprintf(char * resultbuf, size_t * lengthp, const char * format, ...);
extern char * Xasprintf(const char *, ...);
extern char * Xreadlink(const char * link, size_t size);
extern char * Xstrdup(const char *);
extern void __aeabi_idiv(void);
extern void *__aeabi_idiv0(/* signature unavailable */);
extern void *__aeabi_idivmod(/* signature unavailable */);
extern void *__aeabi_ldiv0(/* signature unavailable */);
extern void __aeabi_uidiv(void);
extern void __aeabi_uidivmod(void);
extern void *__divsi3(/* signature unavailable */);
extern int __gen_tempname(char * tmpl, int kind);
extern int __path_search(char * tmpl, size_t tmpl_len, const char * dir, const char * pfx, int try_tmpdir);
extern void *__udivsi3(/* signature unavailable */);
extern void *_fini(/* signature unavailable */);
extern int _getopt_internal(int, char * *, const char *, const struct option *, int *, int, int);
extern int _getopt_internal_r(int, char * *, const char *, const struct option *, int *, int, int, struct _getopt_data *);
extern int _getopt_long_only_r(int argc, char * * argv, const char * options, const struct option * long_options, int * opt_index, struct _getopt_data * d);
extern int _getopt_long_r(int argc, char * * argv, const char * options, const struct option * long_options, int * opt_index, struct _getopt_data * d);
extern void *_init(/* signature unavailable */);
extern void *_start(/* signature unavailable */);
extern void *_start_c(/* signature unavailable */);
extern void _tr_align(deflate_state * s);
extern void _tr_flush_block(deflate_state * s, charf * buf, ulg stored_len, int eof);
extern void _tr_init(deflate_state * s);
extern void _tr_stored_block(deflate_state * s, charf * buf, ulg stored_len, int eof);
extern int _tr_tally(deflate_state * s, unsigned int dist, unsigned int lc);
extern int add(int, char * *);
extern int add_rcs_file(const char *, const char *, const char *, const char *, const char *, const char *, const char *, int, char * *, const char *, size_t, FILE *, _Bool);
extern int addnode(List *, Node *);
extern int addnode_at_front(List *, Node *);
extern uLong adler32(uLong adler, const Bytef * buf, uInt len);
extern uLong adler32_combine(uLong adler1, uLong adler2, long int len2);
extern int admin(int, char * *);
extern void analyze_hunk(struct change *, int *, int *, int *, int *, int *, int *);
extern int annotate(int, char * *);
extern char * asnprintf(char * resultbuf, size_t * lengthp, const char * format, ...);
extern char * backup_file(const char *, const char *);
extern void base_deregister(struct file_info * finfo);
extern char * base_get(struct file_info * finfo);
extern size_t base_len(const char * name);
extern char * base_name(const char * name);
extern void base_register(struct file_info * finfo, char * rev);
extern void begin_output(void);
extern void buf_append_buffer(struct buffer *, struct buffer *);
extern void buf_append_char(struct buffer *, int);
extern void buf_append_data(struct buffer *, struct buffer_data *, struct buffer_data *);
extern int buf_chain_length(struct buffer_data * buf);
extern int buf_copy_counted(struct buffer *, struct buffer *, int *);
extern void buf_copy_data(struct buffer *, struct buffer_data *, struct buffer_data *);
extern void buf_copy_lines(struct buffer *, struct buffer *, int);
extern int buf_count_mem(struct buffer *);
extern int buf_empty(struct buffer *);
extern int buf_empty_p(struct buffer *);
extern int buf_flush(struct buffer *, _Bool);
extern void buf_free(struct buffer *);
extern void buf_free_data(struct buffer *);
extern int buf_get_fd(struct buffer *);
extern struct buffer * buf_initialize(type_buf_input, type_buf_output, type_buf_flush, type_buf_block, type_buf_get_fd, type_buf_shutdown, type_buf_memory_error, void *);
extern int buf_input_data(struct buffer *, size_t *);
extern int buf_length(struct buffer *);
extern struct buffer * buf_nonio_initialize(void (*)(struct buffer *));
extern void buf_output(struct buffer *, const char *, size_t);
extern void buf_output0(struct buffer *, const char *);
extern int buf_read_data(struct buffer *, size_t, char * *, size_t *);
extern int buf_read_file(FILE *, long int, struct buffer_data * *, struct buffer_data * *);
extern int buf_read_file_to_eof(FILE * f, struct buffer_data * * retp, struct buffer_data * * lastp);
extern int buf_read_line(struct buffer *, char * *, size_t *);
extern int buf_read_short_line(struct buffer *, char * *, size_t *, size_t);
extern int buf_send_counted(struct buffer *);
extern int buf_send_output(struct buffer *);
extern int buf_send_special_count(struct buffer *, int);
extern int buf_shutdown(struct buffer *);
extern size_t buffer_lcm(size_t a, size_t b);
extern char * canon_host(const char * host);
extern char * canon_host_r(const char * host, int * cherror);
extern char * canonicalize_file_name(const char * name);
extern char * canonicalize_filename_mode(const char * name, canonicalize_mode_t can_mode);
extern void cat_module(int status);
extern const char * ch_strerror(void);
extern int change_letter(int inserts, int deletes);
extern int change_mode(const char *, const char *, int);
extern int chdir_long(char * dir);
extern void check_numeric(const char * rev, int argc, char * * argv);
extern int checkout(int, char * *);
extern void cleanup_register(void (*)(void));
extern void clear_history_lock(void);
extern void clear_val_tags_lock(void);
extern void client_expand_modules(int argc, char * * argv, int local);
extern void client_import_done(void);
extern void client_import_setup(char *);
extern void client_nonexpanded_setup(void);
extern void client_notify(const char *, const char *, const char *, int, const char *);
extern int client_process_import_file(char *, char *, char *, int, char * *, char *, int, int);
extern void client_send_expansions(int local, char * where, int build_dirs);
extern void client_senddate(const char *);
extern struct quoting_options * clone_quoting_options(struct quoting_options * o);
extern void close_module(DBM *);
extern void close_on_exec(int);
extern void close_stdout(void);
extern void close_stdout_set_file_name(const char * file);
extern char * cmdlineescape(char, char *);
extern char * cmdlinequote(char, char *);
extern int commit(int, char * *);
extern int compare_revnums(const char * rev1, const char * rev2);
extern int compress(Bytef * dest, uLongf * destLen, const Bytef * source, uLong sourceLen);
extern int compress2(Bytef * dest, uLongf * destLen, const Bytef * source, uLong sourceLen, int level);
extern uLong compressBound(uLong sourceLen);
extern struct buffer * compress_buffer_initialize(struct buffer * buf, int input, int level, void (*memory)(struct buffer *));
extern char * concat(const char * s1, const char * s2, const char * s3);
extern void connect_to_pserver(cvsroot_t *, struct buffer * *, struct buffer * *, int, int);
extern void copy_file(const char *, const char *);
extern uLong crc32(uLong, const Bytef *, uInt);
extern uLong crc32_combine(uLong crc1, uLong crc2, long int len2);
extern char * crypt_trad(const char * key, const char * setting);
extern void cvs_flusherr(void);
extern void cvs_flushout(void);
extern void cvs_outerr(const char *, size_t);
extern void cvs_output(const char *, size_t);
extern void cvs_output_binary(char * str, size_t len);
extern void cvs_output_ex(const char * str, size_t len, int buftag);
extern void cvs_output_tagged(const char *, const char *);
extern FILE * cvs_temp_file(char * *);
extern char * cvs_temp_name(void);
extern void cvs_trace(int, const char *, ...);
extern int cvslog(int, char * *);
extern int cvsremove(int, char * *);
extern int cvsstatus(int argc, char * * argv);
extern int cvstag(int argc, char * * argv);
extern _Bool cycle_check(struct cycle_check_state * state, const struct stat * sb);
extern void cycle_check_init(struct cycle_check_state * state);
extern char * date_from_time_t(time_t unixtime);
extern void date_to_internet(char *, const char *);
extern void date_to_tm(struct tm * dest, const char * source);
extern void debug_script(struct change * sp);
extern int deflate(z_streamp, int);
extern uLong deflateBound(z_streamp strm, uLong sourceLen);
extern int deflateCopy(z_streamp dest, z_streamp source);
extern int deflateEnd(z_streamp);
extern int deflateInit2_(z_streamp strm, int level, int method, int windowBits, int memLevel, int strategy, const char * version, int stream_size);
extern int deflateInit_(z_streamp, int, const char *, int);
extern int deflateParams(z_streamp strm, int level, int strategy);
extern int deflatePrime(z_streamp strm, int bits, int value);
extern int deflateReset(z_streamp strm);
extern int deflateSetDictionary(z_streamp strm, const Bytef * dictionary, uInt dictLength);
extern int deflateSetHeader(z_streamp strm, gz_headerp head);
extern int deflateTune(z_streamp strm, int good_length, int max_lazy, int nice_length, int max_chain);
extern void dellist(List * *);
extern void delnode(Node *);
extern int depth(int, char * *);
extern char * descramble(char *);
extern int diff(int, char * *);
extern int diff3_run(int argc, char * * argv, char * out, const struct diff_callbacks * callbacks_arg);
extern int diff_2_files(struct file_data * filevec, int depth);
extern int diff_dirs(const struct file_data * filevec, int (*handle_file)(const char *, const char *, const char *, const char *, int), int depth);
extern void diff_error(const char * format, const char * arg, const char * arg1);
extern int diff_exec(const char *, const char *, const char *, const char *, int, const char * *, const char *);
extern int diff_run(int, char * *, const char *, const struct diff_callbacks *);
extern char * dir_file_pathname(const char * dir, const char * file);
extern size_t dir_len(const char * file);
extern char * dir_name(const char * file);
extern void do_editor(const char * dir, char * * messagep, const char * repository, List * changes);
extern int do_module(DBM *, char *, enum mtype, char *, CALLBACKPROC, char *, int, int, int, int, char *);
extern int do_update(int argc, char * * argv, char * xoptions, char * xtag, char * xdate, int xforce, int local, int xbuild, int xaflag, int xprune, int xpipeout, int which, char * xjoin_rev1, char * xjoin_date1, char * xjoin_rev2, char * xjoin_date2, char * preload_update_dir, int xdotemplate, char * repository);
extern void do_verify(char * * messagep, const char * repository, List * changes);
extern int dup_safer(int fd);
extern int edit(int, char * *);
extern void edit_file(void * data, List * ent_list, const char * short_pathname, const char * filename);
extern void editor_set(const char *, const char *, const char *);
extern int editors(int, char * *);
extern void editors_output(const char * fullname, const char * p);
extern char * emptydir_name(void);
extern char * entries_time(time_t unixtime);
extern void error(int, int, const char *, ...);
extern int excluded_filename(const char *);
extern int expand_at_signs(const char *, size_t, FILE *);
extern char * expand_path(const char *, const char *, _Bool, const char *, int);
extern void expand_string(char * *, size_t *, size_t);
extern void expand_wild(int, char * *, int *, char * * *);
extern void fatal(const char * m);
extern struct buffer * fd_buffer_initialize(int, pid_t, cvsroot_t *, _Bool, void (*)(struct buffer *));
extern int fd_safer(int fd);
extern int file_has_markers(const struct file_info *);
extern void fileattr_free(void);
extern char * fileattr_get(const char *, const char *);
extern char * fileattr_get0(const char *, const char *);
extern char * fileattr_getall(const char * filename);
extern char * fileattr_modify(char *, const char *, const char *, int, int);
extern void fileattr_newfile(const char * filename);
extern void fileattr_set(const char *, const char *, const char *);
extern void fileattr_setall(const char * filename, const char * attrs);
extern void fileattr_startdir(const char *);
extern void fileattr_write(void);
extern struct change * find_change(struct change *);
extern List * find_files(const char *, const char *);
extern struct change * find_reverse_change(struct change * start);
extern Node * findnode(List *, const char *);
extern Node * findnode_fn(List *, const char *);
extern void finish_output(void);
extern void flush_output(void);
extern char * format_cmdline(_Bool, const char *, const char *, ...);
extern char * format_date_alloc(char *);
extern void fperrmsg(FILE *, int, int, char *, ...);
extern void free_config(struct config *);
extern void free_cwd(struct saved_cwd * cwd);
extern void free_keywords(void * keywords);
extern void free_names(int *, char * *);
extern void freenode(Node *);
extern void freercsnode(RCSNode * *);
extern void freevers_ts(Vers_TS * * versp);
extern int fsortcmp(const Node *, const Node *);
extern char * gca(const char *, const char *);
extern const uLongf * get_crc_table(void);
extern char * get_cvs_password(void);
extern int get_cvs_port_number(const cvsroot_t *);
extern const char * get_cvs_tmp_dir(void);
extern _Bool get_date(struct timespec * result, const char * p, const struct timespec * now);
extern void get_file(const char * name, const char * fullname, const char * mode, char * * buf, size_t * bufsize, size_t * len);
extern char * get_homedir(void);
extern enum quoting_style get_quoting_style(struct quoting_options * o);
extern int get_responses_and_close(void);
extern struct config * get_root_allow_config(const char *, const char *);
extern int get_server_responses(void);
extern const char * get_system_temp_dir(void);
extern char * getcaller(void);
extern List * getlist(void);
extern Node * getnode(void);
extern void gettime(struct timespec * ts);
extern char * gmformat_time_t(time_t unixtime);
extern ssize_t gnu_getline(char * * restrict, size_t * restrict, FILE * restrict);
extern char * gnu_getpass(const char * prompt);
extern int gunzip_and_write(int fd, const char * fullname, unsigned char * buf, size_t size);
extern int history(int, char * *);
extern int history_lock(const char * xrepository);
extern void history_write(int, const char *, const char *, const char *, const char *);
extern void ign_add(char *, int);
extern void ign_add_file(char *, int);
extern void ign_dir_add(char *);
extern int ign_name(char *);
extern void ign_setup(void);
extern int ignore_directory(const char *);
extern void ignore_files(List *, List *, const char *, Ignore_proc);
extern int import(int, char * *);
extern char * increment_revnum(const char * rev);
extern int inflate(z_streamp strm, int flush);
extern int inflateCopy(z_streamp dest, z_streamp source);
extern int inflateEnd(z_streamp strm);
extern int inflateGetHeader(z_streamp strm, gz_headerp head);
extern int inflateInit2_(z_streamp strm, int windowBits, const char * version, int stream_size);
extern int inflateInit_(z_streamp strm, const char * version, int stream_size);
extern int inflatePrime(z_streamp strm, int bits, int value);
extern int inflateReset(z_streamp strm);
extern int inflateSetDictionary(z_streamp strm, const Bytef * dictionary, uInt dictLength);
extern int inflateSync(z_streamp strm);
extern int inflateSyncPoint(z_streamp strm);
extern void inflate_fast(z_streamp strm, unsigned int start);
extern int inflate_table(codetype type, short unsigned int * lens, unsigned int codes, code * * table, unsigned int * bits, short unsigned int * work);
extern int init(int, char * *);
extern struct hostent * init_sockaddr(struct sockaddr_in * name, char * hostname, unsigned int port);
extern int insert_before(List *, Node *, Node *);
extern _Bool isSamePath(const char * path1_in, const char * path2_in);
extern _Bool isThisHost(const char * otherhost);
extern _Bool isaccessible(const char *, const int);
extern _Bool isdevice(const char * file);
extern _Bool isdir(const char *);
extern int isempty(List * stack);
extern int isemptydir(const char * dir, int might_not_exist);
extern _Bool isfile(const char *);
extern ssize_t islink(const char *);
extern _Bool isreadable(const char *);
extern _Bool iswritable(const char *);
extern int joining(void);
extern const char * last_component(const char *);
extern void line2argv(int * pargc, char * * * argv, char * line, char * sepchars);
extern int line_cmp(const char * s1, const char * s2);
extern int list_isempty(List *);
extern cvsroot_t * local_cvsroot(const char *);
extern void lock_dir_for_write(const char *);
extern void lock_tree_promotably(int, char * *, int, int, int);
extern void log_buffer_closelog(struct buffer *);
extern struct buffer * log_buffer_initialize(struct buffer *, FILE *, _Bool, size_t, _Bool, void (*)(struct buffer *));
extern struct buffer * log_buffer_rewind(struct buffer *);
extern int login(int, char * *);
extern void logmsg_cleanup(int err);
extern int logout(int, char * *);
extern long unsigned int lookup_command_attribute(const char *);
extern int ls(int, char * *);
extern int main(int argc, char * * argv);
extern void make_bufs_from_fds(int, int, int, cvsroot_t *, struct buffer * *, struct buffer * *, int);
extern void make_directories(const char *);
extern void make_directory(const char *);
extern char * make_file_label(const char * path, const char * rev, RCSNode * rcs);
extern char * make_message_rcsvalid(const char * message);
extern void mark_up_to_date(const char * file);
extern void * md5_buffer(const char * buffer, size_t len, void * resblock);
extern void * md5_finish_ctx(struct md5_ctx * ctx, void * resbuf);
extern void md5_init_ctx(struct md5_ctx * ctx);
extern void md5_process_block(const void * buffer, size_t len, struct md5_ctx * ctx);
extern void md5_process_bytes(const void * buffer, size_t len, struct md5_ctx * ctx);
extern void * md5_read_ctx(const struct md5_ctx * ctx, void * resbuf);
extern int md5_stream(FILE * stream, void * resblock);
extern void mergelists(List * dest, List * * src);
extern void message(const char * format, const char * arg1, const char * arg2);
extern void message5(const char * format, const char * arg1, const char * arg2, const char * arg3, const char * arg4);
extern int mkdir_if_needed(const char *);
extern int mkmodules(char * dir);
extern char * mode_to_string(mode_t);
extern struct buffer * ms_buffer_initialize(void (*)(struct buffer *), struct buffer *, struct buffer *);
extern int my_module(DBM * db, char * mname, enum mtype m_type, char * msg, CALLBACKPROC callback_proc, char * where, int shorten, int local_specified, int run_module_prog, int build_dirs, char * extra_arg, List * stack);
extern void mydbm_close(DBM *);
extern datum mydbm_fetch(DBM *, datum);
extern datum mydbm_firstkey(DBM * db);
extern datum mydbm_nextkey(DBM * db);
extern DBM * mydbm_open(char *, int, int);
extern int mydbm_store(DBM *, datum, datum, int);
extern char * normalize_cvsroot(const cvsroot_t * root);
extern void notify_check(const char *, const char *);
extern void notify_do(int, const char *, const char *, const char *, const char *, const char *, const char *);
extern size_t nstrftime(char * s, size_t maxsize, const char * format, const struct tm * tp, int ut, int ns);
extern int numdots(const char * s);
extern void open_connection_to_server(cvsroot_t *, struct buffer * *, struct buffer * *);
extern DBM * open_module(void);
extern void option_with_arg(const char *, const char *);
extern void output_1_line(const char * text, const char * limit, const char * flag_format, const char * line_flag);
extern struct buffer * packetizing_buffer_initialize(struct buffer * buf, int (*inpfn)(void *, const char *, char *, size_t), int (*outfn)(void *, const char *, char *, size_t, size_t *), void * fnclosure, void (*memory)(struct buffer *));
extern void * pagealign_alloc(size_t size);
extern void pagealign_free(void * aligned_ptr);
extern void * pagealign_xalloc(size_t size);
extern void parseServerOptions(int argc, char * * argv);
extern struct config * parse_config(const char *, const char *);
extern cvsroot_t * parse_cvsroot(const char *);
extern _Bool parse_error(const char *, unsigned int);
extern void parse_tagdate(char * *, char * *, const char *);
extern int patch(int, char * *);
extern int pathname_levels(const char * p);
extern void perror_with_name(const char *);
extern void pfatal_with_name(const char * text);
extern int piped_child(const char * * command, int * tofdp, int * fromfdp, _Bool fix_stderr);
extern void * pop(List * stack);
extern char * pop_string(List * stack);
extern int posix_fnmatch(const char *, const char *, int);
extern void pr_forward_ed_script(struct change * script);
extern char * previous_rev(RCSNode * rcs, const char * rev);
extern const char * primary_root_inverse_translate(const char * root_in);
extern const char * primary_root_translate(const char *);
extern void print_1_line(const char * line_flag, const char * * line);
extern void print_context_header(struct file_data *, int);
extern void print_context_script(struct change * script, int unidiff_flag);
extern void print_ed_script(struct change * script);
extern void print_ifdef_script(struct change * script);
extern void print_message_queue(void);
extern void print_normal_script(struct change * script);
extern void print_number_range(int sepchar, struct file_data * file, int a, int b);
extern void print_rcs_script(struct change * script);
extern void print_script(struct change *, struct change * (*)(struct change *), void (*)(struct change *));
extern void print_sdiff_script(struct change * script);
extern int printf_fetchargs(va_list args, arguments * a);
extern void printf_output(const char *, ...);
extern int printf_parse(const char * format, char_directives * d, arguments * a);
extern void printlist(List * list);
extern void pserver_authenticate_connection(void);
extern void pserver_start_listener(void);
extern void push(List * stack, void * elem);
extern void push_env_temp_dir(void);
extern void push_string(List * stack, char * elem);
extern char * quotearg(const char * arg);
extern char * quotearg_alloc(const char * arg, size_t argsize, const struct quoting_options * o);
extern size_t quotearg_buffer(char * buffer, size_t buffersize, const char * arg, size_t argsize, const struct quoting_options * o);
extern char * quotearg_char(const char * arg, char ch);
extern char * quotearg_colon(const char * arg);
extern char * quotearg_n(int n, const char * arg);
extern char * quotearg_n_style(int n, enum quoting_style s, const char * arg);
extern char * quotearg_n_style_mem(int n, enum quoting_style s, const char * arg, size_t argsize);
extern char * quotearg_style(enum quoting_style s, const char * arg);
extern int rcs_change_text(const char * name, char * textbuf, size_t textlen, const char * diffbuf, size_t difflen, char * * retbuf, size_t * retlen);
extern char * re_comp(const char * s);
extern int re_compile_fastmap(struct re_pattern_buffer * bufp);
extern const char * re_compile_pattern(const char * pattern, size_t length, struct re_pattern_buffer * bufp);
extern int re_exec(const char * s);
extern regoff_t re_match(struct re_pattern_buffer * bufp, const char * string, Idx length, Idx start, struct re_registers * regs);
extern regoff_t re_match_2(struct re_pattern_buffer * bufp, const char * string1, Idx length1, const char * string2, Idx length2, Idx start, struct re_registers * regs, Idx stop);
extern regoff_t re_search(struct re_pattern_buffer * bufp, const char * string, Idx length, Idx start, regoff_t range, struct re_registers * regs);
extern regoff_t re_search_2(struct re_pattern_buffer * bufp, const char * string1, Idx length1, const char * string2, Idx length2, Idx start, regoff_t range, struct re_registers * regs, Idx stop);
extern void re_set_registers(struct re_pattern_buffer * bufp, struct re_registers * regs, __re_size_t num_regs, regoff_t * starts, regoff_t * ends);
extern reg_syntax_t re_set_syntax(reg_syntax_t syntax);
extern _Bool readBool(const char * infopath, const char * option, const char * p, _Bool * val);
extern int read_and_gzip(int fd, const char * fullname, unsigned char * * buf, size_t * size, size_t * len, int level);
extern void read_cvsrc(int *, char * * *, const char *);
extern int read_files(struct file_data * filevec, int pretend_binary);
extern void read_from_server(char * buf, size_t len);
extern int regcomp(regex_t * restrict preg, const char * restrict pattern, int cflags);
extern size_t regerror(int errcode, const regex_t * restrict preg, char * restrict errbuf, size_t errbuf_size);
extern int regexec(const regex_t * restrict preg, const char * restrict string, size_t nmatch, regmatch_t * pmatch, int eflags);
extern void regfree(regex_t * preg);
extern int release(int, char * *);
extern void removenode(Node * p);
extern void rename_file(const char *, const char *);
extern void resolve_symlink(char * * filename);
extern int restore_cwd(const struct saved_cwd * cwd);
extern void root_allow_add(const char * arg, const char * configPath);
extern void root_allow_free(void);
extern _Bool root_allow_ok(const char *);
extern void root_allow_regexp_add(const char * arg, const char * configPath);
extern int root_allow_used(void);
extern int rpl_getopt(int argc, const char * * argv, const char * optstring);
extern int rpl_getopt_long(int argc, char * * argv, const char * options, const struct option * long_options, int * opt_index);
extern int rpl_getopt_long_only(int argc, char * * argv, const char * options, const struct option * long_options, int * opt_index);
extern int rpl_gettimeofday(struct timeval * restrict, void * restrict);
extern int rpl_glob(const char * pattern, int flags, int (*errfunc)(const char *, int), glob_t * pglob);
extern int rpl_glob_pattern_p(const char * pattern, int quote);
extern void rpl_globfree(glob_t * pglob);
extern struct tm * rpl_gmtime(const time_t * timep);
extern struct tm * rpl_localtime(const time_t * timep);
extern int rpl_lstat(const char * file, struct stat * sbuf);
extern int rpl_mkdir(const char *, mode_t);
extern int rpl_mkstemp(char * template);
extern int rpl_rename(const char * src, const char * dst);
extern int rpl_strcasecmp(const char * s1, const char * s2);
extern void rpl_tzset(void);
extern int rpmatch(const char * response);
extern void run_add_arg(const char * s);
extern void run_add_arg_p(int *, size_t *, char * * *, const char *);
extern void run_arg_free_p(int, char * *);
extern int run_exec(const char *, const char *, const char *, int);
extern int run_piped(int * tofdp, int * fromfdp);
extern FILE * run_popen(const char * cmd, const char * mode);
extern void run_print(FILE * fp);
extern void run_setup(const char *);
extern int safe_location(char *);
extern int save_cwd(struct saved_cwd * cwd);
extern char * scramble(char * str);
extern void send_a_repository(const char *, const char *, const char *);
extern void send_arg(const char *);
extern void send_file_names(int, char * *, unsigned int);
extern void send_files(int, char * *, int, int, unsigned int);
extern void send_init_command(void);
extern void send_options(int, const char * *);
extern void send_to_server(const char *, size_t);
extern void send_to_server_via(struct buffer * via_buffer, const char * str, size_t len);
extern int server(int argc, char * * argv);
extern void server_checked_in(const char *, const char *, const char *);
extern void server_cleanup(void);
extern void server_clear_entstat(const char *, const char *);
extern void server_clear_template(const char * update_dir, const char * repository);
extern void server_copy_file(const char *, const char *, const char *, const char *);
extern void server_edit_file(struct file_info * finfo);
extern void server_modtime(struct file_info *, Vers_TS *);
extern void server_pathname_check(char * path);
extern void server_pause_check(void);
extern void server_register(const char * name, const char * version, const char * timestamp, const char * options, const char * tag, const char * date, const char * conflict);
extern void server_scratch(const char *);
extern void server_scratch_entry_only(void);
extern void server_set_entstat(const char * update_dir, const char * repository);
extern void server_set_sticky(const char * update_dir, const char * repository, const char * tag, const char * date, int nonbranch);
extern void server_template(const char * update_dir, const char * repository);
extern void server_update_entries(const char * file, const char * update_dir, const char * repository, enum server_updated_arg4 updated);
extern void server_updated(struct file_info *, Vers_TS *, enum server_updated_arg4, mode_t, unsigned char *, struct buffer *);
extern int server_use_rcs_diff(void);
extern int set_block(struct buffer *);
extern int set_char_quoting(struct quoting_options * o, char c, int i);
extern int set_nonblock(struct buffer *);
extern int set_nonblock_fd(int fd);
extern void set_quoting_style(struct quoting_options * o, enum quoting_style s);
extern void setup_logfiles(char *, struct buffer * *, struct buffer * *);
extern void setup_output(const char * name0, const char * name1, int depth);
extern char * shell_escape(char * buf, const char * str);
extern void * shift(List * stack);
extern char * shift_string(List * stack);
extern void signals_register(void (*)(int));
extern int sip(struct file_data * current, int skip_test);
extern void sleep_past(time_t);
extern void slurp(struct file_data * current);
extern void sortlist(List *, int (*)(const Node *, const Node *));
extern int special_file_mismatch(struct file_info * finfo, char * rev1, char * rev2);
extern int start_recursion(FILEPROC, FILESDONEPROC, DIRENTPROC, DIRLEAVEPROC, void *, int, char * *, int, int, int, int, char *, int, char *);
extern void start_rsh_server(cvsroot_t * root, struct buffer * * to_server_p, struct buffer * * from_server_p);
extern void start_server(void);
extern char * strcat_filename_onto_homedir(const char *, const char *);
extern int strip_trailing_newlines(char * str);
extern _Bool strip_trailing_slashes(char *);
extern size_t strnlen1(const char * string, size_t maxlen);
extern _Bool supported_request(const char *);
extern int supported_response(const char * name);
extern int symb(int, char * *);
extern void tag_check_valid(const char *, int, char * *, int, int, char *, _Bool);
extern char * time_stamp(const char * file);
extern void tm_to_internet(char *, const struct tm *);
extern int translate_line_number(const struct file_data * file, int lnum);
extern void translate_range(const struct file_data * file, int a, int b, int * aptr, int * bptr);
extern int unedit(int, char * *);
extern time_t unix_time_stamp(const char * file);
extern int unlink_file(const char *);
extern int unlink_file_dir(const char *);
extern void unshift(List * stack, void * elem);
extern void unshift_string(List * stack, char * elem);
extern int update(int argc, char * * argv);
extern void update_delproc(Node *);
extern void usage(void);
extern int val_tags_lock(const char *);
extern void variable_set(char *);
extern char * vasnprintf(char *, size_t *, const char *, va_list);
extern int version(int argc, char * * argv);
extern int walklist(List *, int (*)(Node *, void *), void *);
extern int watch(int argc, char * * argv);
extern int watch_add(int argc, char * * argv);
extern void watch_modify_watchers(const char * file, struct addremove_args * what);
extern int watch_off(int, char * *);
extern int watch_on(int, char * *);
extern int watch_remove(int argc, char * * argv);
extern int watchers(int argc, char * * argv);
extern void wrap_add(char * line, int isTemp);
extern void wrap_add_entry(WrapperEntry * e, int temp);
extern void wrap_add_file(const char * file, int temp);
extern void wrap_free_entry(WrapperEntry * e);
extern void wrap_free_entry_internal(WrapperEntry * e);
extern void wrap_fromcvs_process_file(const char * fileName);
extern void wrap_kill(void);
extern void wrap_kill_temp(void);
extern int wrap_merge_is_copy(const char * fileName);
extern int wrap_name_has(const char * name, WrapMergeHas has);
extern char * wrap_rcsoption(const char * filename, int asflag);
extern void wrap_restore_saved(void);
extern void wrap_send(void);
extern void wrap_setup(void);
extern char * wrap_tocvs_process_file(const char * fileName);
extern void wrap_unparse_rcs_options(char * * line, int first_call_p);
extern void write_letter(struct file_info * finfo, int letter);
extern void write_output(const char *, size_t);
extern void * x2nrealloc(void * p, size_t * pn, size_t s);
extern void * x2realloc(void * p, size_t * pn);
extern void xalloc_die(void);
extern void * xcalloc(size_t n, size_t s);
extern char * xcanonicalize_file_name(const char * path);
extern void xchmod(const char *, int);
extern int xcmp(const char *, const char *);
extern FILE * xfopen(const char * name, const char * mode);
extern void xfree(void * p);
extern char * xgetcwd(void);
extern char * xgethostname(void);
extern void * xmalloc(size_t n);
extern void * xmemdup(const void * p, size_t s);
extern void * xmemset(void * p, int c, size_t s);
extern void * xnmalloc(size_t n, size_t s);
extern void * xnrealloc(void * p, size_t n, size_t s);
extern char * xreadlink(const char *, size_t);
extern void * xrealloc(void * p, size_t n);
extern void xrealloc_and_strcat(char * * str, size_t * lenp, const char * src);
extern char * xstrdup(const char * string);
extern void * xzalloc(size_t s);
extern _Bool yesno(void);
extern int yyparse(parser_control * pc);
extern const char * zError(int err);
extern voidpf zcalloc(voidpf, unsigned int, unsigned int);
extern void zcfree(voidpf, voidpf);
extern uLong zlibCompileFlags(void);
extern const char * zlibVersion(void);

#ifdef __cplusplus
}
#endif

#endif /* CVS_H */
