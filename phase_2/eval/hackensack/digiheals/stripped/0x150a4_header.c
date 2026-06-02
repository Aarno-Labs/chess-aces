// Binary ninja #defines
#define __packed
#define __noreturn
#define __convention(name)
#define __syscall(number)
#define __offset(...)
#define __padding
#define __named(name)
#define __inherited
#define __base(name, offset)
#define __ptr_offset(offset)
#define __data_var_refs
#define __vtable
#define __pure

//------------------------------------------------------------------------------
// Standard type definitions
//------------------------------------------------------------------------------
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef long long unsigned int uint64_t;
typedef char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int int64_t;
typedef unsigned int wchar_t;
typedef unsigned short wchar16;
typedef _Bool bool;
typedef unsigned int size_t;
typedef int ssize_t;
typedef long double float128;
typedef unsigned int wint_t;
typedef unsigned int wchar_t_;
typedef void* uintptr_t;

struct Elf32_Ident
{
    char signature[0x4];
    uint8_t file_class;
    uint8_t encoding;
    uint8_t version;
    uint8_t os;
    uint8_t abi_version;
    char pad[0x7];
};

struct Elf32_Rel
{
    uint32_t r_offset;
    uint32_t r_info;
};

struct Elf32_Sym
{
    uint32_t st_name;
    uint32_t st_value;
    uint32_t st_size;
    uint8_t st_info;
    uint8_t st_other;
    uint16_t st_shndx;
};

struct Elf_HashTable
{
    uint32_t nbucket;
    uint32_t nchain;
    uint32_t buckets[0x107];
    uint32_t chains[0x1ed];
};

typedef int32_t (* FUNC_auth_plugin_acl_check_v2)(void*, char const*, char const*, char const*, int32_t);

typedef int32_t (* FUNC_auth_plugin_psk_key_get_v2)(void*, char const*, char const*, char*, int32_t);

typedef int32_t (* FUNC_auth_plugin_unpwd_check_v2)(void*, char const*, char const*);

typedef int32_t (* FUNC_auth_plugin_version);

typedef int32_t (* FUNC_plugin_version)(int32_t, int32_t const*);

typedef int32_t (* MOSQ_FUNC_generic_callback)(int32_t, void*, void*);

struct PF_cfg
{
    uint64_t last_db_id;
    uint8_t shutdown;
    uint8_t dbid_size;
};

struct PF_client
{
    int64_t session_expiry_time;
    uint32_t session_expiry_interval;
    uint16_t last_mid;
    uint16_t id_len;
    uint16_t listener_port;
    uint16_t username_len;
};

struct PF_header
{
    uint32_t chunk;
    uint32_t length;
};

struct PF_sub
{
    uint32_t identifier;
    uint16_t id_len;
    uint16_t topic_len;
    uint8_t qos;
    uint8_t options;
};

struct P_client
{
    struct PF_client F;
    char* client_id;
    char* username;
};

struct P_sub
{
    struct PF_sub F;
    char* client_id;
    char* topic;
};

struct UT_hash_handle;
struct UT_hash_bucket
{
    struct UT_hash_handle* hh_head;
    uint32_t count;
    uint32_t expand_mult;
};

struct UT_hash_table
{
    struct UT_hash_bucket* buckets;
    uint32_t num_buckets;
    uint32_t log2_num_buckets;
    uint32_t num_items;
    struct UT_hash_handle* tail;
    int32_t hho;
    uint32_t ideal_chain_maxlen;
    uint32_t nonideal_items;
    uint32_t ineff_expands;
    uint32_t noexpand;
    uint32_t signature;
};

struct UT_hash_handle
{
    struct UT_hash_table* tbl;
    void* prev;
    void* next;
    struct UT_hash_handle* hh_prev;
    struct UT_hash_handle* hh_next;
    void* key;
    uint32_t keylen;
    uint32_t hashv;
};

struct _IO_FILE
{
};

typedef struct _IO_FILE FILE;

struct __dirstream
{
};

typedef struct __dirstream DIR;

struct __sigset_t
{
    uint32_t __bits[0x20];
};

struct __va_list
{
    void* __ap;
};

typedef struct __va_list __isoc_va_list;

struct addrinfo
{
};

typedef int64_t blkcnt_t;

typedef int32_t blksize_t;

struct bridge_address
{
    char* address;
    uint16_t port;
};

typedef int32_t clockid_t;

struct config_recurse
{
    uint32_t log_dest;
    int32_t log_dest_set;
    uint32_t log_type;
    int32_t log_type_set;
};

typedef uint64_t dbid_t;

struct PF_client_msg
{
    dbid_t store_id;
    uint16_t mid;
    uint16_t id_len;
    uint8_t qos;
    uint8_t state;
    uint8_t retain_dup;
    uint8_t direction;
};

struct PF_msg_store
{
    dbid_t store_id;
    int64_t expiry_time;
    uint32_t payloadlen;
    uint16_t source_mid;
    uint16_t source_id_len;
    uint16_t source_username_len;
    uint16_t topic_len;
    uint16_t source_port;
    uint8_t qos;
    uint8_t retain;
};

struct PF_retain
{
    dbid_t store_id;
};

struct P_client_msg
{
    struct PF_client_msg F;
    char* client_id;
    void* properties;
};

struct P_retain
{
    struct PF_retain F;
};

typedef uint64_t dev_t;

struct dirent
{
};

enum e_dyn_tag
{
    DT_NULL = 0x0,
    DT_NEEDED = 0x1,
    DT_PLTRELSZ = 0x2,
    DT_PLTGOT = 0x3,
    DT_HASH = 0x4,
    DT_STRTAB = 0x5,
    DT_SYMTAB = 0x6,
    DT_RELA = 0x7,
    DT_RELASZ = 0x8,
    DT_RELAENT = 0x9,
    DT_STRSZ = 0xa,
    DT_SYMENT = 0xb,
    DT_INIT = 0xc,
    DT_FINI = 0xd,
    DT_SONAME = 0xe,
    DT_RPATH = 0xf,
    DT_SYMBOLIC = 0x10,
    DT_REL = 0x11,
    DT_RELSZ = 0x12,
    DT_RELENT = 0x13,
    DT_PLTREL = 0x14,
    DT_DEBUG = 0x15,
    DT_TEXTREL = 0x16,
    DT_JMPREL = 0x17,
    DT_BIND_NOW = 0x18,
    DT_INIT_ARRAY = 0x19,
    DT_FINI_ARRAY = 0x1a,
    DT_INIT_ARRAYSZ = 0x1b,
    DT_FINI_ARRAYSZ = 0x1c,
    DT_RUNPATH = 0x1d,
    DT_FLAGS = 0x1e,
    DT_ENCODING = 0x1f,
    DT_PREINIT_ARRAY = 0x20,
    DT_PREINIT_ARRAYSZ = 0x21,
    DT_LOOS = 0x6000000d,
    DT_SUNW_RTLDINF = 0x6000000e,
    DT_HIOS = 0x6ffff000,
    DT_VALRNGLO = 0x6ffffd00,
    DT_CHECKSUM = 0x6ffffdf8,
    DT_PLTPADSZ = 0x6ffffdf9,
    DT_MOVEENT = 0x6ffffdfa,
    DT_MOVESZ = 0x6ffffdfb,
    DT_FEATURE_1 = 0x6ffffdfc,
    DT_POSFLAG_1 = 0x6ffffdfd,
    DT_SYMINSZ = 0x6ffffdfe,
    DT_SYMINENT = 0x6ffffdff,
    DT_VALRNGHI = 0x6ffffdff,
    DT_ADDRRNGLO = 0x6ffffe00,
    DT_GNU_HASH = 0x6ffffef5,
    DT_CONFIG = 0x6ffffefa,
    DT_DEPAUDIT = 0x6ffffefb,
    DT_AUDIT = 0x6ffffefc,
    DT_PLTPAD = 0x6ffffefd,
    DT_MOVETAB = 0x6ffffefe,
    DT_SYMINFO = 0x6ffffeff,
    DT_ADDRRNGHI = 0x6ffffeff,
    DT_RELACOUNT = 0x6ffffff9,
    DT_RELCOUNT = 0x6ffffffa,
    DT_FLAGS_1 = 0x6ffffffb,
    DT_VERDEF = 0x6ffffffc,
    DT_VERDEFNUM = 0x6ffffffd,
    DT_VERNEED = 0x6ffffffe,
    DT_VERNEEDNUM = 0x6fffffff,
    DT_VERSYM = 0x6ffffff0,
    DT_MIPS_RLD_VERSION = 0x70000001,
    DT_MIPS_TIME_STAMP = 0x70000002,
    DT_MIPS_ICHECKSUM = 0x70000003,
    DT_MIPS_IVERSION = 0x70000004,
    DT_MIPS_FLAGS = 0x70000005,
    DT_MIPS_BASE_ADDRESS = 0x70000006,
    DT_MIPS_CONFLICT = 0x70000008,
    DT_MIPS_LIBLIST = 0x70000009,
    DT_MIPS_LOCAL_GOTNO = 0x7000000a,
    DT_MIPS_CONFLICTNO = 0x7000000b,
    DT_MIPS_LIBLISTNO = 0x70000010,
    DT_MIPS_SYMTABNO = 0x70000011,
    DT_MIPS_UNREFEXTNO = 0x70000012,
    DT_MIPS_GOTSYM = 0x70000013,
    DT_MIPS_HIPAGENO = 0x70000014,
    DT_MIPS_RLD_MAP = 0x70000016,
    DT_MIPS_RLD_MAP_REL = 0x70000035
};

struct Elf32_Dyn
{
    enum e_dyn_tag d_tag;
    uint32_t d_val;
};

enum e_machine
{
    EM_NONE = 0x0,
    EM_M32 = 0x1,
    EM_SPARC = 0x2,
    EM_386 = 0x3,
    EM_68K = 0x4,
    EM_88K = 0x5,
    EM_860 = 0x7,
    EM_MIPS = 0x8,
    EM_S370 = 0x9,
    EM_MIPS_RS3_LE = 0xa,
    EM_PARISC = 0xf,
    EM_VPP500 = 0x11,
    EM_SPARC32PLUS = 0x12,
    EM_960 = 0x13,
    EM_PPC = 0x14,
    EM_PPC64 = 0x15,
    EM_S390 = 0x16,
    EM_V800 = 0x24,
    EM_FR20 = 0x25,
    EM_RH32 = 0x26,
    EM_RCE = 0x27,
    EM_ARM = 0x28,
    EM_FAKE_ALPHA = 0x29,
    EM_SH = 0x2a,
    EM_SPARCV9 = 0x2b,
    EM_TRICORE = 0x2c,
    EM_ARC = 0x2d,
    EM_H8_300 = 0x2e,
    EM_H8_300H = 0x2f,
    EM_H8S = 0x30,
    EM_H8_500 = 0x31,
    EM_IA_64 = 0x32,
    EM_MIPS_X = 0x33,
    EM_COLDFIRE = 0x34,
    EM_68HC12 = 0x35,
    EM_MMA = 0x36,
    EM_PCP = 0x37,
    EM_NCPU = 0x38,
    EM_NDR1 = 0x39,
    EM_STARCORE = 0x3a,
    EM_ME16 = 0x3b,
    EM_ST100 = 0x3c,
    EM_TINYJ = 0x3d,
    EM_X86_64 = 0x3e,
    EM_PDSP = 0x3f,
    EM_FX66 = 0x42,
    EM_ST9PLUS = 0x43,
    EM_ST7 = 0x44,
    EM_68HC16 = 0x45,
    EM_68HC11 = 0x46,
    EM_68HC08 = 0x47,
    EM_68HC05 = 0x48,
    EM_SVX = 0x49,
    EM_ST19 = 0x4a,
    EM_VAX = 0x4b,
    EM_CRIS = 0x4c,
    EM_JAVELIN = 0x4d,
    EM_FIREPATH = 0x4e,
    EM_ZSP = 0x4f,
    EM_MMIX = 0x50,
    EM_HUANY = 0x51,
    EM_PRISM = 0x52,
    EM_AVR = 0x53,
    EM_FR30 = 0x54,
    EM_D10V = 0x55,
    EM_D30V = 0x56,
    EM_V850 = 0x57,
    EM_M32R = 0x58,
    EM_MN10300 = 0x59,
    EM_MN10200 = 0x5a,
    EM_PJ = 0x5b,
    EM_OPENRISC = 0x5c,
    EM_ARC_A5 = 0x5d,
    EM_XTENSA = 0x5e,
    EM_ALTERA_NIOS2 = 0x71,
    EM_AARCH64 = 0xb7,
    EM_TILEPRO = 0xbc,
    EM_MICROBLAZE = 0xbd,
    EM_TILEGX = 0xbf,
    EM_NUM = 0xc0
};

enum e_type
{
    ET_NONE = 0x0,
    ET_REL = 0x1,
    ET_EXEC = 0x2,
    ET_DYN = 0x3,
    ET_CORE = 0x4,
    ET_NUM = 0x5
};

struct Elf32_Header
{
    struct Elf32_Ident ident;
    enum e_type type;
    enum e_machine machine;
    uint32_t version;
    void (* entry)();
    uint32_t program_header_offset;
    uint32_t section_header_offset;
    uint32_t flags;
    uint16_t header_size;
    uint16_t program_header_size;
    uint16_t program_header_count;
    uint16_t section_header_size;
    uint16_t section_header_count;
    uint16_t string_table;
};

typedef int32_t gid_t;

struct ifmap
{
    uint32_t mem_start;
    uint32_t mem_end;
    uint16_t base_addr;
    uint8_t irq;
    uint8_t dma;
    uint8_t port;
};

struct ifreq
{
    union
    {
        char ifrn_name[0x10];
    } ifr_ifrn;
    union
    {
        int16_t ifru_flags;
        int32_t ifru_ivalue;
        int32_t ifru_mtu;
        struct ifmap ifru_map;
        char ifru_slave[0x10];
        char ifru_newname[0x10];
        char* ifru_data;
    } ifr_ifru;
};

struct in6_addr
{
    union
    {
        uint8_t __s6_addr[0x10];
        uint16_t __s6_addr16[0x8];
        uint32_t __s6_addr32[0x4];
    } __in6_union;
};

typedef uint32_t in_addr_t;

struct in_addr
{
    in_addr_t s_addr;
};

typedef uint16_t in_port_t;

typedef uint64_t ino_t;

typedef uint32_t mode_t;

enum mosq_err_t
{
    MOSQ_ERR_AUTH_CONTINUE = 0xfffffffc,
    MOSQ_ERR_NO_SUBSCRIBERS = 0xfffffffd,
    MOSQ_ERR_SUB_EXISTS = 0xfffffffe,
    MOSQ_ERR_CONN_PENDING = 0xffffffff,
    MOSQ_ERR_SUCCESS = 0x0,
    MOSQ_ERR_NOMEM = 0x1,
    MOSQ_ERR_PROTOCOL = 0x2,
    MOSQ_ERR_INVAL = 0x3,
    MOSQ_ERR_NO_CONN = 0x4,
    MOSQ_ERR_CONN_REFUSED = 0x5,
    MOSQ_ERR_NOT_FOUND = 0x6,
    MOSQ_ERR_CONN_LOST = 0x7,
    MOSQ_ERR_TLS = 0x8,
    MOSQ_ERR_PAYLOAD_SIZE = 0x9,
    MOSQ_ERR_NOT_SUPPORTED = 0xa,
    MOSQ_ERR_AUTH = 0xb,
    MOSQ_ERR_ACL_DENIED = 0xc,
    MOSQ_ERR_UNKNOWN = 0xd,
    MOSQ_ERR_ERRNO = 0xe,
    MOSQ_ERR_EAI = 0xf,
    MOSQ_ERR_PROXY = 0x10,
    MOSQ_ERR_PLUGIN_DEFER = 0x11,
    MOSQ_ERR_MALFORMED_UTF8 = 0x12,
    MOSQ_ERR_KEEPALIVE = 0x13,
    MOSQ_ERR_LOOKUP = 0x14,
    MOSQ_ERR_MALFORMED_PACKET = 0x15,
    MOSQ_ERR_DUPLICATE_PROPERTY = 0x16,
    MOSQ_ERR_TLS_HANDSHAKE = 0x17,
    MOSQ_ERR_QOS_NOT_SUPPORTED = 0x18,
    MOSQ_ERR_OVERSIZE_PACKET = 0x19,
    MOSQ_ERR_OCSP = 0x1a,
    MOSQ_ERR_TIMEOUT = 0x1b,
    MOSQ_ERR_RETAIN_NOT_SUPPORTED = 0x1c,
    MOSQ_ERR_TOPIC_ALIAS_INVALID = 0x1d,
    MOSQ_ERR_ADMINISTRATIVE_ACTION = 0x1e,
    MOSQ_ERR_ALREADY_EXISTS = 0x1f
};

typedef int32_t mosq_sock_t;

struct mosquitto;
typedef int32_t (* FUNC_auth_plugin_auth_continue_v4)(void*, struct mosquitto*, char const*, void const*, uint16_t, void**, uint16_t*);

typedef int32_t (* FUNC_auth_plugin_auth_start_v4)(void*, struct mosquitto*, char const*, bool, void const*, uint16_t, void**, uint16_t*);

typedef int32_t (* FUNC_auth_plugin_psk_key_get_v3)(void*, struct mosquitto const*, char const*, char const*, char*, int32_t);

typedef int32_t (* FUNC_auth_plugin_psk_key_get_v4)(void*, struct mosquitto*, char const*, char const*, char*, int32_t);

typedef int32_t (* FUNC_auth_plugin_unpwd_check_v3)(void*, struct mosquitto const*, char const*, char const*);

typedef int32_t (* FUNC_auth_plugin_unpwd_check_v4)(void*, struct mosquitto*, char const*, char const*);

struct mosquitto__acl
{
    struct mosquitto__acl* next;
    char* topic;
    int32_t access;
    int32_t ucount;
    int32_t ccount;
};

struct mosquitto__acl_user
{
    struct mosquitto__acl_user* next;
    char* username;
    struct mosquitto__acl* acl;
};

struct mosquitto__alias
{
    char* topic;
    uint16_t alias;
};

struct mosquitto__auth_plugin_config;
enum mosquitto__bridge_direction
{
    mosquitto__bridge_direction_bd_out = 0x0,
    mosquitto__bridge_direction_bd_in = 0x1,
    mosquitto__bridge_direction_bd_both = 0x2
};

enum mosquitto__bridge_protocol_version
{
    mosquitto__bridge_protocol_version_mosq_p_invalid = 0x0,
    mosquitto__bridge_protocol_version_mosq_p_mqtt31 = 0x1,
    mosquitto__bridge_protocol_version_mosq_p_mqtt311 = 0x2,
    mosquitto__bridge_protocol_version_mosq_p_mqtts = 0x3,
    mosquitto__bridge_protocol_version_mosq_p_mqtt5 = 0x5
};

enum mosquitto__bridge_start_type
{
    mosquitto__bridge_start_type_bst_automatic = 0x0,
    mosquitto__bridge_start_type_bst_lazy = 0x1,
    mosquitto__bridge_start_type_bst_manual = 0x2,
    mosquitto__bridge_start_type_bst_once = 0x3
};

enum mosquitto__bridge_topic_direction
{
    mosquitto__bridge_topic_direction_bd_out = 0x0,
    mosquitto__bridge_topic_direction_bd_in = 0x1,
    mosquitto__bridge_topic_direction_bd_both = 0x2
};

struct mosquitto__bridge_topic
{
    char* topic;
    char* local_prefix;
    char* remote_prefix;
    char* local_topic;
    char* remote_topic;
    enum mosquitto__bridge_topic_direction direction;
    uint8_t qos;
};

struct mosquitto__callback
{
    struct UT_hash_handle hh;
    struct mosquitto__callback* next;
    struct mosquitto__callback* prev;
    MOSQ_FUNC_generic_callback cb;
    void* userdata;
    char* data;
};

struct mosquitto__listener;
enum mosquitto__listener_protocol
{
    mosquitto__listener_protocol_mp_mqtt = 0x0,
    mosquitto__listener_protocol_mp_mqttsn = 0x1,
    mosquitto__listener_protocol_mp_websockets = 0x2
};

struct mosquitto__listener_sock
{
    mosq_sock_t sock;
    struct mosquitto__listener* listener;
};

struct mosquitto__packet
{
    uint8_t* payload;
    struct mosquitto__packet* next;
    uint32_t remaining_mult;
    uint32_t remaining_length;
    uint32_t packet_length;
    uint32_t to_process;
    uint32_t pos;
    uint16_t mid;
    uint8_t command;
    char remaining_count;
};

enum mosquitto__protocol
{
    mosquitto__protocol_mosq_p_invalid = 0x0,
    mosquitto__protocol_mosq_p_mqtt31 = 0x1,
    mosquitto__protocol_mosq_p_mqtt311 = 0x2,
    mosquitto__protocol_mosq_p_mqtts = 0x3,
    mosquitto__protocol_mosq_p_mqtt5 = 0x5
};

struct mosquitto__subleaf
{
    struct mosquitto__subleaf* prev;
    struct mosquitto__subleaf* next;
    struct mosquitto* context;
    uint32_t identifier;
    uint8_t qos;
    bool no_local;
    bool retain_as_published;
};

struct mosquitto__subshared
{
    struct UT_hash_handle hh;
    char* name;
    struct mosquitto__subleaf* subs;
};

struct mosquitto__subhier
{
    struct UT_hash_handle hh;
    struct mosquitto__subhier* parent;
    struct mosquitto__subhier* children;
    struct mosquitto__subleaf* subs;
    struct mosquitto__subshared* shared;
    char* topic;
    uint16_t topic_len;
};

struct mosquitto__subshared_ref
{
    struct mosquitto__subhier* hier;
    struct mosquitto__subshared* shared;
};

enum mosquitto__unpwd_hashtype
{
    mosquitto__unpwd_hashtype_pw_sha512 = 0x6,
    mosquitto__unpwd_hashtype_pw_sha512_pbkdf2 = 0x7
};

struct mosquitto__unpwd
{
    struct UT_hash_handle hh;
    char* username;
    char* password;
    char* clientid;
    enum mosquitto__unpwd_hashtype hashtype;
};

struct mosquitto_acl_msg
{
    char const* topic;
    void const* payload;
    int32_t payloadlen;
    int32_t qos;
    bool retain;
};

typedef int32_t (* FUNC_auth_plugin_acl_check_v3)(void*, int32_t, struct mosquitto const*, struct mosquitto_acl_msg*);

typedef int32_t (* FUNC_auth_plugin_acl_check_v4)(void*, int32_t, struct mosquitto*, struct mosquitto_acl_msg*);

struct mosquitto_auth_opt
{
    char* key;
    char* value;
};

typedef int32_t (* FUNC_auth_plugin_cleanup_v2)(void*, struct mosquitto_auth_opt*, int32_t);

typedef int32_t (* FUNC_auth_plugin_init_v2)(void**, struct mosquitto_auth_opt*, int32_t);

typedef int32_t (* FUNC_auth_plugin_security_cleanup_v2)(void*, struct mosquitto_auth_opt*, int32_t, bool);

typedef int32_t (* FUNC_auth_plugin_security_init_v2)(void*, struct mosquitto_auth_opt*, int32_t, bool);

enum mosquitto_bridge_start_type
{
    mosquitto_bridge_start_type_bst_automatic = 0x0,
    mosquitto_bridge_start_type_bst_lazy = 0x1,
    mosquitto_bridge_start_type_bst_manual = 0x2,
    mosquitto_bridge_start_type_bst_once = 0x3
};

enum mosquitto_client_msg_1_direction
{
    mosquitto_client_msg_1_direction_mosq_md_in = 0x0,
    mosquitto_client_msg_1_direction_mosq_md_out = 0x1
};

enum mosquitto_client_msg_1_state
{
    mosquitto_client_msg_1_state_mosq_ms_invalid = 0x0,
    mosquitto_client_msg_1_state_mosq_ms_publish_qos0 = 0x1,
    mosquitto_client_msg_1_state_mosq_ms_publish_qos1 = 0x2,
    mosquitto_client_msg_1_state_mosq_ms_wait_for_puback = 0x3,
    mosquitto_client_msg_1_state_mosq_ms_publish_qos2 = 0x4,
    mosquitto_client_msg_1_state_mosq_ms_wait_for_pubrec = 0x5,
    mosquitto_client_msg_1_state_mosq_ms_resend_pubrel = 0x6,
    mosquitto_client_msg_1_state_mosq_ms_wait_for_pubrel = 0x7,
    mosquitto_client_msg_1_state_mosq_ms_resend_pubcomp = 0x8,
    mosquitto_client_msg_1_state_mosq_ms_wait_for_pubcomp = 0x9,
    mosquitto_client_msg_1_state_mosq_ms_send_pubrec = 0xa,
    mosquitto_client_msg_1_state_mosq_ms_queued = 0xb
};

enum mosquitto_client_msg_direction
{
    mosquitto_client_msg_direction_mosq_md_in = 0x0,
    mosquitto_client_msg_direction_mosq_md_out = 0x1
};

enum mosquitto_client_msg_state
{
    mosquitto_client_msg_state_mosq_ms_invalid = 0x0,
    mosquitto_client_msg_state_mosq_ms_publish_qos0 = 0x1,
    mosquitto_client_msg_state_mosq_ms_publish_qos1 = 0x2,
    mosquitto_client_msg_state_mosq_ms_wait_for_puback = 0x3,
    mosquitto_client_msg_state_mosq_ms_publish_qos2 = 0x4,
    mosquitto_client_msg_state_mosq_ms_wait_for_pubrec = 0x5,
    mosquitto_client_msg_state_mosq_ms_resend_pubrel = 0x6,
    mosquitto_client_msg_state_mosq_ms_wait_for_pubrel = 0x7,
    mosquitto_client_msg_state_mosq_ms_resend_pubcomp = 0x8,
    mosquitto_client_msg_state_mosq_ms_wait_for_pubcomp = 0x9,
    mosquitto_client_msg_state_mosq_ms_send_pubrec = 0xa,
    mosquitto_client_msg_state_mosq_ms_queued = 0xb
};

enum mosquitto_client_state
{
    mosquitto_client_state_mosq_cs_new = 0x0,
    mosquitto_client_state_mosq_cs_connected = 0x1,
    mosquitto_client_state_mosq_cs_disconnecting = 0x2,
    mosquitto_client_state_mosq_cs_active = 0x3,
    mosquitto_client_state_mosq_cs_connect_pending = 0x4,
    mosquitto_client_state_mosq_cs_connect_srv = 0x5,
    mosquitto_client_state_mosq_cs_disconnect_ws = 0x6,
    mosquitto_client_state_mosq_cs_disconnected = 0x7,
    mosquitto_client_state_mosq_cs_socks5_new = 0x8,
    mosquitto_client_state_mosq_cs_socks5_start = 0x9,
    mosquitto_client_state_mosq_cs_socks5_request = 0xa,
    mosquitto_client_state_mosq_cs_socks5_reply = 0xb,
    mosquitto_client_state_mosq_cs_socks5_auth_ok = 0xc,
    mosquitto_client_state_mosq_cs_socks5_userpass_reply = 0xd,
    mosquitto_client_state_mosq_cs_socks5_send_userpass = 0xe,
    mosquitto_client_state_mosq_cs_expiring = 0xf,
    mosquitto_client_state_mosq_cs_duplicate = 0x11,
    mosquitto_client_state_mosq_cs_disconnect_with_will = 0x12,
    mosquitto_client_state_mosq_cs_disused = 0x13,
    mosquitto_client_state_mosq_cs_authenticating = 0x14,
    mosquitto_client_state_mosq_cs_reauthenticating = 0x15
};

struct mosquitto_evt_acl_check
{
    void* future;
    struct mosquitto* client;
    char const* topic;
    void const* payload;
    void* properties;
    int32_t access;
    uint32_t payloadlen;
    uint8_t qos;
    bool retain;
    void* future2[0x4];
};

struct mosquitto_evt_basic_auth
{
    void* future;
    struct mosquitto* client;
    char* username;
    char* password;
    void* future2[0x4];
};

struct mosquitto_evt_disconnect
{
    void* future;
    struct mosquitto* client;
    int32_t reason;
    void* future2[0x4];
};

struct mosquitto_evt_extended_auth
{
    void* future;
    struct mosquitto* client;
    void const* data_in;
    void* data_out;
    uint16_t data_in_len;
    uint16_t data_out_len;
    void* future2[0x4];
};

struct mosquitto_evt_psk_key
{
    void* future;
    struct mosquitto* client;
    char const* hint;
    char const* identity;
    char* key;
    int32_t max_key_len;
    void* future2[0x4];
};

struct mosquitto_evt_tick
{
    void* future;
    int32_t now_ns;
    int32_t next_ns;
    int32_t now_s;
    int32_t next_s;
    void* future2[0x4];
};

struct mosquitto_message
{
    int32_t mid;
    char* topic;
    void* payload;
    int32_t payloadlen;
    int32_t qos;
    bool retain;
};

enum mosquitto_message_all_state
{
    mosquitto_message_all_state_mosq_ms_invalid = 0x0,
    mosquitto_message_all_state_mosq_ms_publish_qos0 = 0x1,
    mosquitto_message_all_state_mosq_ms_publish_qos1 = 0x2,
    mosquitto_message_all_state_mosq_ms_wait_for_puback = 0x3,
    mosquitto_message_all_state_mosq_ms_publish_qos2 = 0x4,
    mosquitto_message_all_state_mosq_ms_wait_for_pubrec = 0x5,
    mosquitto_message_all_state_mosq_ms_resend_pubrel = 0x6,
    mosquitto_message_all_state_mosq_ms_wait_for_pubrel = 0x7,
    mosquitto_message_all_state_mosq_ms_resend_pubcomp = 0x8,
    mosquitto_message_all_state_mosq_ms_wait_for_pubcomp = 0x9,
    mosquitto_message_all_state_mosq_ms_send_pubrec = 0xa,
    mosquitto_message_all_state_mosq_ms_queued = 0xb
};

struct mosquitto_msg_data
{
    void* inflight;
    void* queued;
    uint32_t msg_bytes;
    uint32_t msg_bytes12;
    int32_t msg_count;
    int32_t msg_count12;
    int32_t inflight_quota;
    uint16_t inflight_maximum;
};

enum mosquitto_msg_direction
{
    mosquitto_msg_direction_mosq_md_in = 0x0,
    mosquitto_msg_direction_mosq_md_out = 0x1
};

enum mosquitto_msg_origin
{
    mosquitto_msg_origin_mosq_mo_client = 0x0,
    mosquitto_msg_origin_mosq_mo_broker = 0x1
};

enum mosquitto_msg_state
{
    mosquitto_msg_state_mosq_ms_invalid = 0x0,
    mosquitto_msg_state_mosq_ms_publish_qos0 = 0x1,
    mosquitto_msg_state_mosq_ms_publish_qos1 = 0x2,
    mosquitto_msg_state_mosq_ms_wait_for_puback = 0x3,
    mosquitto_msg_state_mosq_ms_publish_qos2 = 0x4,
    mosquitto_msg_state_mosq_ms_wait_for_pubrec = 0x5,
    mosquitto_msg_state_mosq_ms_resend_pubrel = 0x6,
    mosquitto_msg_state_mosq_ms_wait_for_pubrel = 0x7,
    mosquitto_msg_state_mosq_ms_resend_pubcomp = 0x8,
    mosquitto_msg_state_mosq_ms_wait_for_pubcomp = 0x9,
    mosquitto_msg_state_mosq_ms_send_pubrec = 0xa,
    mosquitto_msg_state_mosq_ms_queued = 0xb
};

enum mosquitto_msg_store_origin
{
    mosquitto_msg_store_origin_mosq_mo_client = 0x0,
    mosquitto_msg_store_origin_mosq_mo_broker = 0x1
};

struct mosquitto_opt
{
    char* key;
    char* value;
};

typedef int32_t (* FUNC_auth_plugin_cleanup_v3)(void*, struct mosquitto_opt*, int32_t);

typedef int32_t (* FUNC_auth_plugin_cleanup_v4)(void*, struct mosquitto_opt*, int32_t);

typedef int32_t (* FUNC_auth_plugin_init_v3)(void**, struct mosquitto_opt*, int32_t);

typedef int32_t (* FUNC_auth_plugin_init_v4)(void**, struct mosquitto_opt*, int32_t);

typedef int32_t (* FUNC_auth_plugin_security_cleanup_v3)(void*, struct mosquitto_opt*, int32_t, bool);

typedef int32_t (* FUNC_auth_plugin_security_cleanup_v4)(void*, struct mosquitto_opt*, int32_t, bool);

typedef int32_t (* FUNC_auth_plugin_security_init_v3)(void*, struct mosquitto_opt*, int32_t, bool);

typedef int32_t (* FUNC_auth_plugin_security_init_v4)(void*, struct mosquitto_opt*, int32_t, bool);

typedef int32_t (* FUNC_plugin_cleanup_v5)(void*, struct mosquitto_opt*, int32_t);

struct mosquitto_evt_reload
{
    void* future;
    struct mosquitto_opt* options;
    int32_t option_count;
    void* future2[0x4];
};

enum mosquitto_plugin_event
{
    MOSQ_EVT_RELOAD = 0x1,
    MOSQ_EVT_ACL_CHECK = 0x2,
    MOSQ_EVT_BASIC_AUTH = 0x3,
    MOSQ_EVT_EXT_AUTH_START = 0x4,
    MOSQ_EVT_EXT_AUTH_CONTINUE = 0x5,
    MOSQ_EVT_CONTROL = 0x6,
    MOSQ_EVT_MESSAGE = 0x7,
    MOSQ_EVT_PSK_KEY = 0x8,
    MOSQ_EVT_TICK = 0x9,
    MOSQ_EVT_DISCONNECT = 0xa
};

struct mosquitto_plugin_id_t
{
    struct mosquitto__listener* listener;
};

typedef int32_t (* FUNC_plugin_init_v5)(struct mosquitto_plugin_id_t*, void**, struct mosquitto_opt*, int32_t);

struct mosquitto__auth_plugin
{
    void* lib;
    void* user_data;
    int32_t (* plugin_version);
    struct mosquitto_plugin_id_t* identifier;
    FUNC_plugin_init_v5 plugin_init_v5;
    FUNC_plugin_cleanup_v5 plugin_cleanup_v5;
    FUNC_auth_plugin_init_v4 plugin_init_v4;
    FUNC_auth_plugin_cleanup_v4 plugin_cleanup_v4;
    FUNC_auth_plugin_security_init_v4 security_init_v4;
    FUNC_auth_plugin_security_cleanup_v4 security_cleanup_v4;
    FUNC_auth_plugin_acl_check_v4 acl_check_v4;
    FUNC_auth_plugin_unpwd_check_v4 unpwd_check_v4;
    FUNC_auth_plugin_psk_key_get_v4 psk_key_get_v4;
    FUNC_auth_plugin_auth_start_v4 auth_start_v4;
    FUNC_auth_plugin_auth_continue_v4 auth_continue_v4;
    FUNC_auth_plugin_init_v3 plugin_init_v3;
    FUNC_auth_plugin_cleanup_v3 plugin_cleanup_v3;
    FUNC_auth_plugin_security_init_v3 security_init_v3;
    FUNC_auth_plugin_security_cleanup_v3 security_cleanup_v3;
    FUNC_auth_plugin_acl_check_v3 acl_check_v3;
    FUNC_auth_plugin_unpwd_check_v3 unpwd_check_v3;
    FUNC_auth_plugin_psk_key_get_v3 psk_key_get_v3;
    FUNC_auth_plugin_init_v2 plugin_init_v2;
    FUNC_auth_plugin_cleanup_v2 plugin_cleanup_v2;
    FUNC_auth_plugin_security_init_v2 security_init_v2;
    FUNC_auth_plugin_security_cleanup_v2 security_cleanup_v2;
    FUNC_auth_plugin_acl_check_v2 acl_check_v2;
    FUNC_auth_plugin_unpwd_check_v2 unpwd_check_v2;
    FUNC_auth_plugin_psk_key_get_v2 psk_key_get_v2;
    int32_t version;
};

struct mosquitto__auth_plugin_config
{
    char* path;
    struct mosquitto_opt* options;
    int32_t option_count;
    bool deny_special_chars;
    struct mosquitto__auth_plugin plugin;
};

enum mosquitto_protocol
{
    mosquitto_protocol_mp_mqtt = 0x0,
    mosquitto_protocol_mp_mqttsn = 0x1,
    mosquitto_protocol_mp_websockets = 0x2
};

enum mosquitto_pwhash_type
{
    mosquitto_pwhash_type_pw_sha512 = 0x6,
    mosquitto_pwhash_type_pw_sha512_pbkdf2 = 0x7
};

enum mosquitto_state
{
    mosquitto_state_mosq_cs_new = 0x0,
    mosquitto_state_mosq_cs_connected = 0x1,
    mosquitto_state_mosq_cs_disconnecting = 0x2,
    mosquitto_state_mosq_cs_active = 0x3,
    mosquitto_state_mosq_cs_connect_pending = 0x4,
    mosquitto_state_mosq_cs_connect_srv = 0x5,
    mosquitto_state_mosq_cs_disconnect_ws = 0x6,
    mosquitto_state_mosq_cs_disconnected = 0x7,
    mosquitto_state_mosq_cs_socks5_new = 0x8,
    mosquitto_state_mosq_cs_socks5_start = 0x9,
    mosquitto_state_mosq_cs_socks5_request = 0xa,
    mosquitto_state_mosq_cs_socks5_reply = 0xb,
    mosquitto_state_mosq_cs_socks5_auth_ok = 0xc,
    mosquitto_state_mosq_cs_socks5_userpass_reply = 0xd,
    mosquitto_state_mosq_cs_socks5_send_userpass = 0xe,
    mosquitto_state_mosq_cs_expiring = 0xf,
    mosquitto_state_mosq_cs_duplicate = 0x11,
    mosquitto_state_mosq_cs_disconnect_with_will = 0x12,
    mosquitto_state_mosq_cs_disused = 0x13,
    mosquitto_state_mosq_cs_authenticating = 0x14,
    mosquitto_state_mosq_cs_reauthenticating = 0x15
};

enum mqtt311_connack_codes
{
    CONNACK_ACCEPTED = 0x0,
    CONNACK_REFUSED_PROTOCOL_VERSION = 0x1,
    CONNACK_REFUSED_IDENTIFIER_REJECTED = 0x2,
    CONNACK_REFUSED_SERVER_UNAVAILABLE = 0x3,
    CONNACK_REFUSED_BAD_USERNAME_PASSWORD = 0x4,
    CONNACK_REFUSED_NOT_AUTHORIZED = 0x5
};

enum mqtt5_property
{
    MQTT_PROP_PAYLOAD_FORMAT_INDICATOR = 0x1,
    MQTT_PROP_MESSAGE_EXPIRY_INTERVAL = 0x2,
    MQTT_PROP_CONTENT_TYPE = 0x3,
    MQTT_PROP_RESPONSE_TOPIC = 0x8,
    MQTT_PROP_CORRELATION_DATA = 0x9,
    MQTT_PROP_SUBSCRIPTION_IDENTIFIER = 0xb,
    MQTT_PROP_SESSION_EXPIRY_INTERVAL = 0x11,
    MQTT_PROP_ASSIGNED_CLIENT_IDENTIFIER = 0x12,
    MQTT_PROP_SERVER_KEEP_ALIVE = 0x13,
    MQTT_PROP_AUTHENTICATION_METHOD = 0x15,
    MQTT_PROP_AUTHENTICATION_DATA = 0x16,
    MQTT_PROP_REQUEST_PROBLEM_INFORMATION = 0x17,
    MQTT_PROP_WILL_DELAY_INTERVAL = 0x18,
    MQTT_PROP_REQUEST_RESPONSE_INFORMATION = 0x19,
    MQTT_PROP_RESPONSE_INFORMATION = 0x1a,
    MQTT_PROP_SERVER_REFERENCE = 0x1c,
    MQTT_PROP_REASON_STRING = 0x1f,
    MQTT_PROP_RECEIVE_MAXIMUM = 0x21,
    MQTT_PROP_TOPIC_ALIAS_MAXIMUM = 0x22,
    MQTT_PROP_TOPIC_ALIAS = 0x23,
    MQTT_PROP_MAXIMUM_QOS = 0x24,
    MQTT_PROP_RETAIN_AVAILABLE = 0x25,
    MQTT_PROP_USER_PROPERTY = 0x26,
    MQTT_PROP_MAXIMUM_PACKET_SIZE = 0x27,
    MQTT_PROP_WILDCARD_SUB_AVAILABLE = 0x28,
    MQTT_PROP_SUBSCRIPTION_ID_AVAILABLE = 0x29,
    MQTT_PROP_SHARED_SUB_AVAILABLE = 0x2a
};

enum mqtt5_property_type
{
    MQTT_PROP_TYPE_BYTE = 0x1,
    MQTT_PROP_TYPE_INT16 = 0x2,
    MQTT_PROP_TYPE_INT32 = 0x3,
    MQTT_PROP_TYPE_VARINT = 0x4,
    MQTT_PROP_TYPE_BINARY = 0x5,
    MQTT_PROP_TYPE_STRING = 0x6,
    MQTT_PROP_TYPE_STRING_PAIR = 0x7
};

enum mqtt5_return_codes
{
    MQTT_RC_SUCCESS = 0x0,
    MQTT_RC_NORMAL_DISCONNECTION = 0x0,
    MQTT_RC_GRANTED_QOS0 = 0x0,
    MQTT_RC_GRANTED_QOS1 = 0x1,
    MQTT_RC_GRANTED_QOS2 = 0x2,
    MQTT_RC_DISCONNECT_WITH_WILL_MSG = 0x4,
    MQTT_RC_NO_MATCHING_SUBSCRIBERS = 0x10,
    MQTT_RC_NO_SUBSCRIPTION_EXISTED = 0x11,
    MQTT_RC_CONTINUE_AUTHENTICATION = 0x18,
    MQTT_RC_REAUTHENTICATE = 0x19,
    MQTT_RC_UNSPECIFIED = 0x80,
    MQTT_RC_MALFORMED_PACKET = 0x81,
    MQTT_RC_PROTOCOL_ERROR = 0x82,
    MQTT_RC_IMPLEMENTATION_SPECIFIC = 0x83,
    MQTT_RC_UNSUPPORTED_PROTOCOL_VERSION = 0x84,
    MQTT_RC_CLIENTID_NOT_VALID = 0x85,
    MQTT_RC_BAD_USERNAME_OR_PASSWORD = 0x86,
    MQTT_RC_NOT_AUTHORIZED = 0x87,
    MQTT_RC_SERVER_UNAVAILABLE = 0x88,
    MQTT_RC_SERVER_BUSY = 0x89,
    MQTT_RC_BANNED = 0x8a,
    MQTT_RC_SERVER_SHUTTING_DOWN = 0x8b,
    MQTT_RC_BAD_AUTHENTICATION_METHOD = 0x8c,
    MQTT_RC_KEEP_ALIVE_TIMEOUT = 0x8d,
    MQTT_RC_SESSION_TAKEN_OVER = 0x8e,
    MQTT_RC_TOPIC_FILTER_INVALID = 0x8f,
    MQTT_RC_TOPIC_NAME_INVALID = 0x90,
    MQTT_RC_PACKET_ID_IN_USE = 0x91,
    MQTT_RC_PACKET_ID_NOT_FOUND = 0x92,
    MQTT_RC_RECEIVE_MAXIMUM_EXCEEDED = 0x93,
    MQTT_RC_TOPIC_ALIAS_INVALID = 0x94,
    MQTT_RC_PACKET_TOO_LARGE = 0x95,
    MQTT_RC_MESSAGE_RATE_TOO_HIGH = 0x96,
    MQTT_RC_QUOTA_EXCEEDED = 0x97,
    MQTT_RC_ADMINISTRATIVE_ACTION = 0x98,
    MQTT_RC_PAYLOAD_FORMAT_INVALID = 0x99,
    MQTT_RC_RETAIN_NOT_SUPPORTED = 0x9a,
    MQTT_RC_QOS_NOT_SUPPORTED = 0x9b,
    MQTT_RC_USE_ANOTHER_SERVER = 0x9c,
    MQTT_RC_SERVER_MOVED = 0x9d,
    MQTT_RC_SHARED_SUBS_NOT_SUPPORTED = 0x9e,
    MQTT_RC_CONNECTION_RATE_EXCEEDED = 0x9f,
    MQTT_RC_MAXIMUM_CONNECT_TIME = 0xa0,
    MQTT_RC_SUBSCRIPTION_IDS_NOT_SUPPORTED = 0xa1,
    MQTT_RC_WILDCARD_SUBS_NOT_SUPPORTED = 0xa2
};

enum mqtt5_sub_options
{
    MQTT_SUB_OPT_NO_LOCAL = 0x4,
    MQTT_SUB_OPT_RETAIN_AS_PUBLISHED = 0x8,
    MQTT_SUB_OPT_SEND_RETAIN_ALWAYS = 0x0,
    MQTT_SUB_OPT_SEND_RETAIN_NEW = 0x10,
    MQTT_SUB_OPT_SEND_RETAIN_NEVER = 0x20
};

struct mqtt__string
{
    char* v;
    uint16_t len;
};

struct mqtt5__property
{
    struct mqtt5__property* next;
    union
    {
        uint8_t i8;
        uint16_t i16;
        uint32_t i32;
        uint32_t varint;
        struct mqtt__string bin;
        struct mqtt__string s;
    } value;
    struct mqtt__string name;
    int32_t identifier;
    bool client_generated;
};

typedef struct mqtt5__property mosquitto_property;

struct mosquitto_evt_control
{
    void* future;
    struct mosquitto* client;
    char const* topic;
    void const* payload;
    mosquitto_property const* properties;
    char* reason_string;
    uint32_t payloadlen;
    uint8_t qos;
    uint8_t reason_code;
    bool retain;
    void* future2[0x4];
};

struct mosquitto_evt_message
{
    void* future;
    struct mosquitto* client;
    char* topic;
    void* payload;
    mosquitto_property* properties;
    char* reason_string;
    uint32_t payloadlen;
    uint8_t qos;
    uint8_t reason_code;
    bool retain;
    void* future2[0x4];
};

struct mosquitto_message_v5
{
    struct mosquitto_message_v5* next;
    struct mosquitto_message_v5* prev;
    char* topic;
    void* payload;
    mosquitto_property* properties;
    char* clientid;
    int32_t payloadlen;
    int32_t qos;
    bool retain;
};

typedef uint32_t nfds_t;

typedef uint32_t nlink_t;

typedef int64_t off_t;

enum p_flags
{
    PF_X = 0x1,
    PF_W = 0x2,
    PF_R = 0x4
};

enum p_type
{
    PT_NULL = 0x0,
    PT_LOAD = 0x1,
    PT_DYNAMIC = 0x2,
    PT_INTERP = 0x3,
    PT_NOTE = 0x4,
    PT_SHLIB = 0x5,
    PT_PHDR = 0x6,
    PT_TLS = 0x7,
    PT_NUM = 0x8,
    PT_LOOS = 0x60000000,
    PT_GNU_EH_FRAME = 0x6474e550,
    PT_GNU_STACK = 0x6474e551,
    PT_GNU_RELRO = 0x6474e552,
    PT_GNU_PROPERTY = 0x6474e553,
    PT_LOSUNW = 0x6ffffffa,
    PT_SUNWBSS = 0x6ffffffb,
    PT_SUNWSTACK = 0x6ffffffa,
    PT_MIPS_REGINFO = 0x70000000,
    PT_MIPS_RTPROC = 0x70000001,
    PT_MIPS_OPTIONS = 0x70000002,
    PT_MIPS_ABIFLAGS = 0x70000003
};

struct Elf32_ProgramHeader
{
    enum p_type type;
    uint32_t offset;
    uint32_t virtual_address;
    uint32_t physical_address;
    uint32_t file_size;
    uint32_t memory_size;
    enum p_flags flags;
    uint32_t align;
};

struct passwd
{
};

typedef int32_t pid_t;

struct plugin__callbacks
{
    struct mosquitto__callback* tick;
    struct mosquitto__callback* acl_check;
    struct mosquitto__callback* basic_auth;
    struct mosquitto__callback* control;
    struct mosquitto__callback* disconnect;
    struct mosquitto__callback* ext_auth_continue;
    struct mosquitto__callback* ext_auth_start;
    struct mosquitto__callback* message;
    struct mosquitto__callback* psk_key;
    struct mosquitto__callback* reload;
};

struct mosquitto__security_options
{
    struct mosquitto__unpwd* unpwd;
    struct mosquitto__unpwd* psk_id;
    struct mosquitto__acl_user* acl_list;
    struct mosquitto__acl* acl_patterns;
    char* password_file;
    char* psk_file;
    char* acl_file;
    struct mosquitto__auth_plugin_config* auth_plugin_configs;
    int32_t auth_plugin_config_count;
    char allow_anonymous;
    bool allow_zero_length_clientid;
    char* auto_id_prefix;
    uint16_t auto_id_prefix_len;
    struct plugin__callbacks plugin_callbacks;
    struct mosquitto_plugin_id_t* pid;
};

struct mosquitto__listener
{
    uint16_t port;
    char* host;
    char* bind_interface;
    int32_t max_connections;
    char* mount_point;
    mosq_sock_t* socks;
    int32_t sock_count;
    int32_t client_count;
    enum mosquitto__listener_protocol protocol;
    int32_t socket_domain;
    bool use_username_as_clientid;
    uint8_t max_qos;
    uint16_t max_topic_alias;
    struct mosquitto__security_options security_options;
    char* unix_socket_path;
};

struct pollfd
{
};

typedef uint16_t sa_family_t;

struct session_expiry_list
{
    struct mosquitto* context;
    struct session_expiry_list* prev;
    struct session_expiry_list* next;
};

enum sh_flags
{
    SHF_WRITE = 0x1,
    SHF_ALLOC = 0x2,
    SHF_EXECINSTR = 0x4,
    SHF_MERGE = 0x10,
    SHF_STRINGS = 0x20,
    SHF_INFO_LINK = 0x40,
    SHF_LINK_ORDER = 0x80,
    SHF_OS_NONCONFORMING = 0x100,
    SHF_GROUP = 0x200,
    SHF_TLS = 0x400,
    SHF_COMPRESSED = 0x800,
    SHF_MASKOS = 0xff00000,
    SHF_ENTRYSECT = 0x10000000,
    SHF_COMDEF = 0x80000000
};

enum sh_type
{
    SHT_NULL = 0x0,
    SHT_PROGBITS = 0x1,
    SHT_SYMTAB = 0x2,
    SHT_STRTAB = 0x3,
    SHT_RELA = 0x4,
    SHT_HASH = 0x5,
    SHT_DYNAMIC = 0x6,
    SHT_NOTE = 0x7,
    SHT_NOBITS = 0x8,
    SHT_REL = 0x9,
    SHT_SHLIB = 0xa,
    SHT_DYNSYM = 0xb,
    SHT_LOUSER = 0x80000000,
    SHT_HIUSER = 0xffffffff,
    SHT_LOPROC = 0x70000000,
    SHT_HIPROC = 0x7fffffff
};

struct Elf32_SectionHeader
{
    uint32_t name;
    enum sh_type type;
    enum sh_flags flags;
    uint32_t address;
    uint32_t offset;
    uint32_t size;
    uint32_t link;
    uint32_t info;
    uint32_t align;
    uint32_t entry_size;
};

typedef void (* sighandler_t)(int32_t __status);

struct sigset_t
{
};

struct sockaddr
{
};

struct sockaddr_in
{
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;
    uint8_t sin_zero[0x8];
};

struct sockaddr_in6
{
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
};

struct sockaddr_storage
{
    sa_family_t ss_family;
    char __ss_padding[0x7a];
    uint32_t __ss_align;
};

struct sockaddr_un
{
    sa_family_t sun_family;
    char sun_path[0x6c];
};

typedef uint32_t socklen_t;

typedef int64_t suseconds_t;

typedef int64_t time_t;

struct mosquitto__bridge
{
    char* name;
    struct bridge_address* addresses;
    int32_t cur_address;
    int32_t address_count;
    time_t primary_retry;
    mosq_sock_t primary_retry_sock;
    bool round_robin;
    bool try_private;
    bool try_private_accepted;
    bool clean_start;
    char clean_start_local;
    uint16_t keepalive;
    struct mosquitto__bridge_topic* topics;
    int32_t topic_count;
    bool topic_remapping;
    enum mosquitto__bridge_protocol_version protocol_version;
    time_t restart_t;
    char* remote_clientid;
    char* remote_username;
    char* remote_password;
    char* local_clientid;
    char* local_username;
    char* local_password;
    char* notification_topic;
    char* bind_address;
    bool notifications;
    bool notifications_local_only;
    enum mosquitto__bridge_start_type start_type;
    int32_t idle_timeout;
    int32_t restart_timeout;
    int32_t backoff_base;
    int32_t backoff_cap;
    int32_t threshold;
    uint32_t maximum_packet_size;
    bool lazy_reconnect;
    bool attempt_unsubscribe;
    bool initial_notification_done;
    bool outgoing_retain;
};

struct mosquitto__config
{
    bool allow_duplicate_messages;
    int32_t autosave_interval;
    bool autosave_on_changes;
    bool check_retain_source;
    char* clientid_prefixes;
    bool connection_messages;
    uint16_t cmd_port[0xa];
    int32_t cmd_port_count;
    bool daemon;
    struct mosquitto__listener default_listener;
    struct mosquitto__listener* listeners;
    int32_t listener_count;
    bool local_only;
    uint32_t log_dest;
    int32_t log_facility;
    uint32_t log_type;
    bool log_timestamp;
    char* log_timestamp_format;
    char* log_file;
    void* log_fptr;
    uint32_t max_inflight_bytes;
    uint32_t max_queued_bytes;
    int32_t max_queued_messages;
    uint32_t max_packet_size;
    uint32_t message_size_limit;
    uint16_t max_inflight_messages;
    uint16_t max_keepalive;
    uint8_t max_qos;
    bool persistence;
    char* persistence_location;
    char* persistence_file;
    char* persistence_filepath;
    time_t persistent_client_expiration;
    char* pid_file;
    bool queue_qos0_messages;
    bool per_listener_settings;
    bool retain_available;
    bool set_tcp_nodelay;
    int32_t sys_interval;
    bool upgrade_outgoing_qos;
    char* user;
    struct mosquitto__bridge* bridges;
    int32_t bridge_count;
    struct mosquitto__security_options security_options;
};

struct mosquitto_message_all
{
    struct mosquitto_message_all* next;
    struct mosquitto_message_all* prev;
    void* properties;
    time_t timestamp;
    enum mosquitto_message_all_state state;
    bool dup;
    struct mosquitto_message msg;
    uint32_t expiry_interval;
};

struct mosquitto_msg_store
{
    struct mosquitto_msg_store* next;
    struct mosquitto_msg_store* prev;
    dbid_t db_id;
    char* source_id;
    char* source_username;
    struct mosquitto__listener* source_listener;
    char** dest_ids;
    int32_t dest_id_count;
    int32_t ref_count;
    char* topic;
    mosquitto_property* properties;
    void* payload;
    time_t message_expiry_time;
    uint32_t payloadlen;
    enum mosquitto_msg_store_origin origin;
    uint16_t source_mid;
    uint16_t mid;
    uint8_t qos;
    bool retain;
};

struct mosquitto__retainhier
{
    struct UT_hash_handle hh;
    struct mosquitto__retainhier* parent;
    struct mosquitto__retainhier* children;
    struct mosquitto_msg_store* retained;
    char* topic;
    uint16_t topic_len;
};

struct mosquitto_client_msg
{
    struct mosquitto_client_msg* prev;
    struct mosquitto_client_msg* next;
    struct mosquitto_msg_store* store;
    mosquitto_property* properties;
    time_t timestamp;
    uint16_t mid;
    uint8_t qos;
    bool retain;
    enum mosquitto_client_msg_direction direction;
    enum mosquitto_client_msg_state state;
    bool dup;
};

struct mosquitto_msg_store_load
{
    struct UT_hash_handle hh;
    dbid_t db_id;
    struct mosquitto_msg_store* store;
};

struct mosquitto_db
{
    dbid_t last_db_id;
    struct mosquitto__subhier* subs;
    struct mosquitto__retainhier* retains;
    struct mosquitto* contexts_by_id;
    struct mosquitto* contexts_by_sock;
    struct mosquitto* contexts_for_free;
    struct mosquitto** bridges;
    void* clientid_index_hash;
    struct mosquitto_msg_store* msg_store;
    struct mosquitto_msg_store_load* msg_store_load;
    time_t now_s;
    time_t now_real_s;
    int32_t bridge_count;
    int32_t msg_store_count;
    uint32_t msg_store_bytes;
    char* config_file;
    struct mosquitto__config* config;
    int32_t auth_plugin_count;
    bool verbose;
    int32_t subscription_count;
    int32_t shared_subscription_count;
    int32_t retained_count;
    int32_t persistence_changes;
    struct mosquitto* ll_for_free;
    struct mosquitto_message_v5* plugin_msgs;
};

struct timespec
{
    time_t tv_sec;
    int32_t tv_nsec;
};

struct timeval
{
    time_t tv_sec;
    suseconds_t tv_usec;
};

struct tm
{
};

typedef int32_t uid_t;

struct stat
{
    dev_t st_dev;
    int32_t __st_dev_padding;
    int32_t __st_ino_truncated;
    mode_t st_mode;
    nlink_t st_nlink;
    uid_t st_uid;
    gid_t st_gid;
    dev_t st_rdev;
    int32_t __st_rdev_padding;
    off_t st_size;
    blksize_t st_blksize;
    blkcnt_t st_blocks;
    struct
    {
        int32_t tv_sec;
        int32_t tv_nsec;
    } __st_atim32;
    struct
    {
        int32_t tv_sec;
        int32_t tv_nsec;
    } __st_mtim32;
    struct
    {
        int32_t tv_sec;
        int32_t tv_nsec;
    } __st_ctim32;
    ino_t st_ino;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
};

typedef void* va_list;

typedef char* va_list_1;

typedef struct __va_list va_list_2;

struct will_delay_list
{
    struct mosquitto* context;
    struct will_delay_list* prev;
    struct will_delay_list* next;
};

struct mosquitto
{
    mosq_sock_t sock;
    uint32_t maximum_packet_size;
    enum mosquitto_protocol protocol;
    char* address;
    char* id;
    char* username;
    char* password;
    uint16_t keepalive;
    uint16_t last_mid;
    enum mosquitto_state state;
    time_t last_msg_in;
    time_t next_msg_out;
    time_t ping_t;
    struct mosquitto__packet in_packet;
    struct mosquitto__packet* current_out_packet;
    struct mosquitto__packet* out_packet;
    struct mosquitto_message_all* will;
    struct mosquitto__alias* aliases;
    struct will_delay_list* will_delay_entry;
    int32_t alias_count;
    uint32_t will_delay_interval;
    time_t will_delay_time;
    bool want_write;
    bool want_connect;
    bool clean_start;
    time_t session_expiry_time;
    uint32_t session_expiry_interval;
    bool removed_from_by_id;
    bool is_dropping;
    bool is_bridge;
    void* bridge;
    struct mosquitto_msg_data msgs_in;
    struct mosquitto_msg_data msgs_out;
    void* acl_list;
    void* listener;
    struct mosquitto__packet* out_packet_last;
    void** subs;
    void** shared_subs;
    char* auth_method;
    int32_t sub_count;
    int32_t shared_sub_count;
    int32_t pollfd_index;
    bool ws_want_write;
    bool assigned_id;
    uint8_t max_qos;
    uint8_t retain_available;
    bool tcp_nodelay;
    struct UT_hash_handle hh_id;
    struct UT_hash_handle hh_sock;
    struct mosquitto* for_free_next;
    struct session_expiry_list* expiry_list_item;
    uint16_t remote_port;
};

struct P_msg_store
{
    struct PF_msg_store F;
    void* payload;
    struct mosquitto source;
    char* topic;
    void* properties;
};
// Globals

struct mosquitto_db db;

// Function signatures

enum e_machine* const packet__read_string(int32_t arg1, void** arg2, uint16_t* arg3);
int32_t db__message_write_queued_out(void* arg1);
int32_t handle__subscribe(struct mosquitto* context);
int32_t log__printf(struct mosquitto* mosq, uint32_t level, char const* fmt, ...);
int32_t mosquitto_acl_check(struct mosquitto* context, char const* topic, uint32_t payloadlen, void* payload, uint8_t qos, bool retain, int32_t access);
int32_t mosquitto_sub_topic_check(char const* topic);
int32_t packet__read_byte(int32_t arg1, char* arg2);
int32_t packet__read_uint16(int32_t* arg1, uint16_t* arg2);
int32_t retain__queue(struct mosquitto* arg1, char* arg2, uint32_t arg3, int32_t arg4);
int32_t snprintf(char* str, uint32_t size, char const* format, ...);
int32_t sub__add(void* arg1, char* arg2, char arg3, int32_t arg4, int32_t arg5, int32_t* arg6);
uint32_t db__message_write_inflight_out_latest(int32_t* arg1);
uint32_t strlen(char const* s);
uint8_t* property__read_all(int32_t command, struct mosquitto__packet* packet, mosquitto_property** properties);
void j_free(void* ptr);
void mosquitto_property_free_all(int32_t arg1);
void mosquitto_property_read_varint(void** arg1, int32_t arg2, int32_t* arg3, int32_t arg4);
void* j_malloc(uint32_t size);
void* j_realloc(void* ptr, uint32_t size);
void** send__suback(void* arg1, int32_t arg2, uint32_t arg3, void* arg4);
