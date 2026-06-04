/* Auto-generated from /home/ricardo/code/aarno/amp/digiheals/chess-aces/phase_2/eval/olmstead/digiheals/unstripped/slapd */
/* Self-contained: requires no system headers. */
#ifndef SLAPD_H
#define SLAPD_H

#ifdef __cplusplus
extern "C" {
#endif

/* ── enums ───────────────────────────────────────────────── */

enum __anon_0x00009df0 {
    Cft_Abstract = 0,
    Cft_Global = 1,
    Cft_Module = 2,
    Cft_Schema = 3,
    Cft_Backend = 4,
    Cft_Database = 5,
    Cft_Overlay = 6,
    Cft_Misc = 7,
};

enum __anon_0x0000a464 {
    CFG_ACL = 1,
    CFG_BACKEND = 2,
    CFG_DATABASE = 3,
    CFG_TLS_RAND = 4,
    CFG_TLS_CIPHER = 5,
    CFG_TLS_PROTOCOL_MIN = 6,
    CFG_TLS_CERT_FILE = 7,
    CFG_TLS_CERT_KEY = 8,
    CFG_TLS_CA_PATH = 9,
    CFG_TLS_CA_FILE = 10,
    CFG_TLS_DH_FILE = 11,
    CFG_TLS_VERIFY = 12,
    CFG_TLS_CRLCHECK = 13,
    CFG_TLS_CRL_FILE = 14,
    CFG_CONCUR = 15,
    CFG_THREADS = 16,
    CFG_SALT = 17,
    CFG_LIMITS = 18,
    CFG_RO = 19,
    CFG_REWRITE = 20,
    CFG_DEPTH = 21,
    CFG_OID = 22,
    CFG_OC = 23,
    CFG_DIT = 24,
    CFG_ATTR = 25,
    CFG_ATOPT = 26,
    CFG_ROOTDSE = 27,
    CFG_LOGFILE = 28,
    CFG_PLUGIN = 29,
    CFG_MODLOAD = 30,
    CFG_MODPATH = 31,
    CFG_LASTMOD = 32,
    CFG_AZPOLICY = 33,
    CFG_AZREGEXP = 34,
    CFG_SASLSECP = 35,
    CFG_SSTR_IF_MAX = 36,
    CFG_SSTR_IF_MIN = 37,
    CFG_TTHREADS = 38,
    CFG_MIRRORMODE = 39,
    CFG_HIDDEN = 40,
    CFG_MONITORING = 41,
    CFG_SERVERID = 42,
    CFG_SORTVALS = 43,
    CFG_IX_INTLEN = 44,
    CFG_SYNTAX = 45,
    CFG_ACL_ADD = 46,
    CFG_SYNC_SUBENTRY = 47,
    CFG_LTHREADS = 48,
    CFG_TLS_ECNAME = 49,
    CFG_LAST = 50,
};

enum __anon_0x000298cd {
    SLAP_OP_BIND = 0,
    SLAP_OP_UNBIND = 1,
    SLAP_OP_SEARCH = 2,
    SLAP_OP_COMPARE = 3,
    SLAP_OP_MODIFY = 4,
    SLAP_OP_MODRDN = 5,
    SLAP_OP_ADD = 6,
    SLAP_OP_DELETE = 7,
    SLAP_OP_ABANDON = 8,
    SLAP_OP_EXTENDED = 9,
    SLAP_OP_LAST = 10,
};

enum __anon_0x0003d9e4 {
    SLAP_SCHERR_OUTOFMEM = 1,
    SLAP_SCHERR_CLASS_NOT_FOUND = 2,
    SLAP_SCHERR_CLASS_BAD_USAGE = 3,
    SLAP_SCHERR_CLASS_BAD_SUP = 4,
    SLAP_SCHERR_CLASS_DUP = 5,
    SLAP_SCHERR_CLASS_INCONSISTENT = 6,
    SLAP_SCHERR_ATTR_NOT_FOUND = 7,
    SLAP_SCHERR_ATTR_BAD_MR = 8,
    SLAP_SCHERR_ATTR_BAD_USAGE = 9,
    SLAP_SCHERR_ATTR_BAD_SUP = 10,
    SLAP_SCHERR_ATTR_INCOMPLETE = 11,
    SLAP_SCHERR_ATTR_DUP = 12,
    SLAP_SCHERR_ATTR_INCONSISTENT = 13,
    SLAP_SCHERR_MR_NOT_FOUND = 14,
    SLAP_SCHERR_MR_INCOMPLETE = 15,
    SLAP_SCHERR_MR_DUP = 16,
    SLAP_SCHERR_SYN_NOT_FOUND = 17,
    SLAP_SCHERR_SYN_DUP = 18,
    SLAP_SCHERR_SYN_SUP_NOT_FOUND = 19,
    SLAP_SCHERR_SYN_SUBST_NOT_SPECIFIED = 20,
    SLAP_SCHERR_SYN_SUBST_NOT_FOUND = 21,
    SLAP_SCHERR_NO_NAME = 22,
    SLAP_SCHERR_NOT_SUPPORTED = 23,
    SLAP_SCHERR_BAD_DESCR = 24,
    SLAP_SCHERR_OIDM = 25,
    SLAP_SCHERR_CR_DUP = 26,
    SLAP_SCHERR_CR_BAD_STRUCT = 27,
    SLAP_SCHERR_CR_BAD_AUX = 28,
    SLAP_SCHERR_CR_BAD_AT = 29,
    SLAP_SCHERR_LAST = 30,
};

enum __anon_0x000973a8 {
    DN_FLAG = 0,
    VAL_FLAG = 1,
};

enum __anon_0x000cb950 {
    SLAP_X509_V1 = 0,
    SLAP_X509_V2 = 1,
    SLAP_X509_V3 = 2,
};

enum __anon_0x000cb96d {
    SLAP_TAG_UTCTIME = 23,
    SLAP_TAG_GENERALIZEDTIME = 24,
};

enum __anon_0x000cb984 {
    SLAP_X509_OPT_C_VERSION = 160,
    SLAP_X509_OPT_C_ISSUERUNIQUEID = 129,
    SLAP_X509_OPT_C_SUBJECTUNIQUEID = 130,
    SLAP_X509_OPT_C_EXTENSIONS = 163,
};

enum __anon_0x000cb9a7 {
    SLAP_X509_OPT_CL_CRLEXTENSIONS = 160,
};

enum __anon_0x000cb9b8 {
    SLAP_X509_GN_OTHERNAME = 160,
    SLAP_X509_GN_RFC822NAME = 161,
    SLAP_X509_GN_DNSNAME = 162,
    SLAP_X509_GN_X400ADDRESS = 163,
    SLAP_X509_GN_DIRECTORYNAME = 164,
    SLAP_X509_GN_EDIPARTYNAME = 165,
    SLAP_X509_GN_URI = 166,
    SLAP_X509_GN_IPADDRESS = 167,
    SLAP_X509_GN_REGISTEREDID = 168,
};

enum __anon_0x000cb9f9 {
    SLAP_X509AC_V1 = 0,
    SLAP_X509AC_V2 = 1,
};

enum __anon_0x000cba12 {
    SLAP_X509AC_ISSUER = 160,
};

enum __anon_0x000cba25 {
    start = 0,
};

enum __anon_0x000cecb1 {
    HAVE_NONE = 0,
    HAVE_SN = 1,
    HAVE_ISSUER = 2,
    HAVE_ALL = 3,
};

enum __anon_0x00120e88 {
    No_sl_malloc = 0,
};

enum __anon_0x00120fb3 {
    Align = 8,
    Align_log2 = 3,
    order_start = 2,
    pad = 7,
};

enum __anon_0x001218d5 {
    Base_offset = 4,
};

enum __anon_0x001375bd {
    GOT_RID = 1,
    GOT_PROVIDER = 2,
    GOT_SCHEMACHECKING = 4,
    GOT_FILTER = 8,
    GOT_SEARCHBASE = 16,
    GOT_SCOPE = 32,
    GOT_ATTRSONLY = 64,
    GOT_ATTRS = 128,
    GOT_TYPE = 256,
    GOT_INTERVAL = 512,
    GOT_RETRY = 1024,
    GOT_SLIMIT = 2048,
    GOT_TLIMIT = 4096,
    GOT_SYNCDATA = 8192,
    GOT_LOGBASE = 16384,
    GOT_LOGFILTER = 32768,
    GOT_EXATTRS = 65536,
    GOT_MANAGEDSAIT = 131072,
    GOT_BINDCONF = 262144,
    GOT_SUFFIXM = 524288,
    GOT_REQUIRED = 19,
};

enum __anon_0x00160d49 {
    GOT_NONE = 0,
    GOT_CSN = 1,
    GOT_UUID = 2,
    GOT_ALL = 3,
};

enum __anon_0x00186f1d {
    eq_unsafe = 0,
    safe_filenames = 1,
};

enum __anon_0x00198380 {
    SP_CHKPT = 1,
    SP_SESSL = 2,
    SP_NOPRES = 3,
    SP_USEHINT = 4,
};

enum __anon_0x001aac79 {
    MAP_LDAP_UNKNOWN = 0,
    MAP_LDAP_EVERYTIME = 1,
    MAP_LDAP_NOW = 2,
    MAP_LDAP_LATER = 3,
};

enum __ns_sect {
    ns_s_qd = 0,
    ns_s_zn = 0,
    ns_s_an = 1,
    ns_s_pr = 1,
    ns_s_ns = 2,
    ns_s_ud = 2,
    ns_s_ar = 3,
    ns_s_max = 4,
};

enum conn_which {
    conn_init = 0,
    conn_destroy = 1,
    conn_last = 2,
};

enum find_csn_t {
    FIND_MAXCSN = 1,
    FIND_CSN = 2,
    FIND_PRESENT = 3,
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

enum relay_operation_e {
    relay_op_entry_get = 14,
    relay_op_entry_release = 15,
    relay_op_has_subordinates = 16,
    relay_op_last = 17,
};

enum sc_conn_state {
    SLAP_C_INVALID = 0,
    SLAP_C_INACTIVE = 1,
    SLAP_C_CLOSING = 2,
    SLAP_C_ACTIVE = 3,
    SLAP_C_BINDING = 4,
    SLAP_C_CLIENT = 5,
};

enum sc_struct_state {
    SLAP_C_UNINITIALIZED = 0,
    SLAP_C_UNUSED = 1,
    SLAP_C_USED = 2,
    SLAP_C_PENDING = 3,
};

enum slap_access_t {
    ACL_INVALID_ACCESS = -1,
    ACL_NONE = 0,
    ACL_DISCLOSE = 1,
    ACL_AUTH = 2,
    ACL_COMPARE = 3,
    ACL_SEARCH = 4,
    ACL_READ = 5,
    ACL_WRITE_ = 6,
    ACL_MANAGE = 7,
    ACL_LAST = 8,
    ACL_LEVEL_MASK = 15,
    ACL_QUALIFIER1 = 256,
    ACL_QUALIFIER2 = 512,
    ACL_QUALIFIER3 = 1024,
    ACL_QUALIFIER4 = 2048,
    ACL_QUALIFIER_MASK = 3840,
    ACL_WADD = 262,
    ACL_WDEL = 518,
    ACL_WRITE = 774,
};

enum slap_control_e {
    ACL_INVALID_CONTROL = 0,
    ACL_STOP = 1,
    ACL_CONTINUE = 2,
    ACL_BREAK = 3,
};

enum slap_operation_e {
    op_bind = 0,
    op_unbind = 1,
    op_search = 2,
    op_compare = 3,
    op_modify = 4,
    op_modrdn = 5,
    op_add = 6,
    op_delete = 7,
    op_abandon = 8,
    op_extended = 9,
    op_cancel = 10,
    op_aux_operational = 11,
    op_aux_chk_referrals = 12,
    op_aux_chk_controls = 13,
    op_last = 14,
};

enum slap_reply_e {
    REP_RESULT = 0,
    REP_SASL = 1,
    REP_EXTENDED = 2,
    REP_SEARCH = 3,
    REP_SEARCHREF = 4,
    REP_INTERMEDIATE = 5,
    REP_GLUE_RESULT = 6,
};

enum slap_style_e {
    ACL_STYLE_REGEX = 0,
    ACL_STYLE_EXPAND = 1,
    ACL_STYLE_BASE = 2,
    ACL_STYLE_ONE = 3,
    ACL_STYLE_SUBTREE = 4,
    ACL_STYLE_CHILDREN = 5,
    ACL_STYLE_LEVEL = 6,
    ACL_STYLE_ATTROF = 7,
    ACL_STYLE_ANONYMOUS = 8,
    ACL_STYLE_USERS = 9,
    ACL_STYLE_SELF = 10,
    ACL_STYLE_IP = 11,
    ACL_STYLE_IPV6 = 12,
    ACL_STYLE_PATH = 13,
    ACL_STYLE_NONE = 14,
};

enum slaptool {
    SLAPADD = 1,
    SLAPCAT = 2,
    SLAPDN = 3,
    SLAPINDEX = 4,
    SLAPPASSWD = 5,
    SLAPSCHEMA = 6,
    SLAPTEST = 7,
    SLAPAUTH = 8,
    SLAPACL = 9,
    SLAPLAST = 10,
};

/* ── forward declarations ────────────────────────────────── */

struct ADlist;
struct ATList;
struct Access;
struct AccessControl;
struct AccessControlState;
struct AclRegexMatches;
struct AclSetCookie;
struct Attr_option;
struct Attribute;
struct AttributeAssertion;
struct AttributeDescription;
struct AttributeName;
struct AttributeType;
struct AuthorizationInformation;
struct BackendDB;
struct BackendInfo;
struct BeDB;
struct BeI;
struct CRList;
struct CfEntryInfo;
struct ConfigFile;
struct ConfigOCs;
struct ConfigTable;
struct Connection;
struct ContentRule;
struct ControlsList;
struct Entry;
struct EntryHeader;
struct Erec;
struct Filter;
struct GroupAssertion;
struct LDIFFP;
struct Listener;
struct MRList;
struct MRUList;
struct MatchingRule;
struct MatchingRuleAssertion;
struct MatchingRuleUse;
struct Modification;
struct Modifications;
struct OCList;
struct OCUList;
struct ObjectClass;
struct OidMacro;
struct OidMacroList;
struct OpExtra;
struct OpExtraDB;
struct OpExtraSync;
union OpRequest;
struct Operation;
struct OperationBuffer;
struct Opheader;
struct PagedResultsState;
struct ServerID;
struct SlapReply;
union Sockaddr;
struct SubstringsAssertion;
struct SyncOperationBuffer;
struct Syntax;
struct SyntaxList;
struct Trec;
struct ValuesReturnFilter;
union __anon_0x00000279;
struct __anon_0x00001ca1;
struct __anon_0x00001de4;
struct __anon_0x00001e1e;
struct __anon_0x00001e83;
struct __anon_0x00001eed;
union __anon_0x000021e1;
struct __anon_0x000025ed;
struct __anon_0x00002730;
struct __anon_0x000030a4;
struct __anon_0x0000329c;
struct __anon_0x00003538;
struct __anon_0x0000359a;
struct __anon_0x0000389d;
struct __anon_0x000058cf;
union __anon_0x00005c1e;
struct __anon_0x0000784d;
struct __anon_0x000078bc;
struct __anon_0x00007a01;
struct __anon_0x00007a3d;
struct __anon_0x00007aa4;
struct __anon_0x00007b10;
struct __anon_0x00007b38;
union __anon_0x00008373;
struct __anon_0x000088b6;
struct __anon_0x000092b8;
struct __anon_0x00009564;
struct __anon_0x0000990d;
struct __anon_0x00009972;
struct __anon_0x0000a08a;
union __anon_0x0000a0ae;
struct __anon_0x0000a26d;
struct __anon_0x0000a59d;
struct __anon_0x0000a7a0;
struct __anon_0x0000a8fe;
union __anon_0x00016e1a;
struct __anon_0x00016f4c;
struct __anon_0x0001894b;
struct __anon_0x00018a8e;
struct __anon_0x00018ac8;
struct __anon_0x00018b2d;
struct __anon_0x00018b97;
union __anon_0x00018e8b;
struct __anon_0x000194e8;
struct __anon_0x00019ee1;
struct __anon_0x0001a0d9;
struct __anon_0x0001a375;
struct __anon_0x0001a3d7;
struct __anon_0x0001a9e9;
union __anon_0x0001aa0d;
struct __anon_0x0001ebbc;
union __anon_0x0001ed4b;
struct __anon_0x000207fe;
struct __anon_0x00020941;
struct __anon_0x0002097b;
struct __anon_0x000209e0;
struct __anon_0x00020a4a;
union __anon_0x00020d3e;
struct __anon_0x000211f3;
struct __anon_0x00021b67;
struct __anon_0x00021d5f;
struct __anon_0x00021ffb;
struct __anon_0x0002205d;
struct __anon_0x00022319;
struct __anon_0x000223ab;
union __anon_0x00026830;
struct __anon_0x00028303;
struct __anon_0x00028446;
struct __anon_0x00028480;
struct __anon_0x000284e0;
struct __anon_0x0002854a;
union __anon_0x0002883e;
struct __anon_0x00028ca9;
struct __anon_0x0002961d;
struct __anon_0x00029815;
struct __anon_0x00029b10;
struct __anon_0x00029b72;
union __anon_0x0002dc34;
struct __anon_0x0002f528;
struct __anon_0x0002f66b;
struct __anon_0x0002f6a5;
struct __anon_0x0002f705;
struct __anon_0x0002f76f;
union __anon_0x0002fa63;
struct __anon_0x0002fece;
struct __anon_0x00030842;
struct __anon_0x00030a3a;
struct __anon_0x00030de1;
struct __anon_0x00030e43;
union __anon_0x00031e6c;
struct __anon_0x000337f3;
struct __anon_0x00033936;
struct __anon_0x00033970;
struct __anon_0x000339d5;
struct __anon_0x00033a3f;
union __anon_0x000342dd;
struct __anon_0x0003473b;
struct __anon_0x000350af;
struct __anon_0x000352a7;
struct __anon_0x00035543;
struct __anon_0x000355a5;
union __anon_0x0003813d;
struct __anon_0x00039a46;
struct __anon_0x00039b89;
struct __anon_0x00039bc3;
struct __anon_0x00039c23;
struct __anon_0x00039c8d;
union __anon_0x0003a4d0;
struct __anon_0x0003a93b;
struct __anon_0x0003b2af;
struct __anon_0x0003b4a7;
struct __anon_0x0003b743;
struct __anon_0x0003b7e9;
union __anon_0x0003d106;
struct __anon_0x0003ecec;
struct __anon_0x0003ee2f;
struct __anon_0x0003ee69;
struct __anon_0x0003eece;
struct __anon_0x0003ef38;
struct __anon_0x0003ef5e;
union __anon_0x0003f797;
struct __anon_0x0003fbf5;
struct __anon_0x00040569;
struct __anon_0x00040761;
struct __anon_0x000409fd;
struct __anon_0x00040a5f;
union __anon_0x00041e84;
struct __anon_0x000437b5;
struct __anon_0x000438f8;
struct __anon_0x00043932;
struct __anon_0x00043997;
struct __anon_0x00043a01;
union __anon_0x00043cf5;
struct __anon_0x00044153;
struct __anon_0x00044ac7;
struct __anon_0x00044cbf;
struct __anon_0x00044f5b;
struct __anon_0x00044fbd;
union __anon_0x00046761;
struct __anon_0x000480a7;
struct __anon_0x000481ea;
struct __anon_0x00048224;
struct __anon_0x00048289;
struct __anon_0x000482f3;
union __anon_0x0004863a;
struct __anon_0x00048aa5;
struct __anon_0x00049419;
struct __anon_0x00049611;
struct __anon_0x000498ad;
struct __anon_0x0004990f;
union __anon_0x0004be7b;
struct __anon_0x0004d86f;
struct __anon_0x0004d9b2;
struct __anon_0x0004d9ec;
struct __anon_0x0004da51;
struct __anon_0x0004dabb;
union __anon_0x0004e2fe;
struct __anon_0x0004e823;
struct __anon_0x0004f21c;
struct __anon_0x0004f4b9;
struct __anon_0x0004f755;
struct __anon_0x0004f7fc;
struct __anon_0x0004fd77;
union __anon_0x0004fd9b;
union __anon_0x000531cd;
struct __anon_0x00054a58;
struct __anon_0x00054b9b;
struct __anon_0x00054bd5;
struct __anon_0x00054c3a;
struct __anon_0x00054ca4;
union __anon_0x00054f98;
struct __anon_0x000553f6;
struct __anon_0x00055d6a;
struct __anon_0x00055f62;
struct __anon_0x000561fe;
struct __anon_0x00056260;
union __anon_0x000566e3;
struct __anon_0x000580a7;
struct __anon_0x000581ea;
struct __anon_0x00058224;
struct __anon_0x00058289;
struct __anon_0x000582f3;
union __anon_0x00058b36;
struct __anon_0x00058f94;
struct __anon_0x0005990d;
struct __anon_0x00059baa;
struct __anon_0x00059f51;
struct __anon_0x00059fb3;
union __anon_0x0005d6dc;
struct __anon_0x0005eff0;
struct __anon_0x0005f133;
struct __anon_0x0005f16d;
struct __anon_0x0005f1d2;
struct __anon_0x0005f23c;
union __anon_0x0005f530;
struct __anon_0x0005f98e;
struct __anon_0x00060302;
struct __anon_0x000604fa;
struct __anon_0x00060900;
struct __anon_0x00060962;
union __anon_0x000614b9;
struct __anon_0x00062e93;
struct __anon_0x00062fd6;
struct __anon_0x00063010;
struct __anon_0x00063075;
struct __anon_0x000630df;
union __anon_0x00063922;
struct __anon_0x00063d80;
struct __anon_0x000646f4;
struct __anon_0x000648ec;
struct __anon_0x00064b88;
struct __anon_0x00064bea;
union __anon_0x0006742e;
struct __anon_0x00068d22;
struct __anon_0x00068e65;
struct __anon_0x00068e9f;
struct __anon_0x00068f04;
struct __anon_0x00068f6e;
union __anon_0x000697b1;
struct __anon_0x00069c1c;
struct __anon_0x0006a590;
struct __anon_0x0006a788;
struct __anon_0x0006ab2f;
struct __anon_0x0006ab91;
union __anon_0x0006bc68;
struct __anon_0x0006d5fd;
struct __anon_0x0006d740;
struct __anon_0x0006d77a;
struct __anon_0x0006d7df;
struct __anon_0x0006d849;
union __anon_0x0006e08c;
struct __anon_0x0006e4f7;
struct __anon_0x0006ee6b;
struct __anon_0x0006f063;
struct __anon_0x0006f40a;
struct __anon_0x0006f46c;
union __anon_0x00071579;
struct __anon_0x00072e68;
struct __anon_0x00072fab;
struct __anon_0x00072fe5;
struct __anon_0x0007304a;
struct __anon_0x000730b4;
union __anon_0x000733a8;
struct __anon_0x00073813;
struct __anon_0x00074187;
struct __anon_0x0007437f;
struct __anon_0x00074726;
struct __anon_0x00074788;
union __anon_0x0007529d;
struct __anon_0x00076c12;
struct __anon_0x00076d55;
struct __anon_0x00076d8f;
struct __anon_0x00076df4;
struct __anon_0x00076e5e;
union __anon_0x00077152;
struct __anon_0x000775bd;
struct __anon_0x00077f31;
struct __anon_0x00078129;
struct __anon_0x000784d0;
struct __anon_0x00078532;
union __anon_0x0007a17e;
struct __anon_0x0007ba77;
struct __anon_0x0007bbba;
struct __anon_0x0007bbf4;
struct __anon_0x0007bc59;
struct __anon_0x0007bcc3;
union __anon_0x0007bfb7;
struct __anon_0x0007c415;
struct __anon_0x0007cd89;
struct __anon_0x0007cf81;
struct __anon_0x0007d21d;
struct __anon_0x0007d27f;
union __anon_0x0007ee6a;
struct __anon_0x00080753;
struct __anon_0x00080896;
struct __anon_0x000808d0;
struct __anon_0x00080935;
struct __anon_0x0008099f;
union __anon_0x00080c93;
struct __anon_0x000810f1;
struct __anon_0x00081a65;
struct __anon_0x00081c5d;
struct __anon_0x00081ef9;
struct __anon_0x00081f5b;
union __anon_0x00082762;
struct __anon_0x00084056;
struct __anon_0x00084199;
struct __anon_0x000841d3;
struct __anon_0x00084238;
struct __anon_0x000842a2;
union __anon_0x00084596;
struct __anon_0x00084a01;
struct __anon_0x00085375;
struct __anon_0x0008556d;
struct __anon_0x00085914;
struct __anon_0x00085976;
union __anon_0x000868a8;
struct __anon_0x00088191;
struct __anon_0x000882d4;
struct __anon_0x0008830e;
struct __anon_0x00088373;
struct __anon_0x000883dd;
union __anon_0x000886d1;
struct __anon_0x00088b3c;
struct __anon_0x000894b0;
struct __anon_0x000896a8;
struct __anon_0x00089944;
struct __anon_0x000899a6;
union __anon_0x00089ef5;
struct __anon_0x0008b7de;
struct __anon_0x0008b921;
struct __anon_0x0008b95b;
struct __anon_0x0008b9c0;
struct __anon_0x0008ba2a;
union __anon_0x0008bd1e;
struct __anon_0x0008c1d1;
struct __anon_0x0008cb45;
struct __anon_0x0008cd3d;
struct __anon_0x0008cfd9;
struct __anon_0x0008d03b;
union __anon_0x0008d7ea;
struct __anon_0x0008f15b;
struct __anon_0x0008f29e;
struct __anon_0x0008f2d8;
struct __anon_0x0008f33d;
struct __anon_0x0008f3a7;
union __anon_0x0008fbea;
struct __anon_0x00090048;
struct __anon_0x000909bc;
struct __anon_0x00090bb4;
struct __anon_0x00090e50;
struct __anon_0x00090eb2;
struct __anon_0x00092d1c;
union __anon_0x00092ea6;
struct __anon_0x00094800;
struct __anon_0x00094943;
struct __anon_0x0009497d;
struct __anon_0x000949e2;
struct __anon_0x00094a4c;
union __anon_0x0009528f;
struct __anon_0x000957a8;
struct __anon_0x0009611c;
struct __anon_0x00096314;
struct __anon_0x000966bb;
struct __anon_0x0009671d;
union __anon_0x0009ad5e;
struct __anon_0x0009c6b3;
struct __anon_0x0009c7f6;
struct __anon_0x0009c830;
struct __anon_0x0009c895;
struct __anon_0x0009c8ff;
union __anon_0x0009cbf3;
struct __anon_0x0009d051;
struct __anon_0x0009d9c5;
struct __anon_0x0009dbbd;
struct __anon_0x0009de59;
struct __anon_0x0009debb;
struct __anon_0x0009e53c;
union __anon_0x0009e6c6;
struct __anon_0x0009ff9c;
struct __anon_0x000a00df;
struct __anon_0x000a0119;
struct __anon_0x000a017e;
struct __anon_0x000a01e8;
union __anon_0x000a0a2b;
struct __anon_0x000a0e96;
struct __anon_0x000a180a;
struct __anon_0x000a1a02;
struct __anon_0x000a1c9e;
struct __anon_0x000a1d00;
union __anon_0x000a9f84;
struct __anon_0x000ab8c8;
struct __anon_0x000aba0b;
struct __anon_0x000aba45;
struct __anon_0x000abaaa;
struct __anon_0x000abb14;
union __anon_0x000abe08;
struct __anon_0x000ac273;
struct __anon_0x000acbe7;
struct __anon_0x000acddf;
struct __anon_0x000ad07b;
struct __anon_0x000ad0dd;
struct __anon_0x000ad34b;
struct __anon_0x000ad3da;
union __anon_0x000aeb5c;
struct __anon_0x000b077e;
struct __anon_0x000b08c1;
struct __anon_0x000b08fb;
struct __anon_0x000b0960;
struct __anon_0x000b09ca;
union __anon_0x000b1268;
struct __anon_0x000b16c6;
struct __anon_0x000b203a;
struct __anon_0x000b2232;
struct __anon_0x000b25d9;
struct __anon_0x000b263b;
struct __anon_0x000b290c;
union __anon_0x000b535a;
struct __anon_0x000b6c96;
struct __anon_0x000b6dd9;
struct __anon_0x000b6e13;
struct __anon_0x000b6e78;
struct __anon_0x000b6ee2;
union __anon_0x000b7725;
struct __anon_0x000b7b90;
struct __anon_0x000b8504;
struct __anon_0x000b86fc;
struct __anon_0x000b8aa3;
struct __anon_0x000b8b05;
struct __anon_0x000b8dac;
union __anon_0x000b9a3f;
struct __anon_0x000bb3e6;
struct __anon_0x000bb529;
struct __anon_0x000bb563;
struct __anon_0x000bb5c8;
struct __anon_0x000bb632;
union __anon_0x000bbe75;
struct __anon_0x000bc2d3;
struct __anon_0x000bcc47;
struct __anon_0x000bce3f;
struct __anon_0x000bd0db;
struct __anon_0x000bd13d;
union __anon_0x000be8b4;
struct __anon_0x000c01a3;
struct __anon_0x000c02e6;
struct __anon_0x000c0320;
struct __anon_0x000c0385;
struct __anon_0x000c03ef;
union __anon_0x000c0c32;
struct __anon_0x000c109d;
struct __anon_0x000c1a11;
struct __anon_0x000c1c09;
struct __anon_0x000c1ea5;
struct __anon_0x000c1f07;
union __anon_0x000c28db;
struct __anon_0x000c436f;
struct __anon_0x000c44b2;
struct __anon_0x000c44ec;
struct __anon_0x000c4551;
struct __anon_0x000c45bb;
struct __anon_0x000c45e1;
union __anon_0x000c4e1a;
struct __anon_0x000c5278;
struct __anon_0x000c5bec;
struct __anon_0x000c5de4;
struct __anon_0x000c6080;
struct __anon_0x000c60e2;
union __anon_0x000c7ac1;
struct __anon_0x000c96fa;
struct __anon_0x000c989f;
struct __anon_0x000c98d9;
struct __anon_0x000c99d8;
struct __anon_0x000c9a42;
union __anon_0x000ca285;
struct __anon_0x000ca6e3;
struct __anon_0x000cb057;
struct __anon_0x000cb24f;
struct __anon_0x000cb4eb;
struct __anon_0x000cb54d;
union __anon_0x000d5d0d;
struct __anon_0x000d761a;
struct __anon_0x000d775d;
struct __anon_0x000d7797;
struct __anon_0x000d77fc;
struct __anon_0x000d7866;
union __anon_0x000d80a9;
struct __anon_0x000d8507;
struct __anon_0x000d8e7b;
struct __anon_0x000d9073;
struct __anon_0x000d930f;
struct __anon_0x000d9371;
union __anon_0x000db7ba;
struct __anon_0x000dd2e6;
struct __anon_0x000dd48b;
struct __anon_0x000dd4c5;
struct __anon_0x000dd52a;
struct __anon_0x000dd594;
struct __anon_0x000dd5ba;
union __anon_0x000dd8a4;
struct __anon_0x000ddd02;
struct __anon_0x000de6fb;
struct __anon_0x000de8f3;
struct __anon_0x000deb8f;
struct __anon_0x000debf1;
struct __anon_0x000df100;
union __anon_0x000df124;
union __anon_0x000e02a9;
struct __anon_0x000e1be0;
struct __anon_0x000e1d23;
struct __anon_0x000e1d5d;
struct __anon_0x000e1dc2;
struct __anon_0x000e1e2c;
union __anon_0x000e266f;
struct __anon_0x000e2acd;
struct __anon_0x000e3441;
struct __anon_0x000e3639;
struct __anon_0x000e38d5;
struct __anon_0x000e3937;
union __anon_0x000e6049;
struct __anon_0x000e7b1d;
struct __anon_0x000e7c60;
struct __anon_0x000e7c9a;
struct __anon_0x000e7cff;
struct __anon_0x000e7d69;
union __anon_0x000e85ac;
struct __anon_0x000e8a17;
struct __anon_0x000e938b;
struct __anon_0x000e9583;
struct __anon_0x000e981f;
struct __anon_0x000e9881;
union __anon_0x000eb9be;
struct __anon_0x000ed497;
struct __anon_0x000ed5da;
struct __anon_0x000ed614;
struct __anon_0x000ed713;
struct __anon_0x000ed77d;
union __anon_0x000edfc0;
struct __anon_0x000ee41e;
struct __anon_0x000eed92;
struct __anon_0x000eef8a;
struct __anon_0x000ef226;
struct __anon_0x000ef288;
union __anon_0x000f0974;
struct __anon_0x000f2443;
struct __anon_0x000f25e8;
struct __anon_0x000f2622;
struct __anon_0x000f2687;
struct __anon_0x000f26f1;
union __anon_0x000f2f34;
struct __anon_0x000f3392;
struct __anon_0x000f3d06;
struct __anon_0x000f3efe;
struct __anon_0x000f419a;
struct __anon_0x000f41fc;
union __anon_0x000f5521;
struct __anon_0x000f7005;
struct __anon_0x000f7148;
struct __anon_0x000f7182;
struct __anon_0x000f71e7;
struct __anon_0x000f7251;
union __anon_0x000f7a94;
struct __anon_0x000f7ef2;
struct __anon_0x000f8866;
struct __anon_0x000f8a5e;
struct __anon_0x000f8cfa;
struct __anon_0x000f8d5c;
struct __anon_0x000fafb8;
union __anon_0x000fb154;
struct __anon_0x000fcac5;
struct __anon_0x000fcc08;
struct __anon_0x000fcc42;
struct __anon_0x000fcca7;
struct __anon_0x000fcd11;
union __anon_0x000fd554;
struct __anon_0x000fd9b2;
struct __anon_0x000fe326;
struct __anon_0x000fe51e;
struct __anon_0x000fe7ba;
struct __anon_0x000fe81c;
union __anon_0x00101c4b;
struct __anon_0x00103589;
struct __anon_0x001035f6;
struct __anon_0x00103739;
struct __anon_0x00103773;
struct __anon_0x001037d8;
struct __anon_0x00103842;
union __anon_0x00103b36;
struct __anon_0x00103f94;
struct __anon_0x0010498d;
struct __anon_0x00104b85;
struct __anon_0x00104e21;
struct __anon_0x00104e83;
struct __anon_0x00105392;
union __anon_0x001053b6;
union __anon_0x001063b9;
struct __anon_0x00107c35;
struct __anon_0x00107d78;
struct __anon_0x00107db2;
struct __anon_0x00107e17;
struct __anon_0x00107e81;
union __anon_0x00108175;
struct __anon_0x001085d3;
struct __anon_0x00108f47;
struct __anon_0x0010913f;
struct __anon_0x001093db;
struct __anon_0x0010943d;
union __anon_0x0010abaf;
struct __anon_0x0010c550;
struct __anon_0x0010c693;
struct __anon_0x0010c6cd;
struct __anon_0x0010c732;
struct __anon_0x0010c79c;
union __anon_0x0010cfdf;
struct __anon_0x0010d43d;
struct __anon_0x0010ddb1;
struct __anon_0x0010dfa9;
struct __anon_0x0010e245;
struct __anon_0x0010e2a7;
union __anon_0x0010f09e;
struct __anon_0x00110996;
struct __anon_0x00110ad9;
struct __anon_0x00110b13;
struct __anon_0x00110b78;
struct __anon_0x00110be2;
union __anon_0x00111425;
struct __anon_0x001119f3;
struct __anon_0x00112367;
struct __anon_0x0011255f;
struct __anon_0x001127fb;
struct __anon_0x0011285d;
union __anon_0x00113f23;
struct __anon_0x00115761;
struct __anon_0x001158a4;
struct __anon_0x001158de;
struct __anon_0x00115943;
struct __anon_0x001159ad;
union __anon_0x001161f0;
struct __anon_0x0011664e;
struct __anon_0x00116fc2;
struct __anon_0x001171ba;
struct __anon_0x00117456;
struct __anon_0x001174b8;
union __anon_0x00118c03;
struct __anon_0x0011a4f7;
struct __anon_0x0011a63a;
struct __anon_0x0011a674;
struct __anon_0x0011a6d9;
struct __anon_0x0011a743;
union __anon_0x0011aa37;
struct __anon_0x0011ae95;
struct __anon_0x0011b809;
struct __anon_0x0011ba01;
struct __anon_0x0011bc9d;
struct __anon_0x0011bcff;
union __anon_0x0011c7dc;
struct __anon_0x0011e02a;
struct __anon_0x0011e16d;
struct __anon_0x0011e1a7;
struct __anon_0x0011e20c;
struct __anon_0x0011e276;
union __anon_0x0011eab9;
struct __anon_0x0011ef17;
struct __anon_0x0011f88b;
struct __anon_0x0011fa83;
struct __anon_0x0011fd1f;
struct __anon_0x0011fd81;
struct __anon_0x00120e9a;
struct __anon_0x001220c6;
union __anon_0x00122262;
struct __anon_0x00123b26;
struct __anon_0x00123c69;
struct __anon_0x00123ca3;
struct __anon_0x00123d08;
struct __anon_0x00123d72;
union __anon_0x00124066;
struct __anon_0x001244d1;
struct __anon_0x00124e45;
struct __anon_0x0012503d;
struct __anon_0x001253e4;
struct __anon_0x00125446;
union __anon_0x001273fa;
struct __anon_0x00128c47;
struct __anon_0x00128d8a;
struct __anon_0x00128dc4;
struct __anon_0x00128e29;
struct __anon_0x00128e93;
union __anon_0x001296d6;
struct __anon_0x00129b41;
struct __anon_0x0012a4b5;
struct __anon_0x0012a6ad;
struct __anon_0x0012a949;
struct __anon_0x0012a9ab;
union __anon_0x0012b029;
struct __anon_0x0012c95d;
struct __anon_0x0012caa0;
struct __anon_0x0012cada;
struct __anon_0x0012cb3f;
struct __anon_0x0012cba9;
union __anon_0x0012cef8;
struct __anon_0x0012d356;
struct __anon_0x0012dcca;
struct __anon_0x0012dec2;
struct __anon_0x0012e269;
struct __anon_0x0012e2cb;
union __anon_0x0012f03b;
struct __anon_0x001309d8;
struct __anon_0x00130b1b;
struct __anon_0x00130b55;
struct __anon_0x00130bba;
struct __anon_0x00130c24;
union __anon_0x00130f18;
struct __anon_0x001313c0;
struct __anon_0x00131d34;
struct __anon_0x00131f2c;
struct __anon_0x001321c8;
struct __anon_0x0013222a;
union __anon_0x00132945;
struct __anon_0x001344de;
struct __anon_0x00134621;
struct __anon_0x0013465b;
struct __anon_0x001346bb;
struct __anon_0x00134725;
union __anon_0x00134f68;
struct __anon_0x001354a7;
struct __anon_0x001355ee;
struct __anon_0x001362c5;
struct __anon_0x00136562;
struct __anon_0x00136909;
struct __anon_0x00136978;
struct __anon_0x00136fae;
union __anon_0x00136fd2;
struct __anon_0x0013706d;
struct __anon_0x001370ff;
struct __anon_0x00137166;
union __anon_0x00142ead;
struct __anon_0x00144848;
struct __anon_0x0014498b;
struct __anon_0x001449c5;
struct __anon_0x00144a2a;
struct __anon_0x00144a94;
union __anon_0x00144d8d;
struct __anon_0x001451f8;
struct __anon_0x00145bf3;
struct __anon_0x00145f16;
struct __anon_0x001462bd;
struct __anon_0x0014631f;
struct __anon_0x00146842;
union __anon_0x00146866;
union __anon_0x00149574;
struct __anon_0x0014aea1;
struct __anon_0x0014afe4;
struct __anon_0x0014b01e;
struct __anon_0x0014b083;
struct __anon_0x0014b0ed;
union __anon_0x0014b3e4;
struct __anon_0x0014b897;
struct __anon_0x0014c291;
struct __anon_0x0014c5b5;
struct __anon_0x0014c851;
struct __anon_0x0014c8b3;
struct __anon_0x0014cdc4;
union __anon_0x0014cde8;
union __anon_0x0014f857;
struct __anon_0x00151198;
struct __anon_0x001512db;
struct __anon_0x00151315;
struct __anon_0x00151375;
struct __anon_0x001513df;
union __anon_0x00151c22;
struct __anon_0x00152080;
struct __anon_0x001529f4;
struct __anon_0x00152bec;
struct __anon_0x00152e88;
struct __anon_0x00152eea;
union __anon_0x00153a73;
struct __anon_0x001555c4;
struct __anon_0x00155707;
struct __anon_0x00155741;
struct __anon_0x001557a1;
struct __anon_0x0015580b;
union __anon_0x0015604e;
struct __anon_0x00156422;
struct __anon_0x00156565;
struct __anon_0x00156ed9;
struct __anon_0x001570d1;
struct __anon_0x0015736d;
struct __anon_0x001573cf;
union __anon_0x001586dd;
struct __anon_0x00159fe5;
struct __anon_0x0015a128;
struct __anon_0x0015a162;
struct __anon_0x0015a1c7;
struct __anon_0x0015a231;
union __anon_0x0015a525;
struct __anon_0x0015a990;
struct __anon_0x0015b304;
struct __anon_0x0015b4fc;
struct __anon_0x0015b798;
struct __anon_0x0015b7fa;
union __anon_0x0015c207;
struct __anon_0x0015c50c;
struct __anon_0x0015c58f;
struct __anon_0x0015c5f9;
struct __anon_0x0015c699;
struct __anon_0x0015de39;
struct __anon_0x0015df7c;
struct __anon_0x0015dfb6;
struct __anon_0x0015e016;
struct __anon_0x0015e080;
union __anon_0x0015e8c3;
struct __anon_0x0015ed78;
struct __anon_0x0015f6ec;
struct __anon_0x0015f8e4;
struct __anon_0x0015fb80;
struct __anon_0x0015fbe2;
union __anon_0x00161333;
struct __anon_0x00162c5a;
struct __anon_0x00162d9d;
struct __anon_0x00162dd7;
struct __anon_0x00162e3c;
struct __anon_0x00162ea6;
union __anon_0x0016319a;
struct __anon_0x001635f8;
struct __anon_0x00163f6c;
struct __anon_0x00164164;
struct __anon_0x00164400;
struct __anon_0x00164462;
union __anon_0x0016501f;
struct __anon_0x00166a28;
struct __anon_0x00166b6b;
struct __anon_0x00166ba5;
struct __anon_0x00166c0a;
struct __anon_0x00166c74;
union __anon_0x001674b7;
struct __anon_0x00167979;
struct __anon_0x001682ed;
struct __anon_0x001684e5;
struct __anon_0x00168781;
struct __anon_0x001687e3;
union __anon_0x0016adbe;
struct __anon_0x0016c6c5;
struct __anon_0x0016c808;
struct __anon_0x0016c842;
struct __anon_0x0016c8a2;
struct __anon_0x0016c90c;
union __anon_0x0016cc00;
struct __anon_0x0016d05e;
struct __anon_0x0016d9d2;
struct __anon_0x0016dbca;
struct __anon_0x0016de66;
struct __anon_0x0016dec8;
union __anon_0x0016e867;
struct __anon_0x0017013d;
struct __anon_0x00170280;
struct __anon_0x001702ba;
struct __anon_0x0017031f;
struct __anon_0x00170389;
union __anon_0x0017067d;
struct __anon_0x00170adb;
struct __anon_0x0017144f;
struct __anon_0x00171647;
struct __anon_0x001718e3;
struct __anon_0x00171945;
union __anon_0x00172b53;
struct __anon_0x00172c2d;
struct __anon_0x0017459b;
struct __anon_0x001746de;
struct __anon_0x00174718;
struct __anon_0x00174778;
struct __anon_0x001747e2;
union __anon_0x00174ad6;
struct __anon_0x00174f34;
struct __anon_0x001758a8;
struct __anon_0x00175aa0;
struct __anon_0x00175d3c;
struct __anon_0x00175d9e;
union __anon_0x001767dd;
struct __anon_0x001780e4;
struct __anon_0x00178227;
struct __anon_0x00178261;
struct __anon_0x001782c1;
struct __anon_0x0017832b;
union __anon_0x0017861f;
struct __anon_0x00178a7d;
struct __anon_0x001793f1;
struct __anon_0x001795e9;
struct __anon_0x00179885;
struct __anon_0x001798e7;
union __anon_0x0017a4a7;
struct __anon_0x0017bdae;
struct __anon_0x0017bef1;
struct __anon_0x0017bf2b;
struct __anon_0x0017bf8b;
struct __anon_0x0017bff5;
union __anon_0x0017c838;
struct __anon_0x0017cced;
struct __anon_0x0017d661;
struct __anon_0x0017d859;
struct __anon_0x0017daf5;
struct __anon_0x0017db57;
union __anon_0x0017efe5;
struct __anon_0x0018090c;
struct __anon_0x00180a4f;
struct __anon_0x00180a89;
struct __anon_0x00180aee;
struct __anon_0x00180b58;
union __anon_0x00180e4c;
struct __anon_0x001812aa;
struct __anon_0x00181c1e;
struct __anon_0x00181e16;
struct __anon_0x001820b2;
struct __anon_0x00182114;
struct __anon_0x00182d26;
union __anon_0x001830a6;
struct __anon_0x00184999;
struct __anon_0x00184adc;
struct __anon_0x00184b16;
struct __anon_0x00184b7b;
struct __anon_0x00184be5;
union __anon_0x00185428;
struct __anon_0x00185886;
struct __anon_0x00186280;
struct __anon_0x00186478;
struct __anon_0x0018681f;
struct __anon_0x00186881;
struct __anon_0x00186dc4;
union __anon_0x00186de8;
union __anon_0x0018b5e0;
struct __anon_0x0018ce87;
struct __anon_0x0018cfca;
struct __anon_0x0018d004;
struct __anon_0x0018d069;
struct __anon_0x0018d0d3;
union __anon_0x0018d3c7;
struct __anon_0x0018d832;
struct __anon_0x0018e22b;
struct __anon_0x0018e48f;
struct __anon_0x0018e72b;
struct __anon_0x0018e78d;
struct __anon_0x0018eca8;
union __anon_0x0018eccc;
union __anon_0x0018f829;
struct __anon_0x001910d5;
struct __anon_0x00191218;
struct __anon_0x00191252;
struct __anon_0x001912bc;
struct __anon_0x00191326;
union __anon_0x0019161a;
struct __anon_0x00191a78;
struct __anon_0x001923ec;
struct __anon_0x00192650;
struct __anon_0x001928ec;
struct __anon_0x00192992;
union __anon_0x00193b16;
struct __anon_0x00195501;
struct __anon_0x00195644;
struct __anon_0x0019567e;
struct __anon_0x001956de;
struct __anon_0x00195748;
union __anon_0x00195faf;
struct __anon_0x00196394;
struct __anon_0x001964a9;
struct __anon_0x00196eaa;
struct __anon_0x00197149;
struct __anon_0x001974f1;
struct __anon_0x00197560;
struct __anon_0x00197b70;
union __anon_0x00197b94;
union __anon_0x001a13af;
union __anon_0x001a2681;
union __anon_0x001a36a2;
union __anon_0x001a4265;
struct __anon_0x001a59f4;
union __anon_0x001a5b95;
struct __anon_0x001a7c64;
union __anon_0x001a7dbc;
union __anon_0x001a9951;
struct __anon_0x001abb79;
struct __anon_0x001abb9a;
union __anon_0x001abbbb;
struct __anon_0x001abbda;
union __anon_0x001abc07;
struct __anon_0x001abc26;
struct __anon_0x001abc47;
union __anon_0x001abc68;
struct __anon_0x001abc87;
struct __anon_0x001abcbb;
struct __anon_0x001abcdc;
union __anon_0x001abd09;
struct __anon_0x001abd60;
union __anon_0x001abda5;
struct __anon_0x001ac251;
struct __anon_0x001ac858;
struct __anon_0x001ae052;
struct __anon_0x001b1e42;
struct __anon_0x001b1ec4;
struct __anon_0x001b1f2d;
struct __anon_0x001b1fcc;
struct __sigset_t;
struct __va_list;
struct acl_set_gather_t;
struct addrinfo;
struct aindexrec;
struct avlnode;
struct be_pcl;
struct berelement;
struct berval;
struct bvlist;
struct c_o;
struct c_po;
struct cindexrec;
struct config_args_s;
struct config_reply_s;
struct conn_readinfo;
struct cookie_state;
struct cookie_vals;
struct delrec;
struct dirent;
struct dninfo;
struct entry_info_t;
struct extop_list;
union f_un_u;
struct fbase_cookie;
struct fbit_implication;
struct fpres_cookie;
struct glue_Addrec;
struct glue_state;
struct glueinfo;
struct gluenode;
struct group;
struct in6_addr;
struct in_addr;
struct l;
union lber_berelement_u;
struct lber_memory_fns;
struct lber_options;
struct ldap_attributetype;
struct ldap_ava;
struct ldap_contentrule;
struct ldap_map_data;
struct ldap_matchingrule;
struct ldap_matchingruleuse;
struct ldap_objectclass;
struct ldap_schema_extension_item;
struct ldap_syntax;
struct ldap_url_desc;
struct ldapcontrol;
struct ldif_info;
struct ldif_tool;
struct logschema;
struct lutil_HASHContext;
struct lutil_MD5Context;
struct lutil_int_decnum;
struct lutil_timet;
struct lutil_tm;
struct mindexrec;
struct modify_ctxt;
struct modinst;
struct modtarget;
struct nonpresent_entry;
struct np;
struct o_e;
struct oindexrec;
struct opcookie;
struct option_helper;
struct passwd;
struct pw_scheme;
struct pw_slist;
struct rdata_s;
struct re_pattern_buffer;
struct re_s;
struct relay_back_info;
struct relay_callback;
struct relay_fail_modes_s;
struct rep_extended_s;
struct rep_sasl_s;
struct rep_search_s;
struct req_abandon_s;
struct req_add_s;
struct req_bind_s;
struct req_compare_s;
struct req_extended_s;
struct req_modifications_s;
struct req_modify_s;
struct req_modrdn_s;
struct req_pwdexop_s;
struct req_search_s;
struct resinfo;
struct resolve_ctxt;
struct rewrite_action;
struct rewrite_builtin_map;
struct rewrite_context;
struct rewrite_info;
struct rewrite_map;
struct rewrite_mapper;
struct rewrite_op;
struct rewrite_rule;
struct rewrite_session;
struct rewrite_submatch;
struct rewrite_subst;
struct rewrite_var;
struct rl;
struct runqueue_s;
struct sasl_regexp;
struct searchstate;
struct sessionlog;
struct setup_cookie;
struct sh_freelist;
struct sh_so;
struct sigaction;
union sigval;
struct sindexrec;
struct slab_heap;
struct slab_object;
struct slap_bindconf;
struct slap_callback;
struct slap_cf_aux_table;
struct slap_control;
struct slap_control_ids;
struct slap_counters_t;
struct slap_csn_entry;
struct slap_daemon_st;
struct slap_dn_access;
struct slap_internal_schema;
struct slap_keepalive;
struct slap_limits;
struct slap_limits_set;
struct slap_list;
struct slap_mrule_defs_rec;
struct slap_oinit_t;
struct slap_overinfo;
struct slap_overinst;
struct slap_schema_ad_map;
struct slap_schema_mr_map;
struct slap_schema_oc_map;
struct slap_schema_syn_map;
struct slap_set_cookie;
struct slap_ssf_set;
struct slap_sync_cookie_s;
struct slap_syntax_defs_rec;
struct slap_verbmasks;
struct slapd_map_data;
struct slapd_rw_info;
struct slog_entry;
struct smatch_info;
struct sockaddr;
struct sockaddr_in;
struct sockaddr_in6;
struct sockaddr_storage;
struct sockaddr_un;
struct sockbuf;
struct sockbuf_io;
struct sockbuf_io_desc;
union sr_u;
struct stat;
struct sync_control;
struct sync_cookie;
struct syncinfo_s;
struct syncmatches;
struct syncops;
struct syncprov_info_t;
struct syncres;
struct termios;
struct timespec;
struct timeval;
struct tm;
struct tool_vars;
struct ucnumber;
struct ucred;
struct voidList;
union vrf_un_u;

/* ── typedefs, structs & unions (dependency-ordered) ──────── */

struct ControlsList {
    struct slap_control * slh_first;
};

struct __anon_0x000025ed {
    struct sync_cookie * stqe_next;
};

struct __anon_0x0000329c {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000058cf {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x00009564 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0000a59d {
    char * name;
    char * oid;
};

struct __anon_0x00016f4c {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0001a0d9 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0001ebbc {
    long unsigned int fds_bits[32];
};

struct __anon_0x00021d5f {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00022319 {
    struct re_s * stqe_next;
};

struct __anon_0x000223ab {
    struct re_s * stqe_next;
};

struct __anon_0x00029815 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00030a3a {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000352a7 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0003b4a7 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00040761 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00044cbf {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00049611 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0004f4b9 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00055f62 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00059baa {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000604fa {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000648ec {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0006a788 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0006f063 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0007437f {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00078129 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0007cf81 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00081c5d {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0008556d {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000896a8 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0008cd3d {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00090bb4 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00096314 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0009dbbd {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000a1a02 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000acddf {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000ad34b {
    struct re_s * stqe_next;
};

struct __anon_0x000ad3da {
    struct re_s * stqe_next;
};

struct __anon_0x000b2232 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000b290c {
    struct slap_control * sle_next;
};

struct __anon_0x000b86fc {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000bce3f {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000c1c09 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000c5de4 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000cb24f {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000d9073 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000de8f3 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000e3639 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000e9583 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000eef8a {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000f3efe {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000f8a5e {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x000fe51e {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00104b85 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0010913f {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0010dfa9 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0011255f {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x001171ba {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0011ba01 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0011fa83 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00120e9a {
    struct slab_object * le_next;
    struct slab_object * * le_prev;
};

struct __anon_0x0012503d {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0012a6ad {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0012dec2 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00131f2c {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x001354a7 {
    struct sync_cookie * stqe_next;
};

struct __anon_0x00136562 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0013706d {
    struct re_s * stqe_next;
};

struct __anon_0x001370ff {
    struct re_s * stqe_next;
};

struct __anon_0x00137166 {
    struct nonpresent_entry * le_next;
    struct nonpresent_entry * * le_prev;
};

struct __anon_0x00145f16 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0014c5b5 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00152bec {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00156422 {
    struct sync_cookie * stqe_next;
};

struct __anon_0x001570d1 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0015b4fc {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0015c699 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x0015f8e4 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00164164 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x001684e5 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0016dbca {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00171647 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00172c2d {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x00175aa0 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x001795e9 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0017d859 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00181e16 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00182d26 {
    long int tv_sec;
    long int tv_nsec;
};

struct __anon_0x00186478 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x0018e48f {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00192650 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

struct __anon_0x00196394 {
    struct sync_cookie * stqe_next;
};

struct __anon_0x00197149 {
    struct slap_csn_entry * tqe_next;
    struct slap_csn_entry * * tqe_prev;
};

union __anon_0x001a13af {
    void * _lm_args;
    struct rewrite_subst * _lm_subst;
};

union __anon_0x001a2681 {
    void * _lm_args;
    struct rewrite_subst * _lm_subst;
};

union __anon_0x001a36a2 {
    void * _lm_args;
    struct rewrite_subst * _lm_subst;
};

union __anon_0x001a4265 {
    void * _lm_args;
    struct rewrite_subst * _lm_subst;
};

union __anon_0x001a5b95 {
    void * _lm_args;
    struct rewrite_subst * _lm_subst;
};

union __anon_0x001a7dbc {
    void * _lm_args;
    struct rewrite_subst * _lm_subst;
};

union __anon_0x001a9951 {
    void * _lm_args;
    struct rewrite_subst * _lm_subst;
};

struct __anon_0x001abb9a {
    int si_timerid;
    int si_overrun;
};

struct __anon_0x001abc47 {
    void * si_lower;
    void * si_upper;
};

struct __anon_0x001abcbb {
    long int si_band;
    int si_fd;
};

struct __anon_0x001abcdc {
    void * si_call_addr;
    int si_syscall;
    unsigned int si_arch;
};

struct __anon_0x001ac251 {
    long int tv_sec;
    long int tv_nsec;
};

struct __sigset_t {
    long unsigned int __bits[32];
};

struct __va_list {
    void * __ap;
};

struct avlnode {
    void * avl_data;
    struct avlnode * avl_link[2];
    char avl_bits[2];
    signed char avl_bf;
};

struct be_pcl {
    struct slap_csn_entry * tqh_first;
    struct slap_csn_entry * * tqh_last;
};

struct config_reply_s {
    int err;
    char msg[256];
};

struct cookie_vals {
    struct berval * cv_vals;
    int * cv_sids;
    int cv_num;
};

struct fbit_implication {
    enum isa_feature ante;
    enum isa_feature cons;
};

struct l {
    struct re_s * stqh_first;
    struct re_s * * stqh_last;
};

union lber_berelement_u {
    char buffer[256];
    int ialign;
    long int lalign;
    float falign;
    double dalign;
    char * palign;
};

struct lber_options {
    short int lbo_valid;
    short unsigned int lbo_options;
    int lbo_debug;
};

struct ldap_schema_extension_item {
    char * lsei_name;
    char * * lsei_values;
};

struct ldap_url_desc {
    struct ldap_url_desc * lud_next;
    char * lud_scheme;
    char * lud_host;
    int lud_port;
    char * lud_dn;
    char * * lud_attrs;
    int lud_scope;
    char * lud_filter;
    char * * lud_exts;
    int lud_crit_exts;
};

struct lutil_int_decnum {
    unsigned char * buf;
    int bufsiz;
    int beg;
    int len;
};

struct lutil_timet {
    unsigned int tt_sec;
    int tt_gsec;
    unsigned int tt_usec;
};

struct lutil_tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_usec;
    int tm_usub;
};

struct np {
    struct nonpresent_entry * lh_first;
};

struct rep_extended_s {
    const char * r_rspoid;
    struct berval * r_rspdata;
};

struct rep_sasl_s {
    struct berval * r_sasldata;
};

struct rewrite_action {
    struct rewrite_action * la_next;
    int la_type;
    void * la_args;
};

struct rewrite_context {
    char * lc_name;
    struct rewrite_context * lc_alias;
    struct rewrite_rule * lc_rule;
};

struct rewrite_submatch {
    int ls_type;
    struct rewrite_map * ls_map;
    int ls_submatch;
};

struct rl {
    struct re_s * stqh_first;
    struct re_s * * stqh_last;
};

struct sh_freelist {
    struct slab_object * lh_first;
};

struct sh_so {
    struct slab_object * lh_first;
};

union sigval {
    int sival_int;
    void * sival_ptr;
};

struct slap_control_ids {
    int sc_LDAPsync;
    int sc_assert;
    int sc_domainScope;
    int sc_dontUseCopy;
    int sc_manageDSAit;
    int sc_modifyIncrement;
    int sc_noOp;
    int sc_pagedResults;
    int sc_permissiveModify;
    int sc_postRead;
    int sc_preRead;
    int sc_proxyAuthz;
    int sc_relax;
    int sc_searchOptions;
    int sc_subentries;
    int sc_treeDelete;
    int sc_sessionTracking;
    int sc_valuesReturnFilter;
};

struct slap_keepalive {
    int sk_idle;
    int sk_probes;
    int sk_interval;
};

struct slap_limits_set {
    int lms_t_soft;
    int lms_t_hard;
    int lms_s_soft;
    int lms_s_hard;
    int lms_s_unchecked;
    int lms_s_pr;
    int lms_s_pr_hide;
    int lms_s_pr_total;
};

struct slap_sync_cookie_s {
    struct sync_cookie * stqh_first;
    struct sync_cookie * * stqh_last;
};

struct smatch_info {
    struct berval * dn;
    int match;
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

struct ucnumber {
    int numerator;
    int denominator;
};

typedef struct ADlist ADlist;
typedef int (*AVL_APPLY)(void *, void *);
typedef int (*AVL_CMP)(const void *, const void *);
typedef int (*AVL_DUP)(void *, void *);
typedef void (*AVL_FREE)(void *);
typedef struct Access Access;
typedef struct AccessControl AccessControl;
typedef struct AccessControlState AccessControlState;
typedef struct AclRegexMatches AclRegexMatches;
typedef struct AclSetCookie AclSetCookie;
typedef struct Attr_option Attr_option;
typedef struct Attribute Attribute;
typedef struct AttributeAssertion AttributeAssertion;
typedef struct AttributeDescription AttributeDescription;
typedef struct AttributeName AttributeName;
typedef struct AttributeType AttributeType;
typedef struct AuthorizationInformation AuthorizationInformation;
typedef struct avlnode Avlnode;
typedef void (*BER_MEMFREE_FN)(void *, void *);
typedef struct BackendDB BackendDB;
typedef struct BackendInfo BackendInfo;
typedef struct berelement BerElement;
typedef union lber_berelement_u BerElementBuffer;
typedef struct lber_memory_fns BerMemoryFunctions;
typedef struct berval BerValue;
typedef struct __anon_0x0000a26d CfBackInfo;
typedef struct CfEntryInfo CfEntryInfo;
typedef struct config_args_s ConfigArgs;
typedef int (*ConfigDriver)(struct config_args_s *);
typedef struct ConfigFile ConfigFile;
typedef struct ConfigOCs ConfigOCs;
typedef struct config_reply_s ConfigReply;
typedef struct ConfigTable ConfigTable;
typedef enum __anon_0x00009df0 ConfigType;
typedef struct Connection Connection;
typedef struct ContentRule ContentRule;
typedef double DFtype;
typedef struct __dirstream DIR;
typedef long long int DItype;
typedef struct Entry Entry;
typedef struct EntryHeader EntryHeader;
typedef struct Erec Erec;
typedef struct _IO_FILE FILE;
typedef struct Filter Filter;
typedef struct GroupAssertion GroupAssertion;
typedef long unsigned int ID;
typedef struct ldap LDAP;
typedef struct ldap_ava LDAPAVA;
typedef struct ldap_attributetype LDAPAttributeType;
typedef struct ldap_contentrule LDAPContentRule;
typedef struct ldapcontrol LDAPControl;
typedef struct ldap_matchingrule LDAPMatchingRule;
typedef struct ldap_matchingruleuse LDAPMatchingRuleUse;
typedef struct ldapmsg LDAPMessage;
typedef struct ldap_objectclass LDAPObjectClass;
typedef struct ldap_schema_extension_item LDAPSchemaExtensionItem;
typedef struct ldap_syntax LDAPSyntax;
typedef struct ldap_url_desc LDAPURLDesc;
typedef struct LDIFFP LDIFFP;
typedef int (*LUTIL_PASSWD_CHK_FUNC)(const struct berval *, const struct berval *, const struct berval *, const char * *);
typedef int (*LUTIL_PASSWD_HASH_FUNC)(const struct berval *, const struct berval *, struct berval *, const char * *);
typedef struct Listener Listener;
typedef int (*MainFunc)(int, char * *);
typedef struct MatchingRule MatchingRule;
typedef struct MatchingRuleAssertion MatchingRuleAssertion;
typedef struct MatchingRuleUse MatchingRuleUse;
typedef struct Modification Modification;
typedef struct Modifications Modifications;
typedef int (*OV_init)(void);
typedef struct ObjectClass ObjectClass;
typedef struct OidMacro OidMacro;
typedef struct __anon_0x0000a59d OidRec;
typedef struct OpExtra OpExtra;
typedef struct OpExtraDB OpExtraDB;
typedef struct OpExtraSync OpExtraSync;
typedef union OpRequest OpRequest;
typedef struct Operation Operation;
typedef struct OperationBuffer OperationBuffer;
typedef struct Opheader Opheader;
typedef struct slap_oinit_t OverlayInit;
typedef long unsigned int PagedResultsCookie;
typedef struct PagedResultsState PagedResultsState;
typedef int (*SLAP_CERT_MAP_FN)(void *, struct berval *);
typedef struct sasl_regexp SaslRegexp_t;
typedef struct ServerID ServerID;
typedef struct slap_set_cookie SetCookie;
typedef struct SlapReply SlapReply;
typedef union Sockaddr Sockaddr;
typedef struct sockbuf Sockbuf;
typedef struct sockbuf_io Sockbuf_IO;
typedef struct sockbuf_io_desc Sockbuf_IO_Desc;
typedef struct SubstringsAssertion SubstringsAssertion;
typedef struct SyncOperationBuffer SyncOperationBuffer;
typedef struct Syntax Syntax;
typedef struct Trec Trec;
typedef long long unsigned int UDItype;
typedef long long unsigned int UI64;
typedef unsigned int USItype;
typedef struct ValuesReturnFilter ValuesReturnFilter;
typedef struct __va_list __isoc_va_list;
typedef short unsigned int ac_uint2;
typedef long unsigned int ac_uint4;
typedef struct acl_set_gather_t acl_set_gather_t;
typedef int ber_int_t;
typedef long unsigned int ber_len_t;
typedef long int ber_slen_t;
typedef int ber_socket_t;
typedef long unsigned int ber_tag_t;
typedef unsigned int ber_uint_t;
typedef enum __anon_0x001aac79 bindwhen_t;
typedef long long int blkcnt_t;
typedef long int blksize_t;
typedef struct bvlist bvlist;
typedef char * caddr_t;
typedef unsigned char cc_t;
typedef long int clock_t;
typedef struct conn_readinfo conn_readinfo;
typedef struct cookie_state cookie_state;
typedef struct cookie_vals cookie_vals;
typedef struct delrec delrec;
typedef long long unsigned int dev_t;
typedef struct dninfo dninfo;
typedef struct entry_info_t entry_info_t;
typedef struct fbase_cookie fbase_cookie;
typedef struct __anon_0x0001ebbc fd_set;
typedef enum find_csn_t find_csn_t;
typedef struct fpres_cookie fpres_cookie;
typedef unsigned int gid_t;
typedef struct glue_Addrec glue_Addrec;
typedef struct glue_state glue_state;
typedef struct glueinfo glueinfo;
typedef struct gluenode gluenode;
typedef long long unsigned int ino_t;
typedef int ldap_int_thread_cond_t;
typedef int ldap_int_thread_mutex_t;
typedef int ldap_int_thread_pool_t;
typedef struct ldap_int_thread_rdwr_s * ldap_int_thread_rdwr_t;
typedef int ldap_int_thread_t;
typedef long long unsigned int ldap_pvt_mp_t;
typedef void (*ldap_pvt_thread_pool_keyfree_t)(void *, void *);
typedef void * (*ldap_pvt_thread_start_t)(void *, void *);
typedef struct logschema logschema;
typedef struct lutil_HASHContext lutil_HASH_CTX;
typedef struct lutil_MD5Context lutil_MD5_CTX;
typedef struct __anon_0x001ac858 lutil_SHA1_CTX;
typedef struct lutil_int_decnum lutil_int_decnum;
typedef struct __anon_0x0015c50c lutil_meter_display_t;
typedef struct __anon_0x0015c58f lutil_meter_estimator_t;
typedef struct __anon_0x0015c5f9 lutil_meter_t;
typedef void (*lutil_sig_t)(int);
typedef unsigned int mode_t;
typedef struct modify_ctxt modify_ctxt;
typedef struct modinst modinst;
typedef struct modtarget modtarget;
typedef unsigned int nlink_t;
typedef long long int off_t;
typedef struct opcookie opcookie;
typedef int pid_t;
typedef int ptrdiff_t;
typedef struct re_pattern_buffer regex_t;
typedef struct __anon_0x00092d1c regmatch_t;
typedef int regoff_t;
typedef struct relay_back_info relay_back_info;
typedef struct relay_callback relay_callback;
typedef struct rep_extended_s rep_extended_s;
typedef struct rep_sasl_s rep_sasl_s;
typedef struct rep_search_s rep_search_s;
typedef struct req_abandon_s req_abandon_s;
typedef struct req_add_s req_add_s;
typedef struct req_bind_s req_bind_s;
typedef struct req_compare_s req_compare_s;
typedef struct req_extended_s req_extended_s;
typedef struct req_modifications_s req_modifications_s;
typedef struct req_modify_s req_modify_s;
typedef struct req_modrdn_s req_modrdn_s;
typedef struct req_pwdexop_s req_pwdexop_s;
typedef struct req_search_s req_search_s;
typedef struct resinfo resinfo;
typedef struct resolve_ctxt resolve_ctxt;
typedef struct rewrite_mapper rewrite_mapper;
typedef int (*rewrite_mapper_apply)(void *, const char *, struct berval *);
typedef void * (*rewrite_mapper_config)(const char *, int, int, char * *);
typedef int (*rewrite_mapper_destroy)(void *);
typedef short unsigned int sa_family_t;
typedef struct searchstate searchstate;
typedef struct sessionlog sessionlog;
typedef struct setup_cookie setup_cookie;
typedef int sig_atomic_t;
typedef struct __anon_0x001abd60 siginfo_t;
typedef struct __sigset_t sigset_t;
typedef unsigned int size_t;
typedef enum slap_access_t slap_access_t;
typedef struct BeDB slap_be_head;
typedef struct BeI slap_bi_head;
typedef struct slap_bindconf slap_bindconf;
typedef struct slap_callback slap_callback;
typedef struct slap_cf_aux_table slap_cf_aux_table;
typedef enum slap_control_e slap_control_t;
typedef struct slap_counters_t slap_counters_t;
typedef struct slap_daemon_st slap_daemon_st;
typedef struct slap_dn_access slap_dn_access;
typedef struct slap_keepalive slap_keepalive;
typedef struct slap_list slap_list;
typedef long unsigned int slap_mask_t;
typedef int (*slap_mr_convert_func)(struct berval *, struct berval *, void *);
typedef struct slap_mrule_defs_rec slap_mrule_defs_rec;
typedef enum __anon_0x000298cd slap_op_t;
typedef enum slap_operation_e slap_operation_t;
typedef struct slap_overinfo slap_overinfo;
typedef struct slap_overinst slap_overinst;
typedef enum slap_reply_e slap_reply_t;
typedef struct slap_ssf_set slap_ssf_set_t;
typedef unsigned int slap_ssf_t;
typedef enum slap_style_e slap_style_t;
typedef struct slap_syntax_defs_rec slap_syntax_defs_rec;
typedef struct slap_verbmasks slap_verbmasks;
typedef struct slapd_map_data slapd_map_data;
typedef struct slog_entry slog_entry;
typedef struct smatch_info smatch_info;
typedef unsigned int socklen_t;
typedef unsigned int speed_t;
typedef int ssize_t;
typedef long long int suseconds_t;
typedef struct sync_control sync_control;
typedef struct syncinfo_s syncinfo_t;
typedef struct syncmatches syncmatches;
typedef struct syncops syncops;
typedef struct syncprov_info_t syncprov_info_t;
typedef struct syncres syncres;
typedef unsigned int tcflag_t;
typedef struct __anon_0x001b1fcc text_display_state_t;
typedef long long int time_t;
typedef struct tool_vars tool_vars;
typedef unsigned char u_char;
typedef unsigned int u_int;
typedef unsigned int uid_t;
typedef short unsigned int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned char uint8_t;
typedef struct __va_list va_list;
typedef struct voidList voidList;
struct slab_object {
    void * so_ptr;
    int so_blockhead;
    struct __anon_0x00120e9a so_link;
};

struct nonpresent_entry {
    struct berval * npe_name;
    struct berval * npe_nname;
    struct __anon_0x00137166 npe_link;
};

union __anon_0x001abc68 {
    struct __anon_0x001abc47 __addr_bnd;
    unsigned int si_pkey;
};

struct slab_heap {
    void * sh_base;
    void * sh_last;
    void * sh_end;
    int sh_stack;
    int sh_maxorder;
    unsigned char * * sh_map;
    struct sh_freelist * sh_free;
    struct sh_so sh_sopool;
};

struct req_compare_s {
    AttributeAssertion * rs_ava;
};

struct ADlist {
    struct ADlist * al_next;
    AttributeDescription * al_desc;
};

struct ConfigTable {
    const char * name;
    const char * what;
    int min_args;
    int max_args;
    int length;
    unsigned int arg_type;
    void * arg_item;
    const char * attribute;
    AttributeDescription * ad;
    void * notify;
};

struct __anon_0x0000a8fe {
    char * name;
    AttributeDescription * * desc;
};

struct ATList {
    struct AttributeType * stqh_first;
    struct AttributeType * * stqh_last;
};

struct __anon_0x00001e83 {
    struct AttributeType * stqe_next;
};

struct __anon_0x00007aa4 {
    struct AttributeType * stqe_next;
};

struct __anon_0x00018b2d {
    struct AttributeType * stqe_next;
};

struct __anon_0x000209e0 {
    struct AttributeType * stqe_next;
};

struct __anon_0x000284e0 {
    struct AttributeType * stqe_next;
};

struct __anon_0x0002f705 {
    struct AttributeType * stqe_next;
};

struct __anon_0x000339d5 {
    struct AttributeType * stqe_next;
};

struct __anon_0x00039c23 {
    struct AttributeType * stqe_next;
};

struct __anon_0x0003eece {
    struct AttributeType * stqe_next;
};

struct __anon_0x00043997 {
    struct AttributeType * stqe_next;
};

struct __anon_0x00048289 {
    struct AttributeType * stqe_next;
};

struct __anon_0x0004da51 {
    struct AttributeType * stqe_next;
};

struct __anon_0x00054c3a {
    struct AttributeType * stqe_next;
};

struct __anon_0x00058289 {
    struct AttributeType * stqe_next;
};

struct __anon_0x0005f1d2 {
    struct AttributeType * stqe_next;
};

struct __anon_0x00063075 {
    struct AttributeType * stqe_next;
};

struct __anon_0x00068f04 {
    struct AttributeType * stqe_next;
};

struct __anon_0x0006d7df {
    struct AttributeType * stqe_next;
};

struct __anon_0x0007304a {
    struct AttributeType * stqe_next;
};

struct __anon_0x00076df4 {
    struct AttributeType * stqe_next;
};

struct __anon_0x0007bc59 {
    struct AttributeType * stqe_next;
};

struct __anon_0x00080935 {
    struct AttributeType * stqe_next;
};

struct __anon_0x00084238 {
    struct AttributeType * stqe_next;
};

struct __anon_0x00088373 {
    struct AttributeType * stqe_next;
};

struct __anon_0x0008b9c0 {
    struct AttributeType * stqe_next;
};

struct __anon_0x0008f33d {
    struct AttributeType * stqe_next;
};

struct __anon_0x000949e2 {
    struct AttributeType * stqe_next;
};

struct __anon_0x0009c895 {
    struct AttributeType * stqe_next;
};

struct __anon_0x000a017e {
    struct AttributeType * stqe_next;
};

struct __anon_0x000abaaa {
    struct AttributeType * stqe_next;
};

struct __anon_0x000b0960 {
    struct AttributeType * stqe_next;
};

struct __anon_0x000b6e78 {
    struct AttributeType * stqe_next;
};

struct __anon_0x000bb5c8 {
    struct AttributeType * stqe_next;
};

struct __anon_0x000c0385 {
    struct AttributeType * stqe_next;
};

struct __anon_0x000c4551 {
    struct AttributeType * stqe_next;
};

struct __anon_0x000c99d8 {
    struct AttributeType * stqe_next;
};

struct __anon_0x000d77fc {
    struct AttributeType * stqe_next;
};

struct __anon_0x000dd52a {
    struct AttributeType * stqe_next;
};

struct __anon_0x000e1dc2 {
    struct AttributeType * stqe_next;
};

struct __anon_0x000e7cff {
    struct AttributeType * stqe_next;
};

struct __anon_0x000ed713 {
    struct AttributeType * stqe_next;
};

struct __anon_0x000f2687 {
    struct AttributeType * stqe_next;
};

struct __anon_0x000f71e7 {
    struct AttributeType * stqe_next;
};

struct __anon_0x000fcca7 {
    struct AttributeType * stqe_next;
};

struct __anon_0x001037d8 {
    struct AttributeType * stqe_next;
};

struct __anon_0x00107e17 {
    struct AttributeType * stqe_next;
};

struct __anon_0x0010c732 {
    struct AttributeType * stqe_next;
};

struct __anon_0x00110b78 {
    struct AttributeType * stqe_next;
};

struct __anon_0x00115943 {
    struct AttributeType * stqe_next;
};

struct __anon_0x0011a6d9 {
    struct AttributeType * stqe_next;
};

struct __anon_0x0011e20c {
    struct AttributeType * stqe_next;
};

struct __anon_0x00123d08 {
    struct AttributeType * stqe_next;
};

struct __anon_0x00128e29 {
    struct AttributeType * stqe_next;
};

struct __anon_0x0012cb3f {
    struct AttributeType * stqe_next;
};

struct __anon_0x00130bba {
    struct AttributeType * stqe_next;
};

struct __anon_0x001346bb {
    struct AttributeType * stqe_next;
};

struct __anon_0x00144a2a {
    struct AttributeType * stqe_next;
};

struct __anon_0x0014b083 {
    struct AttributeType * stqe_next;
};

struct __anon_0x00151375 {
    struct AttributeType * stqe_next;
};

struct __anon_0x001557a1 {
    struct AttributeType * stqe_next;
};

struct __anon_0x0015a1c7 {
    struct AttributeType * stqe_next;
};

struct __anon_0x0015e016 {
    struct AttributeType * stqe_next;
};

struct __anon_0x00162e3c {
    struct AttributeType * stqe_next;
};

struct __anon_0x00166c0a {
    struct AttributeType * stqe_next;
};

struct __anon_0x0016c8a2 {
    struct AttributeType * stqe_next;
};

struct __anon_0x0017031f {
    struct AttributeType * stqe_next;
};

struct __anon_0x00174778 {
    struct AttributeType * stqe_next;
};

struct __anon_0x001782c1 {
    struct AttributeType * stqe_next;
};

struct __anon_0x0017bf8b {
    struct AttributeType * stqe_next;
};

struct __anon_0x00180aee {
    struct AttributeType * stqe_next;
};

struct __anon_0x00184b7b {
    struct AttributeType * stqe_next;
};

struct __anon_0x0018d069 {
    struct AttributeType * stqe_next;
};

struct __anon_0x001912bc {
    struct AttributeType * stqe_next;
};

struct __anon_0x001956de {
    struct AttributeType * stqe_next;
};

struct rewrite_op {
    int lo_num_passes;
    int lo_depth;
    char * lo_result;
    Avlnode * lo_vars;
    const void * lo_cookie;
};

struct BeDB {
    struct BackendDB * stqh_first;
    struct BackendDB * * stqh_last;
};

struct __anon_0x00002730 {
    struct BackendDB * stqe_next;
};

struct __anon_0x000088b6 {
    struct BackendDB * stqe_next;
};

struct __anon_0x000194e8 {
    struct BackendDB * stqe_next;
};

struct __anon_0x000211f3 {
    struct BackendDB * stqe_next;
};

struct __anon_0x00028ca9 {
    struct BackendDB * stqe_next;
};

struct __anon_0x0002fece {
    struct BackendDB * stqe_next;
};

struct __anon_0x0003473b {
    struct BackendDB * stqe_next;
};

struct __anon_0x0003a93b {
    struct BackendDB * stqe_next;
};

struct __anon_0x0003fbf5 {
    struct BackendDB * stqe_next;
};

struct __anon_0x00044153 {
    struct BackendDB * stqe_next;
};

struct __anon_0x00048aa5 {
    struct BackendDB * stqe_next;
};

struct __anon_0x0004e823 {
    struct BackendDB * stqe_next;
};

struct __anon_0x000553f6 {
    struct BackendDB * stqe_next;
};

struct __anon_0x00058f94 {
    struct BackendDB * stqe_next;
};

struct __anon_0x0005f98e {
    struct BackendDB * stqe_next;
};

struct __anon_0x00063d80 {
    struct BackendDB * stqe_next;
};

struct __anon_0x00069c1c {
    struct BackendDB * stqe_next;
};

struct __anon_0x0006e4f7 {
    struct BackendDB * stqe_next;
};

struct __anon_0x00073813 {
    struct BackendDB * stqe_next;
};

struct __anon_0x000775bd {
    struct BackendDB * stqe_next;
};

struct __anon_0x0007c415 {
    struct BackendDB * stqe_next;
};

struct __anon_0x000810f1 {
    struct BackendDB * stqe_next;
};

struct __anon_0x00084a01 {
    struct BackendDB * stqe_next;
};

struct __anon_0x00088b3c {
    struct BackendDB * stqe_next;
};

struct __anon_0x0008c1d1 {
    struct BackendDB * stqe_next;
};

struct __anon_0x00090048 {
    struct BackendDB * stqe_next;
};

struct __anon_0x000957a8 {
    struct BackendDB * stqe_next;
};

struct __anon_0x0009d051 {
    struct BackendDB * stqe_next;
};

struct __anon_0x000a0e96 {
    struct BackendDB * stqe_next;
};

struct __anon_0x000ac273 {
    struct BackendDB * stqe_next;
};

struct __anon_0x000b16c6 {
    struct BackendDB * stqe_next;
};

struct __anon_0x000b7b90 {
    struct BackendDB * stqe_next;
};

struct __anon_0x000bc2d3 {
    struct BackendDB * stqe_next;
};

struct __anon_0x000c109d {
    struct BackendDB * stqe_next;
};

struct __anon_0x000c5278 {
    struct BackendDB * stqe_next;
};

struct __anon_0x000ca6e3 {
    struct BackendDB * stqe_next;
};

struct __anon_0x000d8507 {
    struct BackendDB * stqe_next;
};

struct __anon_0x000ddd02 {
    struct BackendDB * stqe_next;
};

struct __anon_0x000e2acd {
    struct BackendDB * stqe_next;
};

struct __anon_0x000e8a17 {
    struct BackendDB * stqe_next;
};

struct __anon_0x000ee41e {
    struct BackendDB * stqe_next;
};

struct __anon_0x000f3392 {
    struct BackendDB * stqe_next;
};

struct __anon_0x000f7ef2 {
    struct BackendDB * stqe_next;
};

struct __anon_0x000fd9b2 {
    struct BackendDB * stqe_next;
};

struct __anon_0x00103f94 {
    struct BackendDB * stqe_next;
};

struct __anon_0x001085d3 {
    struct BackendDB * stqe_next;
};

struct __anon_0x0010d43d {
    struct BackendDB * stqe_next;
};

struct __anon_0x001119f3 {
    struct BackendDB * stqe_next;
};

struct __anon_0x0011664e {
    struct BackendDB * stqe_next;
};

struct __anon_0x0011ae95 {
    struct BackendDB * stqe_next;
};

struct __anon_0x0011ef17 {
    struct BackendDB * stqe_next;
};

struct __anon_0x001244d1 {
    struct BackendDB * stqe_next;
};

struct __anon_0x00129b41 {
    struct BackendDB * stqe_next;
};

struct __anon_0x0012d356 {
    struct BackendDB * stqe_next;
};

struct __anon_0x001313c0 {
    struct BackendDB * stqe_next;
};

struct __anon_0x001355ee {
    struct BackendDB * stqe_next;
};

struct __anon_0x001451f8 {
    struct BackendDB * stqe_next;
};

struct __anon_0x0014b897 {
    struct BackendDB * stqe_next;
};

struct __anon_0x00152080 {
    struct BackendDB * stqe_next;
};

struct __anon_0x00156565 {
    struct BackendDB * stqe_next;
};

struct __anon_0x0015a990 {
    struct BackendDB * stqe_next;
};

struct __anon_0x0015ed78 {
    struct BackendDB * stqe_next;
};

struct __anon_0x001635f8 {
    struct BackendDB * stqe_next;
};

struct __anon_0x00167979 {
    struct BackendDB * stqe_next;
};

struct __anon_0x0016d05e {
    struct BackendDB * stqe_next;
};

struct __anon_0x00170adb {
    struct BackendDB * stqe_next;
};

struct __anon_0x00174f34 {
    struct BackendDB * stqe_next;
};

struct __anon_0x00178a7d {
    struct BackendDB * stqe_next;
};

struct __anon_0x0017cced {
    struct BackendDB * stqe_next;
};

struct __anon_0x001812aa {
    struct BackendDB * stqe_next;
};

struct __anon_0x00185886 {
    struct BackendDB * stqe_next;
};

struct __anon_0x0018d832 {
    struct BackendDB * stqe_next;
};

struct __anon_0x00191a78 {
    struct BackendDB * stqe_next;
};

struct __anon_0x001964a9 {
    struct BackendDB * stqe_next;
};

typedef int (*BI_tool_entry_close)(BackendDB *);
typedef int (*BI_tool_entry_open)(BackendDB *, int);
typedef int (*BI_tool_sync)(BackendDB *);
typedef BackendDB Backend;
struct BeI {
    struct BackendInfo * stqh_first;
    struct BackendInfo * * stqh_last;
};

struct __anon_0x000030a4 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000092b8 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00019ee1 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00021b67 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0002961d {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00030842 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000350af {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0003b2af {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00040569 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00044ac7 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00049419 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0004f21c {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00055d6a {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0005990d {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00060302 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000646f4 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0006a590 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0006ee6b {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00074187 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00077f31 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0007cd89 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00081a65 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00085375 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000894b0 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0008cb45 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000909bc {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0009611c {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0009d9c5 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000a180a {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000acbe7 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000b203a {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000b8504 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000bcc47 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000c1a11 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000c5bec {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000cb057 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000d8e7b {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000de6fb {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000e3441 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000e938b {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000eed92 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000f3d06 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000f8866 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x000fe326 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0010498d {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00108f47 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0010ddb1 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00112367 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00116fc2 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0011b809 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0011f88b {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00124e45 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0012a4b5 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0012dcca {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00131d34 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x001362c5 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00145bf3 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0014c291 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x001529f4 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00156ed9 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0015b304 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0015f6ec {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00163f6c {
    struct BackendInfo * stqe_next;
};

struct __anon_0x001682ed {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0016d9d2 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0017144f {
    struct BackendInfo * stqe_next;
};

struct __anon_0x001758a8 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x001793f1 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0017d661 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00181c1e {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00186280 {
    struct BackendInfo * stqe_next;
};

struct __anon_0x0018e22b {
    struct BackendInfo * stqe_next;
};

struct __anon_0x001923ec {
    struct BackendInfo * stqe_next;
};

struct __anon_0x00196eaa {
    struct BackendInfo * stqe_next;
};

typedef int (*BI_bi_func)(BackendInfo *);
typedef int (*BI_config)(BackendInfo *, const char *, int, int, char * *);
typedef BerValue * BerVarray;
typedef int (*BI_conn_func)(BackendDB *, Connection *);
struct CRList {
    struct ContentRule * stqh_first;
    struct ContentRule * * stqh_last;
};

struct __anon_0x00007b38 {
    struct ContentRule * stqe_next;
};

struct __anon_0x0003ef5e {
    struct ContentRule * stqe_next;
};

struct __anon_0x000c45e1 {
    struct ContentRule * stqe_next;
};

struct __anon_0x000dd5ba {
    struct ContentRule * stqe_next;
};

struct CfEntryInfo {
    struct CfEntryInfo * ce_parent;
    struct CfEntryInfo * ce_sibs;
    struct CfEntryInfo * ce_kids;
    Entry * ce_entry;
    ConfigType ce_type;
    BackendInfo * ce_bi;
    BackendDB * ce_be;
    void * ce_private;
};

struct Erec {
    Entry * e;
    long unsigned int lineno;
    long unsigned int nextline;
};

struct Trec {
    Entry * e;
    long unsigned int lineno;
    long unsigned int nextline;
    int rc;
    int ready;
};

struct setup_cookie {
    CfBackInfo * cfb;
    ConfigArgs * ca;
    Entry * frontend;
    Entry * config;
    int got_frontend;
    int got_config;
};

typedef int (*ConfigLDAPadd)(CfEntryInfo *, Entry *, struct config_args_s *);
typedef int (*SLAP_ENTRY_INFO_FN)(void *, Entry *);
struct __anon_0x001b1fcc {
    int buffer_length;
    char * buffer;
    int need_eol;
    int phase;
    FILE * output;
};

struct ldif_tool {
    Entry * * entries;
    ID elen;
    ID ecount;
    ID ecurrent;
    struct berval * tl_base;
    int tl_scope;
    Filter * tl_filter;
};

typedef ID (*BI_tool_dn2id_get)(BackendDB *, struct berval *);
typedef ID (*BI_tool_entry_first)(BackendDB *);
typedef ID (*BI_tool_entry_first_x)(BackendDB *, struct berval *, int, Filter *);
typedef Entry * (*BI_tool_entry_get)(BackendDB *, ID);
typedef ID (*BI_tool_entry_modify)(BackendDB *, Entry *, struct berval *);
typedef ID (*BI_tool_entry_next)(BackendDB *);
typedef ID (*BI_tool_entry_put)(BackendDB *, Entry *, struct berval *);
typedef int (*BI_tool_entry_reindex)(BackendDB *, ID, AttributeDescription * *);
typedef LDAPAVA * * LDAPRDN;
struct ldap_attributetype {
    char * at_oid;
    char * * at_names;
    char * at_desc;
    int at_obsolete;
    char * at_sup_oid;
    char * at_equality_oid;
    char * at_ordering_oid;
    char * at_substr_oid;
    char * at_syntax_oid;
    int at_syntax_len;
    int at_single_value;
    int at_collective;
    int at_no_user_mod;
    int at_usage;
    LDAPSchemaExtensionItem * * at_extensions;
};

struct ldap_contentrule {
    char * cr_oid;
    char * * cr_names;
    char * cr_desc;
    char * * cr_sup_oids;
    int cr_obsolete;
    char * * cr_oc_oids_aux;
    char * * cr_at_oids_must;
    char * * cr_at_oids_may;
    char * * cr_at_oids_not;
    LDAPSchemaExtensionItem * * cr_extensions;
};

struct ldap_matchingrule {
    char * mr_oid;
    char * * mr_names;
    char * mr_desc;
    int mr_obsolete;
    char * mr_syntax_oid;
    LDAPSchemaExtensionItem * * mr_extensions;
};

struct ldap_matchingruleuse {
    char * mru_oid;
    char * * mru_names;
    char * mru_desc;
    int mru_obsolete;
    char * * mru_applies_oids;
    LDAPSchemaExtensionItem * * mru_extensions;
};

struct ldap_objectclass {
    char * oc_oid;
    char * * oc_names;
    char * oc_desc;
    int oc_obsolete;
    char * * oc_sup_oids;
    int oc_kind;
    char * * oc_at_oids_must;
    char * * oc_at_oids_may;
    LDAPSchemaExtensionItem * * oc_extensions;
};

struct ldap_syntax {
    char * syn_oid;
    char * * syn_names;
    char * syn_desc;
    LDAPSchemaExtensionItem * * syn_extensions;
};

struct LDIFFP {
    FILE * fp;
    struct LDIFFP * prev;
};

struct __anon_0x0000389d {
    char * name;
    MainFunc * func;
};

struct MRList {
    struct MatchingRule * slh_first;
};

struct __anon_0x00001de4 {
    struct MatchingRule * sle_next;
};

struct __anon_0x00007a01 {
    struct MatchingRule * sle_next;
};

struct __anon_0x00018a8e {
    struct MatchingRule * sle_next;
};

struct __anon_0x00020941 {
    struct MatchingRule * sle_next;
};

struct __anon_0x00028446 {
    struct MatchingRule * sle_next;
};

struct __anon_0x0002f66b {
    struct MatchingRule * sle_next;
};

struct __anon_0x00033936 {
    struct MatchingRule * sle_next;
};

struct __anon_0x00039b89 {
    struct MatchingRule * sle_next;
};

struct __anon_0x0003ee2f {
    struct MatchingRule * sle_next;
};

struct __anon_0x000438f8 {
    struct MatchingRule * sle_next;
};

struct __anon_0x000481ea {
    struct MatchingRule * sle_next;
};

struct __anon_0x0004d9b2 {
    struct MatchingRule * sle_next;
};

struct __anon_0x00054b9b {
    struct MatchingRule * sle_next;
};

struct __anon_0x000581ea {
    struct MatchingRule * sle_next;
};

struct __anon_0x0005f133 {
    struct MatchingRule * sle_next;
};

struct __anon_0x00062fd6 {
    struct MatchingRule * sle_next;
};

struct __anon_0x00068e65 {
    struct MatchingRule * sle_next;
};

struct __anon_0x0006d740 {
    struct MatchingRule * sle_next;
};

struct __anon_0x00072fab {
    struct MatchingRule * sle_next;
};

struct __anon_0x00076d55 {
    struct MatchingRule * sle_next;
};

struct __anon_0x0007bbba {
    struct MatchingRule * sle_next;
};

struct __anon_0x00080896 {
    struct MatchingRule * sle_next;
};

struct __anon_0x00084199 {
    struct MatchingRule * sle_next;
};

struct __anon_0x000882d4 {
    struct MatchingRule * sle_next;
};

struct __anon_0x0008b921 {
    struct MatchingRule * sle_next;
};

struct __anon_0x0008f29e {
    struct MatchingRule * sle_next;
};

struct __anon_0x00094943 {
    struct MatchingRule * sle_next;
};

struct __anon_0x0009c7f6 {
    struct MatchingRule * sle_next;
};

struct __anon_0x000a00df {
    struct MatchingRule * sle_next;
};

struct __anon_0x000aba0b {
    struct MatchingRule * sle_next;
};

struct __anon_0x000b08c1 {
    struct MatchingRule * sle_next;
};

struct __anon_0x000b6dd9 {
    struct MatchingRule * sle_next;
};

struct __anon_0x000bb529 {
    struct MatchingRule * sle_next;
};

struct __anon_0x000c02e6 {
    struct MatchingRule * sle_next;
};

struct __anon_0x000c44b2 {
    struct MatchingRule * sle_next;
};

struct __anon_0x000c989f {
    struct MatchingRule * sle_next;
};

struct __anon_0x000d775d {
    struct MatchingRule * sle_next;
};

struct __anon_0x000dd48b {
    struct MatchingRule * sle_next;
};

struct __anon_0x000e1d23 {
    struct MatchingRule * sle_next;
};

struct __anon_0x000e7c60 {
    struct MatchingRule * sle_next;
};

struct __anon_0x000ed5da {
    struct MatchingRule * sle_next;
};

struct __anon_0x000f25e8 {
    struct MatchingRule * sle_next;
};

struct __anon_0x000f7148 {
    struct MatchingRule * sle_next;
};

struct __anon_0x000fcc08 {
    struct MatchingRule * sle_next;
};

struct __anon_0x00103739 {
    struct MatchingRule * sle_next;
};

struct __anon_0x00107d78 {
    struct MatchingRule * sle_next;
};

struct __anon_0x0010c693 {
    struct MatchingRule * sle_next;
};

struct __anon_0x00110ad9 {
    struct MatchingRule * sle_next;
};

struct __anon_0x001158a4 {
    struct MatchingRule * sle_next;
};

struct __anon_0x0011a63a {
    struct MatchingRule * sle_next;
};

struct __anon_0x0011e16d {
    struct MatchingRule * sle_next;
};

struct __anon_0x00123c69 {
    struct MatchingRule * sle_next;
};

struct __anon_0x00128d8a {
    struct MatchingRule * sle_next;
};

struct __anon_0x0012caa0 {
    struct MatchingRule * sle_next;
};

struct __anon_0x00130b1b {
    struct MatchingRule * sle_next;
};

struct __anon_0x00134621 {
    struct MatchingRule * sle_next;
};

struct __anon_0x0014498b {
    struct MatchingRule * sle_next;
};

struct __anon_0x0014afe4 {
    struct MatchingRule * sle_next;
};

struct __anon_0x001512db {
    struct MatchingRule * sle_next;
};

struct __anon_0x00155707 {
    struct MatchingRule * sle_next;
};

struct __anon_0x0015a128 {
    struct MatchingRule * sle_next;
};

struct __anon_0x0015df7c {
    struct MatchingRule * sle_next;
};

struct __anon_0x00162d9d {
    struct MatchingRule * sle_next;
};

struct __anon_0x00166b6b {
    struct MatchingRule * sle_next;
};

struct __anon_0x0016c808 {
    struct MatchingRule * sle_next;
};

struct __anon_0x00170280 {
    struct MatchingRule * sle_next;
};

struct __anon_0x001746de {
    struct MatchingRule * sle_next;
};

struct __anon_0x00178227 {
    struct MatchingRule * sle_next;
};

struct __anon_0x0017bef1 {
    struct MatchingRule * sle_next;
};

struct __anon_0x00180a4f {
    struct MatchingRule * sle_next;
};

struct __anon_0x00184adc {
    struct MatchingRule * sle_next;
};

struct __anon_0x0018cfca {
    struct MatchingRule * sle_next;
};

struct __anon_0x00191218 {
    struct MatchingRule * sle_next;
};

struct __anon_0x00195644 {
    struct MatchingRule * sle_next;
};

struct MRUList {
    struct MatchingRuleUse * slh_first;
};

struct __anon_0x00001e1e {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00007a3d {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00018ac8 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0002097b {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00028480 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0002f6a5 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00033970 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00039bc3 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0003ee69 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00043932 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00048224 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0004d9ec {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00054bd5 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00058224 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0005f16d {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00063010 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00068e9f {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0006d77a {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00072fe5 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00076d8f {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0007bbf4 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x000808d0 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x000841d3 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0008830e {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0008b95b {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0008f2d8 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0009497d {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0009c830 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x000a0119 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x000aba45 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x000b08fb {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x000b6e13 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x000bb563 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x000c0320 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x000c44ec {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x000c98d9 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x000d7797 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x000dd4c5 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x000e1d5d {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x000e7c9a {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x000ed614 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x000f2622 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x000f7182 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x000fcc42 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00103773 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00107db2 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0010c6cd {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00110b13 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x001158de {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0011a674 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0011e1a7 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00123ca3 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00128dc4 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0012cada {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00130b55 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0013465b {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x001449c5 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0014b01e {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00151315 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00155741 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0015a162 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0015dfb6 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00162dd7 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00166ba5 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0016c842 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x001702ba {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00174718 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00178261 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0017bf2b {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00180a89 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00184b16 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0018d004 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x00191252 {
    struct MatchingRuleUse * sle_next;
};

struct __anon_0x0019567e {
    struct MatchingRuleUse * sle_next;
};

struct modify_ctxt {
    Modifications * mx_orig;
    Modifications * mx_free;
};

struct req_add_s {
    Modifications * rs_modlist;
    Entry * rs_e;
};

struct req_modifications_s {
    Modifications * rs_modlist;
    char rs_no_opattrs;
};

struct slap_oinit_t {
    const char * ov_type;
    OV_init * ov_init;
};

struct OCList {
    struct ObjectClass * stqh_first;
    struct ObjectClass * * stqh_last;
};

struct OCUList {
    struct ObjectClass * stqh_first;
    struct ObjectClass * * stqh_last;
};

struct __anon_0x00001eed {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00007b10 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00018b97 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00020a4a {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0002854a {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0002f76f {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00033a3f {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00039c8d {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0003ef38 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00043a01 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000482f3 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0004dabb {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00054ca4 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000582f3 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0005f23c {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000630df {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00068f6e {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0006d849 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000730b4 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00076e5e {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0007bcc3 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0008099f {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000842a2 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000883dd {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0008ba2a {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0008f3a7 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00094a4c {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0009c8ff {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000a01e8 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000abb14 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000b09ca {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000b6ee2 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000bb632 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000c03ef {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000c45bb {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000c9a42 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000d7866 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000dd594 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000e1e2c {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000e7d69 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000ed77d {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000f26f1 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000f7251 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x000fcd11 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00103842 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00107e81 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0010c79c {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00110be2 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x001159ad {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0011a743 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0011e276 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00123d72 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00128e93 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0012cba9 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00130c24 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00134725 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00144a94 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0014b0ed {
    struct ObjectClass * stqe_next;
};

struct __anon_0x001513df {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0015580b {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0015a231 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0015e080 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00162ea6 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00166c74 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0016c90c {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00170389 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x001747e2 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0017832b {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0017bff5 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00180b58 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00184be5 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x0018d0d3 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00191326 {
    struct ObjectClass * stqe_next;
};

struct __anon_0x00195748 {
    struct ObjectClass * stqe_next;
};

struct OidMacroList {
    struct OidMacro * stqh_first;
    struct OidMacro * * stqh_last;
};

struct __anon_0x0000784d {
    struct OidMacro * stqe_next;
};

struct __anon_0x00103589 {
    struct OidMacro * stqe_next;
};

struct __anon_0x00003538 {
    struct OpExtra * sle_next;
};

struct __anon_0x0000990d {
    struct OpExtra * sle_next;
};

struct __anon_0x0001a375 {
    struct OpExtra * sle_next;
};

struct __anon_0x00021ffb {
    struct OpExtra * sle_next;
};

struct __anon_0x00029b10 {
    struct OpExtra * sle_next;
};

struct __anon_0x00030de1 {
    struct OpExtra * sle_next;
};

struct __anon_0x00035543 {
    struct OpExtra * sle_next;
};

struct __anon_0x0003b743 {
    struct OpExtra * sle_next;
};

struct __anon_0x000409fd {
    struct OpExtra * sle_next;
};

struct __anon_0x00044f5b {
    struct OpExtra * sle_next;
};

struct __anon_0x000498ad {
    struct OpExtra * sle_next;
};

struct __anon_0x0004f755 {
    struct OpExtra * sle_next;
};

struct __anon_0x000561fe {
    struct OpExtra * sle_next;
};

struct __anon_0x00059f51 {
    struct OpExtra * sle_next;
};

struct __anon_0x00060900 {
    struct OpExtra * sle_next;
};

struct __anon_0x00064b88 {
    struct OpExtra * sle_next;
};

struct __anon_0x0006ab2f {
    struct OpExtra * sle_next;
};

struct __anon_0x0006f40a {
    struct OpExtra * sle_next;
};

struct __anon_0x00074726 {
    struct OpExtra * sle_next;
};

struct __anon_0x000784d0 {
    struct OpExtra * sle_next;
};

struct __anon_0x0007d21d {
    struct OpExtra * sle_next;
};

struct __anon_0x00081ef9 {
    struct OpExtra * sle_next;
};

struct __anon_0x00085914 {
    struct OpExtra * sle_next;
};

struct __anon_0x00089944 {
    struct OpExtra * sle_next;
};

struct __anon_0x0008cfd9 {
    struct OpExtra * sle_next;
};

struct __anon_0x00090e50 {
    struct OpExtra * sle_next;
};

struct __anon_0x000966bb {
    struct OpExtra * sle_next;
};

struct __anon_0x0009de59 {
    struct OpExtra * sle_next;
};

struct __anon_0x000a1c9e {
    struct OpExtra * sle_next;
};

struct __anon_0x000ad07b {
    struct OpExtra * sle_next;
};

struct __anon_0x000b25d9 {
    struct OpExtra * sle_next;
};

struct __anon_0x000b8aa3 {
    struct OpExtra * sle_next;
};

struct __anon_0x000bd0db {
    struct OpExtra * sle_next;
};

struct __anon_0x000c1ea5 {
    struct OpExtra * sle_next;
};

struct __anon_0x000c6080 {
    struct OpExtra * sle_next;
};

struct __anon_0x000cb4eb {
    struct OpExtra * sle_next;
};

struct __anon_0x000d930f {
    struct OpExtra * sle_next;
};

struct __anon_0x000deb8f {
    struct OpExtra * sle_next;
};

struct __anon_0x000e38d5 {
    struct OpExtra * sle_next;
};

struct __anon_0x000e981f {
    struct OpExtra * sle_next;
};

struct __anon_0x000ef226 {
    struct OpExtra * sle_next;
};

struct __anon_0x000f419a {
    struct OpExtra * sle_next;
};

struct __anon_0x000f8cfa {
    struct OpExtra * sle_next;
};

struct __anon_0x000fe7ba {
    struct OpExtra * sle_next;
};

struct __anon_0x00104e21 {
    struct OpExtra * sle_next;
};

struct __anon_0x001093db {
    struct OpExtra * sle_next;
};

struct __anon_0x0010e245 {
    struct OpExtra * sle_next;
};

struct __anon_0x001127fb {
    struct OpExtra * sle_next;
};

struct __anon_0x00117456 {
    struct OpExtra * sle_next;
};

struct __anon_0x0011bc9d {
    struct OpExtra * sle_next;
};

struct __anon_0x0011fd1f {
    struct OpExtra * sle_next;
};

struct __anon_0x001253e4 {
    struct OpExtra * sle_next;
};

struct __anon_0x0012a949 {
    struct OpExtra * sle_next;
};

struct __anon_0x0012e269 {
    struct OpExtra * sle_next;
};

struct __anon_0x001321c8 {
    struct OpExtra * sle_next;
};

struct __anon_0x00136909 {
    struct OpExtra * sle_next;
};

struct __anon_0x001462bd {
    struct OpExtra * sle_next;
};

struct __anon_0x0014c851 {
    struct OpExtra * sle_next;
};

struct __anon_0x00152e88 {
    struct OpExtra * sle_next;
};

struct __anon_0x0015736d {
    struct OpExtra * sle_next;
};

struct __anon_0x0015b798 {
    struct OpExtra * sle_next;
};

struct __anon_0x0015fb80 {
    struct OpExtra * sle_next;
};

struct __anon_0x00164400 {
    struct OpExtra * sle_next;
};

struct __anon_0x00168781 {
    struct OpExtra * sle_next;
};

struct __anon_0x0016de66 {
    struct OpExtra * sle_next;
};

struct __anon_0x001718e3 {
    struct OpExtra * sle_next;
};

struct __anon_0x00175d3c {
    struct OpExtra * sle_next;
};

struct __anon_0x00179885 {
    struct OpExtra * sle_next;
};

struct __anon_0x0017daf5 {
    struct OpExtra * sle_next;
};

struct __anon_0x001820b2 {
    struct OpExtra * sle_next;
};

struct __anon_0x0018681f {
    struct OpExtra * sle_next;
};

struct __anon_0x0018e72b {
    struct OpExtra * sle_next;
};

struct __anon_0x001928ec {
    struct OpExtra * sle_next;
};

struct __anon_0x001974f1 {
    struct OpExtra * sle_next;
};

struct o_e {
    struct OpExtra * slh_first;
};

struct __anon_0x0000359a {
    struct Operation * stqe_next;
};

struct __anon_0x00009972 {
    struct Operation * stqe_next;
};

struct __anon_0x0001a3d7 {
    struct Operation * stqe_next;
};

struct __anon_0x0002205d {
    struct Operation * stqe_next;
};

struct __anon_0x00029b72 {
    struct Operation * stqe_next;
};

struct __anon_0x00030e43 {
    struct Operation * stqe_next;
};

struct __anon_0x000355a5 {
    struct Operation * stqe_next;
};

struct __anon_0x0003b7e9 {
    struct Operation * stqe_next;
};

struct __anon_0x00040a5f {
    struct Operation * stqe_next;
};

struct __anon_0x00044fbd {
    struct Operation * stqe_next;
};

struct __anon_0x0004990f {
    struct Operation * stqe_next;
};

struct __anon_0x0004f7fc {
    struct Operation * stqe_next;
};

struct __anon_0x00056260 {
    struct Operation * stqe_next;
};

struct __anon_0x00059fb3 {
    struct Operation * stqe_next;
};

struct __anon_0x00060962 {
    struct Operation * stqe_next;
};

struct __anon_0x00064bea {
    struct Operation * stqe_next;
};

struct __anon_0x0006ab91 {
    struct Operation * stqe_next;
};

struct __anon_0x0006f46c {
    struct Operation * stqe_next;
};

struct __anon_0x00074788 {
    struct Operation * stqe_next;
};

struct __anon_0x00078532 {
    struct Operation * stqe_next;
};

struct __anon_0x0007d27f {
    struct Operation * stqe_next;
};

struct __anon_0x00081f5b {
    struct Operation * stqe_next;
};

struct __anon_0x00085976 {
    struct Operation * stqe_next;
};

struct __anon_0x000899a6 {
    struct Operation * stqe_next;
};

struct __anon_0x0008d03b {
    struct Operation * stqe_next;
};

struct __anon_0x00090eb2 {
    struct Operation * stqe_next;
};

struct __anon_0x0009671d {
    struct Operation * stqe_next;
};

struct __anon_0x0009debb {
    struct Operation * stqe_next;
};

struct __anon_0x000a1d00 {
    struct Operation * stqe_next;
};

struct __anon_0x000ad0dd {
    struct Operation * stqe_next;
};

struct __anon_0x000b263b {
    struct Operation * stqe_next;
};

struct __anon_0x000b8b05 {
    struct Operation * stqe_next;
};

struct __anon_0x000bd13d {
    struct Operation * stqe_next;
};

struct __anon_0x000c1f07 {
    struct Operation * stqe_next;
};

struct __anon_0x000c60e2 {
    struct Operation * stqe_next;
};

struct __anon_0x000cb54d {
    struct Operation * stqe_next;
};

struct __anon_0x000d9371 {
    struct Operation * stqe_next;
};

struct __anon_0x000debf1 {
    struct Operation * stqe_next;
};

struct __anon_0x000e3937 {
    struct Operation * stqe_next;
};

struct __anon_0x000e9881 {
    struct Operation * stqe_next;
};

struct __anon_0x000ef288 {
    struct Operation * stqe_next;
};

struct __anon_0x000f41fc {
    struct Operation * stqe_next;
};

struct __anon_0x000f8d5c {
    struct Operation * stqe_next;
};

struct __anon_0x000fe81c {
    struct Operation * stqe_next;
};

struct __anon_0x00104e83 {
    struct Operation * stqe_next;
};

struct __anon_0x0010943d {
    struct Operation * stqe_next;
};

struct __anon_0x0010e2a7 {
    struct Operation * stqe_next;
};

struct __anon_0x0011285d {
    struct Operation * stqe_next;
};

struct __anon_0x001174b8 {
    struct Operation * stqe_next;
};

struct __anon_0x0011bcff {
    struct Operation * stqe_next;
};

struct __anon_0x0011fd81 {
    struct Operation * stqe_next;
};

struct __anon_0x00125446 {
    struct Operation * stqe_next;
};

struct __anon_0x0012a9ab {
    struct Operation * stqe_next;
};

struct __anon_0x0012e2cb {
    struct Operation * stqe_next;
};

struct __anon_0x0013222a {
    struct Operation * stqe_next;
};

struct __anon_0x00136978 {
    struct Operation * stqe_next;
};

struct __anon_0x0014631f {
    struct Operation * stqe_next;
};

struct __anon_0x0014c8b3 {
    struct Operation * stqe_next;
};

struct __anon_0x00152eea {
    struct Operation * stqe_next;
};

struct __anon_0x001573cf {
    struct Operation * stqe_next;
};

struct __anon_0x0015b7fa {
    struct Operation * stqe_next;
};

struct __anon_0x0015fbe2 {
    struct Operation * stqe_next;
};

struct __anon_0x00164462 {
    struct Operation * stqe_next;
};

struct __anon_0x001687e3 {
    struct Operation * stqe_next;
};

struct __anon_0x0016dec8 {
    struct Operation * stqe_next;
};

struct __anon_0x00171945 {
    struct Operation * stqe_next;
};

struct __anon_0x00175d9e {
    struct Operation * stqe_next;
};

struct __anon_0x001798e7 {
    struct Operation * stqe_next;
};

struct __anon_0x0017db57 {
    struct Operation * stqe_next;
};

struct __anon_0x00182114 {
    struct Operation * stqe_next;
};

struct __anon_0x00186881 {
    struct Operation * stqe_next;
};

struct __anon_0x0018e78d {
    struct Operation * stqe_next;
};

struct __anon_0x00192992 {
    struct Operation * stqe_next;
};

struct __anon_0x00197560 {
    struct Operation * stqe_next;
};

struct c_o {
    struct Operation * stqh_first;
    struct Operation * * stqh_last;
};

struct c_po {
    struct Operation * stqh_first;
    struct Operation * * stqh_last;
};

struct slap_set_cookie {
    Operation * set_op;
};

typedef int (*BI_acl_group)(Operation *, Entry *, struct berval *, struct berval *, ObjectClass *, AttributeDescription *);
typedef int (*BI_entry_get_rw)(Operation *, struct berval *, ObjectClass *, AttributeDescription *, int, Entry * *);
typedef int (*BI_entry_release_rw)(Operation *, Entry *, int);
typedef int (*BI_has_subordinates)(Operation *, Entry *, int *);
typedef void (*slap_writewait)(Operation *, struct slap_callback *);
typedef int (*BI_op_func)(Operation *, SlapReply *);
typedef int (*BI_operational)(Operation *, SlapReply *);
typedef int (*ConfigCfAdd)(Operation *, SlapReply *, Entry *, struct config_args_s *);
typedef void (*SEND_LDAP_EXTENDED)(Operation *, SlapReply *);
typedef void (*SEND_LDAP_INTERMEDIATE)(Operation *, SlapReply *);
typedef void (*SEND_LDAP_RESULT)(Operation *, SlapReply *);
typedef int (*SEND_SEARCH_ENTRY)(Operation *, SlapReply *);
typedef int (*SEND_SEARCH_REFERENCE)(Operation *, SlapReply *);
typedef int (*SLAP_CTRL_PARSE_FN)(Operation *, SlapReply *, LDAPControl *);
typedef int (*SLAP_EXTOP_MAIN_FN)(Operation *, SlapReply *);
typedef int (*slap_response)(Operation *, SlapReply *);
struct sockbuf_io_desc {
    int sbiod_level;
    Sockbuf * sbiod_sb;
    Sockbuf_IO * sbiod_io;
    void * sbiod_pvt;
    struct sockbuf_io_desc * sbiod_next;
};

struct SyntaxList {
    struct Syntax * stqh_first;
    struct Syntax * * stqh_last;
};

struct __anon_0x00001ca1 {
    struct Syntax * stqe_next;
};

struct __anon_0x000078bc {
    struct Syntax * stqe_next;
};

struct __anon_0x0001894b {
    struct Syntax * stqe_next;
};

struct __anon_0x000207fe {
    struct Syntax * stqe_next;
};

struct __anon_0x00028303 {
    struct Syntax * stqe_next;
};

struct __anon_0x0002f528 {
    struct Syntax * stqe_next;
};

struct __anon_0x000337f3 {
    struct Syntax * stqe_next;
};

struct __anon_0x00039a46 {
    struct Syntax * stqe_next;
};

struct __anon_0x0003ecec {
    struct Syntax * stqe_next;
};

struct __anon_0x000437b5 {
    struct Syntax * stqe_next;
};

struct __anon_0x000480a7 {
    struct Syntax * stqe_next;
};

struct __anon_0x0004d86f {
    struct Syntax * stqe_next;
};

struct __anon_0x00054a58 {
    struct Syntax * stqe_next;
};

struct __anon_0x000580a7 {
    struct Syntax * stqe_next;
};

struct __anon_0x0005eff0 {
    struct Syntax * stqe_next;
};

struct __anon_0x00062e93 {
    struct Syntax * stqe_next;
};

struct __anon_0x00068d22 {
    struct Syntax * stqe_next;
};

struct __anon_0x0006d5fd {
    struct Syntax * stqe_next;
};

struct __anon_0x00072e68 {
    struct Syntax * stqe_next;
};

struct __anon_0x00076c12 {
    struct Syntax * stqe_next;
};

struct __anon_0x0007ba77 {
    struct Syntax * stqe_next;
};

struct __anon_0x00080753 {
    struct Syntax * stqe_next;
};

struct __anon_0x00084056 {
    struct Syntax * stqe_next;
};

struct __anon_0x00088191 {
    struct Syntax * stqe_next;
};

struct __anon_0x0008b7de {
    struct Syntax * stqe_next;
};

struct __anon_0x0008f15b {
    struct Syntax * stqe_next;
};

struct __anon_0x00094800 {
    struct Syntax * stqe_next;
};

struct __anon_0x0009c6b3 {
    struct Syntax * stqe_next;
};

struct __anon_0x0009ff9c {
    struct Syntax * stqe_next;
};

struct __anon_0x000ab8c8 {
    struct Syntax * stqe_next;
};

struct __anon_0x000b077e {
    struct Syntax * stqe_next;
};

struct __anon_0x000b6c96 {
    struct Syntax * stqe_next;
};

struct __anon_0x000bb3e6 {
    struct Syntax * stqe_next;
};

struct __anon_0x000c01a3 {
    struct Syntax * stqe_next;
};

struct __anon_0x000c436f {
    struct Syntax * stqe_next;
};

struct __anon_0x000c96fa {
    struct Syntax * stqe_next;
};

struct __anon_0x000d761a {
    struct Syntax * stqe_next;
};

struct __anon_0x000dd2e6 {
    struct Syntax * stqe_next;
};

struct __anon_0x000e1be0 {
    struct Syntax * stqe_next;
};

struct __anon_0x000e7b1d {
    struct Syntax * stqe_next;
};

struct __anon_0x000ed497 {
    struct Syntax * stqe_next;
};

struct __anon_0x000f2443 {
    struct Syntax * stqe_next;
};

struct __anon_0x000f7005 {
    struct Syntax * stqe_next;
};

struct __anon_0x000fcac5 {
    struct Syntax * stqe_next;
};

struct __anon_0x001035f6 {
    struct Syntax * stqe_next;
};

struct __anon_0x00107c35 {
    struct Syntax * stqe_next;
};

struct __anon_0x0010c550 {
    struct Syntax * stqe_next;
};

struct __anon_0x00110996 {
    struct Syntax * stqe_next;
};

struct __anon_0x00115761 {
    struct Syntax * stqe_next;
};

struct __anon_0x0011a4f7 {
    struct Syntax * stqe_next;
};

struct __anon_0x0011e02a {
    struct Syntax * stqe_next;
};

struct __anon_0x00123b26 {
    struct Syntax * stqe_next;
};

struct __anon_0x00128c47 {
    struct Syntax * stqe_next;
};

struct __anon_0x0012c95d {
    struct Syntax * stqe_next;
};

struct __anon_0x001309d8 {
    struct Syntax * stqe_next;
};

struct __anon_0x001344de {
    struct Syntax * stqe_next;
};

struct __anon_0x00144848 {
    struct Syntax * stqe_next;
};

struct __anon_0x0014aea1 {
    struct Syntax * stqe_next;
};

struct __anon_0x00151198 {
    struct Syntax * stqe_next;
};

struct __anon_0x001555c4 {
    struct Syntax * stqe_next;
};

struct __anon_0x00159fe5 {
    struct Syntax * stqe_next;
};

struct __anon_0x0015de39 {
    struct Syntax * stqe_next;
};

struct __anon_0x00162c5a {
    struct Syntax * stqe_next;
};

struct __anon_0x00166a28 {
    struct Syntax * stqe_next;
};

struct __anon_0x0016c6c5 {
    struct Syntax * stqe_next;
};

struct __anon_0x0017013d {
    struct Syntax * stqe_next;
};

struct __anon_0x0017459b {
    struct Syntax * stqe_next;
};

struct __anon_0x001780e4 {
    struct Syntax * stqe_next;
};

struct __anon_0x0017bdae {
    struct Syntax * stqe_next;
};

struct __anon_0x0018090c {
    struct Syntax * stqe_next;
};

struct __anon_0x00184999 {
    struct Syntax * stqe_next;
};

struct __anon_0x0018ce87 {
    struct Syntax * stqe_next;
};

struct __anon_0x001910d5 {
    struct Syntax * stqe_next;
};

struct __anon_0x00195501 {
    struct Syntax * stqe_next;
};

struct sindexrec {
    char * sir_name;
    Syntax * sir_syn;
};

struct slap_internal_schema {
    ObjectClass * si_oc_top;
    ObjectClass * si_oc_extensibleObject;
    ObjectClass * si_oc_alias;
    ObjectClass * si_oc_referral;
    ObjectClass * si_oc_rootdse;
    ObjectClass * si_oc_subentry;
    ObjectClass * si_oc_subschema;
    ObjectClass * si_oc_collectiveAttributeSubentry;
    ObjectClass * si_oc_dynamicObject;
    ObjectClass * si_oc_glue;
    ObjectClass * si_oc_syncConsumerSubentry;
    ObjectClass * si_oc_syncProviderSubentry;
    AttributeDescription * si_ad_objectClass;
    AttributeDescription * si_ad_structuralObjectClass;
    AttributeDescription * si_ad_creatorsName;
    AttributeDescription * si_ad_createTimestamp;
    AttributeDescription * si_ad_modifiersName;
    AttributeDescription * si_ad_modifyTimestamp;
    AttributeDescription * si_ad_hasSubordinates;
    AttributeDescription * si_ad_subschemaSubentry;
    AttributeDescription * si_ad_collectiveSubentries;
    AttributeDescription * si_ad_collectiveExclusions;
    AttributeDescription * si_ad_entryDN;
    AttributeDescription * si_ad_entryUUID;
    AttributeDescription * si_ad_entryCSN;
    AttributeDescription * si_ad_namingCSN;
    AttributeDescription * si_ad_dseType;
    AttributeDescription * si_ad_syncreplCookie;
    AttributeDescription * si_ad_syncTimestamp;
    AttributeDescription * si_ad_contextCSN;
    AttributeDescription * si_ad_altServer;
    AttributeDescription * si_ad_namingContexts;
    AttributeDescription * si_ad_supportedControl;
    AttributeDescription * si_ad_supportedExtension;
    AttributeDescription * si_ad_supportedLDAPVersion;
    AttributeDescription * si_ad_supportedSASLMechanisms;
    AttributeDescription * si_ad_supportedFeatures;
    AttributeDescription * si_ad_monitorContext;
    AttributeDescription * si_ad_vendorName;
    AttributeDescription * si_ad_vendorVersion;
    AttributeDescription * si_ad_configContext;
    AttributeDescription * si_ad_administrativeRole;
    AttributeDescription * si_ad_subtreeSpecification;
    AttributeDescription * si_ad_attributeTypes;
    AttributeDescription * si_ad_ditContentRules;
    AttributeDescription * si_ad_ditStructureRules;
    AttributeDescription * si_ad_ldapSyntaxes;
    AttributeDescription * si_ad_matchingRules;
    AttributeDescription * si_ad_matchingRuleUse;
    AttributeDescription * si_ad_nameForms;
    AttributeDescription * si_ad_objectClasses;
    AttributeDescription * si_ad_aliasedObjectName;
    AttributeDescription * si_ad_ref;
    AttributeDescription * si_ad_entry;
    AttributeDescription * si_ad_children;
    AttributeDescription * si_ad_saslAuthzTo;
    AttributeDescription * si_ad_saslAuthzFrom;
    AttributeDescription * si_ad_entryTtl;
    AttributeDescription * si_ad_dynamicSubtrees;
    AttributeDescription * si_ad_distinguishedName;
    AttributeDescription * si_ad_name;
    AttributeDescription * si_ad_cn;
    AttributeDescription * si_ad_uid;
    AttributeDescription * si_ad_uidNumber;
    AttributeDescription * si_ad_gidNumber;
    AttributeDescription * si_ad_userPassword;
    AttributeDescription * si_ad_labeledURI;
    AttributeDescription * si_ad_description;
    AttributeDescription * si_ad_seeAlso;
    AttributeType * si_at_undefined;
    AttributeType * si_at_proxied;
    MatchingRule * si_mr_distinguishedNameMatch;
    MatchingRule * si_mr_dnSubtreeMatch;
    MatchingRule * si_mr_dnOneLevelMatch;
    MatchingRule * si_mr_dnSubordinateMatch;
    MatchingRule * si_mr_dnSuperiorMatch;
    MatchingRule * si_mr_caseExactMatch;
    MatchingRule * si_mr_caseExactSubstringsMatch;
    MatchingRule * si_mr_caseExactIA5Match;
    MatchingRule * si_mr_integerMatch;
    MatchingRule * si_mr_integerFirstComponentMatch;
    MatchingRule * si_mr_objectIdentifierFirstComponentMatch;
    MatchingRule * si_mr_caseIgnoreMatch;
    MatchingRule * si_mr_caseIgnoreListMatch;
    Syntax * si_syn_directoryString;
    Syntax * si_syn_distinguishedName;
    Syntax * si_syn_integer;
    Syntax * si_syn_octetString;
    Syntax * si_syn_attributeTypeDesc;
    Syntax * si_syn_ditContentRuleDesc;
    Syntax * si_syn_ditStructureRuleDesc;
    Syntax * si_syn_ldapSyntaxDesc;
    Syntax * si_syn_matchingRuleDesc;
    Syntax * si_syn_matchingRuleUseDesc;
    Syntax * si_syn_nameFormDesc;
    Syntax * si_syn_objectClassDesc;
};

typedef int (*slap_syntax_transform_func)(Syntax *, struct berval *, struct berval *, void *);
typedef int (*slap_syntax_validate_func)(Syntax *, struct berval *);
typedef ac_uint4 ldap_unicode_t;
typedef ac_uint4 uint32;
union f_un_u {
    ber_int_t f_un_result;
    AttributeDescription * f_un_desc;
    AttributeAssertion * f_un_ava;
    SubstringsAssertion * f_un_ssa;
    MatchingRuleAssertion * f_un_mra;
    Filter * f_un_complex;
};

struct req_abandon_s {
    ber_int_t rs_msgid;
};

union vrf_un_u {
    ber_int_t vrf_un_result;
    char * vrf_un_dn;
    AttributeDescription * vrf_un_desc;
    AttributeAssertion * vrf_un_ava;
    SubstringsAssertion * vrf_un_ssa;
    MatchingRuleAssertion * vrf_un_mra;
};

typedef ber_int_t ldap_ucs4_t;
struct berval {
    ber_len_t bv_len;
    char * bv_val;
};

typedef void * (*BER_MEMALLOC_FN)(ber_len_t, void *);
typedef void * (*BER_MEMCALLOC_FN)(ber_len_t, ber_len_t, void *);
typedef void * (*BER_MEMREALLOC_FN)(void *, ber_len_t, void *);
struct sockbuf_io {
    int (*sbi_setup)(Sockbuf_IO_Desc *, void *);
    int (*sbi_remove)(Sockbuf_IO_Desc *);
    int (*sbi_ctrl)(Sockbuf_IO_Desc *, int, void *);
    ber_slen_t (*sbi_read)(Sockbuf_IO_Desc *, void *, ber_len_t);
    ber_slen_t (*sbi_write)(Sockbuf_IO_Desc *, void *, ber_len_t);
    int (*sbi_close)(Sockbuf_IO_Desc *);
};

struct sockbuf {
    struct lber_options sb_opts;
    Sockbuf_IO_Desc * sb_iod;
    ber_socket_t sb_fd;
    ber_len_t sb_max_incoming;
    unsigned int sb_trans_needs_read : 1;
    unsigned int sb_trans_needs_write : 1;
};

struct berelement {
    struct lber_options ber_opts;
    ber_tag_t ber_tag;
    ber_len_t ber_len;
    ber_tag_t ber_usertag;
    char * ber_buf;
    char * ber_ptr;
    char * ber_end;
    char * ber_sos_ptr;
    char * ber_rwptr;
    void * ber_memctx;
};

struct lutil_HASHContext {
    ber_uint_t hash;
};

struct lutil_MD5Context {
    ber_uint_t buf[4];
    ber_uint_t bits[2];
    unsigned char in[64];
};

struct bvlist {
    struct bvlist * next;
    char * trunc;
    int inum;
    char savech;
};

struct __anon_0x001abbda {
    int si_status;
    clock_t si_utime;
    clock_t si_stime;
};

struct delrec {
    struct delrec * next;
    int nidx;
    int idx[1];
};

struct group {
    char * gr_name;
    char * gr_passwd;
    gid_t gr_gid;
    char * * gr_mem;
};

struct glue_Addrec {
    struct glue_Addrec * ga_next;
    BackendDB * ga_be;
};

typedef ldap_int_thread_cond_t ldap_pvt_thread_cond_t;
typedef ldap_int_thread_mutex_t ldap_pvt_thread_mutex_t;
typedef ldap_int_thread_pool_t ldap_pvt_thread_pool_t;
typedef ldap_int_thread_rdwr_t ldap_pvt_thread_rdwr_t;
typedef ldap_int_thread_t ldap_pvt_thread_t;
struct conn_readinfo {
    Operation * op;
    ldap_pvt_thread_start_t * func;
    void * arg;
    void * ctx;
    int nullop;
};

struct modinst {
    struct modinst * mi_next;
    Operation * mi_op;
};

struct dirent {
    ino_t d_ino;
    off_t d_off;
    short unsigned int d_reclen;
    unsigned char d_type;
    char d_name[256];
};

struct __anon_0x00092d1c {
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x0009e53c {
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x000fafb8 {
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x001220c6 {
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x001a59f4 {
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x001a7c64 {
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct rewrite_mapper {
    char * rm_name;
    rewrite_mapper_config * rm_config;
    rewrite_mapper_apply * rm_apply;
    rewrite_mapper_destroy * rm_destroy;
};

struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

struct sockaddr_storage {
    sa_family_t ss_family;
    char __ss_padding[122];
    long unsigned int __ss_align;
};

struct sockaddr_un {
    sa_family_t sun_family;
    char sun_path[108];
};

union __anon_0x001abda5 {
    void (*sa_handler)(int);
    void (*sa_sigaction)(int, siginfo_t *, void *);
};

struct __anon_0x0015c5f9 {
    const lutil_meter_display_t * display;
    void * display_data;
    const lutil_meter_estimator_t * estimator;
    void * estimator_data;
    double start_time;
    double last_update;
    size_t goal_value;
    size_t last_position;
};

struct __anon_0x001b1f2d {
    const lutil_meter_display_t * display;
    void * display_data;
    const lutil_meter_estimator_t * estimator;
    void * estimator_data;
    double start_time;
    double last_update;
    size_t goal_value;
    size_t last_position;
};

struct re_pattern_buffer {
    size_t re_nsub;
    void * __opaque;
    void * __padding[4];
    size_t __nsub2;
    char __padding2;
};

struct rewrite_subst {
    size_t lt_subs_len;
    struct berval * lt_subs;
    int lt_num_submatch;
    struct rewrite_submatch * lt_submatch;
};

struct slap_schema_mr_map {
    char * ssmm_name;
    size_t ssmm_offset;
};

struct slap_schema_syn_map {
    char * sssm_name;
    size_t sssm_offset;
};

typedef int (*AttributeTypeSchemaCheckFN)(BackendDB *, Entry *, Attribute *, const char * *, char *, size_t);
typedef int (*ObjectClassSchemaCheckFN)(BackendDB *, Entry *, ObjectClass *, const char * *, char *, size_t);
typedef int (*slap_cf_aux_table_parse_x)(struct berval *, void *, slap_cf_aux_table *, const char *, int);
struct slap_list {
    struct slap_list * next;
};

struct AccessControlState {
    AttributeDescription * as_desc;
    slap_access_t as_access;
    AccessControl * as_vd_acl;
    int as_vd_acl_present;
    int as_vd_acl_count;
    slap_mask_t as_vd_mask;
    int as_result;
    int as_fe_done;
};

struct relay_fail_modes_s {
    slap_mask_t rf_bd;
    slap_mask_t rf_op;
};

typedef int (*BI_access_allowed)(Operation *, Entry *, AttributeDescription *, struct berval *, slap_access_t, AccessControlState *, slap_mask_t *);
typedef int (*slap_mr_match_func)(int *, slap_mask_t, Syntax *, MatchingRule *, struct berval *, void *);
typedef int (*slap_mr_normalize_func)(slap_mask_t, Syntax *, MatchingRule *, struct berval *, struct berval *, void *);
struct slap_ssf_set {
    slap_ssf_t sss_ssf;
    slap_ssf_t sss_transport;
    slap_ssf_t sss_tls;
    slap_ssf_t sss_sasl;
    slap_ssf_t sss_update_ssf;
    slap_ssf_t sss_update_transport;
    slap_ssf_t sss_update_tls;
    slap_ssf_t sss_update_sasl;
    slap_ssf_t sss_simple_bind;
};

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

struct resolve_ctxt {
    syncinfo_t * rx_si;
    Modifications * rx_mods;
};

struct fbase_cookie {
    struct berval * fdn;
    syncops * fss;
    int fbase;
    int fscope;
};

struct syncmatches {
    struct syncmatches * sm_next;
    syncops * sm_op;
};

struct syncres {
    struct syncres * s_next;
    struct syncres * s_rilist;
    resinfo * s_info;
    char s_mode;
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

struct __anon_0x0015c50c {
    int (*display_open)(void * *);
    int (*display_update)(void * *, double, time_t, time_t, double);
    int (*display_close)(void * *);
};

struct __anon_0x0015c58f {
    int (*estimator_open)(void * *);
    int (*estimator_update)(void * *, double, double, time_t *);
    int (*estimator_close)(void * *);
};

struct __anon_0x001b1e42 {
    int (*display_open)(void * *);
    int (*display_update)(void * *, double, time_t, time_t, double);
    int (*display_close)(void * *);
};

struct __anon_0x001b1ec4 {
    int (*estimator_open)(void * *);
    int (*estimator_update)(void * *, double, double, time_t *);
    int (*estimator_close)(void * *);
};

struct timespec {
    time_t tv_sec;
    long int tv_nsec;
};

struct timeval {
    time_t tv_sec;
    suseconds_t tv_usec;
};

struct __anon_0x001abb79 {
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

struct ucred {
    pid_t pid;
    uid_t uid;
    gid_t gid;
};

typedef uint16_t in_port_t;
typedef uint32_t in_addr_t;
union __anon_0x00000279 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00005c1e {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00016e1a {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0001ed4b {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00026830 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0002dc34 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00031e6c {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0003813d {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0003d106 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00041e84 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00046761 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0004be7b {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000531cd {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000566e3 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0005d6dc {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000614b9 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0006742e {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0006bc68 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00071579 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0007529d {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0007a17e {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0007ee6a {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00082762 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000868a8 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00089ef5 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0008d7ea {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00092ea6 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0009ad5e {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0009e6c6 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000a9f84 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000aeb5c {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000b535a {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000b9a3f {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000be8b4 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000c28db {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000c7ac1 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000d5d0d {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000db7ba {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000e02a9 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000e6049 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000eb9be {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000f0974 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000f5521 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x000fb154 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00101c4b {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x001063b9 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0010abaf {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0010f09e {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00113f23 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00118c03 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0011c7dc {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00122262 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x001273fa {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0012b029 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0012f03b {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00132945 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00142ead {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00149574 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0014f857 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00153a73 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x001586dd {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0015c207 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00161333 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0016501f {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0016adbe {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0016e867 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00172b53 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x001767dd {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0017a4a7 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0017efe5 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x001830a6 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0018b5e0 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0018f829 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x00193b16 {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

struct voidList {
    struct voidList * vl_next;
    void * vl_ptr;
};

struct __anon_0x001abc87 {
    void * si_addr;
    short int si_addr_lsb;
    union __anon_0x001abc68 __first;
};

struct GroupAssertion {
    struct GroupAssertion * ga_next;
    Backend * ga_be;
    ObjectClass * ga_oc;
    AttributeDescription * ga_at;
    int ga_res;
    ber_len_t ga_len;
    char ga_ndn[1];
};

typedef int (*BI_db_config)(Backend *, const char *, int, int, char * *);
typedef int (*BI_db_func)(Backend *, ConfigReply *);
typedef BI_bi_func BI_close;
typedef BI_bi_func BI_destroy;
typedef BI_bi_func BI_init;
typedef BI_bi_func BI_open;
struct Attribute {
    AttributeDescription * a_desc;
    BerVarray a_vals;
    BerVarray a_nvals;
    unsigned int a_numvals;
    unsigned int a_flags;
    Attribute * a_next;
};

struct acl_set_gather_t {
    SetCookie * cookie;
    BerVarray bvals;
};

struct fpres_cookie {
    int num;
    BerVarray uuids;
    char * last;
};

struct glue_state {
    char * matched;
    BerVarray refs;
    LDAPControl * * ctrls;
    int err;
    int matchlen;
    int nrefs;
    int nctrls;
};

struct rep_search_s {
    Entry * r_entry;
    slap_mask_t r_attr_flags;
    Attribute * r_operational_attrs;
    AttributeName * r_attrs;
    int r_nentries;
    BerVarray r_v2ref;
};

struct searchstate {
    slap_overinst * ss_on;
    syncops * ss_so;
    BerVarray ss_ctxcsn;
    int * ss_sids;
    int ss_numcsns;
    int ss_flags;
};

typedef int (*BI_acl_attribute)(Operation *, Entry *, struct berval *, AttributeDescription *, BerVarray *, slap_access_t);
typedef BerVarray (*SLAP_SET_GATHER)(SetCookie *, struct berval *, AttributeDescription *);
typedef int (*slap_mr_filter_func)(slap_mask_t, slap_mask_t, Syntax *, MatchingRule *, struct berval *, void *, BerVarray *, void *);
typedef int (*slap_mr_indexer_func)(slap_mask_t, slap_mask_t, Syntax *, MatchingRule *, struct berval *, BerVarray, BerVarray *, void *);
typedef BI_conn_func BI_connection_destroy;
typedef BI_conn_func BI_connection_init;
struct entry_info_t {
    SLAP_ENTRY_INFO_FN func;
    void * arg;
    struct entry_info_t * next;
};

typedef LDAPRDN * LDAPDN;
struct ContentRule {
    LDAPContentRule scr_crule;
    ObjectClass * scr_sclass;
    ObjectClass * * scr_auxiliaries;
    AttributeType * * scr_required;
    AttributeType * * scr_allowed;
    AttributeType * * scr_precluded;
    char * scr_oidmacro;
    int scr_flags;
    struct __anon_0x00007b38 scr_next;
};

struct req_modify_s {
    req_modifications_s rs_mods;
    int rs_increment;
};

struct OpExtra {
    struct __anon_0x00003538 oe_next;
    void * oe_key;
};

struct AclSetCookie {
    SetCookie asc_cookie;
    Entry * asc_e;
};

typedef BI_op_func BI_chk_controls;
typedef BI_op_func BI_chk_referrals;
typedef BI_op_func BI_op_abandon;
typedef BI_op_func BI_op_add;
typedef BI_op_func BI_op_bind;
typedef BI_op_func BI_op_cancel;
typedef BI_op_func BI_op_compare;
typedef BI_op_func BI_op_delete;
typedef BI_op_func BI_op_extended;
typedef BI_op_func BI_op_modify;
typedef BI_op_func BI_op_modrdn;
typedef BI_op_func BI_op_search;
typedef BI_op_func BI_op_unbind;
struct ConfigOCs {
    const char * co_def;
    ConfigType co_type;
    ConfigTable * co_table;
    ConfigLDAPadd * co_ldadd;
    ConfigCfAdd * co_cfadd;
    ObjectClass * co_oc;
    struct berval * co_name;
};

struct slap_control {
    char * sc_oid;
    int sc_cid;
    slap_mask_t sc_mask;
    char * * sc_extendedops;
    BerVarray sc_extendedopsbv;
    SLAP_CTRL_PARSE_FN * sc_parse;
    struct __anon_0x000b290c sc_next;
};

struct __anon_0x000b8dac {
    const struct berval * oid;
    slap_mask_t flags;
    SLAP_EXTOP_MAIN_FN * ext_main;
};

struct slap_callback {
    struct slap_callback * sc_next;
    slap_response * sc_response;
    slap_response * sc_cleanup;
    void * sc_private;
    slap_writewait * sc_writewait;
};

struct slap_syntax_defs_rec {
    char * sd_desc;
    int sd_flags;
    char * * sd_sups;
    slap_syntax_validate_func * sd_validate;
    slap_syntax_transform_func * sd_pretty;
};

struct __anon_0x001ac858 {
    uint32 state[5];
    uint32 count[2];
    unsigned char buffer[64];
};

struct __anon_0x001ae052 {
    uint32 state[5];
    uint32 count[2];
    unsigned char buffer[64];
};

struct Filter {
    ber_tag_t f_choice;
    union f_un_u f_un;
    Filter * f_next;
};

struct ValuesReturnFilter {
    ber_tag_t vrf_choice;
    union vrf_un_u vrf_un;
    ValuesReturnFilter * vrf_next;
};

struct Attr_option {
    struct berval name;
    int prefix;
};

struct AttributeAssertion {
    AttributeDescription * aa_desc;
    struct berval aa_value;
};

struct AttributeDescription {
    AttributeDescription * ad_next;
    AttributeType * ad_type;
    struct berval ad_cname;
    struct berval ad_tags;
    unsigned int ad_flags;
    unsigned int ad_index;
};

struct AttributeName {
    struct berval an_name;
    AttributeDescription * an_desc;
    int an_flags;
    ObjectClass * an_oc;
};

struct AuthorizationInformation {
    ber_tag_t sai_method;
    struct berval sai_mech;
    struct berval sai_dn;
    struct berval sai_ndn;
    slap_ssf_t sai_ssf;
    slap_ssf_t sai_transport_ssf;
    slap_ssf_t sai_tls_ssf;
    slap_ssf_t sai_sasl_ssf;
};

struct ConfigFile {
    struct ConfigFile * c_sibs;
    struct ConfigFile * c_kids;
    struct berval c_file;
    AttributeType * c_at_head;
    AttributeType * c_at_tail;
    ContentRule * c_cr_head;
    ContentRule * c_cr_tail;
    ObjectClass * c_oc_head;
    ObjectClass * c_oc_tail;
    OidMacro * c_om_head;
    OidMacro * c_om_tail;
    Syntax * c_syn_head;
    Syntax * c_syn_tail;
    BerVarray c_dseFiles;
};

struct Entry {
    ID e_id;
    struct berval e_name;
    struct berval e_nname;
    Attribute * e_attrs;
    slap_mask_t e_ocflags;
    struct berval e_bv;
    void * e_private;
};

struct EntryHeader {
    struct berval bv;
    char * data;
    int nattrs;
    int nvals;
};

struct MatchingRuleAssertion {
    AttributeDescription * ma_desc;
    struct berval ma_value;
    MatchingRule * ma_rule;
    struct berval ma_rule_text;
    int ma_dnattrs;
};

struct MatchingRuleUse {
    LDAPMatchingRuleUse smru_mruleuse;
    MatchingRule * smru_mr;
    struct berval smru_str;
    struct __anon_0x00001e1e smru_next;
};

struct Modification {
    AttributeDescription * sm_desc;
    BerVarray sm_values;
    BerVarray sm_nvalues;
    unsigned int sm_numvals;
    short int sm_op;
    short int sm_flags;
    struct berval sm_type;
};

struct OidMacro {
    struct berval som_oid;
    BerVarray som_names;
    BerVarray som_subs;
    int som_flags;
    struct __anon_0x0000784d som_next;
};

struct PagedResultsState {
    Backend * ps_be;
    ber_int_t ps_size;
    int ps_count;
    PagedResultsCookie ps_cookie;
    struct berval ps_cookieval;
};

struct ServerID {
    struct ServerID * si_next;
    struct berval si_url;
    int si_num;
};

struct SubstringsAssertion {
    AttributeDescription * sa_desc;
    struct berval sa_initial;
    struct berval * sa_any;
    struct berval sa_final;
};

struct Syntax {
    LDAPSyntax ssyn_syn;
    struct berval ssyn_bvoid;
    unsigned int ssyn_flags;
    Syntax * * ssyn_sups;
    slap_syntax_validate_func * ssyn_validate;
    slap_syntax_transform_func * ssyn_pretty;
    struct __anon_0x00001ca1 ssyn_next;
};

struct __anon_0x0000a08a {
    struct berval vdn_dn;
    struct berval vdn_ndn;
};

struct __anon_0x0000a7a0 {
    struct berval key;
    int off;
};

struct __anon_0x0001a9e9 {
    struct berval vdn_dn;
    struct berval vdn_ndn;
};

struct __anon_0x0004fd77 {
    struct berval vdn_dn;
    struct berval vdn_ndn;
};

struct __anon_0x000df100 {
    struct berval vdn_dn;
    struct berval vdn_ndn;
};

struct __anon_0x00105392 {
    struct berval vdn_dn;
    struct berval vdn_ndn;
};

struct __anon_0x00136fae {
    struct berval vdn_dn;
    struct berval vdn_ndn;
};

struct __anon_0x00146842 {
    struct berval vdn_dn;
    struct berval vdn_ndn;
};

struct __anon_0x0014cdc4 {
    struct berval vdn_dn;
    struct berval vdn_ndn;
};

struct __anon_0x00186dc4 {
    struct berval vdn_dn;
    struct berval vdn_ndn;
};

struct __anon_0x0018eca8 {
    struct berval vdn_dn;
    struct berval vdn_ndn;
};

struct __anon_0x00197b70 {
    struct berval vdn_dn;
    struct berval vdn_ndn;
};

struct aindexrec {
    struct berval air_name;
    AttributeType * air_at;
};

struct cindexrec {
    struct berval cir_name;
    ContentRule * cir_cr;
};

struct dninfo {
    syncinfo_t * si;
    Entry * new_entry;
    struct berval dn;
    struct berval ndn;
    struct berval nnewSup;
    int renamed;
    int delOldRDN;
    Modifications * * modlist;
    Modifications * mods;
    int oldNcount;
    AttributeDescription * oldDesc;
    AttributeDescription * newDesc;
};

struct extop_list {
    struct extop_list * next;
    struct berval oid;
    slap_mask_t flags;
    SLAP_EXTOP_MAIN_FN * ext_main;
};

struct gluenode {
    BackendDB * gn_be;
    struct berval gn_pdn;
};

struct ldap_ava {
    struct berval la_attr;
    struct berval la_value;
    unsigned int la_flags;
    void * la_private;
};

struct ldapcontrol {
    char * ldctl_oid;
    struct berval ldctl_value;
    char ldctl_iscritical;
};

struct logschema {
    struct berval ls_dn;
    struct berval ls_req;
    struct berval ls_mod;
    struct berval ls_newRdn;
    struct berval ls_delRdn;
    struct berval ls_newSup;
    struct berval ls_controls;
};

struct mindexrec {
    struct berval mir_name;
    MatchingRule * mir_mr;
};

struct oindexrec {
    struct berval oir_name;
    ObjectClass * oir_oc;
};

struct option_helper {
    struct berval oh_name;
    int (*oh_fnc)(const char *, void *);
    void * oh_arg;
    const char * oh_usage;
};

struct pw_scheme {
    struct berval name;
    LUTIL_PASSWD_CHK_FUNC * chk_fn;
    LUTIL_PASSWD_HASH_FUNC * hash_fn;
};

struct relay_back_info {
    BackendDB * ri_bd;
    struct berval ri_realsuffix;
    int ri_massage;
};

struct req_bind_s {
    int rb_method;
    struct berval rb_cred;
    struct berval rb_edn;
    slap_ssf_t rb_ssf;
    struct berval rb_mech;
};

struct req_extended_s {
    struct berval rs_reqoid;
    int rs_flags;
    struct berval * rs_reqdata;
};

struct req_modrdn_s {
    req_modifications_s rs_mods;
    int rs_deleteoldrdn;
    struct berval rs_newrdn;
    struct berval rs_nnewrdn;
    struct berval * rs_newSup;
    struct berval * rs_nnewSup;
};

struct req_search_s {
    int rs_scope;
    int rs_deref;
    int rs_slimit;
    int rs_tlimit;
    struct slap_limits_set * rs_limit;
    int rs_attrsonly;
    AttributeName * rs_attrs;
    Filter * rs_filter;
    struct berval rs_filterstr;
};

struct rewrite_var {
    char * lv_name;
    int lv_flags;
    struct berval lv_value;
};

struct slap_bindconf {
    struct berval sb_uri;
    int sb_version;
    int sb_tls;
    int sb_method;
    int sb_timeout_api;
    int sb_timeout_net;
    struct berval sb_binddn;
    struct berval sb_cred;
    struct berval sb_saslmech;
    char * sb_secprops;
    struct berval sb_realm;
    struct berval sb_authcId;
    struct berval sb_authzId;
    slap_keepalive sb_keepalive;
};

struct slap_cf_aux_table {
    struct berval key;
    int off;
    char type;
    char quote;
    void * aux;
};

struct slap_csn_entry {
    Operation * ce_op;
    struct berval ce_csn;
    int ce_sid;
    long int ce_state;
    struct __anon_0x0000329c ce_csn_link;
};

struct slap_verbmasks {
    struct berval word;
    const slap_mask_t mask;
};

struct slapd_rw_info {
    slapd_map_data * si_data;
    struct berval si_val;
};

struct slog_entry {
    struct berval se_uuid;
    struct berval se_csn;
    int se_sid;
    ber_tag_t se_tag;
};

struct sync_cookie {
    BerVarray ctxcsn;
    int * sids;
    int numcsns;
    int rid;
    struct berval octet_str;
    int sid;
    struct __anon_0x000025ed sc_next;
};

struct tool_vars {
    Backend * tv_be;
    int tv_dbnum;
    int tv_verbose;
    int tv_quiet;
    int tv_update_ctxcsn;
    int tv_continuemode;
    int tv_nosubordinates;
    int tv_dryrun;
    long unsigned int tv_jumpline;
    struct berval tv_sub_ndn;
    int tv_scope;
    Filter * tv_filter;
    struct LDIFFP * tv_ldiffp;
    struct berval tv_baseDN;
    struct berval tv_authcDN;
    struct berval tv_authzDN;
    struct berval tv_authcID;
    struct berval tv_authzID;
    struct berval tv_mech;
    char * tv_realm;
    struct berval tv_listener_url;
    struct berval tv_peer_domain;
    struct berval tv_peer_name;
    struct berval tv_sock_name;
    slap_ssf_t tv_ssf;
    slap_ssf_t tv_transport_ssf;
    slap_ssf_t tv_tls_ssf;
    slap_ssf_t tv_sasl_ssf;
    unsigned int tv_dn_mode;
    unsigned int tv_csnsid;
    ber_len_t tv_ldif_wrap;
    char tv_maxcsnbuf[262144];
    struct berval tv_maxcsn[4096];
};

struct lber_memory_fns {
    BER_MEMALLOC_FN * bmf_malloc;
    BER_MEMCALLOC_FN * bmf_calloc;
    BER_MEMREALLOC_FN * bmf_realloc;
    BER_MEMFREE_FN * bmf_free;
};

union __anon_0x001abc07 {
    union sigval si_value;
    struct __anon_0x001abbda __sigchld;
};

struct cookie_state {
    ldap_pvt_thread_mutex_t cs_mutex;
    ldap_pvt_thread_cond_t cs_cond;
    struct berval * cs_vals;
    int * cs_sids;
    int cs_num;
    int cs_age;
    int cs_ref;
    int cs_updating;
    ldap_pvt_thread_mutex_t cs_pmutex;
    struct berval * cs_pvals;
    int * cs_psids;
    int cs_pnum;
};

struct ldap_map_data {
    char * lm_url;
    LDAPURLDesc * lm_lud;
    int lm_version;
    char * lm_binddn;
    struct berval lm_cred;
    bindwhen_t lm_when;
    LDAP * lm_ld;
    int lm_wantdn;
    char * lm_attrs[2];
    ldap_pvt_thread_mutex_t lm_mutex;
};

struct modtarget {
    struct modinst * mt_mods;
    struct modinst * mt_tail;
    struct berval mt_dn;
    ldap_pvt_thread_mutex_t mt_mutex;
};

struct resinfo {
    struct syncres * ri_list;
    Entry * ri_e;
    struct berval ri_dn;
    struct berval ri_ndn;
    struct berval ri_uuid;
    struct berval ri_csn;
    struct berval ri_cookie;
    char ri_isref;
    ldap_pvt_thread_mutex_t ri_mutex;
};

struct rewrite_builtin_map {
    int lb_type;
    char * lb_name;
    void * lb_private;
    const rewrite_mapper * lb_mapper;
    ldap_pvt_thread_mutex_t lb_mutex;
};

struct rewrite_map {
    int lm_type;
    char * lm_name;
    void * lm_data;
    union __anon_0x001a13af lm_union;
    ldap_pvt_thread_mutex_t lm_mutex;
};

struct runqueue_s {
    struct l task_list;
    struct rl run_list;
    ldap_pvt_thread_mutex_t rq_mutex;
};

struct slap_counters_t {
    struct slap_counters_t * sc_next;
    ldap_pvt_thread_mutex_t sc_mutex;
    ldap_pvt_mp_t sc_bytes;
    ldap_pvt_mp_t sc_pdu;
    ldap_pvt_mp_t sc_entries;
    ldap_pvt_mp_t sc_refs;
    ldap_pvt_mp_t sc_ops_completed;
    ldap_pvt_mp_t sc_ops_initiated;
};

struct slap_daemon_st {
    ldap_pvt_thread_mutex_t sd_mutex;
    ber_socket_t sd_nactives;
    int sd_nwriters;
    int sd_nfds;
    fd_set sd_actives;
    fd_set sd_readers;
    fd_set sd_writers;
};

struct syncops {
    struct syncops * s_next;
    struct syncprov_info_t * s_si;
    struct berval s_base;
    ID s_eid;
    Operation * s_op;
    int s_rid;
    int s_sid;
    struct berval s_filterstr;
    int s_flags;
    int s_inuse;
    struct syncres * s_res;
    struct syncres * s_restail;
    ldap_pvt_thread_mutex_t s_mutex;
};

struct ldif_info {
    struct berval li_base_path;
    struct ldif_tool li_tool;
    ldap_pvt_thread_mutex_t li_modop_mutex;
    ldap_pvt_thread_rdwr_t li_rdwr;
};

struct rewrite_info {
    Avlnode * li_context;
    Avlnode * li_maps;
    Avlnode * li_params;
    Avlnode * li_cookies;
    int li_num_cookies;
    ldap_pvt_thread_rdwr_t li_params_mutex;
    ldap_pvt_thread_rdwr_t li_cookies_mutex;
    int li_state;
    int li_max_passes;
    int li_max_passes_per_rule;
    int li_rewrite_mode;
};

struct rewrite_session {
    void * ls_cookie;
    Avlnode * ls_vars;
    ldap_pvt_thread_rdwr_t ls_vars_mutex;
    ldap_pvt_thread_mutex_t ls_mutex;
    int ls_count;
};

struct sessionlog {
    BerVarray sl_mincsn;
    int * sl_sids;
    int sl_numcsns;
    int sl_num;
    int sl_size;
    int sl_playing;
    Avlnode * sl_entries;
    ldap_pvt_thread_rdwr_t sl_mutex;
};

struct syncprov_info_t {
    syncops * si_ops;
    struct berval si_contextdn;
    BerVarray si_ctxcsn;
    int * si_sids;
    int si_numcsns;
    int si_chkops;
    int si_chktime;
    int si_numops;
    int si_nopres;
    int si_usehint;
    int si_active;
    int si_dirty;
    time_t si_chklast;
    Avlnode * si_mods;
    sessionlog * si_logs;
    ldap_pvt_thread_rdwr_t si_csn_rwlock;
    ldap_pvt_thread_mutex_t si_ops_mutex;
    ldap_pvt_thread_mutex_t si_mods_mutex;
    ldap_pvt_thread_mutex_t si_resp_mutex;
};

struct Opheader {
    long unsigned int oh_opid;
    long unsigned int oh_connid;
    Connection * oh_conn;
    ber_int_t oh_msgid;
    ber_int_t oh_protocol;
    ldap_pvt_thread_t oh_tid;
    void * oh_threadctx;
    void * oh_tmpmemctx;
    BerMemoryFunctions * oh_tmpmfuncs;
    slap_counters_t * oh_counters;
    char oh_log_prefix[256];
};

struct AclRegexMatches {
    int dn_count;
    regmatch_t dn_data[100];
    int val_count;
    regmatch_t val_data[100];
};

struct sigaction {
    union __anon_0x001abda5 __sa_handler;
    sigset_t sa_mask;
    int sa_flags;
    void (*sa_restorer)(void);
};

struct AccessControl {
    Filter * acl_filter;
    slap_style_t acl_dn_style;
    regex_t acl_dn_re;
    struct berval acl_dn_pat;
    AttributeName * acl_attrs;
    MatchingRule * acl_attrval_mr;
    slap_style_t acl_attrval_style;
    regex_t acl_attrval_re;
    struct berval acl_attrval;
    Access * acl_access;
    struct AccessControl * acl_next;
};

struct rewrite_rule {
    struct rewrite_rule * lr_next;
    struct rewrite_rule * lr_prev;
    char * lr_pattern;
    char * lr_subststring;
    char * lr_flagstring;
    regex_t lr_regex;
    struct rewrite_subst * lr_subst;
    int lr_flags;
    int lr_mode;
    int lr_max_passes;
    struct rewrite_action * lr_action;
};

struct sasl_regexp {
    char * sr_match;
    char * sr_replace;
    regex_t sr_workspace;
    int sr_offset[12];
};

struct slap_limits {
    unsigned int lm_flags;
    regex_t lm_regex;
    struct berval lm_pat;
    ObjectClass * lm_group_oc;
    AttributeDescription * lm_group_ad;
    struct slap_limits_set lm_limits;
};

struct AttributeType {
    LDAPAttributeType sat_atype;
    struct berval sat_cname;
    AttributeType * sat_sup;
    AttributeType * * sat_subtypes;
    MatchingRule * sat_equality;
    MatchingRule * sat_approx;
    MatchingRule * sat_ordering;
    MatchingRule * sat_substr;
    Syntax * sat_syntax;
    AttributeTypeSchemaCheckFN * sat_check;
    char * sat_oidmacro;
    char * sat_soidmacro;
    slap_mask_t sat_flags;
    struct __anon_0x00001e83 sat_next;
    AttributeDescription * sat_ad;
    ldap_pvt_thread_mutex_t sat_ad_mutex;
};

struct ObjectClass {
    LDAPObjectClass soc_oclass;
    struct berval soc_cname;
    ObjectClass * * soc_sups;
    AttributeType * * soc_required;
    AttributeType * * soc_allowed;
    ObjectClassSchemaCheckFN * soc_check;
    char * soc_oidmacro;
    slap_mask_t soc_flags;
    struct __anon_0x00001eed soc_next;
};

struct slap_schema_oc_map {
    char * ssom_name;
    char * ssom_defn;
    ObjectClassSchemaCheckFN * ssom_check;
    slap_mask_t ssom_flags;
    size_t ssom_offset;
};

struct BackendDB {
    BackendInfo * bd_info;
    BackendDB * bd_self;
    char be_ctrls[33];
    slap_mask_t be_flags;
    slap_mask_t be_restrictops;
    slap_mask_t be_requires;
    slap_ssf_set_t be_ssf_set;
    BerVarray be_suffix;
    BerVarray be_nsuffix;
    struct berval be_schemadn;
    struct berval be_schemandn;
    struct berval be_rootdn;
    struct berval be_rootndn;
    struct berval be_rootpw;
    unsigned int be_max_deref_depth;
    struct slap_limits_set be_def_limit;
    struct slap_limits * * be_limits;
    AccessControl * be_acl;
    slap_access_t be_dfltaccess;
    AttributeName * be_extra_anlist;
    struct berval be_update_ndn;
    BerVarray be_update_refs;
    struct be_pcl * be_pending_csn_list;
    ldap_pvt_thread_mutex_t be_pcl_mutex;
    struct syncinfo_s * be_syncinfo;
    void * be_pb;
    struct ConfigOCs * be_cf_ocs;
    void * be_private;
    struct __anon_0x00002730 be_next;
};

struct opcookie {
    slap_overinst * son;
    syncmatches * smatches;
    modtarget * smt;
    Entry * se;
    struct berval sdn;
    struct berval sndn;
    struct berval suuid;
    struct berval sctxcsn;
    short int osid;
    short int rsid;
    short int sreference;
    syncres ssres;
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
    struct __anon_0x000058cf __st_atim32;
    struct __anon_0x000058cf __st_mtim32;
    struct __anon_0x000058cf __st_ctim32;
    ino_t st_ino;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
};

struct rdata_s {
    int counter;
    unsigned char * buf;
    struct rdata_s * stack;
    pid_t pid;
    struct timeval tv;
    long unsigned int junk;
};

struct re_s {
    struct timeval next_sched;
    struct timeval interval;
    struct __anon_0x00022319 tnext;
    struct __anon_0x000223ab rnext;
    ldap_pvt_thread_start_t * routine;
    void * arg;
    char * tname;
    char * tspec;
};

union __anon_0x001abbbb {
    struct __anon_0x001abb79 __piduid;
    struct __anon_0x001abb9a __timer;
};

struct in_addr {
    in_addr_t s_addr;
};

struct in6_addr {
    union __anon_0x00000279 __in6_union;
};

typedef BI_db_func BI_db_close;
typedef BI_db_func BI_db_destroy;
typedef BI_db_func BI_db_init;
typedef BI_db_func BI_db_open;
union sr_u {
    rep_search_s sru_search;
    rep_sasl_s sru_sasl;
    rep_extended_s sru_extended;
};

struct MatchingRule {
    LDAPMatchingRule smr_mrule;
    MatchingRuleUse * smr_mru;
    struct berval smr_str;
    struct berval smr_bvoid;
    slap_mask_t smr_usage;
    Syntax * smr_syntax;
    slap_mr_convert_func * smr_convert;
    slap_mr_normalize_func * smr_normalize;
    slap_mr_match_func * smr_match;
    slap_mr_indexer_func * smr_indexer;
    slap_mr_filter_func * smr_filter;
    Syntax * * smr_compat_syntaxes;
    MatchingRule * smr_associated;
    struct __anon_0x00001de4 smr_next;
};

struct slap_mrule_defs_rec {
    char * mrd_desc;
    slap_mask_t mrd_usage;
    char * * mrd_compat_syntaxes;
    slap_mr_convert_func * mrd_convert;
    slap_mr_normalize_func * mrd_normalize;
    slap_mr_match_func * mrd_match;
    slap_mr_indexer_func * mrd_indexer;
    slap_mr_filter_func * mrd_filter;
    char * mrd_associated;
};

struct slap_schema_ad_map {
    char * ssam_name;
    char * ssam_defn;
    AttributeTypeSchemaCheckFN * ssam_check;
    slap_mask_t ssam_flags;
    slap_syntax_validate_func * ssam_syn_validate;
    slap_syntax_transform_func * ssam_syn_pretty;
    slap_mr_convert_func * ssam_mr_convert;
    slap_mr_normalize_func * ssam_mr_normalize;
    slap_mr_match_func * ssam_mr_match;
    slap_mr_indexer_func * ssam_mr_indexer;
    slap_mr_filter_func * ssam_mr_filter;
    size_t ssam_offset;
};

typedef int (*LDAPDN_rewrite_func)(LDAPDN, unsigned int, void *);
struct OpExtraDB {
    OpExtra oe;
    BackendDB * oe_db;
};

struct OpExtraSync {
    OpExtra oe;
    syncinfo_t * oe_si;
};

struct relay_callback {
    slap_callback rcb_sc;
    BackendDB * rcb_bd;
};

struct slapd_map_data {
    struct berval base;
    struct berval filter;
    AttributeName attrs[2];
    int scope;
};

struct slap_dn_access {
    AuthorizationInformation a_dnauthz;
    slap_style_t a_style;
    int a_level;
    int a_self_level;
    AttributeDescription * a_at;
    int a_self;
    int a_expand;
};

struct Modifications {
    Modification sml_mod;
    Modifications * sml_next;
};

struct Connection {
    enum sc_struct_state c_struct_state;
    enum sc_conn_state c_conn_state;
    int c_conn_idx;
    ber_socket_t c_sd;
    const char * c_close_reason;
    ldap_pvt_thread_mutex_t c_mutex;
    Sockbuf * c_sb;
    time_t c_starttime;
    time_t c_activitytime;
    long unsigned int c_connid;
    struct berval c_peer_domain;
    struct berval c_peer_name;
    Listener * c_listener;
    struct berval c_sasl_bind_mech;
    struct berval c_sasl_dn;
    struct berval c_sasl_authz_dn;
    Backend * c_authz_backend;
    void * c_authz_cookie;
    AuthorizationInformation c_authz;
    ber_int_t c_protocol;
    struct c_o c_ops;
    struct c_po c_pending_ops;
    ldap_pvt_thread_mutex_t c_write1_mutex;
    ldap_pvt_thread_cond_t c_write1_cv;
    ldap_pvt_thread_mutex_t c_write2_mutex;
    ldap_pvt_thread_cond_t c_write2_cv;
    BerElement * c_currentber;
    int c_writers;
    char c_writing;
    char c_sasl_bind_in_progress;
    char c_writewaiter;
    char c_sasl_layers;
    char c_sasl_done;
    void * c_sasl_authctx;
    void * c_sasl_sockctx;
    void * c_sasl_extra;
    Operation * c_sasl_bindop;
    PagedResultsState c_pagedresults_state;
    long int c_n_ops_received;
    long int c_n_ops_executing;
    long int c_n_ops_pending;
    long int c_n_ops_completed;
    long int c_n_get;
    long int c_n_read;
    long int c_n_write;
    void * c_extensions;
    ldap_pvt_thread_start_t * c_clientfunc;
    void * c_clientarg;
    SEND_LDAP_RESULT * c_send_ldap_result;
    SEND_SEARCH_ENTRY * c_send_search_entry;
    SEND_SEARCH_REFERENCE * c_send_search_reference;
    SEND_LDAP_EXTENDED * c_send_ldap_extended;
    SEND_LDAP_INTERMEDIATE * c_send_ldap_intermediate;
};

union __anon_0x0000a0ae {
    int v_int;
    unsigned int v_uint;
    long int v_long;
    size_t v_ulong;
    ber_len_t v_ber_t;
    char * v_string;
    struct berval v_bv;
    struct __anon_0x0000a08a v_dn;
    AttributeDescription * v_ad;
};

union __anon_0x0001aa0d {
    int v_int;
    unsigned int v_uint;
    long int v_long;
    size_t v_ulong;
    ber_len_t v_ber_t;
    char * v_string;
    struct berval v_bv;
    struct __anon_0x0001a9e9 v_dn;
    AttributeDescription * v_ad;
};

union __anon_0x0004fd9b {
    int v_int;
    unsigned int v_uint;
    long int v_long;
    size_t v_ulong;
    ber_len_t v_ber_t;
    char * v_string;
    struct berval v_bv;
    struct __anon_0x0004fd77 v_dn;
    AttributeDescription * v_ad;
};

union __anon_0x000df124 {
    int v_int;
    unsigned int v_uint;
    long int v_long;
    size_t v_ulong;
    ber_len_t v_ber_t;
    char * v_string;
    struct berval v_bv;
    struct __anon_0x000df100 v_dn;
    AttributeDescription * v_ad;
};

union __anon_0x001053b6 {
    int v_int;
    unsigned int v_uint;
    long int v_long;
    size_t v_ulong;
    ber_len_t v_ber_t;
    char * v_string;
    struct berval v_bv;
    struct __anon_0x00105392 v_dn;
    AttributeDescription * v_ad;
};

union __anon_0x00136fd2 {
    int v_int;
    unsigned int v_uint;
    long int v_long;
    size_t v_ulong;
    ber_len_t v_ber_t;
    char * v_string;
    struct berval v_bv;
    struct __anon_0x00136fae v_dn;
    AttributeDescription * v_ad;
};

union __anon_0x00146866 {
    int v_int;
    unsigned int v_uint;
    long int v_long;
    size_t v_ulong;
    ber_len_t v_ber_t;
    char * v_string;
    struct berval v_bv;
    struct __anon_0x00146842 v_dn;
    AttributeDescription * v_ad;
};

union __anon_0x0014cde8 {
    int v_int;
    unsigned int v_uint;
    long int v_long;
    size_t v_ulong;
    ber_len_t v_ber_t;
    char * v_string;
    struct berval v_bv;
    struct __anon_0x0014cdc4 v_dn;
    AttributeDescription * v_ad;
};

union __anon_0x00186de8 {
    int v_int;
    unsigned int v_uint;
    long int v_long;
    size_t v_ulong;
    ber_len_t v_ber_t;
    char * v_string;
    struct berval v_bv;
    struct __anon_0x00186dc4 v_dn;
    AttributeDescription * v_ad;
};

union __anon_0x0018eccc {
    int v_int;
    unsigned int v_uint;
    long int v_long;
    size_t v_ulong;
    ber_len_t v_ber_t;
    char * v_string;
    struct berval v_bv;
    struct __anon_0x0018eca8 v_dn;
    AttributeDescription * v_ad;
};

union __anon_0x00197b94 {
    int v_int;
    unsigned int v_uint;
    long int v_long;
    size_t v_ulong;
    ber_len_t v_ber_t;
    char * v_string;
    struct berval v_bv;
    struct __anon_0x00197b70 v_dn;
    AttributeDescription * v_ad;
};

struct glueinfo {
    int gi_nodes;
    struct berval gi_pdn;
    gluenode gi_n[1];
};

struct pw_slist {
    struct pw_slist * next;
    struct pw_scheme s;
};

struct req_pwdexop_s {
    struct req_extended_s rs_extended;
    struct berval rs_old;
    struct berval rs_new;
    Modifications * rs_mods;
    Modifications * * rs_modtail;
};

struct sync_control {
    struct sync_cookie sr_state;
    int sr_rhint;
};

struct syncinfo_s {
    struct syncinfo_s * si_next;
    BackendDB * si_be;
    BackendDB * si_wbe;
    struct re_s * si_re;
    int si_rid;
    char si_ridtxt[8];
    slap_bindconf si_bindconf;
    struct berval si_base;
    struct berval si_logbase;
    struct berval si_filterstr;
    struct berval si_logfilterstr;
    Filter * si_filter;
    Filter * si_logfilter;
    struct berval si_contextdn;
    int si_scope;
    int si_attrsonly;
    char * si_anfile;
    AttributeName * si_anlist;
    AttributeName * si_exanlist;
    char * * si_attrs;
    char * * si_exattrs;
    int si_allattrs;
    int si_allopattrs;
    int si_schemachecking;
    int si_type;
    int si_ctype;
    time_t si_interval;
    time_t * si_retryinterval;
    int * si_retrynum_init;
    int * si_retrynum;
    struct sync_cookie si_syncCookie;
    cookie_state * si_cookieState;
    int si_cookieAge;
    int si_manageDSAit;
    int si_slimit;
    int si_tlimit;
    int si_refreshDelete;
    int si_refreshPresent;
    int si_refreshDone;
    int si_syncdata;
    int si_logstate;
    int si_got;
    int si_strict_refresh;
    int si_too_old;
    int si_is_configdb;
    ber_int_t si_msgid;
    Avlnode * si_presentlist;
    LDAP * si_ld;
    Connection * si_conn;
    struct np si_nonpresentlist;
    struct rewrite_info * si_rewrite;
    struct berval si_suffixm;
    ldap_pvt_thread_mutex_t si_mutex;
};

struct __anon_0x0000a26d {
    ConfigFile * cb_config;
    CfEntryInfo * cb_root;
    BackendDB cb_db;
    int cb_got_ldif;
    int cb_use_ldif;
};

struct __anon_0x001abc26 {
    union __anon_0x001abbbb __first;
    union __anon_0x001abc07 __second;
};

struct sockaddr_in {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;
    uint8_t sin_zero[8];
};

union __anon_0x000021e1 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00008373 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00018e8b {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00020d3e {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0002883e {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0002fa63 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x000342dd {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0003a4d0 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0003f797 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00043cf5 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0004863a {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0004e2fe {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00054f98 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00058b36 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0005f530 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00063922 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x000697b1 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0006e08c {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x000733a8 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00077152 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0007bfb7 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00080c93 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00084596 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x000886d1 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0008bd1e {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0008fbea {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0009528f {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0009cbf3 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x000a0a2b {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x000abe08 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x000b1268 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x000b7725 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x000bbe75 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x000c0c32 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x000c4e1a {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x000ca285 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x000d80a9 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x000dd8a4 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x000e266f {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x000e85ac {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x000edfc0 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x000f2f34 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x000f7a94 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x000fd554 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00103b36 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00108175 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0010cfdf {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00111425 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x001161f0 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0011aa37 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0011eab9 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00124066 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x001296d6 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0012cef8 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00130f18 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00134f68 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00144d8d {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0014b3e4 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00151c22 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0015604e {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0015a525 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0015e8c3 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0016319a {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x001674b7 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0016cc00 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0017067d {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00174ad6 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0017861f {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0017c838 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00180e4c {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00185428 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0018d3c7 {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x0019161a {
    struct in6_addr ax6;
    long unsigned int ax;
};

union __anon_0x00195faf {
    struct in6_addr ax6;
    long unsigned int ax;
};

struct sockaddr_in6 {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
};

struct BackendInfo {
    char * bi_type;
    BI_init * bi_init;
    BI_config * bi_config;
    BI_open * bi_open;
    BI_close * bi_close;
    BI_destroy * bi_destroy;
    BI_db_init * bi_db_init;
    BI_db_config * bi_db_config;
    BI_db_open * bi_db_open;
    BI_db_close * bi_db_close;
    BI_db_destroy * bi_db_destroy;
    BI_op_bind * bi_op_bind;
    BI_op_unbind * bi_op_unbind;
    BI_op_search * bi_op_search;
    BI_op_compare * bi_op_compare;
    BI_op_modify * bi_op_modify;
    BI_op_modrdn * bi_op_modrdn;
    BI_op_add * bi_op_add;
    BI_op_delete * bi_op_delete;
    BI_op_abandon * bi_op_abandon;
    BI_op_extended * bi_extended;
    BI_op_cancel * bi_op_cancel;
    BI_operational * bi_operational;
    BI_chk_referrals * bi_chk_referrals;
    BI_chk_controls * bi_chk_controls;
    BI_entry_get_rw * bi_entry_get_rw;
    BI_entry_release_rw * bi_entry_release_rw;
    BI_has_subordinates * bi_has_subordinates;
    BI_access_allowed * bi_access_allowed;
    BI_acl_group * bi_acl_group;
    BI_acl_attribute * bi_acl_attribute;
    BI_connection_init * bi_connection_init;
    BI_connection_destroy * bi_connection_destroy;
    BI_tool_entry_open * bi_tool_entry_open;
    BI_tool_entry_close * bi_tool_entry_close;
    BI_tool_entry_first * bi_tool_entry_first;
    BI_tool_entry_first_x * bi_tool_entry_first_x;
    BI_tool_entry_next * bi_tool_entry_next;
    BI_tool_entry_get * bi_tool_entry_get;
    BI_tool_entry_put * bi_tool_entry_put;
    BI_tool_entry_reindex * bi_tool_entry_reindex;
    BI_tool_sync * bi_tool_sync;
    BI_tool_dn2id_get * bi_tool_dn2id_get;
    BI_tool_entry_modify * bi_tool_entry_modify;
    slap_mask_t bi_flags;
    char * * bi_controls;
    char bi_ctrls[33];
    unsigned int bi_nDB;
    struct ConfigOCs * bi_cf_ocs;
    char * * bi_obsolete_names;
    void * bi_extra;
    void * bi_private;
    struct __anon_0x000030a4 bi_next;
};

struct SlapReply {
    slap_reply_t sr_type;
    ber_tag_t sr_tag;
    ber_int_t sr_msgid;
    ber_int_t sr_err;
    const char * sr_matched;
    const char * sr_text;
    BerVarray sr_ref;
    LDAPControl * * sr_ctrls;
    union sr_u sr_un;
    slap_mask_t sr_flags;
};

struct config_args_s {
    int argc;
    char * * argv;
    int argv_size;
    char * line;
    char * tline;
    const char * fname;
    int lineno;
    char log[4115];
    ConfigReply reply;
    int depth;
    int valx;
    union __anon_0x0000a0ae values;
    BerVarray rvalue_vals;
    BerVarray rvalue_nvals;
    int op;
    int type;
    Operation * ca_op;
    BackendDB * be;
    BackendInfo * bi;
    Entry * ca_entry;
    void * ca_private;
    ConfigDriver * cleanup;
    ConfigType table;
};

union OpRequest {
    req_add_s oq_add;
    req_bind_s oq_bind;
    req_compare_s oq_compare;
    req_modify_s oq_modify;
    req_modrdn_s oq_modrdn;
    req_search_s oq_search;
    req_abandon_s oq_abandon;
    req_abandon_s oq_cancel;
    req_extended_s oq_extended;
    req_pwdexop_s oq_pwdexop;
};

union __anon_0x001abd09 {
    char __pad[116];
    struct __anon_0x001abc26 __si_common;
    struct __anon_0x001abc87 __sigfault;
    struct __anon_0x001abcbb __sigpoll;
    struct __anon_0x001abcdc __sigsys;
};

struct Access {
    slap_control_t a_type;
    slap_mask_t a_access_mask;
    slap_dn_access a_dn;
    slap_dn_access a_realdn;
    slap_style_t a_peername_style;
    struct berval a_peername_pat;
    union __anon_0x000021e1 ax_peername_addr;
    union __anon_0x000021e1 ax_peername_mask;
    int a_peername_port;
    slap_style_t a_sockname_style;
    struct berval a_sockname_pat;
    slap_style_t a_domain_style;
    struct berval a_domain_pat;
    int a_domain_expand;
    slap_style_t a_sockurl_style;
    struct berval a_sockurl_pat;
    slap_style_t a_set_style;
    struct berval a_set_pat;
    slap_style_t a_group_style;
    struct berval a_group_pat;
    ObjectClass * a_group_oc;
    AttributeDescription * a_group_at;
    struct Access * a_next;
};

union Sockaddr {
    struct sockaddr sa_addr;
    struct sockaddr_in sa_in_addr;
    struct sockaddr_storage sa_storage;
    struct sockaddr_in6 sa_in6_addr;
    struct sockaddr_un sa_un_addr;
};

struct slap_overinfo {
    BackendInfo oi_bi;
    BackendInfo * oi_orig;
    BackendDB * oi_origdb;
    struct slap_overinst * oi_list;
};

struct slap_overinst {
    BackendInfo on_bi;
    slap_response * on_response;
    struct slap_overinfo * on_info;
    struct slap_overinst * on_next;
};

struct Operation {
    Opheader * o_hdr;
    ber_tag_t o_tag;
    time_t o_time;
    int o_tincr;
    BackendDB * o_bd;
    struct berval o_req_dn;
    struct berval o_req_ndn;
    OpRequest o_request;
    volatile sig_atomic_t o_abandon;
    volatile sig_atomic_t o_cancel;
    GroupAssertion * o_groups;
    char o_do_not_cache;
    char o_is_auth_check;
    char o_dont_replicate;
    slap_access_t o_acl_priv;
    char o_nocaching;
    char o_delete_glue_parent;
    char o_no_schema_check;
    char o_no_subordinate_glue;
    char o_ctrlflag[32];
    void * * o_controls;
    AuthorizationInformation o_authz;
    BerElement * o_ber;
    BerElement * o_res_ber;
    slap_callback * o_callback;
    LDAPControl * * o_ctrls;
    struct berval o_csn;
    void * o_private;
    struct o_e o_extra;
    struct __anon_0x0000359a o_next;
};

struct __anon_0x001abd60 {
    int si_signo;
    int si_errno;
    int si_code;
    union __anon_0x001abd09 __si_fields;
};

struct Listener {
    struct berval sl_url;
    struct berval sl_name;
    mode_t sl_perms;
    int sl_mute;
    int sl_busy;
    ber_socket_t sl_sd;
    Sockaddr sl_sa;
};

struct OperationBuffer {
    Operation ob_op;
    Opheader ob_hdr;
    void * ob_controls[32];
};

struct SyncOperationBuffer {
    Operation sob_op;
    Opheader sob_hdr;
    OpExtra sob_oe;
    AttributeName sob_extra;
};


/* ── exported function declarations ──────────────────────── */

extern struct berval * UTF8bvnormalize(struct berval * bv, struct berval * newbv, unsigned int flags, void * ctx);
extern int UTF8bvnormcmp(struct berval * bv1, struct berval * bv2, unsigned int flags, void * ctx);
extern int UUIDNormalize(slap_mask_t usage, Syntax * syntax, MatchingRule * mr, struct berval * val, struct berval * normalized, void * ctx);
extern void *__adddf3(/* signature unavailable */);
extern void *__aeabi_cdcmpeq(/* signature unavailable */);
extern void *__aeabi_drsub(/* signature unavailable */);
extern void *__aeabi_f2d(/* signature unavailable */);
extern void *__aeabi_i2d(/* signature unavailable */);
extern void *__aeabi_ldiv0(/* signature unavailable */);
extern void *__aeabi_uidivmod(/* signature unavailable */);
extern void *__aeabi_ul2d(/* signature unavailable */);
extern void *__divdf3(/* signature unavailable */);
extern void *__divsi3(/* signature unavailable */);
extern void *__eqdf2(/* signature unavailable */);
extern void *__extendsfdf2(/* signature unavailable */);
extern DItype __fixdfdi(DFtype a);
extern void *__fixdfsi(/* signature unavailable */);
extern UDItype __fixunsdfdi(DFtype a);
extern void *__fixunsdfsi(/* signature unavailable */);
extern void *__floatdidf(/* signature unavailable */);
extern void *__floatsidf(/* signature unavailable */);
extern void *__floatundidf(/* signature unavailable */);
extern void *__floatunsidf(/* signature unavailable */);
extern void *__gedf2(/* signature unavailable */);
extern void *__gtdf2(/* signature unavailable */);
extern void *__ledf2(/* signature unavailable */);
extern void *__ltdf2(/* signature unavailable */);
extern void *__muldf3(/* signature unavailable */);
extern void *__nedf2(/* signature unavailable */);
extern void *__subdf3(/* signature unavailable */);
extern void *__udivsi3(/* signature unavailable */);
extern void *_fini(/* signature unavailable */);
extern void *_init(/* signature unavailable */);
extern void *_start(/* signature unavailable */);
extern void *_start_c(/* signature unavailable */);
extern char * access2str(slap_access_t access);
extern int access_allowed_mask(Operation *, Entry *, AttributeDescription *, struct berval *, slap_access_t, AccessControlState *, slap_mask_t *);
extern char * accessmask2str(slap_mask_t, char *, int);
extern void acl_append(AccessControl * * l, AccessControl * a, int pos);
extern int acl_check_modlist(Operation *, Entry *, Modifications *);
extern void acl_destroy(AccessControl * a);
extern void acl_free(AccessControl * a);
extern int acl_get_part(struct berval * list, int ix, char sep, struct berval * bv);
extern int acl_init(void);
extern int acl_match_set(struct berval * subj, Operation * op, Entry * e, struct berval * default_set_attribute);
extern BerVarray acl_set_gather(SetCookie * cookie, struct berval * name, AttributeDescription * desc);
extern BerVarray acl_set_gather2(SetCookie * cookie, struct berval * name, AttributeDescription * desc);
extern int acl_string_expand(struct berval * bv, struct berval * pat, struct berval * dn_matches, struct berval * val_matches, AclRegexMatches * matches);
extern void acl_unparse(AccessControl * a, struct berval * bv);
extern int ad_define_option(const char * name, const char * fname, int lineno);
extern void ad_destroy(AttributeDescription *);
extern AttributeDescription * ad_find_tags(AttributeType * type, struct berval * tags);
extern int ad_inlist(AttributeDescription *, AttributeName *);
extern int ad_keystring(struct berval * bv);
extern MatchingRule * ad_mr(AttributeDescription * ad, unsigned int usage);
extern void ad_unparse_options(BerVarray * res);
extern int an_find(AttributeName * a, struct berval * s);
extern char * * anlist2attrs(AttributeName *);
extern char * * anlist2charray(AttributeName * an, int dup);
extern char * * anlist2charray_x(AttributeName * an, int dup, void * ctx);
extern void anlist_free(AttributeName * an, int freename, void * ctx);
extern char * anlist_unparse(AttributeName *, char *, ber_len_t);
extern int asserted_value_validate_normalize(AttributeDescription *, MatchingRule *, unsigned int, struct berval *, struct berval *, const char * *, void *);
extern int at_add(LDAPAttributeType * at, int user, AttributeType * * rsat, AttributeType * prev, const char * * err);
extern int at_append_to_list(AttributeType *, AttributeType * * *);
extern AttributeType * at_bvfind(struct berval * name);
extern void at_delete(AttributeType * at);
extern int at_delete_from_list(int, AttributeType * * *);
extern void at_destroy(void);
extern AttributeType * at_find(const char *);
extern int at_find_in_list(AttributeType *, AttributeType * *);
extern int at_next(AttributeType * *);
extern int at_schema_info(Entry * e);
extern int at_start(AttributeType * *);
extern const char * at_syntax(AttributeType *);
extern void at_unparse(BerVarray * res, AttributeType * start, AttributeType * end, int sys);
extern Attribute * attr_alloc(AttributeDescription *);
extern void attr_clean(Attribute * a);
extern int attr_delete(Attribute * *, AttributeDescription *);
extern int attr_destroy(void);
extern Attribute * attr_dup(Attribute * a);
extern Attribute * attr_find(Attribute *, AttributeDescription *);
extern void attr_free(Attribute *);
extern int attr_init(void);
extern int attr_merge(Entry *, AttributeDescription *, BerVarray, BerVarray);
extern int attr_merge_normalize(Entry * e, AttributeDescription * desc, BerVarray vals, void * memctx);
extern int attr_merge_normalize_one(Entry *, AttributeDescription *, struct berval *, void *);
extern int attr_merge_one(Entry *, AttributeDescription *, struct berval *, struct berval *);
extern int attr_normalize(AttributeDescription * desc, BerVarray vals, BerVarray * nvalsp, void * memctx);
extern int attr_normalize_one(AttributeDescription * desc, struct berval * val, struct berval * nval, void * memctx);
extern int attr_prealloc(int num);
extern int attr_valadd(Attribute *, BerVarray, BerVarray, int);
extern int attr_valfind(Attribute *, unsigned int, struct berval *, unsigned int *, void *);
extern Attribute * attrs_alloc(int);
extern Attribute * attrs_dup(Attribute *);
extern Attribute * attrs_find(Attribute *, AttributeDescription *);
extern void attrs_free(Attribute *);
extern int authzNormalize(slap_mask_t usage, Syntax * syntax, MatchingRule * mr, struct berval * val, struct berval * normalized, void * ctx);
extern int authzPretty(Syntax * syntax, struct berval * val, struct berval * out, void * ctx);
extern int authzValidate(Syntax * syntax, struct berval * in);
extern void ava_free(Operation * op, AttributeAssertion * ava, int freeit);
extern int avl_apply(Avlnode * root, AVL_APPLY fn, void * arg, int stopflag, int type);
extern void * avl_delete(Avlnode * * root, void * data, AVL_CMP fcmp);
extern int avl_dup_error(void * left, void * right);
extern int avl_dup_ok(void * left, void * right);
extern void * avl_find(Avlnode * root, const void * data, AVL_CMP fcmp);
extern Avlnode * avl_find2(Avlnode * root, const void * data, AVL_CMP fcmp);
extern void * avl_find_lin(Avlnode * root, const void * data, AVL_CMP fcmp);
extern int avl_free(Avlnode * root, AVL_FREE dfree);
extern void * avl_getfirst(Avlnode * root);
extern void * avl_getnext(void);
extern int avl_insert(Avlnode * * root, void * data, AVL_CMP fcmp, AVL_DUP fdup);
extern int avl_prefixapply(Avlnode * root, void * data, AVL_CMP fmatch, void * marg, AVL_CMP fcmp, void * carg, int stopflag);
extern int backend_access(Operation *, Entry *, struct berval *, AttributeDescription *, struct berval *, slap_access_t, slap_mask_t *);
extern int backend_add(BackendInfo * aBackendInfo);
extern int backend_attribute(Operation *, Entry *, struct berval *, AttributeDescription *, BerVarray *, slap_access_t);
extern int backend_check_controls(Operation *, SlapReply *);
extern int backend_check_referrals(Operation *, SlapReply *);
extern int backend_check_restrictions(Operation *, SlapReply *, struct berval *);
extern int backend_connection_destroy(Connection * conn);
extern int backend_connection_init(Connection * conn);
extern BackendDB * backend_db_init(const char * type, BackendDB * b0, int idx, ConfigReply * cr);
extern void backend_db_insert(BackendDB * be, int idx);
extern void backend_db_move(BackendDB * be, int idx);
extern int backend_destroy(void);
extern void backend_destroy_one(BackendDB * bd, int dynamic);
extern int backend_group(Operation *, Entry *, struct berval *, struct berval *, ObjectClass *, AttributeDescription *);
extern BackendInfo * backend_info(const char * type);
extern int backend_init(void);
extern int backend_num(Backend * be);
extern int backend_operational(Operation *, SlapReply *);
extern int backend_shutdown(Backend *);
extern int backend_startup(Backend *);
extern int backend_startup_one(Backend *, struct config_reply_s *);
extern void backend_stopdown_one(BackendDB * bd);
extern ID backend_tool_entry_first(BackendDB *);
extern int backend_unbind(Operation *, SlapReply *);
extern void be_db_close(void);
extern int be_entry_get_rw(Operation *, struct berval *, ObjectClass *, AttributeDescription *, int, Entry * *);
extern int be_entry_release_rw(Operation *, Entry *, int);
extern int be_isroot(Operation *);
extern int be_isroot_dn(Backend *, struct berval *);
extern int be_isroot_pw(Operation * op);
extern int be_issubordinate(Backend *, struct berval *);
extern int be_issuffix(Backend *, struct berval *);
extern int be_isupdate_dn(Backend * be, struct berval * ndn);
extern struct berval * be_root_dn(Backend * be);
extern int be_rootdn_bind(Operation *, SlapReply *);
extern int be_shadow_update(Operation * op);
extern int be_slurp_update(Operation *);
extern void bindconf_free(slap_bindconf *);
extern int bindconf_parse(const char *, slap_bindconf *);
extern void bindconf_tls_defaults(slap_bindconf * bc);
extern int bindconf_tls_parse(const char * word, slap_bindconf * bc);
extern int bindconf_tls_unparse(slap_bindconf * bc, struct berval * bv);
extern int bindconf_unparse(slap_bindconf *, struct berval *);
extern void build_new_dn(struct berval *, struct berval *, struct berval *, void *);
extern int bverb_to_mask(struct berval * bword, slap_verbmasks * v);
extern int cancel_extop(Operation * op, SlapReply * rs);
extern void * ch_calloc(ber_len_t, ber_len_t);
extern void ch_free(void *);
extern void * ch_malloc(ber_len_t);
extern void * ch_realloc(void *, ber_len_t);
extern char * ch_strdup(const char *);
extern int config_add_vals(ConfigTable *, ConfigArgs *);
extern int config_back_entry_get(Operation * op, struct berval * ndn, ObjectClass * oc, AttributeDescription * at, int rw, Entry * * ent);
extern int config_back_initialize(BackendInfo *);
extern Entry * config_build_entry(Operation * op, SlapReply * rs, CfEntryInfo * parent, ConfigArgs * c, struct berval * rdn, ConfigOCs * main, ConfigOCs * extra);
extern Listener * config_check_my_url(const char *, LDAPURLDesc *);
extern int config_check_vals(ConfigTable * Conf, ConfigArgs * c, int check_only);
extern int config_del_vals(ConfigTable * cf, ConfigArgs * c);
extern void config_destroy(void);
extern int config_entry_release(Operation * op, Entry * e, int rw);
extern ConfigTable * config_find_keyword(ConfigTable *, ConfigArgs *);
extern int config_fp_parse_line(ConfigArgs * c);
extern int config_generic_wrapper(Backend *, const char *, int, int, char * *);
extern int config_get_vals(ConfigTable * cf, ConfigArgs * c);
extern int config_parse_add(ConfigTable * ct, ConfigArgs * c, int valx);
extern void config_parse_ldif(ConfigArgs * c);
extern int config_parse_vals(ConfigTable * ct, ConfigArgs * c, int valx);
extern int config_register_schema(ConfigTable *, ConfigOCs *);
extern int config_set_vals(ConfigTable * Conf, ConfigArgs * c);
extern int config_shadow(ConfigArgs *, slap_mask_t);
extern void connection2anonymous(Connection *);
extern void connection_assign_nextid(Connection * conn);
extern void connection_client_enable(Connection *);
extern Connection * connection_client_setup(ber_socket_t, ldap_pvt_thread_start_t *, void *);
extern void connection_client_stop(Connection *);
extern void connection_closing(Connection *, const char *);
extern void connection_done(Connection * c);
extern void connection_fake_init(Connection *, OperationBuffer *, void *);
extern void connection_fake_init2(Connection *, OperationBuffer *, void *, int);
extern Connection * connection_first(ber_socket_t * index);
extern Connection * connection_init(ber_socket_t s, Listener * listener, const char * dnsname, const char * peername, int flags, slap_ssf_t ssf, struct berval * authid);
extern Connection * connection_next(Connection * c, ber_socket_t * index);
extern int connection_read_activate(ber_socket_t s);
extern const char * connection_state2str(int state);
extern int connection_valid(Connection *);
extern int connection_write(ber_socket_t s);
extern int connections_destroy(void);
extern void connections_drop(void);
extern int connections_init(void);
extern long unsigned int connections_nextid(void);
extern int connections_shutdown(void);
extern int connections_timeout_idle(time_t now);
extern void controls_destroy(void);
extern int controls_root_dse_info(Entry *);
extern int cr_add(LDAPContentRule *, int, ContentRule * *, const char * *);
extern ContentRule * cr_bvfind(struct berval * crname);
extern void cr_destroy(void);
extern ContentRule * cr_find(const char *);
extern int cr_schema_info(Entry *);
extern void cr_unparse(BerVarray * res, ContentRule * start, ContentRule * end, int sys);
extern unsigned int crc32(const void * vbuf, int len);
extern int dnExtractRdn(struct berval * dn, struct berval * rdn, void * ctx);
extern int dnIsOneLevelRDN(struct berval * rdn);
extern int dnIsSuffix(const struct berval *, const struct berval *);
extern int dnIsSuffixScope(struct berval *, struct berval *, int);
extern int dnIsWithinScope(struct berval * ndn, struct berval * nbase, int scope);
extern int dnMatch(int *, slap_mask_t, Syntax *, MatchingRule *, struct berval *, void *);
extern int dnNormalize(slap_mask_t, Syntax *, MatchingRule *, struct berval *, struct berval *, void *);
extern void dnParent(struct berval *, struct berval *);
extern int dnPretty(Syntax *, struct berval *, struct berval *, void *);
extern int dnPrettyNormal(Syntax *, struct berval *, struct berval *, struct berval *, void *);
extern int dnPrettyNormalDN(Syntax *, struct berval *, LDAPDN *, int, void *);
extern void dnRdn(struct berval *, struct berval *);
extern int dnRelativeMatch(int *, slap_mask_t, Syntax *, MatchingRule *, struct berval *, void *);
extern int dnValidate(Syntax *, struct berval *);
extern int dnX509normalize(void *, struct berval *);
extern ber_len_t dn_rdnlen(Backend *, struct berval *);
extern int do_abandon(Operation * op, SlapReply * rs);
extern int do_add(Operation * op, SlapReply * rs);
extern int do_bind(Operation * op, SlapReply * rs);
extern int do_compare(Operation * op, SlapReply * rs);
extern int do_delete(Operation * op, SlapReply * rs);
extern int do_extended(Operation * op, SlapReply * rs);
extern int do_modify(Operation * op, SlapReply * rs);
extern int do_modrdn(Operation * op, SlapReply * rs);
extern int do_search(Operation * op, SlapReply * rs);
extern int do_unbind(Operation * op, SlapReply * rs);
extern int dscompare(const char *, const char *, char);
extern char * entry2str(Entry *, int *);
extern char * entry2str_wrap(Entry *, int *, ber_len_t);
extern Entry * entry_alloc(void);
extern void entry_clean(Entry * e);
extern int entry_cmp(Entry * e1, Entry * e2);
extern int entry_decode(EntryHeader * eh, Entry * * e);
extern int entry_decode_dn(EntryHeader * eh, struct berval * dn, struct berval * ndn);
extern int entry_destroy(void);
extern int entry_dn_cmp(const void * v_e1, const void * v_e2);
extern Entry * entry_dup(Entry *);
extern Entry * entry_dup2(Entry * dest, Entry * source);
extern Entry * entry_dup_bv(Entry * e);
extern int entry_encode(Entry * e, struct berval * bv);
extern ber_len_t entry_flatsize(Entry *, int);
extern void entry_free(Entry *);
extern int entry_header(EntryHeader * eh);
extern int entry_id_cmp(const void * v_e1, const void * v_e2);
extern void entry_info_destroy(void);
extern int entry_info_register(SLAP_ENTRY_INFO_FN func, void * arg);
extern int entry_info_unregister(SLAP_ENTRY_INFO_FN func, void * arg);
extern int entry_init(void);
extern void entry_partsize(Entry * e, ber_len_t * plen, int * pnattrs, int * pnvals, int norm);
extern int entry_prealloc(int num);
extern int entry_schema_check(Operation *, Entry *, Attribute *, int, int, Attribute * *, const char * *, char *, size_t);
extern int enum_to_verb(slap_verbmasks *, slap_mask_t, struct berval *);
extern int exop_root_dse_info(Entry *);
extern int extops_init(void);
extern int extops_kill(void);
extern int fe_access_allowed(Operation *, Entry *, AttributeDescription *, struct berval *, slap_access_t, AccessControlState *, slap_mask_t *);
extern int fe_acl_attribute(Operation *, Entry *, struct berval *, AttributeDescription *, BerVarray *, slap_access_t);
extern int fe_acl_group(Operation *, Entry *, struct berval *, struct berval *, ObjectClass *, AttributeDescription *);
extern int fe_aux_operational(Operation *, SlapReply *);
extern int fe_extended(Operation *, SlapReply *);
extern int fe_op_abandon(Operation *, SlapReply *);
extern int fe_op_add(Operation *, SlapReply *);
extern int fe_op_bind(Operation *, SlapReply *);
extern int fe_op_bind_success(Operation * op, SlapReply * rs);
extern int fe_op_compare(Operation *, SlapReply *);
extern int fe_op_delete(Operation *, SlapReply *);
extern int fe_op_modify(Operation *, SlapReply *);
extern int fe_op_modrdn(Operation *, SlapReply *);
extern int fe_op_search(Operation *, SlapReply *);
extern AttributeName * file2anlist(AttributeName *, const char *, const char *);
extern void filter2bv(Filter *, struct berval *);
extern void filter2bv_undef(Filter * f, int noundef, struct berval * fstr);
extern void filter2bv_undef_x(Operation * op, Filter * f, int noundef, struct berval * fstr);
extern void filter2bv_x(Operation *, Filter *, struct berval *);
extern void filter_destroy(void);
extern Filter * filter_dup(Filter *, void *);
extern void filter_free(Filter *);
extern void filter_free_x(Operation *, Filter *, int);
extern int filter_init(void);
extern int filter_matched_values(Operation * op, Attribute * a, char * * * e_flags);
extern int frontend_init(void);
extern int generalizedTimeFilter(slap_mask_t use, slap_mask_t flags, Syntax * syntax, MatchingRule * mr, struct berval * prefix, void * assertedValue, BerVarray * keysp, void * ctx);
extern int generalizedTimeIndexer(slap_mask_t use, slap_mask_t flags, Syntax * syntax, MatchingRule * mr, struct berval * prefix, BerVarray values, BerVarray * keysp, void * ctx);
extern int get_alias_dn(Entry * e, struct berval * ndn, int * err, const char * * text);
extern int get_ava(Operation * op, BerElement * ber, Filter * f, unsigned int usage, const char * * text);
extern int get_ctrls(Operation *, SlapReply *, int);
extern BerVarray get_entry_referrals(Operation *, Entry *);
extern int get_filter(Operation *, BerElement *, Filter * *, const char * *);
extern int get_mra(Operation * op, BerElement * ber, Filter * f, const char * * text);
extern int get_supported_controls(char * * * ctrloidsp, slap_mask_t * * ctrlmasks);
extern struct berval * get_supported_extop(int index);
extern int get_vrFilter(Operation *, BerElement *, ValuesReturnFilter * *, const char * *);
extern int glue_sub_add(BackendDB * be, int advert, int online);
extern int glue_sub_attach(int);
extern int glue_sub_del(BackendDB * b0);
extern int glue_sub_init(void);
extern void init_config_argv(ConfigArgs * c);
extern int init_config_attrs(ConfigTable * ct);
extern int init_config_ocs(ConfigOCs * ocs);
extern int is_ad_subtype(AttributeDescription *, AttributeDescription *);
extern int is_at_subtype(AttributeType * sub, AttributeType * sup);
extern int is_at_syntax(AttributeType * at, const char * oid);
extern int is_entry_objectclass(Entry *, ObjectClass *, unsigned int);
extern int is_object_subclass(ObjectClass * sup, ObjectClass * sub);
extern int ldif_back_initialize(BackendInfo * bi);
extern int limits_check(Operation * op, SlapReply * rs);
extern void limits_destroy(struct slap_limits * * lm);
extern void limits_free_one(struct slap_limits * lm);
extern int limits_parse(Backend * be, const char * fname, int lineno, int argc, char * * argv);
extern int limits_parse_one(const char * arg, struct slap_limits_set * limit);
extern int limits_unparse(struct slap_limits * lim, struct berval * bv, ber_len_t buflen);
extern int limits_unparse_one(struct slap_limits_set * lim, int which, struct berval * bv, ber_len_t buflen);
extern int load_extop2(const struct berval * ext_oid, slap_mask_t ext_flags, SLAP_EXTOP_MAIN_FN * ext_main, unsigned int flags);
extern int lock_fclose(FILE * fp, FILE * lfp);
extern FILE * lock_fopen(const char * fname, const char * type, FILE * * lfp);
extern int loglevel2bv(int l, struct berval * bv);
extern int loglevel2bvarray(int l, BerVarray * bva);
extern const char * loglevel2str(int l);
extern int loglevel_print(FILE * out);
extern void lutil_HASHFinal(unsigned char * digest, struct lutil_HASHContext * ctx);
extern void lutil_HASHInit(struct lutil_HASHContext * ctx);
extern void lutil_HASHUpdate(struct lutil_HASHContext * ctx, const unsigned char * buf, ber_len_t len);
extern void lutil_MD5Final(unsigned char * digest, struct lutil_MD5Context * ctx);
extern void lutil_MD5Init(struct lutil_MD5Context * ctx);
extern void lutil_MD5Transform(ber_uint_t * buf, const unsigned char * inraw);
extern void lutil_MD5Update(struct lutil_MD5Context * ctx, const unsigned char * buf, ber_len_t len);
extern char * lutil_SHA1Data(const unsigned char * data, size_t len, char * buf);
extern char * lutil_SHA1End(lutil_SHA1_CTX * ctx, char * buf);
extern char * lutil_SHA1File(char * filename, char * buf);
extern void lutil_SHA1Final(unsigned char * digest, lutil_SHA1_CTX * context);
extern void lutil_SHA1Init(lutil_SHA1_CTX * context);
extern void lutil_SHA1Transform(uint32 * state, const unsigned char * buffer);
extern void lutil_SHA1Update(lutil_SHA1_CTX * context, const unsigned char * data, uint32 len);
extern int lutil_atoix(int * v, const char * s, int x);
extern int lutil_atollx(long long int * v, const char * s, int x);
extern int lutil_atolx(long int * v, const char * s, int x);
extern int lutil_atoullx(long long unsigned int * v, const char * s, int x);
extern int lutil_atoulx(long unsigned int * v, const char * s, int x);
extern int lutil_atoux(unsigned int * v, const char * s, int x);
extern int lutil_b64_ntop(const u_char * src, size_t srclength, char * target, size_t targsize);
extern int lutil_b64_pton(const char * src, u_char * target, size_t targsize);
extern int lutil_detach(int debug, int do_close);
extern int lutil_entropy(unsigned char * buf, ber_len_t nbytes);
extern int lutil_get_filed_password(const char * filename, struct berval * passwd);
extern int lutil_get_now(double * now);
extern char * lutil_getpass(const char * prompt);
extern int lutil_getpeereid(int s, uid_t * euid, gid_t * egid);
extern size_t lutil_localtime(char * s, size_t smax, const struct tm * tm, long int delta);
extern int lutil_lockf(int fd);
extern char * lutil_memcopy(char * a, const char * b, size_t n);
extern void * lutil_memrchr(const void * b, int c, size_t n);
extern int lutil_meter_close(lutil_meter_t * meter);
extern int lutil_meter_open(lutil_meter_t * meter, const lutil_meter_display_t * display, const lutil_meter_estimator_t * estimator, size_t goal_value);
extern int lutil_meter_update(lutil_meter_t * meter, size_t position, int force);
extern int lutil_pair(ber_socket_t * sds);
extern int lutil_parse_time(const char * in, long unsigned int * tp);
extern int lutil_parsetime(char * atm, struct lutil_tm * tm);
extern int lutil_passwd(const struct berval * passwd, const struct berval * cred, const char * * schemes, const char * * text);
extern int lutil_passwd_add(struct berval * scheme, LUTIL_PASSWD_CHK_FUNC * chk, LUTIL_PASSWD_HASH_FUNC * hash);
extern void lutil_passwd_destroy(void);
extern int lutil_passwd_generate(struct berval * pw, ber_len_t len);
extern int lutil_passwd_hash(const struct berval * passwd, const char * method, struct berval * hash, const char * * text);
extern void lutil_passwd_init(void);
extern int lutil_passwd_scheme(const char * scheme);
extern int lutil_passwd_string64(const struct berval * sc, const struct berval * hash, struct berval * b64, const struct berval * salt);
extern char * lutil_progname(const char * name, int argc, char * * argv);
extern int lutil_salt_format(const char * format);
extern lutil_sig_t lutil_sigaction(int, lutil_sig_t);
extern int lutil_snprintf(char * buf, ber_len_t bufsize, char * * next, ber_len_t * len, const char * fmt, ...);
extern int lutil_str2bin(struct berval * in, struct berval * out, void * ctx);
extern char * lutil_strcopy(char * a, const char * b);
extern char * lutil_strncopy(char * a, const char * b, size_t n);
extern int lutil_time_string(char * dest, int duration, int max_terms);
extern int lutil_tm2time(struct lutil_tm * tm, struct lutil_timet * tt);
extern int lutil_unlockf(int fd);
extern int lutil_unparse_time(char * buf, size_t buflen, long unsigned int t);
extern size_t lutil_uuidstr(char * buf, size_t len);
extern int lutil_uuidstr_from_normalized(char * uuid, size_t uuidlen, char * buf, size_t buflen);
extern int main(int argc, char * * argv);
extern int mask_to_verbs(slap_verbmasks * v, slap_mask_t m, BerVarray * bva);
extern int mask_to_verbstring(slap_verbmasks * v, slap_mask_t m0, char delim, struct berval * bv);
extern int matching_rule_use_init(void);
extern int modify_add_values(Entry *, Modification *, int, const char * *, char *, size_t);
extern int modify_delete_values(Entry *, Modification *, int, const char * *, char *, size_t);
extern int modify_delete_vindex(Entry * e, Modification * mod, int permissive, const char * * text, char * textbuf, size_t textlen, int * idx);
extern int modify_increment_values(Entry *, Modification *, int, const char * *, char *, size_t);
extern int modify_replace_values(Entry *, Modification *, int, const char * *, char *, size_t);
extern int mods_structural_class(Modifications * mods, struct berval * sc, const char * * text, char * textbuf, size_t textlen, void * ctx);
extern int mr_add(LDAPMatchingRule * mr, slap_mrule_defs_rec * def, MatchingRule * amr, const char * * err);
extern MatchingRule * mr_bvfind(struct berval *);
extern void mr_destroy(void);
extern MatchingRule * mr_find(const char * mrname);
extern int mr_make_syntax_compat_with_mr(Syntax * syn, MatchingRule * mr);
extern int mr_make_syntax_compat_with_mrs(const char * syntax, const char * * mrs);
extern int mr_schema_info(Entry * e);
extern int mr_usable_with_at(MatchingRule *, AttributeType *);
extern void mra_free(Operation * op, MatchingRuleAssertion * mra, int freeit);
extern void mru_destroy(void);
extern int mru_schema_info(Entry * e);
extern int nameUIDPretty(Syntax * syntax, struct berval * val, struct berval * out, void * ctx);
extern ConfigArgs * new_config_args(BackendDB * be, const char * fname, int lineno, int argc, char * * argv);
extern int numericStringValidate(Syntax * syntax, struct berval * in);
extern int numericoidValidate(Syntax * syntax, struct berval * in);
extern int oc_add(LDAPObjectClass * oc, int user, ObjectClass * * rsoc, ObjectClass * prev, const char * * err);
extern ObjectClass * oc_bvfind(struct berval *);
extern ObjectClass * oc_bvfind_undef(struct berval * ocname);
extern int oc_check_allowed(AttributeType * at, ObjectClass * * socs, ObjectClass * sc);
extern void oc_delete(ObjectClass * oc);
extern void oc_destroy(void);
extern ObjectClass * oc_find(const char *);
extern int oc_next(ObjectClass * * oc);
extern int oc_schema_info(Entry * e);
extern int oc_start(ObjectClass * * oc);
extern void oc_unparse(BerVarray * res, ObjectClass * start, ObjectClass * end, int sys);
extern int octetStringFilter(slap_mask_t, slap_mask_t, Syntax *, MatchingRule *, struct berval *, void *, BerVarray *, void *);
extern int octetStringIndexer(slap_mask_t, slap_mask_t, Syntax *, MatchingRule *, struct berval *, BerVarray, BerVarray *, void *);
extern int octetStringMatch(int * matchp, slap_mask_t flags, Syntax * syntax, MatchingRule * mr, struct berval * value, void * assertedValue);
extern int octetStringOrderingMatch(int * matchp, slap_mask_t flags, Syntax * syntax, MatchingRule * mr, struct berval * value, void * assertedValue);
extern void oidm_destroy(void);
extern char * oidm_find(char * oid);
extern void oidm_unparse(BerVarray * res, OidMacro * start, OidMacro * end, int sys);
extern void operation_fake_init(Connection * conn, Operation * op, void * ctx, int newmem);
extern int ordered_value_add(Entry *, AttributeDescription *, Attribute *, BerVarray, BerVarray);
extern int ordered_value_match(int *, AttributeDescription *, MatchingRule *, unsigned int, struct berval *, struct berval *, const char * *);
extern int ordered_value_normalize(slap_mask_t usage, AttributeDescription * ad, MatchingRule * mr, struct berval * val, struct berval * normalized, void * ctx);
extern int ordered_value_pretty(AttributeDescription * ad, struct berval * val, struct berval * out, void * ctx);
extern void ordered_value_renumber(Attribute * a);
extern int ordered_value_sort(Attribute *, int);
extern int ordered_value_validate(AttributeDescription * ad, struct berval * in, int mop);
extern int overlay_callback_after_backover(Operation * op, slap_callback * sc, int append);
extern int overlay_config(BackendDB * be, const char * ov, int idx, BackendInfo * * res, ConfigReply * cr);
extern void overlay_destroy_one(BackendDB * be, slap_overinst * on);
extern int overlay_entry_get_ov(Operation *, struct berval *, ObjectClass *, AttributeDescription *, int, Entry * *, slap_overinst *);
extern int overlay_entry_release_ov(Operation *, Entry *, int, slap_overinst *);
extern slap_overinst * overlay_find(const char * over_type);
extern int overlay_init(void);
extern void overlay_insert(BackendDB * be, slap_overinst * on2, slap_overinst * * * prev, int idx);
extern int overlay_is_inst(BackendDB * be, const char * over_type);
extern int overlay_is_over(BackendDB * be);
extern void overlay_move(BackendDB * be, slap_overinst * on, int idx);
extern slap_overinst * overlay_next(slap_overinst * on);
extern int overlay_op_walk(Operation * op, SlapReply * rs, slap_operation_t which, slap_overinfo * oi, slap_overinst * on);
extern int overlay_register(slap_overinst *);
extern int overlay_register_control(BackendDB *, const char *);
extern int parse_acl(Backend * be, const char * fname, int lineno, int argc, char * * argv, int pos);
extern int parse_at(struct config_args_s * c, AttributeType * * sat, AttributeType * prev);
extern int parse_cr(struct config_args_s * c, ContentRule * * scr);
extern int parse_debug_level(const char *, int *, char * * *);
extern int parse_debug_unknowns(char * *, int *);
extern int parse_oc(struct config_args_s * c, ObjectClass * * soc, ObjectClass * prev);
extern int parse_oidm(struct config_args_s * c, int user, OidMacro * * rom);
extern int parse_syn(struct config_args_s * c, Syntax * * ssyn, Syntax * prev);
extern int parse_syslog_level(const char *, int *);
extern int parse_syslog_user(const char *, int *);
extern int passwd_extop(Operation * op, SlapReply * rs);
extern char * phonetic(char *);
extern int rdnMatch(int *, slap_mask_t, Syntax *, MatchingRule *, struct berval *, void *);
extern int rdnNormalize(slap_mask_t, Syntax *, MatchingRule *, struct berval *, struct berval *, void *);
extern int rdnPretty(Syntax *, struct berval *, struct berval *, void *);
extern int rdnValidate(Syntax *, struct berval *);
extern int rdn_validate(struct berval *);
extern int read_config(const char *, const char *);
extern int read_config_file(const char * fname, int depth, ConfigArgs * cf, ConfigTable * cft);
extern BerVarray referral_rewrite(BerVarray, struct berval *, struct berval *, int);
extern int register_at(const char * def, AttributeDescription * * rad, int dupok);
extern int register_certificate_map_function(SLAP_CERT_MAP_FN * fn);
extern int register_matching_rule(slap_mrule_defs_rec * def);
extern int register_oc(const char * def, ObjectClass * * soc, int dupok);
extern int register_supported_control2(const char *, slap_mask_t, char * *, SLAP_CTRL_PARSE_FN *, unsigned int, int *);
extern int register_syntax(slap_syntax_defs_rec * def);
extern int relay_back_db_close(Backend * be, ConfigReply * cr);
extern int relay_back_db_destroy(Backend * be, ConfigReply * cr);
extern int relay_back_db_init(Backend * be, ConfigReply * cr);
extern int relay_back_db_open(Backend * be, ConfigReply * cr);
extern int relay_back_entry_get_rw(Operation * op, struct berval * ndn, ObjectClass * oc, AttributeDescription * at, int rw, Entry * * e);
extern int relay_back_entry_release_rw(Operation * op, Entry * e, int rw);
extern int relay_back_has_subordinates(Operation * op, Entry * e, int * hasSubs);
extern int relay_back_initialize(BackendInfo * bi);
extern int relay_back_op_add(Operation * op, SlapReply * rs);
extern int relay_back_op_bind(Operation * op, SlapReply * rs);
extern int relay_back_op_compare(Operation * op, SlapReply * rs);
extern int relay_back_op_delete(Operation * op, SlapReply * rs);
extern int relay_back_op_extended(Operation * op, SlapReply * rs);
extern int relay_back_op_modify(Operation * op, SlapReply * rs);
extern int relay_back_op_modrdn(Operation * op, SlapReply * rs);
extern int relay_back_op_search(Operation * op, SlapReply * rs);
extern int relay_back_operational(Operation * op, SlapReply * rs);
extern int rewrite(struct rewrite_info * info, const char * rewriteContext, const char * string, char * * result);
extern struct rewrite_builtin_map * rewrite_builtin_map_find(struct rewrite_info *, const char *);
extern void rewrite_builtin_map_free(void * tmp);
extern int rewrite_context_apply(struct rewrite_info *, struct rewrite_op *, struct rewrite_context *, const char *, char * *);
extern struct rewrite_context * rewrite_context_create(struct rewrite_info *, const char *);
extern int rewrite_context_destroy(struct rewrite_context * * pcontext);
extern struct rewrite_context * rewrite_context_find(struct rewrite_info *, const char *);
extern void rewrite_context_free(void *);
extern int rewrite_info_delete(struct rewrite_info * * pinfo);
extern struct rewrite_info * rewrite_info_init(int mode);
extern int rewrite_map_apply(struct rewrite_info *, struct rewrite_op *, struct rewrite_map *, struct berval *, struct berval *);
extern int rewrite_map_destroy(struct rewrite_map * *);
extern struct rewrite_map * rewrite_map_parse(struct rewrite_info *, const char *, const char * *);
extern const rewrite_mapper * rewrite_mapper_find(const char * name);
extern int rewrite_mapper_register(const rewrite_mapper * map);
extern int rewrite_mapper_unregister(const rewrite_mapper * map);
extern int rewrite_param_destroy(struct rewrite_info * info);
extern int rewrite_param_get(struct rewrite_info * info, const char * name, struct berval * value);
extern int rewrite_param_set(struct rewrite_info * info, const char * name, const char * value);
extern int rewrite_parse(struct rewrite_info * info, const char * fname, int lineno, int argc, char * * argv);
extern int rewrite_rule_apply(struct rewrite_info * info, struct rewrite_op * op, struct rewrite_rule * rule, const char * arg, char * * result);
extern int rewrite_rule_compile(struct rewrite_info * info, struct rewrite_context * context, const char * pattern, const char * result, const char * flagstring);
extern int rewrite_rule_destroy(struct rewrite_rule * * prule);
extern int rewrite_session(struct rewrite_info * info, const char * rewriteContext, const char * string, const void * cookie, char * * result);
extern int rewrite_session_delete(struct rewrite_info * info, const void * cookie);
extern int rewrite_session_destroy(struct rewrite_info * info);
extern struct rewrite_session * rewrite_session_find(struct rewrite_info * info, const void * cookie);
extern struct rewrite_session * rewrite_session_init(struct rewrite_info * info, const void * cookie);
extern void rewrite_session_return(struct rewrite_info * info, struct rewrite_session * session);
extern int rewrite_session_var_get(struct rewrite_info * info, const void * cookie, const char * name, struct berval * value);
extern int rewrite_session_var_set_f(struct rewrite_info * info, const void * cookie, const char * name, const char * value, int flags);
extern int rewrite_subst_apply(struct rewrite_info * info, struct rewrite_op * op, struct rewrite_subst * subst, const char * string, const regmatch_t * match, struct berval * val);
extern struct rewrite_subst * rewrite_subst_compile(struct rewrite_info * info, const char * str);
extern int rewrite_subst_destroy(struct rewrite_subst * * psubst);
extern int rewrite_var_delete(Avlnode * tree);
extern struct rewrite_var * rewrite_var_find(Avlnode * tree, const char * name);
extern struct rewrite_var * rewrite_var_insert_f(Avlnode * * tree, const char * name, const char * value, int flags);
extern int rewrite_var_replace(struct rewrite_var * var, const char * value, int flags);
extern struct rewrite_var * rewrite_var_set_f(Avlnode * * tree, const char * name, const char * value, int flags);
extern int rewrite_xmap_apply(struct rewrite_info * info, struct rewrite_op * op, struct rewrite_map * map, struct berval * key, struct berval * val);
extern int rewrite_xmap_destroy(struct rewrite_map * * pmap);
extern struct rewrite_map * rewrite_xmap_parse(struct rewrite_info * info, const char * s, const char * * currpos);
extern int root_dse_destroy(void);
extern int root_dse_info(Connection * conn, Entry * * entry, const char * * text);
extern int root_dse_init(void);
extern int root_dse_read_file(const char * fname);
extern int rs_entry2modifiable(Operation *, SlapReply *, slap_overinst *);
extern void rs_flush_entry(Operation * op, SlapReply * rs, slap_overinst * on);
extern void rs_reinit(SlapReply * rs, slap_reply_t type);
extern void rs_replace_entry(Operation * op, SlapReply * rs, slap_overinst * on, Entry * e);
extern void schema_destroy(void);
extern int schema_info(Entry * * entry, const char * * text);
extern char * scherr2str(int);
extern BackendDB * select_backend(struct berval *, int);
extern void send_ldap_disconnect(Operation *, SlapReply *);
extern void send_ldap_sasl(Operation * op, SlapReply * rs);
extern int slap_access_allowed(Operation *, Entry *, AttributeDescription *, struct berval *, slap_access_t, AccessControlState *, slap_mask_t *);
extern int slap_access_always_allowed(Operation * op, Entry * e, AttributeDescription * desc, struct berval * val, slap_access_t access, AccessControlState * state, slap_mask_t * maskp);
extern int slap_ad_undef_promote(char *, AttributeType *);
extern int slap_add_ctrls(Operation * op, SlapReply * rs, LDAPControl * * ctrls);
extern int slap_add_opattrs(Operation *, const char * *, char *, size_t, int);
extern slap_mask_t slap_attr_flags(AttributeName * an);
extern int slap_bv2ad(struct berval *, AttributeDescription * *, const char * *);
extern AttributeDescription * slap_bv2tmp_ad(struct berval *, void *);
extern int slap_bv2undef_ad(struct berval *, AttributeDescription * *, const char * *, unsigned int);
extern int slap_cf_aux_table_parse(const char * word, void * dst, slap_cf_aux_table * tab0, const char * tabmsg);
extern int slap_cf_aux_table_unparse(void * src, struct berval * bv, slap_cf_aux_table * tab0);
extern int slap_client_connect(LDAP * *, slap_bindconf *);
extern void slap_client_keepalive(LDAP * ld, slap_keepalive * sk);
extern int slap_compare_entry(Operation * op, Entry * e, AttributeAssertion * ava);
extern void slap_compose_sync_cookie(Operation *, struct berval *, BerVarray, int, int);
extern int slap_controls_init(void);
extern void slap_counters_destroy(slap_counters_t * sc);
extern void slap_counters_init(slap_counters_t * sc);
extern Entry * slap_create_context_csn_entry(Backend *, struct berval *);
extern int slap_ctrl_session_tracking_add(Operation * op, SlapReply * rs, struct berval * ip, struct berval * name, struct berval * id, LDAPControl * ctrl);
extern int slap_ctrl_session_tracking_request_add(Operation * op, SlapReply * rs, LDAPControl * ctrl);
extern int slap_destroy(void);
extern int slap_discover_feature(slap_bindconf * sb, const char * attr, const char * val);
extern struct sync_cookie * slap_dup_sync_cookie(struct sync_cookie * dst, struct sync_cookie * src);
extern int slap_entry2mods(Entry *, Modifications * *, const char * *, char *, size_t);
extern int slap_find_control_id(const char *, int *);
extern void slap_free_ctrls(Operation * op, LDAPControl * * ctrls);
extern int slap_freeself_cb(Operation * op, SlapReply * rs);
extern void slap_get_commit_csn(Operation *, struct berval *, int *);
extern int slap_get_csn(Operation *, struct berval *, int);
extern int slap_global_control(Operation * op, const char * oid, int * cid);
extern void slap_graduate_commit_csn(Operation *);
extern void slap_index2bv(slap_mask_t idx, struct berval * bv);
extern void slap_index2bvlen(slap_mask_t idx, struct berval * bv);
extern int slap_init(int, const char *);
extern int slap_init_sync_cookie_ctxcsn(struct sync_cookie * cookie);
extern void slap_init_user(char * user, char * group);
extern void slap_insert_csn_sids(struct sync_cookie *, int, int, struct berval *);
extern int slap_keepalive_parse(struct berval * val, void * bc, slap_cf_aux_table * tab0, const char * tabmsg, int unparse);
extern int slap_ldap_response_code_register(struct berval * bv, int err);
extern int slap_loglevel_get(struct berval * s, int * l);
extern int slap_loglevel_register(slap_mask_t m, struct berval * s);
extern int slap_map_api2result(SlapReply * rs);
extern void slap_mod_free(Modification *, int);
extern int slap_modrdn2mods(Operation *, SlapReply *);
extern int slap_mods2entry(Modifications *, Entry * *, int, int, const char * *, char *, size_t);
extern int slap_mods_check(Operation *, Modifications *, const char * *, char *, size_t, void *);
extern void slap_mods_free(Modifications *, int);
extern int slap_mods_no_repl_user_mod_check(Operation * op, Modifications * ml, const char * * text, char * textbuf, size_t textlen);
extern int slap_mods_no_user_mod_check(Operation * op, Modifications * ml, const char * * text, char * textbuf, size_t textlen);
extern int slap_mods_obsolete_check(Operation * op, Modifications * ml, const char * * text, char * textbuf, size_t textlen);
extern void slap_mods_opattrs(Operation *, Modifications * *, int);
extern int slap_null_cb(Operation *, SlapReply *);
extern Operation * slap_op_alloc(BerElement * ber, ber_int_t msgid, ber_tag_t tag, ber_int_t id, void * ctx);
extern void slap_op_destroy(void);
extern void slap_op_free(Operation *, void *);
extern void slap_op_groups_free(Operation * op);
extern void slap_op_init(void);
extern void slap_op_time(time_t *, int *);
extern Attribute * slap_operational_entryDN(Entry * e);
extern Attribute * slap_operational_hasSubordinate(int hs);
extern Attribute * slap_operational_subschemaSubentry(Backend * be);
extern int slap_parse_csn_sid(struct berval *);
extern int * slap_parse_csn_sids(BerVarray, int, void *);
extern int slap_parse_ctrl(Operation * op, SlapReply * rs, LDAPControl * control, const char * * text);
extern int slap_parse_modlist(Operation * op, SlapReply * rs, BerElement * ber, req_modify_s * ms);
extern int slap_parse_sync_cookie(struct sync_cookie *, void *);
extern int slap_parse_user(struct berval * id, struct berval * user, struct berval * realm, struct berval * mech);
extern int slap_passwd_check(Operation *, Entry *, Attribute *, struct berval *, const char * *);
extern void slap_passwd_generate(struct berval * pass);
extern void slap_passwd_hash(struct berval * cred, struct berval * new, const char * * text);
extern void slap_passwd_hash_type(struct berval * cred, struct berval * new, char * hash, const char * * text);
extern void slap_passwd_init(void);
extern int slap_passwd_parse(struct berval * reqdata, struct berval * id, struct berval * oldpass, struct berval * newpass, const char * * text);
extern struct berval * slap_passwd_return(struct berval * cred);
extern void slap_queue_csn(Operation * op, struct berval * csn);
extern int slap_read_controls(Operation * op, SlapReply * rs, Entry * e, const struct berval * oid, LDAPControl * * ctrl);
extern int slap_remove_control(Operation * op, SlapReply * rs, int ctrl, BI_chk_controls * fnc);
extern void slap_reparse_sync_cookie(struct sync_cookie * cookie, void * memctx);
extern slap_op_t slap_req2op(ber_tag_t tag);
extern ber_tag_t slap_req2res(ber_tag_t tag);
extern void slap_resume_listeners(void);
extern void slap_rewind_commit_csn(Operation * op);
extern void slap_sasl2dn(Operation *, struct berval *, struct berval *, int);
extern int slap_sasl_authorized(Operation *, struct berval *, struct berval *);
extern int slap_sasl_bind(Operation * op, SlapReply * rs);
extern int slap_sasl_close(Connection * conn);
extern int slap_sasl_destroy(void);
extern int slap_sasl_external(Connection * conn, slap_ssf_t ssf, struct berval * auth_id);
extern int slap_sasl_getdn(Connection *, Operation *, struct berval *, char *, struct berval *, int);
extern const char * slap_sasl_getpolicy(void);
extern int slap_sasl_init(void);
extern int slap_sasl_matches(Operation * op, BerVarray rules, struct berval * assertDN, struct berval * authc);
extern char * * slap_sasl_mechs(Connection * conn);
extern int slap_sasl_open(Connection * conn, int reopen);
extern int slap_sasl_regexp_config(const char * match, const char * replace);
extern void slap_sasl_regexp_destroy(void);
extern int slap_sasl_regexp_rewrite_config(const char * fname, int lineno, const char * match, const char * replace, const char * context);
extern void slap_sasl_regexp_unparse(BerVarray * out);
extern int slap_sasl_reset(Connection * conn);
extern int slap_sasl_rewrite_config(const char * fname, int lineno, int argc, char * * argv);
extern char * slap_sasl_secprops(const char * in);
extern void slap_sasl_secprops_unparse(struct berval * bv);
extern int slap_sasl_setpolicy(const char * arg);
extern int slap_schema_check(void);
extern int slap_schema_init(void);
extern int slap_schema_load(void);
extern void slap_send_ldap_extended(Operation * op, SlapReply * rs);
extern void slap_send_ldap_intermediate(Operation * op, SlapReply * rs);
extern void slap_send_ldap_result(Operation * op, SlapReply * rs);
extern int slap_send_search_entry(Operation * op, SlapReply * rs);
extern int slap_send_search_reference(Operation * op, SlapReply * rs);
extern int slap_set_filter(SLAP_SET_GATHER * gatherer, SetCookie * cp, struct berval * fbv, struct berval * user, struct berval * target, BerVarray * results);
extern BerVarray slap_set_join(SetCookie * cp, BerVarray lset, unsigned int op_flags, BerVarray rset);
extern int slap_shutdown(Backend *);
extern void slap_sig_shutdown(int sig);
extern void slap_sig_wake(int sig);
extern void * slap_sl_calloc(ber_len_t n, ber_len_t size, void * ctx);
extern void * slap_sl_context(void * ptr);
extern void slap_sl_free(void *, void *);
extern void * slap_sl_malloc(ber_len_t, void *);
extern void * slap_sl_mem_create(ber_len_t, int, void *, int);
extern void slap_sl_mem_destroy(void * key, void * data);
extern void slap_sl_mem_init(void);
extern void slap_sl_mem_setctx(void * thrctx, void * memctx);
extern void * slap_sl_realloc(void * ptr, ber_len_t size, void * ctx);
extern int slap_sort_csn_sids(BerVarray, int *, int, void *);
extern int slap_sort_vals(Modifications *, const char * *, int *, void *);
extern int slap_startup(Backend *);
extern int slap_str2ad(const char *, AttributeDescription * *, const char * *);
extern char * * slap_str2clist(char * * *, char *, const char *);
extern int slap_str2index(const char * str, slap_mask_t * idx);
extern int slap_str2undef_ad(const char * str, AttributeDescription * * ad, const char * * text, unsigned int flags);
extern void slap_suspend_listeners(void);
extern void slap_sync_cookie_free(struct sync_cookie * cookie, int free_cookie);
extern void slap_timestamp(time_t *, struct berval *);
extern int slap_tls_get_config(LDAP * ld, int opt, char * * val);
extern int slap_tool_destroy(void);
extern int slap_tool_entry_check(const char * progname, Operation * op, Entry * e, int lineno, const char * * text, char * textbuf, size_t textlen);
extern void slap_tool_init(const char *, int, int, char * *);
extern int slap_tool_update_ctxcsn(const char * progname, long unsigned int sid, struct berval * bvtext);
extern long unsigned int slap_tool_update_ctxcsn_check(const char * progname, Entry * e);
extern int slap_tool_update_ctxcsn_init(void);
extern int slap_valid_descr(const char *);
extern int slap_verbmasks_append(slap_verbmasks * * vp, slap_mask_t m, struct berval * v, slap_mask_t * ignore);
extern int slap_verbmasks_destroy(slap_verbmasks * v);
extern int slap_verbmasks_init(slap_verbmasks * * vp, slap_verbmasks * v);
extern void slap_wake_listener(void);
extern int slapacl(int argc, char * * argv);
extern int slapadd(int argc, char * * argv);
extern int slapauth(int argc, char * * argv);
extern int slapcat(int argc, char * * argv);
extern void slapd_add_internal(ber_socket_t, int);
extern int slapd_clr_read(ber_socket_t, int);
extern void slapd_clr_write(ber_socket_t, int);
extern void slapd_clr_writetime(time_t);
extern int slapd_daemon(void);
extern int slapd_daemon_destroy(void);
extern int slapd_daemon_init(const char * urls);
extern Listener * * slapd_get_listeners(void);
extern time_t slapd_get_writetime(void);
extern void slapd_remove(ber_socket_t, Sockbuf *, int, int, int);
extern void slapd_set_read(ber_socket_t, int);
extern void slapd_set_write(ber_socket_t, int);
extern int slapdn(int argc, char * * argv);
extern int slapindex(int argc, char * * argv);
extern int slappasswd(int argc, char * * argv);
extern int slapschema(int argc, char * * argv);
extern int slaptest(int argc, char * * argv);
extern slap_access_t str2access(const char *);
extern slap_mask_t str2accessmask(const char * str);
extern AttributeName * str2anlist(AttributeName *, char *, const char *);
extern Entry * str2entry(char *);
extern Entry * str2entry2(char *, int);
extern Filter * str2filter(const char *);
extern Filter * str2filter_x(Operation *, const char *);
extern int str2loglevel(const char * s, int * l);
extern int str2result(char * s, int * code, char * * matched, char * * info);
extern int structural_class(BerVarray ocs, ObjectClass * * scp, ObjectClass * * * socsp, const char * * text, char * textbuf, size_t textlen, void * ctx);
extern int supported_feature_destroy(void);
extern int supported_feature_load(struct berval * f);
extern int syn_add(LDAPSyntax * syn, int user, slap_syntax_defs_rec * def, Syntax * * ssynp, Syntax * prev, const char * * err);
extern void syn_delete(Syntax * syn);
extern void syn_destroy(void);
extern Syntax * syn_find(const char * synname);
extern Syntax * syn_find_desc(const char * syndesc, int * len);
extern int syn_is_sup(Syntax * syn, Syntax * sup);
extern int syn_next(Syntax * * syn);
extern int syn_schema_info(Entry * e);
extern int syn_start(Syntax * * syn);
extern void syn_unparse(BerVarray * res, Syntax * start, Syntax * end, int sys);
extern void syncinfo_free(syncinfo_t * sie, int free_all);
extern int syncprov_initialize(void);
extern int syncrepl_add_glue(Operation * op, Entry * e);
extern int syncrepl_config(ConfigArgs * c);
extern void syncrepl_diff_entry(Operation * op, Attribute * old, Attribute * new, Modifications * * mods, Modifications * * ml, int is_ctx);
extern void * tavl_delete(Avlnode * * root, void * data, AVL_CMP fcmp);
extern Avlnode * tavl_end(Avlnode * root, int dir);
extern void * tavl_find(Avlnode * root, const void * data, AVL_CMP fcmp);
extern Avlnode * tavl_find2(Avlnode * root, const void * data, AVL_CMP fcmp);
extern Avlnode * tavl_find3(Avlnode * root, const void * data, AVL_CMP fcmp, int * ret);
extern int tavl_free(Avlnode * root, AVL_FREE dfree);
extern int tavl_insert(Avlnode * * root, void * data, AVL_CMP fcmp, AVL_DUP fdup);
extern Avlnode * tavl_next(Avlnode * root, int dir);
extern int test_filter(Operation *, Entry *, Filter *);
extern int uccanoncomp(ac_uint4 *, int);
extern int uccanondecomp(const ac_uint4 * in, int inlen, ac_uint4 * * out, int * outlen, void * ctx);
extern ac_uint4 uccombining_class(ac_uint4 code);
extern int uccomp(ac_uint4 node1, ac_uint4 node2, ac_uint4 * comp);
extern int uccomp_hangul(ac_uint4 * str, int len);
extern int uccompatdecomp(const ac_uint4 *, int, ac_uint4 * *, int *, void *);
extern int ucdata_load(char * paths, int masks);
extern int ucdata_reload(char * paths, int masks);
extern void ucdata_unload(int masks);
extern int ucdecomp(ac_uint4 code, ac_uint4 * num, ac_uint4 * * decomp);
extern int ucdecomp_hangul(ac_uint4 code, ac_uint4 * num, ac_uint4 * decomp);
extern int ucdigit_lookup(ac_uint4 code, int * digit);
extern int ucgetdigit(ac_uint4 code);
extern struct ucnumber ucgetnumber(ac_uint4 code);
extern int ucisprop(ac_uint4 code, ac_uint4 mask1, ac_uint4 mask2);
extern int uckdecomp(ac_uint4 code, ac_uint4 * num, ac_uint4 * * decomp);
extern int ucnumber_lookup(ac_uint4 code, struct ucnumber * num);
extern void ucstr2upper(ldap_unicode_t * u, ber_len_t n);
extern ldap_unicode_t * ucstrncasechr(const ldap_unicode_t * u, ber_len_t n, ldap_unicode_t c);
extern int ucstrncasecmp(const ldap_unicode_t * u1, const ldap_unicode_t * u2, ber_len_t n);
extern ldap_unicode_t * ucstrnchr(const ldap_unicode_t * u, ber_len_t n, ldap_unicode_t c);
extern int ucstrncmp(const ldap_unicode_t * u1, const ldap_unicode_t * u2, ber_len_t n);
extern ac_uint4 uctolower(ac_uint4);
extern ac_uint4 uctotitle(ac_uint4 code);
extern ac_uint4 uctoupper(ac_uint4);
extern int validate_global_referral(const char * url);
extern int value_add(BerVarray * vals, BerVarray addvals);
extern int value_add_one(BerVarray *, struct berval *);
extern int value_find_ex(AttributeDescription * ad, unsigned int flags, BerVarray vals, struct berval * val, void * ctx);
extern int value_match(int *, AttributeDescription *, MatchingRule *, unsigned int, struct berval *, void *, const char * *);
extern int verb_to_mask(const char *, slap_verbmasks *);
extern int verbs_to_mask(int argc, char * * argv, slap_verbmasks * v, slap_mask_t * m);
extern int verbstring_to_mask(slap_verbmasks * v, char * str, char delim, slap_mask_t * m);
extern void vrFilter2bv(Operation *, ValuesReturnFilter *, struct berval *);
extern void vrFilter_free(Operation *, ValuesReturnFilter *);

#ifdef __cplusplus
}
#endif

#endif /* SLAPD_H */
