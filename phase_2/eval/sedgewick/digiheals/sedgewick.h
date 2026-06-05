/* Auto-generated from /home/ricardo/code/aarno/amp/digiheals/chess-aces/phase_2/eval/sedgewick/digiheals/unstripped/proftpd */
/* Self-contained: requires no system headers. */
#ifndef PROFTPD_H
#define PROFTPD_H

#ifdef __cplusplus
extern "C" {
#endif

/* ── enums ───────────────────────────────────────────────── */

enum __anon_0x00001344 {
    PR_SYM_CONF = 1,
    PR_SYM_CMD = 2,
    PR_SYM_AUTH = 3,
    PR_SYM_HOOK = 4,
};

enum __anon_0x0003d5a8 {
    PR_NETACL_TYPE_ALL = 0,
    PR_NETACL_TYPE_NONE = 1,
    PR_NETACL_TYPE_IPMASK = 2,
    PR_NETACL_TYPE_IPMATCH = 3,
    PR_NETACL_TYPE_DNSMATCH = 4,
    PR_NETACL_TYPE_IPGLOB = 5,
    PR_NETACL_TYPE_DNSGLOB = 6,
};

enum __anon_0x0007a234 {
    JSON_NULL = 0,
    JSON_BOOL = 1,
    JSON_STRING = 2,
    JSON_NUMBER = 3,
    JSON_ARRAY = 4,
    JSON_OBJECT = 5,
};

enum isa_feature {
    isa_nobit = 0,
    isa_bit_quirk_vlldm = 1,
    isa_bit_fp16fml = 2,
    isa_bit_mve = 3,
    isa_bit_cmse = 4,
    isa_bit_quirk_armv6kz = 5,
    isa_bit_dotprod = 6,
    isa_bit_crc32 = 7,
    isa_bit_xscale = 8,
    isa_bit_vfpv2 = 9,
    isa_bit_vfpv3 = 10,
    isa_bit_vfpv4 = 11,
    isa_bit_lpae = 12,
    isa_bit_armv7em = 13,
    isa_bit_fp16 = 14,
    isa_bit_adiv = 15,
    isa_bit_fp_d32 = 16,
    isa_bit_be8 = 17,
    isa_bit_fp16conv = 18,
    isa_bit_thumb2 = 19,
    isa_bit_crypto = 20,
    isa_bit_mp = 21,
    isa_bit_sec = 22,
    isa_bit_sb = 23,
    isa_bit_bf16 = 24,
    isa_bit_predres = 25,
    isa_bit_armv4 = 26,
    isa_bit_quirk_cm3_ldrd = 27,
    isa_bit_smallmul = 28,
    isa_bit_armv5t = 29,
    isa_bit_armv8_1m_main = 30,
    isa_bit_armv6 = 31,
    isa_bit_thumb = 32,
    isa_bit_quirk_no_asmcpu = 33,
    isa_bit_armv7 = 34,
    isa_bit_armv8 = 35,
    isa_bit_i8mm = 36,
    isa_bit_fp_dbl = 37,
    isa_bit_armv5te = 38,
    isa_bit_fpv5 = 39,
    isa_bit_iwmmxt2 = 40,
    isa_bit_notm = 41,
    isa_bit_cdecp0 = 42,
    isa_bit_cdecp1 = 43,
    isa_bit_cdecp2 = 44,
    isa_bit_cdecp3 = 45,
    isa_bit_iwmmxt = 46,
    isa_bit_cdecp4 = 47,
    isa_bit_cdecp5 = 48,
    isa_bit_cdecp6 = 49,
    isa_bit_cdecp7 = 50,
    isa_bit_mve_float = 51,
    isa_bit_armv8_1 = 52,
    isa_bit_armv8_2 = 53,
    isa_bit_armv8_3 = 54,
    isa_bit_tdiv = 55,
    isa_bit_armv8_4 = 56,
    isa_bit_armv8_5 = 57,
    isa_bit_armv8_6 = 58,
    isa_bit_neon = 59,
    isa_bit_quirk_no_volatile_ce = 60,
    isa_bit_armv6k = 61,
    isa_bit_vfp_base = 62,
    isa_num_bits = 63,
};

/* ── forward declarations ────────────────────────────────── */

struct BlowfishContext;
struct XAset;
struct XAsetmember;
struct __anon_0x000001dc;
union __anon_0x00000323;
struct __anon_0x00000434;
union __anon_0x000004a7;
struct __anon_0x000005c7;
struct __anon_0x00000678;
struct __anon_0x00001117;
struct __anon_0x00001217;
struct __anon_0x00006732;
struct __anon_0x00006787;
struct __anon_0x000067ab;
union __anon_0x000067cf;
struct __anon_0x000067f1;
union __anon_0x00006822;
struct __anon_0x00006844;
struct __anon_0x00006868;
union __anon_0x0000688c;
struct __anon_0x000068ae;
struct __anon_0x000068df;
struct __anon_0x00006903;
union __anon_0x00006934;
struct __anon_0x0000698a;
union __anon_0x000069d4;
union __anon_0x00006b03;
union __anon_0x00006c13;
struct __anon_0x000073ce;
struct __anon_0x000074ce;
struct __anon_0x00008a25;
struct __anon_0x00008adc;
union __anon_0x0000a79f;
struct __anon_0x0000a88a;
union __anon_0x0000a8f7;
struct __anon_0x0000aa07;
struct __anon_0x0000aab8;
struct __anon_0x0000b4cb;
struct __anon_0x0000b5cb;
struct __anon_0x0000c12f;
union __anon_0x00010c98;
struct __anon_0x00010d8f;
union __anon_0x00010e01;
struct __anon_0x00011592;
struct __anon_0x00011691;
struct __anon_0x00011839;
union __anon_0x0001260b;
union __anon_0x0001271e;
struct __anon_0x00012ebb;
struct __anon_0x00012fb9;
struct __anon_0x00014eaf;
union __anon_0x00015075;
struct __anon_0x000151b1;
union __anon_0x00015224;
struct __anon_0x0001534a;
struct __anon_0x000153fb;
struct __anon_0x00015e5b;
struct __anon_0x00015f5b;
struct __anon_0x00016094;
union __anon_0x0001b4ef;
struct __anon_0x0001b5da;
union __anon_0x0001b647;
struct __anon_0x0001b757;
struct __anon_0x0001b808;
struct __anon_0x0001c21b;
struct __anon_0x0001c31b;
struct __anon_0x0001cb7c;
struct __anon_0x0001cba0;
union __anon_0x0001cbc4;
struct __anon_0x0001cbe6;
union __anon_0x0001cc17;
struct __anon_0x0001cc39;
struct __anon_0x0001cc5d;
union __anon_0x0001cc81;
struct __anon_0x0001cca3;
struct __anon_0x0001ccd4;
struct __anon_0x0001ccf8;
union __anon_0x0001cd29;
struct __anon_0x0001cd7f;
union __anon_0x0001cdc9;
union __anon_0x0001cef8;
struct __anon_0x0001cfe6;
union __anon_0x0001d059;
struct __anon_0x0001d169;
struct __anon_0x0001d21a;
struct __anon_0x0001dc39;
struct __anon_0x0001dd39;
struct __anon_0x0001f5fb;
union __anon_0x0001f7b5;
struct __anon_0x0001f964;
union __anon_0x0001f9d7;
struct __anon_0x0001fae7;
struct __anon_0x0001fb98;
struct __anon_0x000205ab;
struct __anon_0x000206ab;
union __anon_0x00024612;
struct __anon_0x000247f1;
union __anon_0x00024869;
struct __anon_0x00024979;
struct __anon_0x00024a2a;
struct __anon_0x0002543d;
struct __anon_0x0002553d;
union __anon_0x0002568d;
union __anon_0x0002b3fd;
struct __anon_0x0002b575;
union __anon_0x0002b5e8;
struct __anon_0x0002b6f8;
struct __anon_0x0002b7a9;
struct __anon_0x0002c1c8;
struct __anon_0x0002c2c8;
struct __anon_0x00030119;
union __anon_0x000302d4;
struct __anon_0x0003041a;
union __anon_0x0003048d;
struct __anon_0x0003059c;
struct __anon_0x0003064d;
struct __anon_0x00031078;
struct __anon_0x00031178;
struct __anon_0x0003490e;
union __anon_0x00034ac8;
struct __anon_0x00034c60;
union __anon_0x00034cd3;
struct __anon_0x00034de3;
struct __anon_0x00034e94;
struct __anon_0x000358b3;
struct __anon_0x000359b3;
union __anon_0x00037fd3;
struct __anon_0x000380be;
union __anon_0x00038131;
struct __anon_0x00038241;
struct __anon_0x000382f2;
struct __anon_0x00038d05;
struct __anon_0x00038e05;
struct __anon_0x0003968c;
union __anon_0x0003974c;
struct __anon_0x00039843;
union __anon_0x000398af;
struct __anon_0x0003a070;
struct __anon_0x0003a16f;
union __anon_0x0003d34b;
struct __anon_0x0003d444;
union __anon_0x0003d4a0;
union __anon_0x0003e84c;
struct __anon_0x0003e943;
union __anon_0x0003e9b5;
struct __anon_0x0003f1da;
struct __anon_0x0003f2d9;
struct __anon_0x0003ff0d;
union __anon_0x000400c7;
struct __anon_0x00040211;
union __anon_0x00040284;
struct __anon_0x00040394;
struct __anon_0x00040445;
struct __anon_0x00040e61;
struct __anon_0x00040f61;
struct __anon_0x0004108e;
struct __anon_0x000410d8;
union __anon_0x00043c03;
struct __anon_0x00043cfa;
union __anon_0x00043d66;
struct __anon_0x000444f7;
struct __anon_0x000445f6;
struct __anon_0x000450aa;
union __anon_0x0004517a;
struct __anon_0x00045271;
union __anon_0x000452e4;
struct __anon_0x000453f4;
struct __anon_0x000454a5;
struct __anon_0x00045eb8;
struct __anon_0x00045fb8;
union __anon_0x00048da2;
union __anon_0x00048ea9;
struct __anon_0x00049635;
struct __anon_0x00049733;
union __anon_0x0004a761;
struct __anon_0x0004a84c;
union __anon_0x0004a8b9;
struct __anon_0x0004a9c9;
struct __anon_0x0004aa7a;
struct __anon_0x0004b48d;
struct __anon_0x0004b58d;
struct __anon_0x0004cb32;
struct __anon_0x0004cb56;
union __anon_0x0004cb7a;
struct __anon_0x0004cb9c;
union __anon_0x0004cbcd;
struct __anon_0x0004cbef;
struct __anon_0x0004cc13;
union __anon_0x0004cc37;
struct __anon_0x0004cc59;
struct __anon_0x0004cc8a;
struct __anon_0x0004ccae;
union __anon_0x0004ccdf;
struct __anon_0x0004cd35;
union __anon_0x0004cd7f;
union __anon_0x0004cee9;
struct __anon_0x0004cfdc;
union __anon_0x0004d04f;
struct __anon_0x0004d18e;
struct __anon_0x0004d23f;
struct __anon_0x0004dc6a;
struct __anon_0x0004dd6a;
union __anon_0x000506c7;
union __anon_0x000507ce;
struct __anon_0x00050f7e;
struct __anon_0x0005107c;
union __anon_0x00052089;
union __anon_0x00052199;
struct __anon_0x00052949;
struct __anon_0x00052a47;
union __anon_0x00052ba5;
struct __anon_0x000549ed;
union __anon_0x00054ba8;
struct __anon_0x00054d83;
union __anon_0x00054df6;
struct __anon_0x00054f05;
struct __anon_0x00054fb6;
struct __anon_0x000559d5;
struct __anon_0x00055ad5;
union __anon_0x00057b9a;
struct __anon_0x00057d2d;
union __anon_0x00057da0;
struct __anon_0x00057eb0;
struct __anon_0x00057f61;
struct __anon_0x0005898c;
struct __anon_0x00058a8c;
struct __anon_0x0005d844;
union __anon_0x0005da32;
struct __anon_0x0005db89;
union __anon_0x0005de9b;
struct __anon_0x0005e431;
struct __anon_0x0005e4e2;
struct __anon_0x0005e80a;
struct __anon_0x0005e90a;
struct __anon_0x0005ea37;
struct __anon_0x0006d071;
union __anon_0x0006d22c;
union __anon_0x0006d393;
struct __anon_0x0006db2a;
struct __anon_0x0006dc2a;
union __anon_0x0006f146;
union __anon_0x0006f259;
struct __anon_0x0006f9e5;
struct __anon_0x0006fae3;
struct __anon_0x00070ceb;
union __anon_0x00070dab;
struct __anon_0x00070e96;
union __anon_0x00070f03;
struct __anon_0x00071013;
struct __anon_0x000710c4;
struct __anon_0x00071ae3;
struct __anon_0x00071be3;
union __anon_0x000727a4;
struct __anon_0x0007289f;
union __anon_0x00072912;
struct __anon_0x00072a22;
struct __anon_0x00072ad3;
struct __anon_0x000734fe;
struct __anon_0x000735fe;
union __anon_0x00074861;
struct __anon_0x000749f9;
union __anon_0x00074a6c;
struct __anon_0x00074b7c;
struct __anon_0x00074c2d;
struct __anon_0x00075640;
struct __anon_0x00075740;
struct __anon_0x000772fd;
struct __anon_0x00078a8a;
union __anon_0x00078c45;
struct __anon_0x00078d1a;
struct __anon_0x00078e51;
union __anon_0x00078ec4;
struct __anon_0x00078fd3;
struct __anon_0x00079084;
struct __anon_0x00079a97;
struct __anon_0x00079b97;
struct __anon_0x0007a273;
union __anon_0x0007a2ee;
union __anon_0x0007d95b;
struct __anon_0x0007dae7;
union __anon_0x0007db5a;
struct __anon_0x0007dc6a;
struct __anon_0x0007dd1b;
struct __anon_0x0007e72e;
struct __anon_0x0007e82e;
struct __anon_0x0007e9c9;
struct __anon_0x0007e9f9;
union __anon_0x00086f18;
union __anon_0x00087019;
struct __anon_0x000877a5;
struct __anon_0x000878a3;
union __anon_0x000884d2;
struct __anon_0x000885bd;
union __anon_0x00088634;
struct __anon_0x00088dc5;
struct __anon_0x00088ec4;
struct __anon_0x0008bea8;
union __anon_0x0008c117;
struct __anon_0x0008c297;
union __anon_0x0008c5a4;
struct __anon_0x0008d628;
struct __anon_0x0008d6d9;
struct __anon_0x00094a43;
struct __anon_0x00094a72;
union __anon_0x00094c73;
struct __anon_0x00094e5e;
union __anon_0x00094ed1;
struct __anon_0x00095036;
struct __anon_0x000950e7;
struct __anon_0x00095b72;
struct __anon_0x00095c72;
struct __anon_0x00095dab;
struct __anon_0x000a243a;
struct __anon_0x000a9388;
union __anon_0x000a9543;
struct __anon_0x000a969d;
union __anon_0x000a9710;
struct __anon_0x000a984e;
struct __anon_0x000a98ff;
struct __anon_0x000aa335;
struct __anon_0x000aa435;
struct __anon_0x000aa562;
union __anon_0x000b3eba;
union __anon_0x000b3fc1;
struct __anon_0x000b4771;
struct __anon_0x000b486f;
union __anon_0x000b67ef;
struct __anon_0x000b68da;
union __anon_0x000b694d;
struct __anon_0x000b6a5d;
struct __anon_0x000b6b0e;
struct __anon_0x000b7545;
struct __anon_0x000b7645;
struct __anon_0x000ba1af;
union __anon_0x000ba369;
struct __anon_0x000ba454;
union __anon_0x000ba4c7;
struct __anon_0x000ba5d9;
struct __anon_0x000ba68a;
struct __anon_0x000bb0c1;
struct __anon_0x000bb1c1;
struct __anon_0x000bb2fa;
union __anon_0x000bb35c;
struct __anon_0x000beefe;
union __anon_0x000bf0b9;
struct __anon_0x000bf213;
union __anon_0x000bf28b;
struct __anon_0x000bf3c9;
struct __anon_0x000bf47a;
struct __anon_0x000bfee8;
struct __anon_0x000bffe8;
struct __anon_0x000c0121;
struct __anon_0x000c0167;
struct __anon_0x000c9dfa;
union __anon_0x000c9fb4;
struct __anon_0x000ca1ab;
union __anon_0x000ca21e;
struct __anon_0x000ca32d;
struct __anon_0x000ca3de;
struct __anon_0x000cae15;
struct __anon_0x000caf15;
struct __anon_0x000cb042;
struct __anon_0x000d1926;
union __anon_0x000d1ae1;
struct __anon_0x000d1c79;
union __anon_0x000d1cec;
struct __anon_0x000d1dfc;
struct __anon_0x000d1ead;
struct __anon_0x000d28e4;
struct __anon_0x000d29e4;
struct __anon_0x000d2b27;
struct __anon_0x000d2b57;
struct __anon_0x000d5e56;
union __anon_0x000d6011;
struct __anon_0x000d60fc;
union __anon_0x000d616f;
struct __anon_0x000d627f;
struct __anon_0x000d6330;
struct __anon_0x000d6d7b;
struct __anon_0x000d6e7b;
struct __anon_0x000d6fb4;
struct __anon_0x000d6ffa;
struct __anon_0x000d8864;
struct __anon_0x000d8893;
union __anon_0x000d8a4d;
struct __anon_0x000d8be2;
union __anon_0x000d8c55;
struct __anon_0x000d8d64;
struct __anon_0x000d8e15;
struct __anon_0x000d984c;
struct __anon_0x000d994c;
struct __anon_0x000da324;
struct __anon_0x000de033;
union __anon_0x000de1ee;
struct __anon_0x000de3d5;
union __anon_0x000de448;
struct __anon_0x000de557;
struct __anon_0x000de608;
struct __anon_0x000df03f;
struct __anon_0x000df13f;
struct __anon_0x000df278;
union __anon_0x000e3bb3;
union __anon_0x000e3ca3;
struct __anon_0x000e442f;
struct __anon_0x000e452d;
struct __anon_0x000e557c;
struct __anon_0x000e57b1;
struct __anon_0x000e7dfd;
union __anon_0x000e7e7b;
struct __anon_0x000e7f5c;
struct __fsid_t;
struct __sigset_t;
struct __va_list;
struct addrinfo;
union align;
struct auth_module_elt;
struct authtab_rec;
union block_hdr;
struct candidate;
struct child;
struct class_struc;
struct cleanup;
struct cmd_entry;
struct cmd_struc;
struct cmdtab_rec;
struct config_src;
struct config_struc;
struct conftab_rec;
struct conn_struc;
struct delay_rec;
struct delay_vals_rec;
struct dirent;
struct err_explain_rec;
struct err_explainer;
struct err_rec;
struct errno_info;
struct event_handler;
struct event_list;
struct extlog_buffer;
struct fbit_implication;
struct fh_rec;
struct file_rec;
struct filename;
struct flock;
struct fnmatch_struct;
struct fs_rec;
struct fs_statcache;
struct fsopendir;
struct globlink;
struct group;
struct help_rec;
struct hostent;
struct ifaddrs;
struct in6_addr;
struct in_addr;
struct iovec;
struct ipbind_rec;
struct jot_filters_rec;
struct json_list_st;
struct json_node_st;
struct json_obj_st;
struct list_limit_rec;
struct listener_rec;
struct log_event;
struct logfile_struc;
struct logfmt_json_info;
struct logformat_struc;
struct mlinfo;
struct modret_struc;
struct module_struc;
struct namebind_rec;
struct netaddr_struc;
struct netio_rec;
struct option;
struct option_help;
struct passwd;
struct patternlist;
struct pool_rec;
struct pr_netacl_t;
struct protoent;
struct re_pattern_buffer;
struct regexp_rec;
struct resp_struc;
struct rlimit;
struct sched_obj;
struct servent;
struct server_struc;
struct sigaction;
union sigval;
struct sockaddr;
struct sockaddr_in;
struct sockaddr_in6;
struct sockaddr_un;
struct socket_ctx;
struct sort_filename;
struct spwd;
struct stash;
struct stat;
struct statfs;
struct statvfs;
struct tab_entry;
struct tab_key;
struct table_rec;
struct tcp_keepalive;
struct timer;
struct timespec;
struct timeval;
struct tm;
struct trace_levels;
struct utmpx;
struct utsname;
struct var;

/* ── typedefs, structs & unions (dependency-ordered) ──────── */

struct __anon_0x000001dc {
    long unsigned int fds_bits[32];
};

struct __anon_0x00006732 {
    long unsigned int fds_bits[32];
};

struct __anon_0x000067ab {
    int si_timerid;
    int si_overrun;
};

struct __anon_0x00006868 {
    void * si_lower;
    void * si_upper;
};

struct __anon_0x000068df {
    long int si_band;
    int si_fd;
};

struct __anon_0x00006903 {
    void * si_call_addr;
    int si_syscall;
    unsigned int si_arch;
};

struct __anon_0x00008adc {
    void * endp;
    union block_hdr * next;
    void * first_avail;
};

struct __anon_0x00014eaf {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0001cba0 {
    int si_timerid;
    int si_overrun;
};

struct __anon_0x0001cc5d {
    void * si_lower;
    void * si_upper;
};

struct __anon_0x0001ccd4 {
    long int si_band;
    int si_fd;
};

struct __anon_0x0001ccf8 {
    void * si_call_addr;
    int si_syscall;
    unsigned int si_arch;
};

struct __anon_0x0001f5fb {
    long int tv_sec;
    long int tv_nsec;
};

union __anon_0x0002568d {
    struct sockaddr * ifu_broadaddr;
    struct sockaddr * ifu_dstaddr;
};

struct __anon_0x00030119 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0003490e {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0003968c {
    long unsigned int fds_bits[32];
};

struct __anon_0x0003ff0d {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000450aa {
    long unsigned int fds_bits[32];
};

struct __anon_0x0004cb56 {
    int si_timerid;
    int si_overrun;
};

struct __anon_0x0004cc13 {
    void * si_lower;
    void * si_upper;
};

struct __anon_0x0004cc8a {
    long int si_band;
    int si_fd;
};

struct __anon_0x0004ccae {
    void * si_call_addr;
    int si_syscall;
    unsigned int si_arch;
};

struct __anon_0x000549ed {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0005d844 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0006d071 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x00070ceb {
    long unsigned int fds_bits[32];
};

struct __anon_0x00078a8a {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x00078d1a {
    short int __e_termination;
    short int __e_exit;
};

struct __anon_0x0007a273 {
    struct json_node_st * head;
    struct json_node_st * tail;
};

struct __anon_0x0007e9c9 {
    void * log;
    const void * user_data;
};

struct __anon_0x0008bea8 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x00094a43 {
    long unsigned int fds_bits[32];
};

struct __anon_0x00094a72 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000a243a {
    char * name;
    int facility;
};

struct __anon_0x000a9388 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000ba1af {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000beefe {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000c9dfa {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000d1926 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000d2b27 {
    void * log;
    const void * user_data;
};

struct __anon_0x000d5e56 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000d6ffa {
    char * cmd;
    char * syntax;
    int implemented;
};

struct __anon_0x000d8864 {
    long unsigned int fds_bits[32];
};

struct __anon_0x000d8893 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000de033 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000e557c {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x000e7dfd {
    struct json_node_st * head;
    struct json_node_st * tail;
};

struct __anon_0x000e7f5c {
    char * cur;
    char * end;
    char * start;
};

struct __fsid_t {
    int __val[2];
};

struct __sigset_t {
    long unsigned int __bits[32];
};

struct __va_list {
    void * __ap;
};

struct auth_module_elt {
    struct auth_module_elt * prev;
    struct auth_module_elt * next;
    const char * name;
};

struct candidate {
    const char * s;
    int distance;
    int flags;
};

struct cleanup {
    void * user_data;
    void (*cleanup_cb)(void *);
    struct cleanup * next;
};

struct delay_vals_rec {
    char dv_proto[16];
    unsigned int dv_nvals;
    long int dv_vals[256];
};

struct errno_info {
    int error_number;
    const char * name;
};

struct fbit_implication {
    enum isa_feature ante;
    enum isa_feature cons;
};

struct filename {
    struct filename * down;
    struct filename * right;
    char * line;
    int top;
};

struct fnmatch_struct {
    const char * pattern;
    const char * string;
    int no_leading_period;
};

struct globlink {
    struct globlink * next;
    char * name;
};

struct help_rec {
    const char * cmd;
    const char * syntax;
    int impl;
};

struct hostent {
    char * h_name;
    char * * h_aliases;
    int h_addrtype;
    int h_length;
    char * * h_addr_list;
};

struct list_limit_rec {
    unsigned int curr;
    unsigned int max;
    unsigned char logged;
};

struct logfmt_json_info {
    unsigned int json_type;
    const char * json_key;
};

struct option {
    const char * name;
    int has_arg;
    int * flag;
    int val;
};

struct option_help {
    const char * long_opt;
    const char * short_opt;
    const char * desc;
};

struct patternlist {
    struct patternlist * next;
    char str[1];
};

struct pool_rec {
    union block_hdr * first;
    union block_hdr * last;
    struct cleanup * cleanups;
    struct pool_rec * sub_pools;
    struct pool_rec * sub_next;
    struct pool_rec * sub_prev;
    struct pool_rec * parent;
    char * free_first_avail;
    const char * tag;
};

struct protoent {
    char * p_name;
    char * * p_aliases;
    int p_proto;
};

struct resp_struc {
    struct resp_struc * next;
    const char * num;
    const char * msg;
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

struct tcp_keepalive {
    int keepalive_enabled;
    int keepalive_idle;
    int keepalive_count;
    int keepalive_intvl;
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

struct trace_levels {
    int min_level;
    int max_level;
};

struct utsname {
    char sysname[65];
    char nodename[65];
    char release[65];
    char version[65];
    char machine[65];
    char domainname[65];
};

typedef double DFtype;
typedef struct __dirstream DIR;
typedef long long int DItype;
typedef struct _IO_FILE FILE;
typedef struct json_node_st JsonNode;
typedef enum __anon_0x0007a234 JsonTag;
typedef struct __anon_0x000e7f5c SB;
typedef float SFtype;
typedef long long unsigned int UDItype;
typedef unsigned int USItype;
typedef struct __va_list __isoc_va_list;
typedef struct __anon_0x00000434 array_header;
typedef struct file_rec authfile_file_t;
typedef union __anon_0x000bb35c authfile_id_t;
typedef struct authtab_rec authtable;
typedef struct BlowfishContext blf_ctx;
typedef long long int blkcnt_t;
typedef long int blksize_t;
typedef int (*callback_t)(long unsigned int, long unsigned int, long unsigned int, void *);
typedef struct cleanup cleanup_t;
typedef long int clock_t;
typedef struct cmd_struc cmd_rec;
typedef struct cmdtab_rec cmdtable;
typedef struct config_struc config_rec;
typedef struct conftab_rec conftable;
typedef struct conn_struc conn_t;
typedef long long unsigned int dev_t;
typedef struct __anon_0x000001dc fd_set;
typedef long long unsigned int fsblkcnt_t;
typedef long long unsigned int fsfilcnt_t;
typedef struct __fsid_t fsid_t;
typedef struct fsopendir fsopendir_t;
typedef unsigned int gid_t;
typedef struct __anon_0x0005ea37 glob_t;
typedef long long unsigned int ino_t;
typedef int int32_t;
typedef long long int int64_t;
typedef int intptr_t;
typedef struct logfile_struc logfile_t;
typedef struct logformat_struc logformat_t;
typedef unsigned int mode_t;
typedef struct modret_struc modret_t;
typedef struct module_struc module;
typedef unsigned int nlink_t;
typedef long long int off_t;
typedef int pid_t;
typedef struct pool_rec pool;
typedef struct __anon_0x00001117 pr_buffer_t;
typedef struct child pr_child_t;
typedef struct class_struc pr_class_t;
typedef struct err_explain_rec pr_error_explainer_t;
typedef struct err_rec pr_error_t;
typedef struct fh_rec pr_fh_t;
typedef struct fs_rec pr_fs_t;
typedef struct ipbind_rec pr_ipbind_t;
typedef struct __anon_0x0007e9c9 pr_jot_ctx_t;
typedef struct jot_filters_rec pr_jot_filters_t;
typedef struct __anon_0x0007e9f9 pr_jot_parsed_t;
typedef struct json_list_st pr_json_array_t;
typedef struct json_obj_st pr_json_object_t;
typedef struct log_event pr_log_event_t;
typedef struct mcache_rec pr_memcache_t;
typedef struct namebind_rec pr_namebind_t;
typedef struct pr_netacl_t pr_netacl_t;
typedef enum __anon_0x0003d5a8 pr_netacl_type_t;
typedef struct netaddr_struc pr_netaddr_t;
typedef struct __anon_0x00001217 pr_netio_stream_t;
typedef struct netio_rec pr_netio_t;
typedef struct redis_rec pr_redis_t;
typedef struct regexp_rec pr_regex_t;
typedef struct resp_struc pr_response_t;
typedef struct __anon_0x000410d8 pr_scoreboard_entry_t;
typedef struct __anon_0x0004108e pr_scoreboard_header_t;
typedef enum __anon_0x00001344 pr_stash_type_t;
typedef struct tab_entry pr_table_entry_t;
typedef struct tab_key pr_table_key_t;
typedef struct table_rec pr_table_t;
typedef struct re_pattern_buffer regex_t;
typedef struct __anon_0x00011839 regmatch_t;
typedef int regoff_t;
typedef long long unsigned int rlim_t;
typedef short unsigned int sa_family_t;
typedef struct sched_obj sched_t;
typedef struct server_struc server_rec;
typedef struct __anon_0x00000678 session_t;
typedef struct __anon_0x0000698a siginfo_t;
typedef struct __sigset_t sigset_t;
typedef unsigned int size_t;
typedef unsigned int socklen_t;
typedef int ssize_t;
typedef long long int suseconds_t;
typedef long long int time_t;
typedef short unsigned int u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned char u_int8_t;
typedef unsigned int uid_t;
typedef short unsigned int uint16_t;
typedef unsigned int uint32_t;
typedef long long unsigned int uint64_t;
typedef unsigned char uint8_t;
typedef struct __va_list va_list;
typedef struct XAset xaset_t;
typedef struct XAsetmember xasetmember_t;
union __anon_0x0000688c {
    struct __anon_0x00006868 __addr_bnd;
    unsigned int si_pkey;
};

union __anon_0x0001cc81 {
    struct __anon_0x0001cc5d __addr_bnd;
    unsigned int si_pkey;
};

struct ifaddrs {
    struct ifaddrs * ifa_next;
    char * ifa_name;
    unsigned int ifa_flags;
    struct sockaddr * ifa_addr;
    struct sockaddr * ifa_netmask;
    union __anon_0x0002568d ifa_ifu;
    void * ifa_data;
};

union __anon_0x0004cc37 {
    struct __anon_0x0004cc13 __addr_bnd;
    unsigned int si_pkey;
};

union __anon_0x0007a2ee {
    int bool_;
    char * string_;
    double number_;
    struct __anon_0x0007a273 children;
};

union __anon_0x000e7e7b {
    int bool_;
    char * string_;
    double number_;
    struct __anon_0x000e7dfd children;
};

struct delay_rec {
    unsigned int d_sid;
    char d_addr[80];
    unsigned int d_port;
    struct delay_vals_rec d_vals[3];
};

union align {
    char * cp;
    void (*f)(void);
    long int l;
    FILE * fp;
    double d;
};

struct __anon_0x000067f1 {
    int si_status;
    clock_t si_utime;
    clock_t si_stime;
};

struct __anon_0x0001cbe6 {
    int si_status;
    clock_t si_utime;
    clock_t si_stime;
};

struct __anon_0x0004cb9c {
    int si_status;
    clock_t si_utime;
    clock_t si_stime;
};

union __anon_0x00052ba5 {
    conftable * sym_conf;
    cmdtable * sym_cmd;
    authtable * sym_auth;
    cmdtable * sym_hook;
    void * sym_generic;
};

struct statvfs {
    long unsigned int f_bsize;
    long unsigned int f_frsize;
    fsblkcnt_t f_blocks;
    fsblkcnt_t f_bfree;
    fsblkcnt_t f_bavail;
    fsfilcnt_t f_files;
    fsfilcnt_t f_ffree;
    fsfilcnt_t f_favail;
    long unsigned int f_fsid;
    long unsigned int f_flag;
    long unsigned int f_namemax;
    int __reserved[6];
};

struct statfs {
    long unsigned int f_type;
    long unsigned int f_bsize;
    fsblkcnt_t f_blocks;
    fsblkcnt_t f_bfree;
    fsblkcnt_t f_bavail;
    fsfilcnt_t f_files;
    fsfilcnt_t f_ffree;
    fsid_t f_fsid;
    long unsigned int f_namelen;
    long unsigned int f_frsize;
    long unsigned int f_flags;
    long unsigned int f_spare[4];
};

struct group {
    char * gr_name;
    char * gr_passwd;
    gid_t gr_gid;
    char * * gr_mem;
};

struct logformat_struc {
    logformat_t * next;
    logformat_t * prev;
    char * lf_fmt_name;
    unsigned char * lf_format;
};

struct authtab_rec {
    int auth_flags;
    const char * name;
    modret_t * (*handler)(cmd_rec *);
    module * m;
};

struct cmdtab_rec {
    unsigned char cmd_type;
    const char * command;
    const char * group;
    modret_t * (*handler)(cmd_rec *);
    unsigned char requires_auth;
    unsigned char interrupt_xfer;
    int cmd_class;
    module * m;
};

struct conftab_rec {
    char * directive;
    modret_t * (*handler)(cmd_rec *);
    module * m;
};

struct event_handler {
    struct event_handler * next;
    struct event_handler * prev;
    module * module;
    void (*cb)(const void *, void *);
    void * user_data;
    long unsigned int flags;
};

struct modret_struc {
    module * mr_handler_module;
    int mr_error;
    const char * mr_numeric;
    const char * mr_message;
    void * data;
};

struct module_struc {
    module * next;
    module * prev;
    int api_version;
    const char * name;
    struct conftab_rec * conftable;
    struct cmdtab_rec * cmdtable;
    struct authtab_rec * authtable;
    int (*init)(void);
    int (*sess_init)(void);
    const char * module_version;
    void * handle;
    int priority;
};

struct timer {
    struct timer * next;
    struct timer * prev;
    long int count;
    long int interval;
    int timerno;
    module * mod;
    callback_t callback;
    char remove;
    const char * desc;
};

struct dirent {
    ino_t d_ino;
    off_t d_off;
    short unsigned int d_reclen;
    unsigned char d_type;
    char d_name[256];
};

struct flock {
    short int l_type;
    short int l_whence;
    off_t l_start;
    off_t l_len;
    pid_t l_pid;
};

struct jot_filters_rec {
    pool * pool;
    int included_classes;
    int excluded_classes;
    array_header * cmd_ids;
};

struct json_list_st {
    pool * pool;
    JsonNode * array;
    unsigned int item_count;
};

struct json_obj_st {
    pool * pool;
    JsonNode * object;
    unsigned int member_count;
};

struct sched_obj {
    struct sched_obj * next;
    struct sched_obj * prev;
    pool * pool;
    void (*cb)(void *, void *, void *, void *);
    int nloops;
    void * arg1;
    void * arg2;
    void * arg3;
    void * arg4;
};

struct err_explainer {
    struct err_explainer * next;
    struct err_explainer * prev;
    module * m;
    const char * name;
    pr_error_explainer_t * explainer;
};

struct config_src {
    struct config_src * cs_next;
    pool * cs_pool;
    pr_fh_t * cs_fh;
    unsigned int cs_lineno;
};

struct fsopendir {
    fsopendir_t * next;
    fsopendir_t * prev;
    pool * pool;
    pr_fs_t * fsdir;
    DIR * dir;
};

struct logfile_struc {
    logfile_t * next;
    logfile_t * prev;
    char * lf_filename;
    int lf_fd;
    int lf_syslog_level;
    logformat_t * lf_format;
    pr_jot_filters_t * lf_jot_filters;
    config_rec * lf_conf;
};

struct listener_rec {
    struct listener_rec * next;
    struct listener_rec * prev;
    pool * pool;
    const pr_netaddr_t * addr;
    unsigned int port;
    conn_t * conn;
    int claimed;
};

struct pr_netacl_t {
    pr_netacl_type_t type;
    const char * aclstr;
    char * pattern;
    int negated;
    const pr_netaddr_t * addr;
    unsigned int masklen;
};

struct conn_struc {
    struct conn_struc * next;
    struct pool_rec * pool;
    int mode;
    int listen_fd;
    int rcvbuf;
    int sndbuf;
    int xerrno;
    int rfd;
    int wfd;
    pr_netio_stream_t * instrm;
    pr_netio_stream_t * outstrm;
    const pr_netaddr_t * remote_addr;
    int remote_port;
    const char * remote_name;
    const pr_netaddr_t * local_addr;
    int local_port;
};

struct __anon_0x00001217 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x000074ce {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x0000b5cb {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x00011691 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x00012fb9 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x00015f5b {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x0001c31b {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x0001dd39 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x000206ab {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x0002553d {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x0002c2c8 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x00031178 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x000359b3 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x00038e05 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x0003a16f {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x0003f2d9 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x00040f61 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x000445f6 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x00045fb8 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x00049733 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x0004b58d {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x0004dd6a {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x0005107c {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x00052a47 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x00055ad5 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x00058a8c {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x0005e90a {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x0006dc2a {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x0006fae3 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x00071be3 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x000735fe {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x00075740 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x00079b97 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x0007e82e {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x000878a3 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x00088ec4 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x00095c72 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x000aa435 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x000b486f {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x000b7645 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x000bb1c1 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x000bffe8 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x000caf15 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x000d29e4 {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x000d6e7b {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x000d994c {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x000df13f {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct __anon_0x000e452d {
    struct pool_rec * strm_pool;
    int strm_type;
    int strm_fd;
    int strm_mode;
    unsigned int strm_interval;
    volatile long unsigned int strm_flags;
    pr_buffer_t * strm_buf;
    void * strm_data;
    int strm_errno;
    pr_table_t * notes;
    pr_netio_t * strm_netio;
};

struct class_struc {
    pool * cls_pool;
    char * cls_name;
    unsigned int cls_satisfy;
    array_header * cls_acls;
    pr_table_t * cls_notes;
    struct class_struc * cls_next;
};

struct regexp_rec {
    pool * regex_pool;
    module * m;
    const char * pattern;
    regex_t * re;
};

struct __anon_0x00011839 {
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x00016094 {
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x000772fd {
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x00095dab {
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x000bb2fa {
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x000c0121 {
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x000d6fb4 {
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x000df278 {
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct rlimit {
    rlim_t rlim_cur;
    rlim_t rlim_max;
};

struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

struct sockaddr_un {
    sa_family_t sun_family;
    char sun_path[108];
};

struct cmd_struc {
    struct pool_rec * pool;
    server_rec * server;
    config_rec * config;
    struct pool_rec * tmp_pool;
    unsigned int argc;
    char * arg;
    void * * argv;
    char * group;
    int cmd_class;
    int stash_index;
    unsigned int stash_hash;
    pr_table_t * notes;
    int cmd_id;
    int is_ftp;
    const char * protocol;
};

struct ipbind_rec {
    struct ipbind_rec * ib_next;
    const pr_netaddr_t * ib_addr;
    unsigned int ib_port;
    server_rec * ib_server;
    conn_t * ib_listener;
    array_header * ib_namebinds;
    unsigned char ib_isdefault;
    unsigned char ib_islocalhost;
    unsigned char ib_isactive;
};

struct namebind_rec {
    const char * nb_name;
    unsigned char nb_iswildcard;
    unsigned char nb_isactive;
    server_rec * nb_server;
    unsigned int nb_server_port;
};

struct socket_ctx {
    server_rec * server;
    const pr_netaddr_t * addr;
    int sockfd;
};

union __anon_0x000069d4 {
    void (*sa_handler)(int);
    void (*sa_sigaction)(int, siginfo_t *, void *);
};

union __anon_0x0001cdc9 {
    void (*sa_handler)(int);
    void (*sa_sigaction)(int, siginfo_t *, void *);
};

union __anon_0x0004cd7f {
    void (*sa_handler)(int);
    void (*sa_sigaction)(int, siginfo_t *, void *);
};

struct __anon_0x00000434 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x00001117 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x000073ce {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x00008a25 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x0000a88a {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x0000b4cb {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x0000c12f {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x00010d8f {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x00011592 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x00012ebb {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x000151b1 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x00015e5b {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x0001b5da {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x0001c21b {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x0001cfe6 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x0001dc39 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x0001f964 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x000205ab {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x000247f1 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x0002543d {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x0002b575 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x0002c1c8 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x0003041a {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x00031078 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x00034c60 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x000358b3 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x000380be {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x00038d05 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x00039843 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x0003a070 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x0003d444 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x0003e943 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x0003f1da {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x00040211 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x00040e61 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x00043cfa {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x000444f7 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x00045271 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x00045eb8 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x00049635 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x0004a84c {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x0004b48d {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x0004cfdc {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x0004dc6a {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x00050f7e {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x00052949 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x00054d83 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x000559d5 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x00057d2d {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x0005898c {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x0005db89 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x0005e80a {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x0005ea37 {
    size_t gl_pathc;
    char * * gl_pathv;
    size_t gl_offs;
    int gl_flags;
    void (*gl_closedir)(void *);
    struct dirent * (*gl_readdir)(void *);
    void * (*gl_opendir)(const char *);
    int (*gl_lstat)(const char *, struct stat *);
    int (*gl_stat)(const char *, struct stat *);
};

struct __anon_0x0006db2a {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x0006f9e5 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x00070e96 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x00071ae3 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x0007289f {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x000734fe {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x000749f9 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x00075640 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x00078e51 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x00079a97 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x0007dae7 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x0007e72e {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x0007e9f9 {
    unsigned char * ptr;
    unsigned char * buf;
    size_t bufsz;
    size_t buflen;
};

struct __anon_0x000877a5 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x000885bd {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x00088dc5 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x0008c297 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x00094e5e {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x00095b72 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x000a969d {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x000aa335 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x000b4771 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x000b68da {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x000b7545 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x000ba454 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x000bb0c1 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x000bf213 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x000bfee8 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x000ca1ab {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x000cae15 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x000cb042 {
    size_t gl_pathc;
    char * * gl_pathv;
    size_t gl_offs;
    int gl_flags;
    void (*gl_closedir)(void *);
    struct dirent * (*gl_readdir)(void *);
    void * (*gl_opendir)(const char *);
    int (*gl_lstat)(const char *, struct stat *);
    int (*gl_stat)(const char *, struct stat *);
};

struct __anon_0x000d1c79 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x000d28e4 {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x000d2b57 {
    unsigned char * ptr;
    unsigned char * buf;
    size_t bufsz;
    size_t buflen;
};

struct __anon_0x000d60fc {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x000d6d7b {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x000d8be2 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x000d984c {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x000da324 {
    int dt_enabled;
    const char * dt_path;
    int dt_fd;
    size_t dt_size;
    void * dt_data;
};

struct __anon_0x000de3d5 {
    struct pool_rec * pool;
    size_t elt_size;
    unsigned int nelts;
    unsigned int nalloc;
    void * elts;
};

struct __anon_0x000df03f {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x000e442f {
    char * buf;
    long unsigned int buflen;
    char * current;
    size_t remaining;
};

struct __anon_0x000e57b1 {
    size_t gl_pathc;
    char * * gl_pathv;
    size_t gl_offs;
    int gl_flags;
    void (*gl_closedir)(void *);
    struct dirent * (*gl_readdir)(void *);
    void * (*gl_opendir)(const char *);
    int (*gl_lstat)(const char *, struct stat *);
    int (*gl_stat)(const char *, struct stat *);
};

struct cmd_entry {
    const char * cmd_name;
    size_t cmd_namelen;
};

struct event_list {
    struct event_list * next;
    pool * pool;
    const char * event;
    size_t event_len;
    struct event_handler * handlers;
};

struct extlog_buffer {
    char * ptr;
    char * buf;
    size_t bufsz;
    size_t buflen;
};

struct fh_rec {
    pool * fh_pool;
    int fh_fd;
    char * fh_path;
    void * fh_data;
    pr_fs_t * fh_fs;
    pr_buffer_t * fh_buf;
    size_t fh_iosz;
};

struct iovec {
    void * iov_base;
    size_t iov_len;
};

struct log_event {
    unsigned int log_type;
    int log_fd;
    int log_level;
    const char * log_msg;
    size_t log_msglen;
};

struct netio_rec {
    struct pool_rec * pool;
    void (*abort)(pr_netio_stream_t *);
    int (*close)(pr_netio_stream_t *);
    pr_netio_stream_t * (*open)(pr_netio_stream_t *, int, int);
    int (*poll)(pr_netio_stream_t *);
    int (*postopen)(pr_netio_stream_t *);
    int (*read)(pr_netio_stream_t *, char *, size_t);
    pr_netio_stream_t * (*reopen)(pr_netio_stream_t *, int, int);
    int (*shutdown)(pr_netio_stream_t *, int);
    int (*write)(pr_netio_stream_t *, char *, size_t);
    module * owner;
    const char * owner_name;
};

struct re_pattern_buffer {
    size_t re_nsub;
    void * __opaque;
    void * __padding1[4];
    size_t __nsub2;
    char __padding2;
};

struct tab_entry {
    struct tab_entry * next;
    struct tab_entry * prev;
    unsigned int idx;
    pr_table_key_t * key;
    const void * value_data;
    size_t value_datasz;
};

struct tab_key {
    struct tab_key * next;
    const void * key_data;
    size_t key_datasz;
    unsigned int hash;
    unsigned int nents;
};

struct table_rec {
    pool * pool;
    long unsigned int flags;
    unsigned int seed;
    unsigned int nmaxents;
    pr_table_entry_t * * chains;
    unsigned int nchains;
    unsigned int nents;
    pr_table_entry_t * free_ents;
    pr_table_key_t * free_keys;
    pr_table_entry_t * tab_iter_ent;
    pr_table_entry_t * val_iter_ent;
    pr_table_entry_t * cache_ent;
    int (*keycmp)(const void *, size_t, const void *, size_t);
    unsigned int (*keyhash)(const void *, size_t);
    void (*entinsert)(pr_table_entry_t * *, pr_table_entry_t *);
    void (*entremove)(pr_table_entry_t * *, pr_table_entry_t *);
};

struct var {
    int v_type;
    const char * v_desc;
    void * v_val;
    void * v_data;
    size_t v_datasz;
};

typedef const char * (*var_vstr_cb)(void *, size_t);
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

typedef ssize_t pr_sendfile_t;
struct __anon_0x0004108e {
    long unsigned int sch_magic;
    long unsigned int sch_version;
    pid_t sch_pid;
    time_t sch_uptime;
};

struct child {
    struct child * next;
    struct child * prev;
    pool * ch_pool;
    pid_t ch_pid;
    time_t ch_when;
    int ch_pipefd;
    unsigned char ch_dead;
};

struct sort_filename {
    time_t sort_time;
    off_t size;
    char * name;
    char * suffix;
};

struct timespec {
    time_t tv_sec;
    long int tv_nsec;
};

struct timeval {
    time_t tv_sec;
    suseconds_t tv_usec;
};

struct BlowfishContext {
    u_int32_t S[4][256];
    u_int32_t P[18];
};

struct __anon_0x00006787 {
    pid_t si_pid;
    uid_t si_uid;
};

struct __anon_0x0001cb7c {
    pid_t si_pid;
    uid_t si_uid;
};

struct __anon_0x000410d8 {
    pid_t sce_pid;
    uid_t sce_uid;
    gid_t sce_gid;
    char sce_user[32];
    int sce_server_port;
    char sce_server_addr[80];
    char sce_server_label[32];
    char sce_client_addr[46];
    char sce_client_name[80];
    char sce_class[32];
    char sce_protocol[32];
    char sce_cwd[80];
    char sce_cmd[65];
    char sce_cmd_arg[80];
    time_t sce_begin_idle;
    time_t sce_begin_session;
    off_t sce_xfer_size;
    off_t sce_xfer_done;
    off_t sce_xfer_len;
    long unsigned int sce_xfer_elapsed;
};

struct __anon_0x0004cb32 {
    pid_t si_pid;
    uid_t si_uid;
};

struct __anon_0x000aa562 {
    pid_t sce_pid;
    uid_t sce_uid;
    gid_t sce_gid;
    char sce_user[32];
    int sce_server_port;
    char sce_server_addr[80];
    char sce_server_label[32];
    char sce_client_addr[46];
    char sce_client_name[80];
    char sce_class[32];
    char sce_protocol[32];
    char sce_cwd[80];
    char sce_cmd[65];
    char sce_cmd_arg[80];
    time_t sce_begin_idle;
    time_t sce_begin_session;
    off_t sce_xfer_size;
    off_t sce_xfer_done;
    off_t sce_xfer_len;
    long unsigned int sce_xfer_elapsed;
};

union __anon_0x000bb35c {
    uid_t uid;
    gid_t gid;
};

struct __anon_0x000c0167 {
    pid_t sce_pid;
    uid_t sce_uid;
    gid_t sce_gid;
    char sce_user[32];
    int sce_server_port;
    char sce_server_addr[80];
    char sce_server_label[32];
    char sce_client_addr[46];
    char sce_client_name[80];
    char sce_class[32];
    char sce_protocol[32];
    char sce_cwd[80];
    char sce_cmd[65];
    char sce_cmd_arg[80];
    time_t sce_begin_idle;
    time_t sce_begin_session;
    off_t sce_xfer_size;
    off_t sce_xfer_done;
    off_t sce_xfer_len;
    long unsigned int sce_xfer_elapsed;
};

struct err_explain_rec {
    const char * (*explain_accept)(pool *, int, int, struct sockaddr *, socklen_t *, const char * *);
    const char * (*explain_bind)(pool *, int, int, const struct sockaddr *, socklen_t, const char * *);
    const char * (*explain_chdir)(pool *, int, const char *, const char * *);
    const char * (*explain_chmod)(pool *, int, const char *, mode_t, const char * *);
    const char * (*explain_chown)(pool *, int, const char *, uid_t, gid_t, const char * *);
    const char * (*explain_chroot)(pool *, int, const char *, const char * *);
    const char * (*explain_close)(pool *, int, int, const char * *);
    const char * (*explain_closedir)(pool *, int, void *, const char * *);
    const char * (*explain_connect)(pool *, int, int, const struct sockaddr *, socklen_t, const char * *);
    const char * (*explain_fchmod)(pool *, int, int, mode_t, const char * *);
    const char * (*explain_fchown)(pool *, int, int, uid_t, gid_t, const char * *);
    const char * (*explain_fclose)(pool *, int, FILE *, const char * *);
    const char * (*explain_fcntl)(pool *, int, int, int, long int, const char * *);
    const char * (*explain_fdopen)(pool *, int, int, const char *, const char * *);
    const char * (*explain_flock)(pool *, int, int, int, const char * *);
    const char * (*explain_fopen)(pool *, int, const char *, const char *, const char * *);
    const char * (*explain_fork)(pool *, int, const char * *);
    const char * (*explain_fstat)(pool *, int, int, struct stat *, const char * *);
    const char * (*explain_fstatfs)(pool *, int, int, void *, const char * *);
    const char * (*explain_fstatvfs)(pool *, int, int, void *, const char * *);
    const char * (*explain_fsync)(pool *, int, int, const char * *);
    const char * (*explain_ftruncate)(pool *, int, int, off_t, const char * *);
    const char * (*explain_futimes)(pool *, int, int, const struct timeval *, const char * *);
    const char * (*explain_getaddrinfo)(pool *, int, const char *, const char *, const struct addrinfo *, struct addrinfo * *, const char * *);
    const char * (*explain_gethostbyname)(pool *, int, const char *, const char * *);
    const char * (*explain_gethostbyname2)(pool *, int, const char *, int, const char * *);
    const char * (*explain_gethostname)(pool *, int, char *, size_t, const char * *);
    const char * (*explain_getnameinfo)(pool *, int, const struct sockaddr *, socklen_t, char *, size_t, char *, size_t, int, const char * *);
    const char * (*explain_getpeername)(pool *, int, int, struct sockaddr *, socklen_t *, const char * *);
    const char * (*explain_getrlimit)(pool *, int, int, struct rlimit *, const char * *);
    const char * (*explain_getsockname)(pool *, int, int, struct sockaddr *, socklen_t *, const char * *);
    const char * (*explain_getsockopt)(pool *, int, int, int, int, void *, socklen_t *, const char * *);
    const char * (*explain_lchown)(pool *, int, const char *, uid_t, gid_t, const char * *);
    const char * (*explain_link)(pool *, int, const char *, const char *, const char * *);
    const char * (*explain_listen)(pool *, int, int, int, const char * *);
    const char * (*explain_lseek)(pool *, int, int, off_t, int, const char * *);
    const char * (*explain_lstat)(pool *, int, const char *, struct stat *, const char * *);
    const char * (*explain_mkdir)(pool *, int, const char *, mode_t, const char * *);
    const char * (*explain_mkdtemp)(pool *, int, char *, const char * *);
    const char * (*explain_mkstemp)(pool *, int, char *, const char * *);
    const char * (*explain_open)(pool *, int, const char *, int, mode_t, const char * *);
    const char * (*explain_opendir)(pool *, int, const char *, const char * *);
    const char * (*explain_read)(pool *, int, int, void *, size_t, const char * *);
    const char * (*explain_readdir)(pool *, int, void *, const char * *);
    const char * (*explain_readlink)(pool *, int, const char *, char *, size_t, const char * *);
    const char * (*explain_readv)(pool *, int, int, const struct iovec *, int, const char * *);
    const char * (*explain_rename)(pool *, int, const char *, const char *, const char * *);
    const char * (*explain_rmdir)(pool *, int, const char *, const char * *);
    const char * (*explain_setegid)(pool *, int, gid_t, const char * *);
    const char * (*explain_seteuid)(pool *, int, uid_t, const char * *);
    const char * (*explain_setgid)(pool *, int, gid_t, const char * *);
    const char * (*explain_setregid)(pool *, int, gid_t, gid_t, const char * *);
    const char * (*explain_setresgid)(pool *, int, gid_t, gid_t, gid_t, const char * *);
    const char * (*explain_setresuid)(pool *, int, uid_t, uid_t, uid_t, const char * *);
    const char * (*explain_setreuid)(pool *, int, uid_t, uid_t, const char * *);
    const char * (*explain_setrlimit)(pool *, int, int, const struct rlimit *, const char * *);
    const char * (*explain_setsockopt)(pool *, int, int, int, int, const void *, socklen_t, const char * *);
    const char * (*explain_setuid)(pool *, int, uid_t, const char * *);
    const char * (*explain_socket)(pool *, int, int, int, int, const char * *);
    const char * (*explain_stat)(pool *, int, const char *, struct stat *, const char * *);
    const char * (*explain_statfs)(pool *, int, const char *, void *, const char * *);
    const char * (*explain_statvfs)(pool *, int, const char *, void *, const char * *);
    const char * (*explain_symlink)(pool *, int, const char *, const char *, const char * *);
    const char * (*explain_truncate)(pool *, int, const char *, off_t, const char * *);
    const char * (*explain_unlink)(pool *, int, const char *, const char * *);
    const char * (*explain_utimes)(pool *, int, const char *, const struct timeval *, const char * *);
    const char * (*explain_write)(pool *, int, int, const void *, size_t, const char * *);
    const char * (*explain_writev)(pool *, int, int, const struct iovec *, int, const char * *);
};

struct err_rec {
    pool * err_pool;
    int err_errno;
    const char * err_name;
    const char * err_desc;
    module * err_module;
    const char * err_file;
    unsigned int err_lineno;
    const char * err_user;
    uid_t err_uid;
    gid_t err_gid;
    const char * err_goal;
    const char * err_oper;
    const char * err_args;
    const char * err_explained;
};

struct fs_rec {
    pr_fs_t * fs_next;
    pr_fs_t * fs_prev;
    char * fs_name;
    char * fs_path;
    void * fs_data;
    struct pool_rec * fs_pool;
    int (*stat)(pr_fs_t *, const char *, struct stat *);
    int (*fstat)(pr_fh_t *, int, struct stat *);
    int (*lstat)(pr_fs_t *, const char *, struct stat *);
    int (*rename)(pr_fs_t *, const char *, const char *);
    int (*unlink)(pr_fs_t *, const char *);
    int (*open)(pr_fh_t *, const char *, int);
    int (*close)(pr_fh_t *, int);
    int (*read)(pr_fh_t *, int, char *, size_t);
    ssize_t (*pread)(pr_fh_t *, int, void *, size_t, off_t);
    int (*write)(pr_fh_t *, int, const char *, size_t);
    ssize_t (*pwrite)(pr_fh_t *, int, const void *, size_t, off_t);
    off_t (*lseek)(pr_fh_t *, int, off_t, int);
    int (*link)(pr_fs_t *, const char *, const char *);
    int (*readlink)(pr_fs_t *, const char *, char *, size_t);
    int (*symlink)(pr_fs_t *, const char *, const char *);
    int (*ftruncate)(pr_fh_t *, int, off_t);
    int (*truncate)(pr_fs_t *, const char *, off_t);
    int (*chmod)(pr_fs_t *, const char *, mode_t);
    int (*fchmod)(pr_fh_t *, int, mode_t);
    int (*chown)(pr_fs_t *, const char *, uid_t, gid_t);
    int (*fchown)(pr_fh_t *, int, uid_t, gid_t);
    int (*lchown)(pr_fs_t *, const char *, uid_t, gid_t);
    int (*access)(pr_fs_t *, const char *, int, uid_t, gid_t, array_header *);
    int (*faccess)(pr_fh_t *, int, uid_t, gid_t, array_header *);
    int (*utimes)(pr_fs_t *, const char *, struct timeval *);
    int (*futimes)(pr_fh_t *, int, struct timeval *);
    int (*fsync)(pr_fh_t *, int);
    ssize_t (*getxattr)(pool *, pr_fs_t *, const char *, const char *, void *, size_t);
    ssize_t (*lgetxattr)(pool *, pr_fs_t *, const char *, const char *, void *, size_t);
    ssize_t (*fgetxattr)(pool *, pr_fh_t *, int, const char *, void *, size_t);
    int (*listxattr)(pool *, pr_fs_t *, const char *, array_header * *);
    int (*llistxattr)(pool *, pr_fs_t *, const char *, array_header * *);
    int (*flistxattr)(pool *, pr_fh_t *, int, array_header * *);
    int (*removexattr)(pool *, pr_fs_t *, const char *, const char *);
    int (*lremovexattr)(pool *, pr_fs_t *, const char *, const char *);
    int (*fremovexattr)(pool *, pr_fh_t *, int, const char *);
    int (*setxattr)(pool *, pr_fs_t *, const char *, const char *, void *, size_t, int);
    int (*lsetxattr)(pool *, pr_fs_t *, const char *, const char *, void *, size_t, int);
    int (*fsetxattr)(pool *, pr_fh_t *, int, const char *, void *, size_t, int);
    int (*chdir)(pr_fs_t *, const char *);
    int (*chroot)(pr_fs_t *, const char *);
    void * (*opendir)(pr_fs_t *, const char *);
    int (*closedir)(pr_fs_t *, void *);
    struct dirent * (*readdir)(pr_fs_t *, void *);
    int (*mkdir)(pr_fs_t *, const char *, mode_t);
    int (*rmdir)(pr_fs_t *, const char *);
    int allow_xdev_link;
    int allow_xdev_rename;
    int non_std_path;
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
union __anon_0x00000323 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00006b03 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0000a79f {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00010c98 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0001260b {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00015075 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0001b4ef {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0001cef8 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0001f7b5 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00024612 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0002b3fd {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000302d4 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00034ac8 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00037fd3 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0003974c {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0003d34b {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0003e84c {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000400c7 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00043c03 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0004517a {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00048da2 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0004a761 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0004cee9 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000506c7 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00052089 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00054ba8 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00057b9a {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0005da32 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0006d22c {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0006f146 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00070dab {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000727a4 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00074861 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00078c45 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0007d95b {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00086f18 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000884d2 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0008c117 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00094c73 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000a9543 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000b3eba {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000b67ef {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000ba369 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000bf0b9 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000c9fb4 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000d1ae1 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000d6011 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000d8a4d {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000de1ee {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000e3bb3 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

struct config_struc {
    struct config_struc * next;
    struct config_struc * prev;
    int config_type;
    unsigned int config_id;
    struct pool_rec * pool;
    xaset_t * set;
    char * name;
    unsigned int argc;
    void * * argv;
    long int flags;
    struct server_struc * server;
    config_rec * parent;
    xaset_t * subset;
};

struct server_struc {
    struct server_struc * next;
    struct server_struc * prev;
    struct pool_rec * pool;
    xaset_t * set;
    const char * ServerName;
    const char * ServerAddress;
    const char * ServerFQDN;
    unsigned int ServerPort;
    struct tcp_keepalive * tcp_keepalive;
    int tcp_mss_len;
    int tcp_rcvbuf_len;
    unsigned char tcp_rcvbuf_override;
    int tcp_sndbuf_len;
    unsigned char tcp_sndbuf_override;
    const char * ServerAdmin;
    const pr_netaddr_t * addr;
    struct conn_struc * listen;
    xaset_t * conf;
    int config_type;
    unsigned int sid;
    pr_table_t * notes;
};

struct XAsetmember {
    xasetmember_t * next;
    xasetmember_t * prev;
};

typedef int (*XASET_COMPARE)(xasetmember_t *, xasetmember_t *);
typedef xasetmember_t * (*XASET_MCOPY)(xasetmember_t *);
struct __anon_0x000068ae {
    void * si_addr;
    short int si_addr_lsb;
    union __anon_0x0000688c __first;
};

struct __anon_0x0001cca3 {
    void * si_addr;
    short int si_addr_lsb;
    union __anon_0x0001cc81 __first;
};

struct __anon_0x0004cc59 {
    void * si_addr;
    short int si_addr_lsb;
    union __anon_0x0004cc37 __first;
};

struct json_node_st {
    struct json_node_st * parent;
    struct json_node_st * prev;
    struct json_node_st * next;
    char * key;
    JsonTag tag;
    union __anon_0x0007a2ee __anon0;
};

union block_hdr {
    union align a;
    struct __anon_0x00008adc h;
};

union __anon_0x00006822 {
    union sigval si_value;
    struct __anon_0x000067f1 __sigchld;
};

union __anon_0x0001cc17 {
    union sigval si_value;
    struct __anon_0x0001cbe6 __sigchld;
};

union __anon_0x0004cbcd {
    union sigval si_value;
    struct __anon_0x0004cb9c __sigchld;
};

struct stash {
    struct stash * next;
    struct stash * prev;
    pool * sym_pool;
    unsigned int sym_hash;
    const char * sym_name;
    size_t sym_namelen;
    pr_stash_type_t sym_type;
    module * sym_module;
    union __anon_0x00052ba5 ptr;
};

struct sigaction {
    union __anon_0x000069d4 __sa_handler;
    sigset_t sa_mask;
    int sa_flags;
    void (*sa_restorer)(void);
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
    struct __anon_0x00014eaf __st_atim32;
    struct __anon_0x00014eaf __st_mtim32;
    struct __anon_0x00014eaf __st_ctim32;
    ino_t st_ino;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
};

struct __anon_0x000005c7 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x0000aa07 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x0001534a {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x0001b757 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x0001d169 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x0001fae7 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x00024979 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x0002b6f8 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x0003059c {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x00034de3 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x00038241 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x00040394 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x000453f4 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x0004a9c9 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x0004d18e {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x00054f05 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x00057eb0 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x0005e431 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x00071013 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x00072a22 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x00074b7c {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x00078fd3 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x0007dc6a {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x0008d628 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x00095036 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x000a984e {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x000b6a5d {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x000ba5d9 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x000bf3c9 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x000ca32d {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x000d1dfc {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x000d627f {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x000d8d64 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct __anon_0x000de557 {
    struct pool_rec * p;
    int xfer_type;
    int direction;
    const char * filename;
    const char * path;
    const char * path_hidden;
    unsigned int bufsize;
    unsigned int buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    char * bufstart;
    char * buf;
};

struct utmpx {
    short int ut_type;
    short int __ut_pad1;
    pid_t ut_pid;
    char ut_line[32];
    char ut_id[4];
    char ut_user[32];
    char ut_host[256];
    struct __anon_0x00078d1a ut_exit;
    int ut_session;
    int __ut_pad2;
    struct timeval ut_tv;
    unsigned int ut_addr_v6[4];
    char __unused[20];
};

union __anon_0x000067cf {
    struct __anon_0x00006787 __piduid;
    struct __anon_0x000067ab __timer;
};

union __anon_0x0001cbc4 {
    struct __anon_0x0001cb7c __piduid;
    struct __anon_0x0001cba0 __timer;
};

union __anon_0x0004cb7a {
    struct __anon_0x0004cb32 __piduid;
    struct __anon_0x0004cb56 __timer;
};

struct file_rec {
    char * af_path;
    FILE * af_file;
    unsigned int af_lineno;
    unsigned char af_restricted_ids;
    authfile_id_t af_min_id;
    authfile_id_t af_max_id;
    unsigned char af_restricted_names;
    char * af_name_filter;
    pr_regex_t * af_name_regex;
    unsigned char af_name_regex_inverted;
    unsigned char af_restricted_homes;
    char * af_home_filter;
    pr_regex_t * af_home_regex;
    unsigned char af_home_regex_inverted;
};

struct in_addr {
    in_addr_t s_addr;
};

struct in6_addr {
    union __anon_0x00000323 __in6_union;
};

struct XAset {
    xasetmember_t * xas_list;
    struct pool_rec * pool;
    XASET_COMPARE xas_compare;
};

struct fs_statcache {
    xasetmember_t * next;
    xasetmember_t * prev;
    pool * sc_pool;
    const char * sc_path;
    struct stat sc_stat;
    int sc_errno;
    int sc_retval;
    time_t sc_cached_ts;
};

struct mlinfo {
    pool * pool;
    struct stat st;
    struct tm * tm;
    const char * user;
    const char * group;
    const char * type;
    const char * perm;
    const char * path;
    const char * real_path;
};

struct __anon_0x00006844 {
    union __anon_0x000067cf __first;
    union __anon_0x00006822 __second;
};

struct __anon_0x0001cc39 {
    union __anon_0x0001cbc4 __first;
    union __anon_0x0001cc17 __second;
};

struct __anon_0x0004cbef {
    union __anon_0x0004cb7a __first;
    union __anon_0x0004cbcd __second;
};

struct sockaddr_in {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;
    uint8_t sin_zero[8];
};

struct sockaddr_in6 {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
};

union __anon_0x00006934 {
    char __pad[116];
    struct __anon_0x00006844 __si_common;
    struct __anon_0x000068ae __sigfault;
    struct __anon_0x000068df __sigpoll;
    struct __anon_0x00006903 __sigsys;
};

union __anon_0x0001cd29 {
    char __pad[116];
    struct __anon_0x0001cc39 __si_common;
    struct __anon_0x0001cca3 __sigfault;
    struct __anon_0x0001ccd4 __sigpoll;
    struct __anon_0x0001ccf8 __sigsys;
};

union __anon_0x0004ccdf {
    char __pad[116];
    struct __anon_0x0004cbef __si_common;
    struct __anon_0x0004cc59 __sigfault;
    struct __anon_0x0004cc8a __sigpoll;
    struct __anon_0x0004ccae __sigsys;
};

union __anon_0x000004a7 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00006c13 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0000a8f7 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00010e01 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0001271e {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00015224 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0001b647 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0001d059 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0001f9d7 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00024869 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0002b5e8 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0003048d {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00034cd3 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00038131 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000398af {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0003d4a0 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0003e9b5 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00040284 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00043d66 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000452e4 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00048ea9 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0004a8b9 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0004d04f {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000507ce {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00052199 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00054df6 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00057da0 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0005de9b {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0006d393 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0006f259 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00070f03 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00072912 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00074a6c {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00078ec4 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0007db5a {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00087019 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00088634 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0008c5a4 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00094ed1 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000a9710 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000b3fc1 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000b694d {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000ba4c7 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000bf28b {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000ca21e {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000d1cec {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000d616f {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000d8c55 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000de448 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000e3ca3 {
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

struct __anon_0x0000698a {
    int si_signo;
    int si_errno;
    int si_code;
    union __anon_0x00006934 __si_fields;
};

struct __anon_0x0001cd7f {
    int si_signo;
    int si_errno;
    int si_code;
    union __anon_0x0001cd29 __si_fields;
};

struct __anon_0x0004cd35 {
    int si_signo;
    int si_errno;
    int si_code;
    union __anon_0x0004ccdf __si_fields;
};

struct netaddr_struc {
    int na_family;
    char na_dnsstr[256];
    int na_have_dnsstr;
    char na_ipstr[46];
    int na_have_ipstr;
    union __anon_0x000004a7 na_addr;
};

struct __anon_0x00000678 {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000005c7 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0000aab8 {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0000aa07 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000153fb {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0001534a xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0001b808 {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0001b757 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0001d21a {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0001d169 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0001fb98 {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0001fae7 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00024a2a {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00024979 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0002b7a9 {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0002b6f8 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0003064d {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0003059c xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00034e94 {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00034de3 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000382f2 {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00038241 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00040445 {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00040394 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000454a5 {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000453f4 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0004aa7a {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0004a9c9 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0004d23f {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0004d18e xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00054fb6 {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00054f05 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00057f61 {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00057eb0 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0005e4e2 {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0005e431 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000710c4 {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00071013 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00072ad3 {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00072a22 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00074c2d {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00074b7c xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00079084 {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00078fd3 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0007dd1b {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0007dc6a xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0008d6d9 {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0008d628 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000950e7 {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00095036 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000a98ff {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000a984e xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000b6b0e {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000b6a5d xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000ba68a {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000ba5d9 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000bf47a {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000bf3c9 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000ca3de {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000ca32d xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000d1ead {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000d1dfc xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000d6330 {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000d627f xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000d8e15 {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000d8d64 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000de608 {
    struct pool_rec * pool;
    volatile int sf_flags;
    volatile int sp_flags;
    pr_netaddr_t data_addr;
    short unsigned int data_port;
    const char * auth_mech;
    const char * rfc2228_mech;
    char cwd[4096];
    char vwd[4096];
    struct config_struc * dir_config;
    pid_t pid;
    int disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header * gids;
    array_header * groups;
    uid_t fsuid;
    gid_t fsgid;
    const char * user;
    const char * group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t * notes;
    const struct class_struc * conn_class;
    const char * proc_prefix;
    int wtmp_log;
    int multiline_rfc2228;
    struct conn_struc * c;
    struct conn_struc * d;
    int hide_password;
    const char * chroot_path;
    struct config_struc * anon_config;
    const char * anon_user;
    const char * curr_cmd;
    int curr_cmd_id;
    struct cmd_struc * curr_cmd_rec;
    int curr_phase;
    struct server_struc * prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000de557 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    unsigned int total_files_in;
    unsigned int total_files_out;
    unsigned int total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int disconnect_reason;
    struct module_struc * disconnect_module;
    uint64_t connect_time_ms;
};


/* ── exported function declarations ──────────────────────── */

extern void Blowfish_decipher(blf_ctx * c, u_int32_t * x);
extern void Blowfish_encipher(blf_ctx * c, u_int32_t * x);
extern void Blowfish_expand0state(blf_ctx * c, const u_int8_t * key, u_int16_t keybytes);
extern void Blowfish_expandstate(blf_ctx * c, const u_int8_t * data, u_int16_t databytes, const u_int8_t * key, u_int16_t keybytes);
extern void Blowfish_initstate(blf_ctx * c);
extern u_int32_t Blowfish_stream2word(const u_int8_t * data, u_int16_t databytes, u_int16_t * current);
extern void *_fini(/* signature unavailable */);
extern void *_init(/* signature unavailable */);
extern void *_start(/* signature unavailable */);
extern void *_start_c(/* signature unavailable */);
extern config_rec * add_config(server_rec * s, const char * name);
extern config_rec * add_config_param(const char *, unsigned int, ...);
extern config_rec * add_config_param_set(xaset_t * *, const char *, unsigned int, ...);
extern config_rec * add_config_param_str(const char *, unsigned int, ...);
extern config_rec * add_config_set(xaset_t * * set, const char * name);
extern array_header * append_arrays(pool * p, const array_header * first, const array_header * second);
extern void array_cat(array_header *, const array_header *);
extern int array_cat2(array_header * dst, const array_header * src);
extern int bcrypt_hashpass(const char * key, const char * salt, char * encrypted, size_t encryptedlen);
extern void blf_dec(blf_ctx * c, u_int32_t * data, u_int16_t blocks);
extern void blf_enc(blf_ctx * c, u_int32_t * data, u_int16_t blocks);
extern void blf_key(blf_ctx * c, const u_int8_t * k, u_int16_t len);
extern void build_dyn_config(pool *, const char *, struct stat *, unsigned char);
extern unsigned char check_context(cmd_rec *, int);
extern int check_shutmsg(pool * p, const char * path, time_t * shut, time_t * deny, time_t * disc, char * msg, size_t msg_size);
extern int child_add(pid_t pid, int fd);
extern long unsigned int child_count(void);
extern pr_child_t * child_get(pr_child_t * ch);
extern int child_remove(pid_t pid);
extern void child_signal(int signo);
extern void child_update(void);
extern void clear_array(array_header * arr);
extern unsigned char command_exists(const char * name);
extern array_header * copy_array(pool *, const array_header *);
extern array_header * copy_array_hdr(pool * p, const array_header * arr);
extern array_header * copy_array_str(pool *, const array_header *);
extern int core_chgrp(cmd_rec *, const char *, uid_t, gid_t);
extern int core_chmod(cmd_rec *, const char *, mode_t);
extern int create_home(pool *, const char *, const char *, uid_t, gid_t);
extern void destroy_pool(struct pool_rec *);
extern char * dir_abs_path(pool *, const char *, int);
extern char * dir_best_path(pool *, const char *);
extern char * dir_canonical_path(pool *, const char *);
extern char * dir_canonical_vpath(pool *, const char *);
extern int dir_check(pool *, cmd_rec *, const char *, const char *, int *);
extern int dir_check_canon(pool *, cmd_rec *, const char *, const char *, int *);
extern int dir_check_full(pool *, cmd_rec *, const char *, const char *, int *);
extern int dir_check_limits(cmd_rec * cmd, config_rec * c, const char * cmd_name, int hidden);
extern int dir_exists(const char * path);
extern int dir_exists2(pool * p, const char * path);
extern unsigned char dir_hide_file(const char *);
extern char * dir_interpolate(pool * p, const char * path);
extern config_rec * dir_match_path(pool * p, char * path);
extern int dir_readlink(pool *, const char *, char *, size_t, int);
extern char * dir_realpath(pool *, const char *);
extern int exists(const char * path);
extern int exists2(pool *, const char *);
extern int file_exists(const char * path);
extern int file_exists2(pool * p, const char * path);
extern mode_t file_mode(const char * path);
extern mode_t file_mode2(pool *, const char *);
extern config_rec * find_config(xaset_t *, int, const char *, int);
extern config_rec * find_config2(xaset_t *, int, const char *, int, long unsigned int);
extern config_rec * find_config_next(config_rec *, config_rec *, int, const char *, int);
extern config_rec * find_config_next2(config_rec *, config_rec *, int, const char *, int, long unsigned int);
extern void find_config_set_top(config_rec *);
extern int finish_json(void);
extern void fixup_dirs(server_rec *, int);
extern int fixup_servers(xaset_t * list);
extern void free_bindings(void);
extern void free_pools(void);
extern int get_boolean(cmd_rec *, int);
extern char * get_context_name(cmd_rec *);
extern xaset_t * get_dir_ctxt(pool *, char *);
extern const char * get_full_cmd(cmd_rec *);
extern long int get_name_max(char *, int);
extern void * get_param_ptr(xaset_t *, const char *, int);
extern void * get_param_ptr_next(const char * name, int recurse);
extern int glob(const char * pattern, int flags, int (*errfunc)(const char *, int), glob_t * pglob);
extern void globfree(glob_t * pglob);
extern void handle_alarm(void);
extern int init_auth(void);
extern void init_bindings(void);
extern void init_class(void);
extern void init_config(void);
extern void init_dirtree(void);
extern int init_fs(void);
extern void init_inet(void);
extern int init_json(void);
extern void init_log(void);
extern void init_netaddr(void);
extern void init_netio(void);
extern void init_pools(void);
extern int init_privs(void);
extern void init_regexp(void);
extern int init_signals(void);
extern int init_stash(void);
extern int is_dotdir(const char *);
extern void jot_set_deleted_filesz(off_t);
extern void json_append_element(JsonNode * array, JsonNode * element);
extern void json_append_member(JsonNode * object, const char * key, JsonNode * value);
extern int json_check(const JsonNode * node, char * errmsg);
extern JsonNode * json_decode(const char * json);
extern void json_delete(JsonNode * node);
extern char * json_encode(const JsonNode * node);
extern char * json_encode_string(const char * str);
extern JsonNode * json_find_element(JsonNode * array, unsigned int idx);
extern JsonNode * json_find_member(JsonNode * object, const char * name);
extern JsonNode * json_first_child(const JsonNode * node);
extern JsonNode * json_mkarray(void);
extern JsonNode * json_mkbool(int b);
extern JsonNode * json_mknull(void);
extern JsonNode * json_mknumber(double n);
extern JsonNode * json_mkobject(void);
extern JsonNode * json_mkstring(const char * s);
extern void json_prepend_element(JsonNode * array, JsonNode * element);
extern void json_prepend_member(JsonNode * object, const char * key, JsonNode * value);
extern void json_remove_from_parent(JsonNode * node);
extern void json_set_oom(void (*oom)(void));
extern char * json_stringify(const JsonNode * node, const char * space);
extern int json_validate(const char * json);
extern void kludge_disable_umask(void);
extern void kludge_enable_umask(void);
extern void log_closesyslog(void);
extern void log_discard(void);
extern int log_getfacility(void);
extern int log_opensyslog(const char *);
extern void log_setfacility(int);
extern void log_stderr(int bool);
extern int log_wtmp(const char *, const char *, const char *, const pr_netaddr_t *);
extern int login_check_limits(xaset_t *, int, int, int *);
extern int main(int argc, char * * argv, char * * envp);
extern array_header * make_array(pool *, unsigned int, size_t);
extern pool * make_sub_pool(pool *);
extern int memcache_clear(void);
extern long unsigned int memcache_get_sess_flags(void);
extern int memcache_init(void);
extern int memcache_set_servers(void * server_list);
extern int memcache_set_sess_connect_failures(uint64_t count);
extern int memcache_set_sess_flags(long unsigned int flags);
extern int memcache_set_sess_replicas(uint64_t count);
extern int memcache_set_timeouts(long unsigned int conn_millis, long unsigned int read_millis, long unsigned int write_millis, long unsigned int ejected_sec);
extern modret_t * mod_create_data(cmd_rec *, void *);
extern modret_t * mod_create_error(cmd_rec *, int);
extern modret_t * mod_create_ret(cmd_rec *, unsigned char, const char *, const char *);
extern int modules_init(void);
extern void modules_list(int flags);
extern void modules_list2(int (*listf)(const char *, ...), int flags);
extern int modules_session_init(void);
extern void * palloc(struct pool_rec *, size_t);
extern void * pallocsz(struct pool_rec * p, size_t sz);
extern int parse_config_path(pool *, const char *);
extern int parse_config_path2(pool * p, const char * path, unsigned int depth);
extern const char * path_subst_uservar(pool *, const char * *);
extern void * pcalloc(struct pool_rec *, size_t);
extern void * pcallocsz(struct pool_rec * p, size_t sz);
extern char * pdircat(pool *, ...);
extern void pr_alarms_block(void);
extern void pr_alarms_unblock(void);
extern pr_netio_t * pr_alloc_netio(pool * parent_pool);
extern pr_netio_t * pr_alloc_netio2(pool * parent_pool, module * owner, const char * owner_name);
extern int pr_ascii_ftp_from_crlf(pool *, char *, size_t, char * *, size_t *);
extern void pr_ascii_ftp_reset(void);
extern int pr_ascii_ftp_to_crlf(pool *, char *, size_t, char * *, size_t *);
extern int pr_auth_add_auth_only_module(const char * name);
extern int pr_auth_authenticate(pool *, const char *, const char *);
extern int pr_auth_authorize(pool * p, const char * name);
extern int pr_auth_banned_by_ftpusers(xaset_t *, const char *);
extern char * pr_auth_bcrypt(pool * p, const char * key, const char * salt, size_t * hashed_len);
extern void pr_auth_cache_clear(void);
extern int pr_auth_cache_set(int enable, unsigned int flags);
extern int pr_auth_check(pool *, const char *, const char *, const char *);
extern int pr_auth_chroot(const char *);
extern int pr_auth_clear_auth_only_modules(void);
extern void pr_auth_endgrent(pool *);
extern void pr_auth_endpwent(pool *);
extern config_rec * pr_auth_get_anon_config(pool *, const char * *, char * *, char * *);
extern const char * pr_auth_get_home(pool * p, const char * pw_dir);
extern struct group * pr_auth_getgrent(pool *);
extern struct group * pr_auth_getgrgid(pool * p, gid_t gid);
extern struct group * pr_auth_getgrnam(pool *, const char *);
extern int pr_auth_getgroups(pool *, const char *, array_header * *, array_header * *);
extern struct passwd * pr_auth_getpwent(pool *);
extern struct passwd * pr_auth_getpwnam(pool *, const char *);
extern struct passwd * pr_auth_getpwuid(pool * p, uid_t uid);
extern const char * pr_auth_gid2name(pool *, gid_t);
extern int pr_auth_is_valid_shell(xaset_t *, const char *);
extern gid_t pr_auth_name2gid(pool *, const char *);
extern uid_t pr_auth_name2uid(pool *, const char *);
extern int pr_auth_remove_auth_only_module(const char * name);
extern int pr_auth_requires_pass(pool *, const char *);
extern size_t pr_auth_set_max_password_len(pool *, size_t);
extern void pr_auth_setgrent(pool *);
extern void pr_auth_setpwent(pool *);
extern const char * pr_auth_uid2name(pool *, uid_t);
extern int pr_class_add_acl(const pr_netacl_t *);
extern int pr_class_add_note(const char * key, void * value, size_t valuesz);
extern int pr_class_close(void);
extern const pr_class_t * pr_class_find(const char *);
extern const pr_class_t * pr_class_get(const pr_class_t * prev);
extern const pr_class_t * pr_class_match_addr(const pr_netaddr_t * addr);
extern int pr_class_open(pool *, const char *);
extern int pr_class_satisfied(pool *, const pr_class_t *, const pr_netaddr_t *);
extern int pr_class_set_satisfy(int);
extern int pr_close_scoreboard(int);
extern void pr_closelog(int sockfd);
extern cmd_rec * pr_cmd_alloc(pool *, unsigned int, ...);
extern int pr_cmd_clear_cache(cmd_rec * cmd);
extern int pr_cmd_cmp(cmd_rec *, int);
extern int pr_cmd_dispatch(cmd_rec *);
extern int pr_cmd_dispatch_phase(cmd_rec *, int, int);
extern const char * pr_cmd_get_displayable_str(cmd_rec *, size_t *);
extern int pr_cmd_get_errno(cmd_rec * cmd);
extern int pr_cmd_get_id(const char *);
extern int pr_cmd_is_http(cmd_rec * cmd);
extern int pr_cmd_is_smtp(cmd_rec * cmd);
extern int pr_cmd_is_ssh2(cmd_rec * cmd);
extern int pr_cmd_read(cmd_rec * *);
extern int pr_cmd_set_errno(cmd_rec *, int);
extern void pr_cmd_set_handler(void (*)(server_rec *, conn_t *));
extern int pr_cmd_set_name(cmd_rec *, const char *);
extern int pr_cmd_strcmp(cmd_rec * cmd, const char * cmd_name);
extern config_rec * pr_conf_add_server_config_param_str(struct server_struc *, const char *, unsigned int, ...);
extern config_rec * pr_config_add(server_rec * s, const char * name, int flags);
extern config_rec * pr_config_add_set(xaset_t * *, const char *, int);
extern void pr_config_dump(void (*)(const char *, ...), xaset_t *, char *);
extern unsigned int pr_config_get_id(const char * name);
extern int pr_config_get_server_xfer_bufsz(int);
extern int pr_config_get_xfer_bufsz(void);
extern int pr_config_get_xfer_bufsz2(int direction);
extern void pr_config_merge_down(xaset_t *, int);
extern int pr_config_remove(xaset_t * set, const char * name, int flags, int recurse);
extern unsigned int pr_config_set_id(const char * name);
extern pr_fs_t * pr_create_fs(pool * p, const char * name);
extern void pr_data_abort(int, int);
extern void pr_data_cleanup(void);
extern void pr_data_clear_xfer_pool(void);
extern void pr_data_close(int quiet);
extern void pr_data_close2(void);
extern int pr_data_get_timeout(int);
extern int pr_data_ignore_ascii(int);
extern void pr_data_init(char *, int);
extern int pr_data_open(char *, char *, int, off_t);
extern void pr_data_reset(void);
extern pr_sendfile_t pr_data_sendfile(int, int *, int);
extern void pr_data_set_linger(long int);
extern void pr_data_set_timeout(int, int);
extern int pr_data_xfer(char *, size_t);
extern int pr_define_add(const char *, int);
extern unsigned char pr_define_exists(const char *);
extern void pr_delete_scoreboard(void);
extern int pr_display_fh(struct fh_rec *, const char *, const char *, int);
extern int pr_display_file(const char *, const char *, const char *, int);
extern char * pr_env_get(pool *, const char *);
extern int pr_env_set(pool *, const char *, const char *);
extern int pr_env_unset(pool *, const char *);
extern pr_error_t * pr_error_create(pool * p, int xerrno);
extern void pr_error_destroy(pr_error_t *);
extern int pr_error_explain_accept(pr_error_t * err, int fd, struct sockaddr * addr, socklen_t * addr_len);
extern int pr_error_explain_bind(pr_error_t * err, int fd, const struct sockaddr * addr, socklen_t addr_len);
extern int pr_error_explain_chdir(pr_error_t * err, const char * path);
extern int pr_error_explain_chmod(pr_error_t * err, const char * path, mode_t mode);
extern int pr_error_explain_chown(pr_error_t * err, const char * path, uid_t uid, gid_t gid);
extern int pr_error_explain_chroot(pr_error_t * err, const char * path);
extern int pr_error_explain_close(pr_error_t * err, int fd);
extern int pr_error_explain_closedir(pr_error_t * err, void * dirh);
extern int pr_error_explain_connect(pr_error_t * err, int fd, const struct sockaddr * addr, socklen_t addr_len);
extern int pr_error_explain_fchmod(pr_error_t * err, int fd, mode_t mode);
extern int pr_error_explain_fchown(pr_error_t * err, int fd, uid_t uid, gid_t gid);
extern int pr_error_explain_fclose(pr_error_t * err, FILE * fh);
extern int pr_error_explain_fcntl(pr_error_t * err, int fd, int op, long int arg);
extern int pr_error_explain_fdopen(pr_error_t * err, int fd, const char * mode);
extern int pr_error_explain_flock(pr_error_t * err, int fd, int op);
extern int pr_error_explain_fopen(pr_error_t * err, const char * path, const char * mode);
extern int pr_error_explain_fork(pr_error_t * err);
extern int pr_error_explain_fstat(pr_error_t * err, int fd, struct stat * st);
extern int pr_error_explain_fstatfs(pr_error_t * err, int fd, void * stfs);
extern int pr_error_explain_fstatvfs(pr_error_t * err, int fd, void * stfs);
extern int pr_error_explain_fsync(pr_error_t * err, int fd);
extern int pr_error_explain_ftruncate(pr_error_t * err, int fd, off_t len);
extern int pr_error_explain_futimes(pr_error_t * err, int fd, const struct timeval * tvs);
extern int pr_error_explain_getaddrinfo(pr_error_t * err, const char * name, const char * service, const struct addrinfo * hints, struct addrinfo * * res);
extern int pr_error_explain_gethostbyname(pr_error_t * err, const char * name);
extern int pr_error_explain_gethostbyname2(pr_error_t * err, const char * name, int family);
extern int pr_error_explain_gethostname(pr_error_t * err, char * buf, size_t sz);
extern int pr_error_explain_getnameinfo(pr_error_t * err, const struct sockaddr * addr, socklen_t addr_len, char * host, size_t host_len, char * service, size_t service_len, int flags);
extern int pr_error_explain_getpeername(pr_error_t * err, int fd, struct sockaddr * addr, socklen_t * addr_len);
extern int pr_error_explain_getrlimit(pr_error_t * err, int resource, struct rlimit * rlim);
extern int pr_error_explain_getsockname(pr_error_t * err, int fd, struct sockaddr * addr, socklen_t * addr_len);
extern int pr_error_explain_getsockopt(pr_error_t * err, int fd, int level, int option, void * val, socklen_t * valsz);
extern int pr_error_explain_lchown(pr_error_t * err, const char * path, uid_t uid, gid_t gid);
extern int pr_error_explain_link(pr_error_t * err, const char * target_path, const char * link_path);
extern int pr_error_explain_listen(pr_error_t * err, int fd, int backlog);
extern int pr_error_explain_lseek(pr_error_t * err, int fd, off_t offset, int whence);
extern int pr_error_explain_lstat(pr_error_t * err, const char * path, struct stat * st);
extern int pr_error_explain_mkdir(pr_error_t * err, const char * path, mode_t mode);
extern int pr_error_explain_mkdtemp(pr_error_t * err, char * tmpl);
extern int pr_error_explain_mkstemp(pr_error_t * err, char * tmpl);
extern int pr_error_explain_open(pr_error_t * err, const char * path, int flags, mode_t mode);
extern int pr_error_explain_opendir(pr_error_t * err, const char * path);
extern int pr_error_explain_read(pr_error_t * err, int fd, void * buf, size_t sz);
extern int pr_error_explain_readdir(pr_error_t * err, void * dirh);
extern int pr_error_explain_readlink(pr_error_t * err, const char * path, char * buf, size_t sz);
extern int pr_error_explain_readv(pr_error_t * err, int fd, const struct iovec * iov, int iov_len);
extern int pr_error_explain_rename(pr_error_t * err, const char * old_path, const char * new_path);
extern int pr_error_explain_rmdir(pr_error_t * err, const char * path);
extern int pr_error_explain_setegid(pr_error_t * err, gid_t gid);
extern int pr_error_explain_seteuid(pr_error_t * err, uid_t uid);
extern int pr_error_explain_setgid(pr_error_t * err, gid_t gid);
extern int pr_error_explain_setregid(pr_error_t * err, gid_t rgid, gid_t egid);
extern int pr_error_explain_setresgid(pr_error_t * err, gid_t rgid, gid_t egid, gid_t sgid);
extern int pr_error_explain_setresuid(pr_error_t * err, uid_t ruid, uid_t euid, uid_t suid);
extern int pr_error_explain_setreuid(pr_error_t * err, uid_t ruid, uid_t euid);
extern int pr_error_explain_setrlimit(pr_error_t * err, int resource, const struct rlimit * rlim);
extern int pr_error_explain_setsockopt(pr_error_t * err, int fd, int level, int option, const void * val, socklen_t valsz);
extern int pr_error_explain_setuid(pr_error_t * err, uid_t uid);
extern int pr_error_explain_socket(pr_error_t * err, int domain, int type, int proto);
extern int pr_error_explain_stat(pr_error_t * err, const char * path, struct stat * st);
extern int pr_error_explain_statfs(pr_error_t * err, const char * path, void * stfs);
extern int pr_error_explain_statvfs(pr_error_t * err, const char * path, void * stfs);
extern int pr_error_explain_symlink(pr_error_t * err, const char * target_path, const char * link_path);
extern int pr_error_explain_truncate(pr_error_t * err, const char * path, off_t len);
extern int pr_error_explain_unlink(pr_error_t * err, const char * path);
extern int pr_error_explain_utimes(pr_error_t * err, const char * path, const struct timeval * tvs);
extern int pr_error_explain_write(pr_error_t * err, int fd, const void * buf, size_t sz);
extern int pr_error_explain_writev(pr_error_t * err, int fd, const struct iovec * iov, int iov_len);
extern int pr_error_get_who(pr_error_t * err, uid_t * err_uid, gid_t * err_gid);
extern pr_error_explainer_t * pr_error_register_explainer(pool * p, module * m, const char * name);
extern int pr_error_set_what(pr_error_t * err, const char * what);
extern int pr_error_set_where(pr_error_t *, module *, const char *, unsigned int);
extern int pr_error_set_why(pr_error_t *, const char *);
extern const char * pr_error_strerror(pr_error_t *, int);
extern int pr_error_unregister_explainer(pool * p, module * m, const char * name);
extern unsigned int pr_error_use_details(unsigned int use_details);
extern int pr_error_use_explainer(pool * p, module * m, const char * name);
extern unsigned int pr_error_use_formats(unsigned int use_formats);
extern void pr_event_dump(void (*dumpf)(const char *, ...));
extern void pr_event_generate(const char *, const void *);
extern int pr_event_listening(const char * event);
extern int pr_event_register(module *, const char *, void (*)(const void *, void *), void *);
extern int pr_event_unregister(module *, const char *, void (*)(const void *, void *));
extern array_header * pr_expr_create(pool *, unsigned int *, char * *);
extern int pr_expr_eval_class_and(char * * expr);
extern int pr_expr_eval_class_or(char * *);
extern int pr_expr_eval_group_and(char * *);
extern int pr_expr_eval_group_or(char * *);
extern int pr_expr_eval_user_and(char * * expr);
extern int pr_expr_eval_user_or(char * *);
extern int pr_feat_add(const char *);
extern const char * pr_feat_get(void);
extern const char * pr_feat_get_next(void);
extern int pr_feat_remove(const char *);
extern int pr_filter_allow_path(xaset_t *, const char *);
extern int pr_filter_parse_flags(pool *, const char *);
extern int pr_fnmatch(const char * pattern, const char * string, int flags);
extern void pr_fs_clean_path(const char *, char *, size_t);
extern int pr_fs_clean_path2(const char *, char *, size_t, int);
extern void pr_fs_clear_cache(void);
extern int pr_fs_clear_cache2(const char *);
extern void pr_fs_close_extra_fds(void);
extern int pr_fs_copy_file(const char *, const char *);
extern int pr_fs_copy_file2(const char * src, const char * dst, int flags, void (*progress_cb)(int));
extern char * pr_fs_decode_path(pool *, const char *);
extern char * pr_fs_decode_path2(pool *, const char *, int);
extern int pr_fs_dircat(char * buf, int buflen, const char * dir1, const char * dir2);
extern char * pr_fs_encode_path(pool *, const char *);
extern void pr_fs_fadvise(int, off_t, off_t, int);
extern int pr_fs_fgetsize(int fd, off_t * fs_size);
extern int pr_fs_get_usable_fd(int fd);
extern int pr_fs_get_usable_fd2(int *);
extern const char * pr_fs_getcwd(void);
extern off_t pr_fs_getsize(char * path);
extern int pr_fs_getsize2(char *, off_t *);
extern const char * pr_fs_getvwd(void);
extern int pr_fs_glob(const char *, int, int (*)(const char *, int), glob_t *);
extern void pr_fs_globfree(glob_t *);
extern int pr_fs_have_access(struct stat * st, int mode, uid_t uid, gid_t gid, array_header * suppl_gids);
extern int pr_fs_interpolate(const char *, char *, size_t);
extern int pr_fs_is_nfs(const char *);
extern char * pr_fs_join_path(pool * p, array_header * components, size_t count);
extern int pr_fs_resolve_partial(const char * path, char * buf, size_t buflen, int op);
extern int pr_fs_resolve_path(const char * path, char * buf, size_t buflen, int op);
extern int pr_fs_setcwd(const char *);
extern array_header * pr_fs_split_path(pool * p, const char * path);
extern void pr_fs_statcache_dump(void);
extern void pr_fs_statcache_free(void);
extern void pr_fs_statcache_reset(void);
extern int pr_fs_statcache_set_policy(unsigned int, unsigned int, unsigned int);
extern int pr_fs_use_encoding(int bool);
extern int pr_fs_valid_path(const char *);
extern void pr_fs_virtual_path(const char * path, char * buf, size_t buflen);
extern int pr_fsio_access(const char *, int, uid_t, gid_t, array_header *);
extern int pr_fsio_chdir(const char *, int);
extern int pr_fsio_chdir_canon(const char *, int);
extern int pr_fsio_chmod(const char *, mode_t);
extern int pr_fsio_chmod_with_error(pool *, const char *, mode_t, pr_error_t * *);
extern int pr_fsio_chown(const char *, uid_t, gid_t);
extern int pr_fsio_chown_with_error(pool *, const char *, uid_t, gid_t, pr_error_t * *);
extern int pr_fsio_chroot(const char * path);
extern int pr_fsio_chroot_with_error(pool * p, const char * path, pr_error_t * * err);
extern int pr_fsio_close(pr_fh_t *);
extern int pr_fsio_close_with_error(pool *, pr_fh_t *, pr_error_t * *);
extern int pr_fsio_closedir(void *);
extern int pr_fsio_faccess(pr_fh_t * fh, int mode, uid_t uid, gid_t gid, array_header * suppl_gids);
extern int pr_fsio_fchmod(pr_fh_t * fh, mode_t mode);
extern int pr_fsio_fchmod_with_error(pool * p, pr_fh_t * fh, mode_t mode, pr_error_t * * err);
extern int pr_fsio_fchown(pr_fh_t * fh, uid_t uid, gid_t gid);
extern int pr_fsio_fchown_with_error(pool * p, pr_fh_t * fh, uid_t uid, gid_t gid, pr_error_t * * err);
extern ssize_t pr_fsio_fgetxattr(pool * p, pr_fh_t * fh, const char * name, void * val, size_t valsz);
extern int pr_fsio_flistxattr(pool * p, pr_fh_t * fh, array_header * * names);
extern int pr_fsio_fremovexattr(pool * p, pr_fh_t * fh, const char * name);
extern int pr_fsio_fsetxattr(pool * p, pr_fh_t * fh, const char * name, void * val, size_t valsz, int flags);
extern int pr_fsio_fstat(pr_fh_t *, struct stat *);
extern int pr_fsio_fsync(pr_fh_t * fh);
extern int pr_fsio_ftruncate(pr_fh_t *, off_t);
extern int pr_fsio_futimes(pr_fh_t * fh, struct timeval * tvs);
extern char * pr_fsio_getline(char * buf, size_t buflen, pr_fh_t * fh, unsigned int * lineno);
extern char * pr_fsio_getpipebuf(pool * p, int fd, long int * bufsz);
extern char * pr_fsio_gets(char * buf, size_t size, pr_fh_t * fh);
extern ssize_t pr_fsio_getxattr(pool * p, const char * path, const char * name, void * val, size_t valsz);
extern int pr_fsio_guard_chroot(int);
extern int pr_fsio_lchown(const char *, uid_t, gid_t);
extern int pr_fsio_lchown_with_error(pool *, const char *, uid_t, gid_t, pr_error_t * *);
extern ssize_t pr_fsio_lgetxattr(pool * p, const char * path, const char * name, void * val, size_t valsz);
extern int pr_fsio_link(const char * target_path, const char * link_path);
extern int pr_fsio_listxattr(pool * p, const char * path, array_header * * names);
extern int pr_fsio_llistxattr(pool * p, const char * path, array_header * * names);
extern int pr_fsio_lremovexattr(pool * p, const char * path, const char * name);
extern off_t pr_fsio_lseek(pr_fh_t *, off_t, int);
extern int pr_fsio_lsetxattr(pool * p, const char * path, const char * name, void * val, size_t valsz, int flags);
extern int pr_fsio_lstat(const char *, struct stat *);
extern int pr_fsio_lstat_with_error(pool *, const char *, struct stat *, pr_error_t * *);
extern int pr_fsio_mkdir(const char *, mode_t);
extern int pr_fsio_mkdir_with_error(pool * p, const char * path, mode_t mode, pr_error_t * * err);
extern pr_fh_t * pr_fsio_open(const char *, int);
extern pr_fh_t * pr_fsio_open_canon(const char * name, int flags);
extern pr_fh_t * pr_fsio_open_with_error(pool *, const char *, int, pr_error_t * *);
extern void * pr_fsio_opendir(const char *);
extern ssize_t pr_fsio_pread(pr_fh_t *, void *, size_t, off_t);
extern int pr_fsio_puts(const char * buf, pr_fh_t * fh);
extern ssize_t pr_fsio_pwrite(pr_fh_t * fh, const void * buf, size_t size, off_t offset);
extern int pr_fsio_read(pr_fh_t * fh, char * buf, size_t size);
extern int pr_fsio_read_with_error(pool *, pr_fh_t *, char *, size_t, pr_error_t * *);
extern struct dirent * pr_fsio_readdir(void *);
extern int pr_fsio_readlink(const char *, char *, size_t);
extern int pr_fsio_removexattr(pool * p, const char * path, const char * name);
extern int pr_fsio_rename(const char *, const char *);
extern int pr_fsio_rename_with_error(pool *, const char *, const char *, pr_error_t * *);
extern int pr_fsio_rmdir(const char * path);
extern int pr_fsio_rmdir_with_error(pool *, const char *, pr_error_t * *);
extern int pr_fsio_set_block(pr_fh_t * fh);
extern long unsigned int pr_fsio_set_options(long unsigned int);
extern int pr_fsio_set_use_mkdtemp(int value);
extern int pr_fsio_setxattr(pool * p, const char * path, const char * name, void * val, size_t valsz, int flags);
extern int pr_fsio_smkdir(pool *, const char *, mode_t, uid_t, gid_t);
extern int pr_fsio_stat(const char *, struct stat *);
extern int pr_fsio_stat_with_error(pool * p, const char * path, struct stat * st, pr_error_t * * err);
extern int pr_fsio_symlink(const char *, const char *);
extern int pr_fsio_truncate(const char * path, off_t len);
extern int pr_fsio_unlink(const char *);
extern int pr_fsio_unlink_with_error(pool *, const char *, pr_error_t * *);
extern int pr_fsio_utimes(const char * path, struct timeval * tvs);
extern int pr_fsio_utimes_with_root(const char *, struct timeval *);
extern int pr_fsio_write(pr_fh_t *, const char *, size_t);
extern int pr_fsio_write_with_error(pool *, pr_fh_t *, const char *, size_t, pr_error_t * *);
extern pr_fs_t * pr_get_fs(const char *, int *);
extern pr_netio_t * pr_get_netio(int strm_type);
extern const char * pr_get_scoreboard(void);
extern const char * pr_get_scoreboard_mutex(void);
extern void pr_getopt_reset(void);
extern int pr_gettimeofday_millis(uint64_t *);
extern const char * pr_gid2str(pool *, gid_t);
extern struct tm * pr_gmtime(pool *, const time_t *);
extern void pr_help_add(const char *, const char *, int);
extern int pr_help_add_response(cmd_rec *, const char *);
extern conn_t * pr_inet_accept(pool *, conn_t *, conn_t *, int, int, unsigned char);
extern int pr_inet_accept_nowait(pool *, conn_t *);
extern void pr_inet_clear(void);
extern void pr_inet_close(pool *, conn_t *);
extern int pr_inet_connect(pool *, conn_t *, const pr_netaddr_t *, int);
extern int pr_inet_connect_nowait(pool * p, conn_t * c, const pr_netaddr_t * addr, int port);
extern conn_t * pr_inet_copy_conn(pool * p, conn_t * c);
extern conn_t * pr_inet_create_conn(pool *, int, const pr_netaddr_t *, int, int);
extern conn_t * pr_inet_create_conn_portrange(pool *, const pr_netaddr_t *, int, int);
extern int pr_inet_generate_socket_event(const char *, server_rec *, const pr_netaddr_t *, int);
extern int pr_inet_get_conn_info(conn_t *, int);
extern int pr_inet_getservport(pool *, const char *, const char *);
extern void pr_inet_lingering_abort(pool *, conn_t *, long int);
extern void pr_inet_lingering_close(pool *, conn_t *, long int);
extern int pr_inet_listen(pool *, conn_t *, int, int);
extern conn_t * pr_inet_openrw(pool *, conn_t *, const pr_netaddr_t *, int, int, int, int, int);
extern int pr_inet_resetlisten(pool *, conn_t *);
extern int pr_inet_set_async(pool * p, conn_t * c);
extern int pr_inet_set_block(pool *, conn_t *);
extern int pr_inet_set_default_family(pool *, int);
extern int pr_inet_set_nonblock(pool *, conn_t *);
extern int pr_inet_set_proto_cork(int, int);
extern int pr_inet_set_proto_nodelay(pool * p, conn_t * conn, int nodelay);
extern int pr_inet_set_proto_opts(pool *, conn_t *, int, int, int, int);
extern int pr_inet_set_socket_opts(pool *, conn_t *, int, int, struct tcp_keepalive *);
extern int pr_insert_fs(pr_fs_t * fs, const char * path);
extern conn_t * pr_ipbind_accept_conn(fd_set * readfds, int * listenfd);
extern int pr_ipbind_add_binds(server_rec * serv);
extern int pr_ipbind_close(const pr_netaddr_t * addr, unsigned int port, unsigned char close_namebinds);
extern int pr_ipbind_close_listeners(void);
extern int pr_ipbind_create(server_rec * server, const pr_netaddr_t * addr, unsigned int port);
extern pr_ipbind_t * pr_ipbind_find(const pr_netaddr_t * addr, unsigned int port, unsigned char skip_inactive);
extern pr_ipbind_t * pr_ipbind_get(pr_ipbind_t * prev);
extern conn_t * pr_ipbind_get_listening_conn(server_rec * server, const pr_netaddr_t * addr, unsigned int port);
extern server_rec * pr_ipbind_get_server(const pr_netaddr_t * addr, unsigned int port);
extern int pr_ipbind_listen(fd_set * readfds);
extern int pr_ipbind_open(const pr_netaddr_t * addr, unsigned int port, conn_t * listen_conn, unsigned char isdefault, unsigned char islocalhost, unsigned char open_namebinds);
extern pr_jot_filters_t * pr_jot_filters_create(pool *, const char *, int, int);
extern int pr_jot_filters_destroy(pr_jot_filters_t * filters);
extern int pr_jot_filters_include_classes(pr_jot_filters_t *, int);
extern pr_table_t * pr_jot_get_logfmt2json(pool * p);
extern const char * pr_jot_get_logfmt_id_name(unsigned char logfmt_id);
extern int pr_jot_on_json(pool * p, pr_jot_ctx_t * ctx, unsigned char logfmt_id, const char * jot_hint, const void * val);
extern int pr_jot_parse_logfmt(pool *, const char *, pr_jot_ctx_t *, int (*)(pool *, pr_jot_ctx_t *, unsigned char, const char *, size_t), int (*)(pool *, pr_jot_ctx_t *, const char *, size_t), int (*)(pool *, pr_jot_ctx_t *, char), int);
extern int pr_jot_parse_on_meta(pool *, pr_jot_ctx_t *, unsigned char, const char *, size_t);
extern int pr_jot_parse_on_other(pool *, pr_jot_ctx_t *, char);
extern int pr_jot_parse_on_unknown(pool *, pr_jot_ctx_t *, const char *, size_t);
extern int pr_jot_resolve_logfmt(pool *, cmd_rec *, pr_jot_filters_t *, unsigned char *, pr_jot_ctx_t *, int (*)(pool *, pr_jot_ctx_t *, unsigned char, const char *, const void *), int (*)(pool *, pr_jot_ctx_t *, unsigned char), int (*)(pool *, pr_jot_ctx_t *, unsigned char *, size_t));
extern int pr_jot_resolve_logfmt_id(pool * p, cmd_rec * cmd, pr_jot_filters_t * filters, unsigned char logfmt_id, const char * logfmt_data, size_t logfmt_datalen, pr_jot_ctx_t * ctx, int (*on_meta)(pool *, pr_jot_ctx_t *, unsigned char, const char *, const void *), int (*on_default)(pool *, pr_jot_ctx_t *, unsigned char));
extern int pr_jot_scan_logfmt(pool * p, unsigned char * logfmt, unsigned char logfmt_id, pr_jot_ctx_t * ctx, int (*on_meta)(pool *, pr_jot_ctx_t *, unsigned char, const char *, size_t), int flags);
extern pr_json_array_t * pr_json_array_alloc(pool * p);
extern int pr_json_array_append_array(pool * p, pr_json_array_t * json, const pr_json_array_t * val);
extern int pr_json_array_append_bool(pool * p, pr_json_array_t * json, int val);
extern int pr_json_array_append_null(pool * p, pr_json_array_t * json);
extern int pr_json_array_append_number(pool * p, pr_json_array_t * json, double val);
extern int pr_json_array_append_object(pool * p, pr_json_array_t * json, const pr_json_object_t * val);
extern int pr_json_array_append_string(pool * p, pr_json_array_t * json, const char * val);
extern int pr_json_array_count(const pr_json_array_t * json);
extern int pr_json_array_exists(const pr_json_array_t * json, unsigned int idx);
extern int pr_json_array_free(pr_json_array_t * json);
extern pr_json_array_t * pr_json_array_from_text(pool * p, const char * text);
extern int pr_json_array_get_array(pool * p, const pr_json_array_t * json, unsigned int idx, pr_json_array_t * * val);
extern int pr_json_array_get_bool(pool * p, const pr_json_array_t * json, unsigned int idx, int * val);
extern int pr_json_array_get_null(pool * p, const pr_json_array_t * json, unsigned int idx);
extern int pr_json_array_get_number(pool * p, const pr_json_array_t * json, unsigned int idx, double * val);
extern int pr_json_array_get_object(pool * p, const pr_json_array_t * json, unsigned int idx, pr_json_object_t * * val);
extern int pr_json_array_get_string(pool * p, const pr_json_array_t * json, unsigned int idx, char * * val);
extern int pr_json_array_remove(pr_json_array_t * json, unsigned int idx);
extern char * pr_json_array_to_text(pool * p, const pr_json_array_t * json, const char * indent);
extern pr_json_object_t * pr_json_object_alloc(pool * p);
extern int pr_json_object_count(const pr_json_object_t * json);
extern int pr_json_object_exists(const pr_json_object_t * json, const char * key);
extern int pr_json_object_free(pr_json_object_t * json);
extern pr_json_object_t * pr_json_object_from_text(pool * p, const char * text);
extern int pr_json_object_get_array(pool * p, const pr_json_object_t * json, const char * key, pr_json_array_t * * val);
extern int pr_json_object_get_bool(pool * p, const pr_json_object_t * json, const char * key, int * val);
extern int pr_json_object_get_null(pool * p, const pr_json_object_t * json, const char * key);
extern int pr_json_object_get_number(pool * p, const pr_json_object_t * json, const char * key, double * val);
extern int pr_json_object_get_object(pool * p, const pr_json_object_t * json, const char * key, pr_json_object_t * * val);
extern int pr_json_object_get_string(pool * p, const pr_json_object_t * json, const char * key, char * * val);
extern int pr_json_object_remove(pr_json_object_t * json, const char * key);
extern int pr_json_object_set_array(pool * p, pr_json_object_t * json, const char * key, const pr_json_array_t * val);
extern int pr_json_object_set_bool(pool *, pr_json_object_t *, const char *, int);
extern int pr_json_object_set_null(pool * p, pr_json_object_t * json, const char * key);
extern int pr_json_object_set_number(pool *, pr_json_object_t *, const char *, double);
extern int pr_json_object_set_object(pool * p, pr_json_object_t * json, const char * key, const pr_json_object_t * val);
extern int pr_json_object_set_string(pool *, pr_json_object_t *, const char *, const char *);
extern char * pr_json_object_to_text(pool * p, const pr_json_object_t * json, const char * indent);
extern int pr_json_text_validate(pool * p, const char * text);
extern const char * pr_json_type_name(unsigned int);
extern struct tm * pr_localtime(pool *, const time_t *);
extern int pr_lock_scoreboard(int mutex_fd, int lock_type);
extern void pr_log_auth(int, const char *, ...);
extern void pr_log_debug(int, const char *, ...);
extern int pr_log_event_generate(unsigned int, int, int, const char *, size_t);
extern int pr_log_event_listening(unsigned int);
extern int pr_log_openfile(const char *, int *, mode_t);
extern void pr_log_pri(int, const char *, ...);
extern int pr_log_set_options(long unsigned int);
extern int pr_log_setdebuglevel(int);
extern int pr_log_setdefaultlevel(int level);
extern void pr_log_stacktrace(int log_fd, const char * name);
extern int pr_log_str2sysloglevel(const char *);
extern int pr_log_vwritefile(int logfd, const char * ident, const char * fmt, va_list msg);
extern int pr_log_writefile(int logfd, const char * ident, const char * fmt, ...);
extern int pr_memcache_add(pr_memcache_t * mcache, module * m, const char * key, void * value, size_t valuesz, time_t expires, uint32_t flags);
extern int pr_memcache_conn_clone(pool * p, pr_memcache_t * mcache);
extern int pr_memcache_conn_close(pr_memcache_t * mcache);
extern pr_memcache_t * pr_memcache_conn_get(void);
extern pr_memcache_t * pr_memcache_conn_new(pool * p, module * m, long unsigned int flags, uint64_t nreplicas);
extern int pr_memcache_conn_set_namespace(pr_memcache_t * mcache, module * m, const char * prefix);
extern int pr_memcache_decr(pr_memcache_t * mcache, module * m, const char * key, uint32_t decr, uint64_t * value);
extern void * pr_memcache_get(pr_memcache_t * mcache, module * m, const char * key, size_t * valuesz, uint32_t * flags);
extern char * pr_memcache_get_str(pr_memcache_t * mcache, module * m, const char * key, uint32_t * flags);
extern int pr_memcache_incr(pr_memcache_t * mcache, module * m, const char * key, uint32_t incr, uint64_t * value);
extern int pr_memcache_kadd(pr_memcache_t * mcache, module * m, const char * key, size_t keysz, void * value, size_t valuesz, time_t expires, uint32_t flags);
extern void * pr_memcache_kget(pr_memcache_t * mcache, module * m, const char * key, size_t keysz, size_t * valuesz, uint32_t * flags);
extern char * pr_memcache_kget_str(pr_memcache_t * mcache, module * m, const char * key, size_t keysz, uint32_t * flags);
extern int pr_memcache_kremove(pr_memcache_t * mcache, module * m, const char * key, size_t keysz, time_t expires);
extern int pr_memcache_kset(pr_memcache_t * mcache, module * m, const char * key, size_t keysz, void * value, size_t valuesz, time_t expires, uint32_t flags);
extern int pr_memcache_remove(pr_memcache_t * mcache, module * m, const char * key, time_t expires);
extern int pr_memcache_set(pr_memcache_t * mcache, module * m, const char * key, void * value, size_t valuesz, time_t expires, uint32_t flags);
extern void pr_memscrub(void *, size_t);
extern modret_t * pr_module_call(module *, modret_t * (*)(cmd_rec *), cmd_rec *);
extern unsigned char pr_module_exists(const char *);
extern module * pr_module_get(const char *);
extern int pr_module_load(module * m);
extern int pr_module_load_authtab(module *);
extern int pr_module_load_cmdtab(module * m);
extern int pr_module_load_conftab(module * m);
extern int pr_module_unload(module * m);
extern int pr_namebind_close(const char * name, const pr_netaddr_t * addr);
extern unsigned int pr_namebind_count(server_rec * srv);
extern int pr_namebind_create(server_rec * server, const char * name, const pr_netaddr_t * addr, unsigned int server_port);
extern pr_namebind_t * pr_namebind_find(const char * name, const pr_netaddr_t * addr, unsigned int port, unsigned char skip_inactive);
extern server_rec * pr_namebind_get_server(const char *, const pr_netaddr_t *, unsigned int);
extern int pr_namebind_open(const char * name, const pr_netaddr_t * addr, unsigned int server_port);
extern pr_netacl_t * pr_netacl_create(pool *, char *);
extern pr_netacl_t * pr_netacl_dup(pool *, const pr_netacl_t *);
extern int pr_netacl_get_negated(const pr_netacl_t * acl);
extern const char * pr_netacl_get_str(pool *, const pr_netacl_t *);
extern const char * pr_netacl_get_str2(pool * p, const pr_netacl_t * acl, int flags);
extern pr_netacl_type_t pr_netacl_get_type(const pr_netacl_t * acl);
extern int pr_netacl_match(const pr_netacl_t *, const pr_netaddr_t *);
extern pr_netaddr_t * pr_netaddr_alloc(pool *);
extern void pr_netaddr_clear(pr_netaddr_t *);
extern void pr_netaddr_clear_cache(void);
extern void pr_netaddr_clear_dnscache(const char * ip_str);
extern void pr_netaddr_clear_ipcache(const char * name);
extern int pr_netaddr_cmp(const pr_netaddr_t *, const pr_netaddr_t *);
extern void pr_netaddr_disable_ipv6(void);
extern pr_netaddr_t * pr_netaddr_dup(pool *, const pr_netaddr_t *);
extern void pr_netaddr_enable_ipv6(void);
extern int pr_netaddr_fnmatch(const pr_netaddr_t *, const char *, int);
extern const pr_netaddr_t * pr_netaddr_get_addr(pool *, const char *, array_header * *);
extern const pr_netaddr_t * pr_netaddr_get_addr2(pool *, const char *, array_header * *, unsigned int);
extern uint32_t pr_netaddr_get_addrno(const pr_netaddr_t * na);
extern const char * pr_netaddr_get_dnsstr(const pr_netaddr_t *);
extern array_header * pr_netaddr_get_dnsstr_list(pool * p, const pr_netaddr_t * na);
extern int pr_netaddr_get_family(const pr_netaddr_t *);
extern void * pr_netaddr_get_inaddr(const pr_netaddr_t *);
extern size_t pr_netaddr_get_inaddr_len(const pr_netaddr_t *);
extern const char * pr_netaddr_get_ipstr(const pr_netaddr_t *);
extern const char * pr_netaddr_get_localaddr_str(pool *);
extern unsigned int pr_netaddr_get_port(const pr_netaddr_t *);
extern const pr_netaddr_t * pr_netaddr_get_sess_local_addr(void);
extern const pr_netaddr_t * pr_netaddr_get_sess_remote_addr(void);
extern const char * pr_netaddr_get_sess_remote_name(void);
extern struct sockaddr * pr_netaddr_get_sockaddr(const pr_netaddr_t *);
extern size_t pr_netaddr_get_sockaddr_len(const pr_netaddr_t *);
extern int pr_netaddr_is_loopback(const pr_netaddr_t *);
extern int pr_netaddr_is_rfc1918(const pr_netaddr_t *);
extern int pr_netaddr_is_v4(const char *);
extern int pr_netaddr_is_v4mappedv6(const pr_netaddr_t *);
extern int pr_netaddr_is_v6(const char *);
extern int pr_netaddr_ncmp(const pr_netaddr_t *, const pr_netaddr_t *, unsigned int);
extern int pr_netaddr_set_family(pr_netaddr_t *, int);
extern int pr_netaddr_set_localaddr_str(const char * addr_str);
extern int pr_netaddr_set_port(pr_netaddr_t *, unsigned int);
extern int pr_netaddr_set_port2(pr_netaddr_t * na, unsigned int port);
extern int pr_netaddr_set_reverse_dns(int);
extern void pr_netaddr_set_sess_addrs(void);
extern int pr_netaddr_set_sockaddr(pr_netaddr_t *, struct sockaddr *);
extern int pr_netaddr_set_sockaddr_any(pr_netaddr_t *);
extern unsigned char pr_netaddr_use_ipv6(void);
extern pr_netaddr_t * pr_netaddr_v4tov6(pool * p, const pr_netaddr_t * na);
extern pr_netaddr_t * pr_netaddr_v6tov4(pool *, const pr_netaddr_t *);
extern char * pr_netaddr_validate_dns_str(char *);
extern void pr_netio_abort(pr_netio_stream_t *);
extern pr_buffer_t * pr_netio_buffer_alloc(pr_netio_stream_t * nstrm);
extern int pr_netio_close(pr_netio_stream_t * nstrm);
extern char * pr_netio_gets(char * buf, size_t buflen, pr_netio_stream_t * nstrm);
extern int pr_netio_lingering_abort(pr_netio_stream_t * nstrm, long int linger);
extern int pr_netio_lingering_close(pr_netio_stream_t * nstrm, long int linger);
extern pr_netio_stream_t * pr_netio_open(pool *, int, int, int);
extern int pr_netio_poll(pr_netio_stream_t *);
extern int pr_netio_postopen(pr_netio_stream_t *);
extern int pr_netio_printf(pr_netio_stream_t *, const char *, ...);
extern int pr_netio_printf_async(pr_netio_stream_t *, char *, ...);
extern int pr_netio_read(pr_netio_stream_t *, char *, size_t, int);
extern pr_netio_stream_t * pr_netio_reopen(pr_netio_stream_t * nstrm, int fd, int mode);
extern void pr_netio_reset_poll_interval(pr_netio_stream_t *);
extern void pr_netio_set_poll_interval(pr_netio_stream_t *, unsigned int);
extern int pr_netio_shutdown(pr_netio_stream_t * nstrm, int how);
extern char * pr_netio_telnet_gets(char * buf, size_t bufsz, pr_netio_stream_t * in_nstrm, pr_netio_stream_t * out_nstrm);
extern int pr_netio_telnet_gets2(char * buf, size_t bufsz, pr_netio_stream_t * in_nstrm, pr_netio_stream_t * out_nstrm);
extern int pr_netio_vprintf(pr_netio_stream_t * nstrm, const char * fmt, va_list msg);
extern int pr_netio_write(pr_netio_stream_t *, char *, size_t);
extern int pr_netio_write_async(pr_netio_stream_t * nstrm, char * buf, size_t buflen);
extern int pr_open_scoreboard(int);
extern int pr_openlog(const char * ident, int opts, int facility);
extern int pr_parser_cleanup(void);
extern config_rec * pr_parser_config_ctxt_close(int *);
extern config_rec * pr_parser_config_ctxt_get(void);
extern config_rec * pr_parser_config_ctxt_open(const char *);
extern int pr_parser_config_ctxt_push(config_rec * c);
extern unsigned int pr_parser_get_lineno(void);
extern int pr_parser_parse_file(pool * p, const char * path, config_rec * start, int flags);
extern cmd_rec * pr_parser_parse_line(pool * p, const char * text, size_t text_len);
extern int pr_parser_prepare(pool * p, xaset_t * * parsed_servers);
extern char * pr_parser_read_line(char *, size_t);
extern server_rec * pr_parser_server_ctxt_close(void);
extern server_rec * pr_parser_server_ctxt_get(void);
extern server_rec * pr_parser_server_ctxt_open(const char *);
extern int pr_parser_server_ctxt_push(server_rec * s);
extern long unsigned int pr_parser_set_include_opts(long unsigned int);
extern const char * pr_pidfile_get(void);
extern int pr_pidfile_remove(void);
extern int pr_pidfile_set(const char *);
extern int pr_pidfile_write(void);
extern pool * pr_pool_create_sz(pool *, size_t);
extern const char * pr_pool_get_tag(pool * p);
extern void pr_pool_tag(struct pool_rec *, const char *);
extern int pr_privs_relinquish(const char *, int);
extern int pr_privs_revoke(const char *, int);
extern int pr_privs_root(const char *, int);
extern int pr_privs_setup(uid_t, gid_t, const char *, int);
extern int pr_privs_user(const char *, int);
extern void pr_proctitle_free(void);
extern int pr_proctitle_get(char * buf, size_t bufsz);
extern void pr_proctitle_init(int argc, char * * argv, char * * envp);
extern void pr_proctitle_set(const char * fmt, ...);
extern void pr_proctitle_set_static_str(const char *);
extern void pr_proctitle_set_str(const char * str);
extern int pr_random_init(void);
extern long int pr_random_next(long int min, long int max);
extern int pr_redis_add(pr_redis_t * redis, module * m, const char * key, void * value, size_t valuesz, time_t expires);
extern int pr_redis_auth(pr_redis_t * redis, const char * password);
extern int pr_redis_command(pr_redis_t * redis, const array_header * args, int reply_type);
extern int pr_redis_conn_close(pr_redis_t * redis);
extern int pr_redis_conn_destroy(pr_redis_t * redis);
extern pr_redis_t * pr_redis_conn_get(pool * p, long unsigned int flags);
extern pr_redis_t * pr_redis_conn_new(pool * p, module * m, long unsigned int flags);
extern int pr_redis_conn_set_namespace(pr_redis_t * redis, module * m, const void * prefix, size_t prefixsz);
extern int pr_redis_decr(pr_redis_t * redis, module * m, const char * key, uint32_t decr, uint64_t * value);
extern void * pr_redis_get(pool * p, pr_redis_t * redis, module * m, const char * key, size_t * valuesz);
extern char * pr_redis_get_str(pool * p, pr_redis_t * redis, module * m, const char * key);
extern int pr_redis_hash_count(pr_redis_t * redis, module * m, const char * key, uint64_t * count);
extern int pr_redis_hash_delete(pr_redis_t * redis, module * m, const char * key, const char * field);
extern int pr_redis_hash_exists(pr_redis_t * redis, module * m, const char * key, const char * field);
extern int pr_redis_hash_get(pool * p, pr_redis_t * redis, module * m, const char * key, const char * field, void * * value, size_t * valuesz);
extern int pr_redis_hash_getall(pool * p, pr_redis_t * redis, module * m, const char * key, pr_table_t * * hash);
extern int pr_redis_hash_incr(pr_redis_t * redis, module * m, const char * key, const char * field, int32_t incr, int64_t * value);
extern int pr_redis_hash_kcount(pr_redis_t * redis, module * m, const char * key, size_t keysz, uint64_t * count);
extern int pr_redis_hash_kdelete(pr_redis_t * redis, module * m, const char * key, size_t keysz, const char * field, size_t fieldsz);
extern int pr_redis_hash_kexists(pr_redis_t * redis, module * m, const char * key, size_t keysz, const char * field, size_t fieldsz);
extern int pr_redis_hash_keys(pool * p, pr_redis_t * redis, module * m, const char * key, array_header * * fields);
extern int pr_redis_hash_kget(pool * p, pr_redis_t * redis, module * m, const char * key, size_t keysz, const char * field, size_t fieldsz, void * * value, size_t * valuesz);
extern int pr_redis_hash_kgetall(pool * p, pr_redis_t * redis, module * m, const char * key, size_t keysz, pr_table_t * * hash);
extern int pr_redis_hash_kincr(pr_redis_t * redis, module * m, const char * key, size_t keysz, const char * field, size_t fieldsz, int32_t incr, int64_t * value);
extern int pr_redis_hash_kkeys(pool * p, pr_redis_t * redis, module * m, const char * key, size_t keysz, array_header * * fields);
extern int pr_redis_hash_kremove(pr_redis_t * redis, module * m, const char * key, size_t keysz);
extern int pr_redis_hash_kset(pr_redis_t * redis, module * m, const char * key, size_t keysz, const char * field, size_t fieldsz, void * value, size_t valuesz);
extern int pr_redis_hash_ksetall(pr_redis_t * redis, module * m, const char * key, size_t keysz, pr_table_t * hash);
extern int pr_redis_hash_kvalues(pool * p, pr_redis_t * redis, module * m, const char * key, size_t keysz, array_header * * values);
extern int pr_redis_hash_remove(pr_redis_t * redis, module * m, const char * key);
extern int pr_redis_hash_set(pr_redis_t * redis, module * m, const char * key, const char * field, void * value, size_t valuesz);
extern int pr_redis_hash_setall(pr_redis_t * redis, module * m, const char * key, pr_table_t * hash);
extern int pr_redis_hash_values(pool * p, pr_redis_t * redis, module * m, const char * key, array_header * * values);
extern int pr_redis_incr(pr_redis_t * redis, module * m, const char * key, uint32_t incr, uint64_t * value);
extern int pr_redis_kadd(pr_redis_t * redis, module * m, const char * key, size_t keysz, void * value, size_t valuesz, time_t expires);
extern void * pr_redis_kget(pool * p, pr_redis_t * redis, module * m, const char * key, size_t keysz, size_t * valuesz);
extern char * pr_redis_kget_str(pool * p, pr_redis_t * redis, module * m, const char * key, size_t keysz);
extern int pr_redis_kremove(pr_redis_t * redis, module * m, const char * key, size_t keysz);
extern int pr_redis_krename(pr_redis_t * redis, module * m, const char * from, size_t fromsz, const char * to, size_t tosz);
extern int pr_redis_kset(pr_redis_t * redis, module * m, const char * key, size_t keysz, void * value, size_t valuesz, time_t expires);
extern int pr_redis_list_append(pr_redis_t * redis, module * m, const char * key, void * value, size_t valuesz);
extern int pr_redis_list_count(pr_redis_t * redis, module * m, const char * key, uint64_t * count);
extern int pr_redis_list_delete(pr_redis_t * redis, module * m, const char * key, void * value, size_t valuesz);
extern int pr_redis_list_exists(pr_redis_t * redis, module * m, const char * key, unsigned int idx);
extern int pr_redis_list_get(pool * p, pr_redis_t * redis, module * m, const char * key, unsigned int idx, void * * value, size_t * valuesz);
extern int pr_redis_list_getall(pool * p, pr_redis_t * redis, module * m, const char * key, array_header * * values, array_header * * valueszs);
extern int pr_redis_list_kappend(pr_redis_t * redis, module * m, const char * key, size_t keysz, void * value, size_t valuesz);
extern int pr_redis_list_kcount(pr_redis_t * redis, module * m, const char * key, size_t keysz, uint64_t * count);
extern int pr_redis_list_kdelete(pr_redis_t * redis, module * m, const char * key, size_t keysz, void * value, size_t valuesz);
extern int pr_redis_list_kexists(pr_redis_t * redis, module * m, const char * key, size_t keysz, unsigned int idx);
extern int pr_redis_list_kget(pool * p, pr_redis_t * redis, module * m, const char * key, size_t keysz, unsigned int idx, void * * value, size_t * valuesz);
extern int pr_redis_list_kgetall(pool * p, pr_redis_t * redis, module * m, const char * key, size_t keysz, array_header * * values, array_header * * valueszs);
extern int pr_redis_list_kpop(pool * p, pr_redis_t * redis, module * m, const char * key, size_t keysz, void * * value, size_t * valuesz, int flags);
extern int pr_redis_list_kpush(pr_redis_t * redis, module * m, const char * key, size_t keysz, void * value, size_t valuesz, int flags);
extern int pr_redis_list_kremove(pr_redis_t * redis, module * m, const char * key, size_t keysz);
extern int pr_redis_list_krotate(pool * p, pr_redis_t * redis, module * m, const char * key, size_t keysz, void * * value, size_t * valuesz);
extern int pr_redis_list_kset(pr_redis_t * redis, module * m, const char * key, size_t keysz, unsigned int idx, void * value, size_t valuesz);
extern int pr_redis_list_ksetall(pr_redis_t * redis, module * m, const char * key, size_t keysz, array_header * values, array_header * valueszs);
extern int pr_redis_list_pop(pool * p, pr_redis_t * redis, module * m, const char * key, void * * value, size_t * valuesz, int flags);
extern int pr_redis_list_push(pr_redis_t * redis, module * m, const char * key, void * value, size_t valuesz, int flags);
extern int pr_redis_list_remove(pr_redis_t * redis, module * m, const char * key);
extern int pr_redis_list_rotate(pool * p, pr_redis_t * redis, module * m, const char * key, void * * value, size_t * valuesz);
extern int pr_redis_list_set(pr_redis_t * redis, module * m, const char * key, unsigned int idx, void * value, size_t valuesz);
extern int pr_redis_list_setall(pr_redis_t * redis, module * m, const char * key, array_header * values, array_header * valueszs);
extern int pr_redis_remove(pr_redis_t * redis, module * m, const char * key);
extern int pr_redis_rename(pr_redis_t * redis, module * m, const char * from, const char * to);
extern int pr_redis_select(pr_redis_t * redis, const char * db_idx);
extern int pr_redis_sentinel_get_master_addr(pool * p, pr_redis_t * redis, const char * name, pr_netaddr_t * * addr);
extern int pr_redis_sentinel_get_masters(pool * p, pr_redis_t * redis, array_header * * masters);
extern int pr_redis_set(pr_redis_t * redis, module * m, const char * key, void * value, size_t valuesz, time_t expires);
extern int pr_redis_set_add(pr_redis_t * redis, module * m, const char * key, void * value, size_t valuesz);
extern int pr_redis_set_count(pr_redis_t * redis, module * m, const char * key, uint64_t * count);
extern int pr_redis_set_delete(pr_redis_t * redis, module * m, const char * key, void * value, size_t valuesz);
extern int pr_redis_set_exists(pr_redis_t * redis, module * m, const char * key, void * value, size_t valuesz);
extern int pr_redis_set_getall(pool * p, pr_redis_t * redis, module * m, const char * key, array_header * * values, array_header * * valueszs);
extern int pr_redis_set_kadd(pr_redis_t * redis, module * m, const char * key, size_t keysz, void * value, size_t valuesz);
extern int pr_redis_set_kcount(pr_redis_t * redis, module * m, const char * key, size_t keysz, uint64_t * count);
extern int pr_redis_set_kdelete(pr_redis_t * redis, module * m, const char * key, size_t keysz, void * value, size_t valuesz);
extern int pr_redis_set_kexists(pr_redis_t * redis, module * m, const char * key, size_t keysz, void * value, size_t valuesz);
extern int pr_redis_set_kgetall(pool * p, pr_redis_t * redis, module * m, const char * key, size_t keysz, array_header * * values, array_header * * valueszs);
extern int pr_redis_set_kremove(pr_redis_t * redis, module * m, const char * key, size_t keysz);
extern int pr_redis_set_ksetall(pr_redis_t * redis, module * m, const char * key, size_t keysz, array_header * values, array_header * valueszs);
extern int pr_redis_set_remove(pr_redis_t * redis, module * m, const char * key);
extern int pr_redis_set_setall(pr_redis_t * redis, module * m, const char * key, array_header * values, array_header * valueszs);
extern int pr_redis_sorted_set_add(pr_redis_t * redis, module * m, const char * key, void * value, size_t valuesz, float score);
extern int pr_redis_sorted_set_count(pr_redis_t * redis, module * m, const char * key, uint64_t * count);
extern int pr_redis_sorted_set_delete(pr_redis_t * redis, module * m, const char * key, void * value, size_t valuesz);
extern int pr_redis_sorted_set_exists(pr_redis_t * redis, module * m, const char * key, void * value, size_t valuesz);
extern int pr_redis_sorted_set_getn(pool * p, pr_redis_t * redis, module * m, const char * key, unsigned int offset, unsigned int len, array_header * * values, array_header * * valueszs, int flags);
extern int pr_redis_sorted_set_incr(pr_redis_t * redis, module * m, const char * key, void * value, size_t valuesz, float incr, float * score);
extern int pr_redis_sorted_set_kadd(pr_redis_t * redis, module * m, const char * key, size_t keysz, void * value, size_t valuesz, float score);
extern int pr_redis_sorted_set_kcount(pr_redis_t * redis, module * m, const char * key, size_t keysz, uint64_t * count);
extern int pr_redis_sorted_set_kdelete(pr_redis_t * redis, module * m, const char * key, size_t keysz, void * value, size_t valuesz);
extern int pr_redis_sorted_set_kexists(pr_redis_t * redis, module * m, const char * key, size_t keysz, void * value, size_t valuesz);
extern int pr_redis_sorted_set_kgetn(pool * p, pr_redis_t * redis, module * m, const char * key, size_t keysz, unsigned int offset, unsigned int len, array_header * * values, array_header * * valueszs, int flags);
extern int pr_redis_sorted_set_kincr(pr_redis_t * redis, module * m, const char * key, size_t keysz, void * value, size_t valuesz, float incr, float * score);
extern int pr_redis_sorted_set_kremove(pr_redis_t * redis, module * m, const char * key, size_t keysz);
extern int pr_redis_sorted_set_kscore(pr_redis_t * redis, module * m, const char * key, size_t keysz, void * value, size_t valuesz, float * score);
extern int pr_redis_sorted_set_kset(pr_redis_t * redis, module * m, const char * key, size_t keysz, void * value, size_t valuesz, float score);
extern int pr_redis_sorted_set_ksetall(pr_redis_t * redis, module * m, const char * key, size_t keysz, array_header * values, array_header * valueszs, array_header * scores);
extern int pr_redis_sorted_set_remove(pr_redis_t * redis, module * m, const char * key);
extern int pr_redis_sorted_set_score(pr_redis_t * redis, module * m, const char * key, void * value, size_t valuesz, float * score);
extern int pr_redis_sorted_set_set(pr_redis_t * redis, module * m, const char * key, void * value, size_t valuesz, float score);
extern int pr_redis_sorted_set_setall(pr_redis_t * redis, module * m, const char * key, array_header * values, array_header * valueszs, array_header * scores);
extern pr_regex_t * pr_regexp_alloc(module *);
extern int pr_regexp_compile(pr_regex_t *, const char *, int);
extern int pr_regexp_compile_posix(pr_regex_t *, const char *, int);
extern size_t pr_regexp_error(int, const pr_regex_t *, char *, size_t);
extern int pr_regexp_exec(pr_regex_t *, const char *, size_t, regmatch_t *, int, long unsigned int, long unsigned int);
extern void pr_regexp_free(module *, pr_regex_t *);
extern const char * pr_regexp_get_pattern(const pr_regex_t *);
extern int pr_regexp_set_limits(long unsigned int, long unsigned int);
extern pr_fs_t * pr_register_fs(pool *, const char *, const char *);
extern int pr_register_netio(pr_netio_t * netio, int strm_types);
extern pr_fs_t * pr_remove_fs(const char * path);
extern void pr_resolve_fs_map(void);
extern void pr_response_add(const char *, const char *, ...);
extern void pr_response_add_err(const char *, const char *, ...);
extern int pr_response_block(int);
extern int pr_response_blocked(void);
extern void pr_response_clear(pr_response_t * * head);
extern void pr_response_flush(pr_response_t * *);
extern int pr_response_get_last(pool *, const char * *, const char * *);
extern pool * pr_response_get_pool(void);
extern void pr_response_register_handler(char * (*handler_cb)(pool *, const char *, ...));
extern void pr_response_send(const char *, const char *, ...);
extern void pr_response_send_async(const char *, const char *, ...);
extern void pr_response_send_raw(const char *, ...);
extern void pr_response_set_pool(pool *);
extern int pr_restore_scoreboard(void);
extern int pr_rewind_scoreboard(void);
extern int pr_rlimit_get_core(rlim_t * current, rlim_t * max);
extern int pr_rlimit_get_cpu(rlim_t *, rlim_t *);
extern int pr_rlimit_get_files(rlim_t *, rlim_t *);
extern int pr_rlimit_get_memory(rlim_t *, rlim_t *);
extern int pr_rlimit_get_nproc(rlim_t * current, rlim_t * max);
extern int pr_rlimit_set_core(rlim_t, rlim_t);
extern int pr_rlimit_set_cpu(rlim_t, rlim_t);
extern int pr_rlimit_set_files(rlim_t, rlim_t);
extern int pr_rlimit_set_memory(rlim_t, rlim_t);
extern int pr_rlimit_set_nproc(rlim_t current, rlim_t max);
extern int pr_scoreboard_entry_add(void);
extern int pr_scoreboard_entry_del(unsigned char);
extern const char * pr_scoreboard_entry_get(int);
extern int pr_scoreboard_entry_kill(pr_scoreboard_entry_t * sce, int signo);
extern int pr_scoreboard_entry_lock(int fd, int lock_type);
extern pr_scoreboard_entry_t * pr_scoreboard_entry_read(void);
extern int pr_scoreboard_entry_update(pid_t, ...);
extern pid_t pr_scoreboard_get_daemon_pid(void);
extern time_t pr_scoreboard_get_daemon_uptime(void);
extern int pr_scoreboard_scrub(void);
extern void pr_session_disconnect(module *, int, const char *);
extern void pr_session_end(int);
extern const char * pr_session_get_disconnect_reason(const char * *);
extern const char * pr_session_get_protocol(int);
extern const char * pr_session_get_ttyname(pool *);
extern void pr_session_send_banner(server_rec *, int);
extern int pr_session_set_idle(void);
extern int pr_session_set_protocol(const char * sess_proto);
extern int pr_set_scoreboard(const char *);
extern int pr_set_scoreboard_mutex(const char *);
extern int pr_setlogfacility(int new_facility);
extern int pr_setlogmask(int new_mask);
extern void pr_signals_block(void);
extern void pr_signals_handle(void);
extern void pr_signals_handle_disconnect(int signo);
extern void pr_signals_handle_event(int signo);
extern void pr_signals_unblock(void);
extern int pr_snprintf(char *, size_t, const char *, ...);
extern int pr_snprintfl(const char * file, int lineno, char * buf, size_t bufsz, const char * fmt, ...);
extern int pr_stash_add_symbol(pr_stash_type_t, void *);
extern void pr_stash_dump(void (*dumpf)(const char *, ...));
extern void * pr_stash_get_symbol(pr_stash_type_t sym_type, const char * name, void * prev, int * idx_cache);
extern void * pr_stash_get_symbol2(pr_stash_type_t, const char *, void *, int *, unsigned int *);
extern int pr_stash_remove_auth(const char * api_name, module * m);
extern int pr_stash_remove_cmd(const char * cmd_name, module * m, unsigned char cmd_type, const char * cmd_group, int cmd_class);
extern int pr_stash_remove_conf(const char * directive_name, module * m);
extern int pr_stash_remove_hook(const char * hook_name, module * m);
extern int pr_stash_remove_symbol(pr_stash_type_t, const char *, module *);
extern int pr_str2gid(const char *, gid_t *);
extern int pr_str2uid(const char *, uid_t *);
extern char * pr_str_bin2hex(pool * p, const unsigned char * buf, size_t len, int flags);
extern int pr_str_get_duration(const char *, int *);
extern int pr_str_get_nbytes(const char *, const char *, off_t *);
extern array_header * pr_str_get_similars(pool *, const char *, array_header *, int, int);
extern char * pr_str_get_token(char * *, char *);
extern char * pr_str_get_token2(char * * src, char * sep, size_t * token_len);
extern char * pr_str_get_word(char * *, int);
extern unsigned char * pr_str_hex2bin(pool * p, const unsigned char * hex, size_t hex_len, size_t * len);
extern int pr_str_is_boolean(const char *);
extern int pr_str_is_fnmatch(const char *);
extern int pr_str_levenshtein(pool * p, const char * a, const char * b, int swap_cost, int subst_cost, int insert_cost, int del_cost, int flags);
extern const char * pr_str_quote(pool * p, const char * str);
extern const char * pr_str_replace(pool * p, unsigned int max_replaces, const char * s, ...);
extern const char * pr_str_strip(pool * p, const char * str);
extern char * pr_str_strip_end(char *, const char *);
extern array_header * pr_str_text_to_array(pool *, const char *, char);
extern int pr_strnrstr(const char *, size_t, const char *, size_t, int);
extern const char * pr_strtime(time_t t);
extern const char * pr_strtime2(time_t t, int use_gmtime);
extern const char * pr_strtime3(pool *, time_t, int);
extern void pr_syslog(int sockfd, int pri, const char * fmt, ...);
extern int pr_table_add(pr_table_t *, const char *, const void *, size_t);
extern int pr_table_add_dup(pr_table_t *, const char *, const void *, size_t);
extern pr_table_t * pr_table_alloc(pool *, int);
extern int pr_table_count(pr_table_t *);
extern int pr_table_ctl(pr_table_t *, int, void *);
extern int pr_table_do(pr_table_t * tab, int (*cb)(const void *, size_t, const void *, size_t, void *), void * user_data, int flags);
extern void pr_table_dump(void (*)(const char *, ...), pr_table_t *);
extern int pr_table_empty(pr_table_t *);
extern int pr_table_exists(pr_table_t *, const char *);
extern int pr_table_free(pr_table_t *);
extern const void * pr_table_get(pr_table_t *, const char *, size_t *);
extern int pr_table_kadd(pr_table_t *, const void *, size_t, const void *, size_t);
extern int pr_table_kexists(pr_table_t *, const void *, size_t);
extern const void * pr_table_kget(pr_table_t *, const void *, size_t, size_t *);
extern const void * pr_table_knext(pr_table_t * tab, size_t * key_datasz);
extern const void * pr_table_kremove(pr_table_t * tab, const void * key_data, size_t key_datasz, size_t * value_datasz);
extern int pr_table_kset(pr_table_t * tab, const void * key_data, size_t key_datasz, const void * value_data, size_t value_datasz);
extern float pr_table_load(pr_table_t * tab);
extern pr_table_t * pr_table_nalloc(pool *, int, unsigned int);
extern const void * pr_table_next(pr_table_t *);
extern void * pr_table_pcalloc(pr_table_t *, size_t);
extern const void * pr_table_remove(pr_table_t *, const char *, size_t *);
extern int pr_table_rewind(pr_table_t *);
extern int pr_table_set(pr_table_t *, const char *, const void *, size_t);
extern int pr_throttle_have_rate(void);
extern void pr_throttle_init(cmd_rec *);
extern void pr_throttle_pause(off_t, int);
extern int pr_timer_add(int, int, module *, callback_t, const char *);
extern int pr_timer_remove(int, module *);
extern int pr_timer_reset(int, module *);
extern int pr_timer_sleep(int);
extern int pr_timer_usleep(long unsigned int);
extern int pr_timeval2millis(struct timeval *, uint64_t *);
extern int pr_trace_get_level(const char *);
extern int pr_trace_get_max_level(const char * channel);
extern int pr_trace_get_min_level(const char * channel);
extern pr_table_t * pr_trace_get_table(void);
extern int pr_trace_msg(const char *, int, const char *, ...);
extern int pr_trace_parse_levels(char *, int *, int *);
extern int pr_trace_set_file(const char *);
extern int pr_trace_set_levels(const char *, int, int);
extern int pr_trace_set_options(long unsigned int);
extern int pr_trace_use_stderr(int use_stderr);
extern int pr_trace_vmsg(const char * channel, int level, const char * fmt, va_list msg);
extern const char * pr_uid2str(pool *, uid_t);
extern pr_fs_t * pr_unmount_fs(const char * path, const char * name);
extern int pr_unregister_fs(const char *);
extern int pr_unregister_netio(int strm_types);
extern int pr_var_delete(const char *);
extern int pr_var_exists(const char * name);
extern const char * pr_var_get(const char * name);
extern const char * pr_var_next(const char * * desc);
extern void pr_var_rewind(void);
extern int pr_var_set(pool *, const char *, const char *, int, void *, void *, size_t);
extern long unsigned int pr_version_get_module_api_number(void);
extern long unsigned int pr_version_get_number(void);
extern const char * pr_version_get_str(void);
extern int pr_vsnprintf(char *, size_t, const char *, va_list);
extern int pr_vsnprintfl(const char * file, int lineno, char * buf, size_t bufsz, const char * fmt, va_list msg);
extern char * pstrcat(pool *, ...);
extern char * pstrdup(pool *, const char *);
extern char * pstrncat(char *, char *, size_t);
extern char * pstrndup(pool *, const char *, size_t);
extern void * push_array(array_header *);
extern const char * quote_dir(pool *, char *);
extern int redis_clear(void);
extern int redis_init(void);
extern int redis_set_sentinels(array_header * sentinels, const char * name);
extern int redis_set_server(const char * server, int port, long unsigned int flags, const char * password, const char * db_idx);
extern int redis_set_timeouts(long unsigned int conn_millis, long unsigned int io_millis);
extern void register_cleanup(pool * p, void * user_data, void (*plain_cleanup_cb)(void *), void (*child_cleanup_cb)(void *));
extern void register_cleanup2(pool *, void *, void (*)(void *));
extern int remove_config(xaset_t *, const char *, int);
extern void resolve_anonymous_dirs(xaset_t *);
extern void resolve_deferred_dirs(server_rec *);
extern void restart_daemon(void *, void *, void *, void *);
extern void run_schedule(void);
extern char * safe_token(char * * s);
extern void schedule(void (*cb)(void *, void *, void *, void *), int nloops, void * arg1, void * arg2, void * arg3, void * arg4);
extern void session_exit(int pri, void * lv, int exitval, void * dummy);
extern void set_auth_check(int (*)(cmd_rec *));
extern int set_groups(pool *, gid_t, array_header *);
extern int set_nonroot_daemon(int nonroot);
extern void shutdown_end_session(void *, void *, void *, void *);
extern modret_t * site_dispatch(cmd_rec * cmd);
extern const char * sreplace(pool *, const char *, ...);
extern char * sstrcat(char *, const char *, size_t);
extern int sstrncpy(char *, const char *, size_t);
extern mode_t symlink_mode(const char * path);
extern mode_t symlink_mode2(pool *, const char *);
extern int table_handling_signal(int);
extern void timers_init(void);
extern void unregister_cleanup(pool * p, void * user_data, void (*cleanup_cb)(void *));
extern int var_free(void);
extern int var_init(void);
extern xaset_t * xaset_copy(pool * p, xaset_t * set, size_t msize, XASET_MCOPY copyfunc);
extern xaset_t * xaset_create(pool *, XASET_COMPARE);
extern int xaset_insert(xaset_t *, xasetmember_t *);
extern int xaset_insert_end(xaset_t *, xasetmember_t *);
extern int xaset_insert_sort(xaset_t *, xasetmember_t *, int);
extern int xaset_remove(xaset_t *, xasetmember_t *);
extern void xferlog_close(void);
extern int xferlog_open(const char *);
extern int xferlog_write(long int, const char *, off_t, const char *, char, char, char, const char *, char, const char *);

#ifdef __cplusplus
}
#endif

#endif /* PROFTPD_H */
