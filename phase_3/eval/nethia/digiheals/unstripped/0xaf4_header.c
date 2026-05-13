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

enum AuthenticationType
{
    AUTHTYPE_INVALID = 0xffffffff,
    AUTHTYPE_PLAINTEXT = 0x0,
    AUTHTYPE_TLS_CLIENTCERT = 0x1,
    AUTHTYPE_TLS_CLIENTCERTFP = 0x2,
    AUTHTYPE_SPKIFP = 0x3,
    AUTHTYPE_UNIXCRYPT = 0x4,
    AUTHTYPE_BCRYPT = 0x5,
    AUTHTYPE_ARGON2 = 0x6
};

struct AuthConfig
{
    enum AuthenticationType type;
    char* data;
};

enum ClientStatus
{
    CLIENT_STATUS_CONTROL = 0xfffffff8,
    CLIENT_STATUS_LOG = 0xfffffff9,
    CLIENT_STATUS_TLS_STARTTLS_HANDSHAKE = 0xfffffff8,
    CLIENT_STATUS_CONNECTING = 0xfffffffa,
    CLIENT_STATUS_TLS_CONNECT_HANDSHAKE = 0xfffffffb,
    CLIENT_STATUS_TLS_ACCEPT_HANDSHAKE = 0xfffffffc,
    CLIENT_STATUS_HANDSHAKE = 0xfffffffd,
    CLIENT_STATUS_ME = 0xfffffffe,
    CLIENT_STATUS_UNKNOWN = 0xffffffff,
    CLIENT_STATUS_SERVER = 0x0,
    CLIENT_STATUS_USER = 0x1
};

enum CmodeType
{
    CMODE_NORMAL = 0x0,
    CMODE_MEMBER = 0x1
};

typedef uint32_t Cmode_t;

struct CommandOverride;
struct ConfigFlag
{
    uint32_t temporary : 1;
    uint32_t permanent : 1;
};

struct ConfigItem_class
{
    struct ConfigItem_class* prev;
    struct ConfigItem_class* next;
    struct ConfigFlag flag;
    char* name;
    int32_t pingfreq;
    int32_t connfreq;
    int32_t maxclients;
    int32_t sendq;
    int32_t recvq;
    int32_t clients;
    int32_t xrefcount;
    uint32_t options;
};

struct ConfigItem_mask
{
    struct ConfigItem_mask* prev;
    struct ConfigItem_mask* next;
    struct ConfigFlag flag;
    char* mask;
};

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
    uint32_t buckets[0x25];
    uint32_t chains[0x29];
};

enum ExtbanCheck
{
    EXBCHK_ACCESS = 0x0,
    EXBCHK_ACCESS_ERR = 0x1,
    EXBCHK_PARAM = 0x2
};

enum ExtbanOptions
{
    EXTBOPT_CHSVSMODE = 0x1,
    EXTBOPT_ACTMODIFIER = 0x2,
    EXTBOPT_NOSTACKCHILD = 0x4,
    EXTBOPT_INVEX = 0x8,
    EXTBOPT_TKL = 0x10
};

enum ExtbanType
{
    EXBTYPE_BAN = 0x0,
    EXBTYPE_EXCEPT = 0x1,
    EXBTYPE_INVEX = 0x2,
    EXBTYPE_TKL = 0x3
};

struct FloodCounter
{
    int32_t count;
    int32_t t;
};

enum FloodOption
{
    FLD_NICK = 0x0,
    FLD_JOIN = 0x1,
    FLD_AWAY = 0x2,
    FLD_INVITE = 0x3,
    FLD_KNOCK = 0x4,
    FLD_CONVERSATIONS = 0x5,
    FLD_LAG_PENALTY = 0x6,
    FLD_VHOST = 0x7
};

enum HistoryFilterCommand
{
    HFC_SIMPLE = 0x1,
    HFC_BEFORE = 0x2,
    HFC_AFTER = 0x3,
    HFC_LATEST = 0x4,
    HFC_AROUND = 0x5,
    HFC_BETWEEN = 0x6
};

struct HistoryFilter
{
    enum HistoryFilterCommand cmd;
    int32_t last_lines;
    int32_t last_seconds;
    char* timestamp_a;
    char* msgid_a;
    char* timestamp_b;
    char* msgid_b;
    int32_t limit;
};

struct Link;
struct MessageTag
{
    struct MessageTag* prev;
    struct MessageTag* next;
    char* name;
    char* value;
};

struct MessageTagHandler;
union ModData
{
    int32_t i;
    int32_t l;
    char* str;
    void* ptr;
};

enum ModDataSync
{
    MODDATA_SYNC_NORMAL = 0x1,
    MODDATA_SYNC_EARLY = 0x2
};

enum ModDataType
{
    MODDATATYPE_LOCAL_VARIABLE = 0x1,
    MODDATATYPE_GLOBAL_VARIABLE = 0x2,
    MODDATATYPE_CLIENT = 0x3,
    MODDATATYPE_LOCAL_CLIENT = 0x4,
    MODDATATYPE_CHANNEL = 0x5,
    MODDATATYPE_MEMBER = 0x6,
    MODDATATYPE_MEMBERSHIP = 0x7
};

struct Mode
{
    Cmode_t mode;
    void* mode_params[0x11];
};

struct Module;
struct Callback
{
    struct Callback* prev;
    struct Callback* next;
    int16_t type;
    union
    {
        int32_t (* intfunc);
        int32_t (* voidfunc);
        int32_t (* pvoidfunc);
        int32_t (* stringfunc);
        int32_t (* conststringfunc);
    } func;
    struct Module* owner;
    char willberemoved;
};

struct Efunction
{
    struct Efunction* prev;
    struct Efunction* next;
    int16_t type;
    union
    {
        int32_t (* intfunc);
        int32_t (* voidfunc);
        int32_t (* pvoidfunc);
        int32_t (* stringfunc);
        int32_t (* conststringfunc);
    } func;
    struct Module* owner;
    char willberemoved;
};

struct Hook
{
    struct Hook* prev;
    struct Hook* next;
    int32_t priority;
    int32_t type;
    union
    {
        int32_t (* intfunc);
        int32_t (* voidfunc);
        int32_t (* stringfunc);
        int32_t (* conststringfunc);
    } func;
    struct Module* owner;
};

struct ISupport
{
    struct ISupport* prev;
    struct ISupport* next;
    char* token;
    char* value;
    struct Module* owner;
};

struct ModDataInfo
{
    struct ModDataInfo* prev;
    struct ModDataInfo* next;
    char* name;
    struct Module* owner;
    enum ModDataType type;
    int32_t slot;
    char unloaded;
    void (* free)(union ModData*);
    char const* (* serialize)(union ModData*);
    void (* unserialize)(char const*, union ModData*);
    enum ModDataSync sync;
    int32_t remote_write;
    int32_t self_write;
};

struct ModuleChild
{
    struct ModuleChild* prev;
    struct ModuleChild* next;
    struct Module* child;
};

struct Hooktype
{
    int16_t id;
    char* string;
    struct ModuleChild* parents;
};

struct ModuleHeader
{
    char* name;
    char* version;
    char* description;
    char* author;
    char* modversion;
};

struct ModuleInfo
{
    int32_t size;
    int32_t module_load;
    struct Module* handle;
};

enum ModuleObjectType
{
    MOBJ_EVENT = 0x1,
    MOBJ_HOOK = 0x2,
    MOBJ_COMMAND = 0x3,
    MOBJ_HOOKTYPE = 0x4,
    MOBJ_VERSIONFLAG = 0x5,
    MOBJ_UMODE = 0x7,
    MOBJ_COMMANDOVERRIDE = 0x8,
    MOBJ_EXTBAN = 0x9,
    MOBJ_CALLBACK = 0xa,
    MOBJ_ISUPPORT = 0xb,
    MOBJ_EFUNCTION = 0xc,
    MOBJ_CMODE = 0xd,
    MOBJ_MODDATA = 0xe,
    MOBJ_VALIDATOR = 0xf,
    MOBJ_CLICAP = 0x10,
    MOBJ_MTAG = 0x11,
    MOBJ_HISTORY_BACKEND = 0x12
};

enum OperPermission
{
    OPER_ALLOW = 0x1,
    OPER_DENY = 0x0
};

struct RealCommand;
struct Command
{
    struct Command* prev;
    struct Command* next;
    struct RealCommand* cmd;
};

struct SWhois
{
    struct SWhois* prev;
    struct SWhois* next;
    int32_t priority;
    char* line;
    char* setby;
};

enum SocketType
{
    SOCKET_TYPE_IPV4 = 0x0,
    SOCKET_TYPE_IPV6 = 0x1,
    SOCKET_TYPE_UNIX = 0x2
};

struct TLSOptions
{
    char* certificate_file;
    char* key_file;
    char* trusted_ca_file;
    uint32_t protocols;
    char* ciphers;
    char* ciphersuites;
    char* ecdh_curves;
    char* outdated_protocols;
    char* outdated_ciphers;
    int32_t options;
    int32_t renegotiate_bytes;
    int32_t renegotiate_timeout;
    int32_t sts_port;
    int32_t sts_duration;
    int32_t sts_preload;
};

struct ConfigItem_listen
{
    struct ConfigItem_listen* prev;
    struct ConfigItem_listen* next;
    struct ConfigFlag flag;
    enum SocketType socket_type;
    char* file;
    char* ip;
    int32_t port;
    int32_t options;
    int32_t clients;
    int32_t fd;
    void* ssl_ctx;
    struct TLSOptions* tls_options;
    int32_t websocket_options;
    char* websocket_forward;
};

struct TrafficStats
{
    int64_t messages_sent;
    int64_t messages_received;
    int64_t bytes_sent;
    int64_t bytes_received;
};

struct User;
struct Versionflag
{
    struct Versionflag* prev;
    struct Versionflag* next;
    char flag;
    struct ModuleChild* parents;
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
    int32_t (* entry);
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

struct hostent
{
    char* h_name;
    char** h_aliases;
    int32_t h_addrtype;
    int32_t h_length;
    char** h_addr_list;
};

struct list_head
{
    struct list_head* next;
    struct list_head* prev;
};

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

typedef int64_t suseconds_t;

typedef int64_t time_t;

struct Ban
{
    struct Ban* next;
    char* banstr;
    char* who;
    time_t when;
};

struct ConfigItem_link
{
    struct ConfigItem_link* prev;
    struct ConfigItem_link* next;
    struct ConfigFlag flag;
    char* servername;
    struct
    {
        struct ConfigItem_mask* mask;
    } incoming;
    struct
    {
        char* bind_ip;
        char* hostname;
        int32_t port;
        int32_t options;
    } outgoing;
    struct AuthConfig* auth;
    char* hub;
    char* leaf;
    int32_t leaf_depth;
    struct ConfigItem_class* class_;
    int32_t options;
    int32_t verify_certificate;
    int32_t refcount;
    time_t hold;
    char* connect_ip;
    void* ssl_ctx;
    struct TLSOptions* tls_options;
};

struct HistoryLogLine
{
    struct HistoryLogLine* prev;
    struct HistoryLogLine* next;
    time_t t;
    struct MessageTag* mtags;
    char line[0x1];
};

struct HistoryResult
{
    char* object;
    struct HistoryLogLine* log;
    struct HistoryLogLine* log_tail;
};

struct HistoryBackend
{
    struct HistoryBackend* prev;
    struct HistoryBackend* next;
    char* name;
    int32_t (* history_set_limit)(char const*, int32_t, int32_t);
    int32_t (* history_add)(char const*, struct MessageTag*, char const*);
    struct HistoryResult* (* history_request)(char const*, struct HistoryFilter*);
    int32_t (* history_destroy)(char const*);
    struct Module* owner;
    char unloaded;
};

struct Server
{
    char by[0x1f];
    struct ConfigItem_link* conf;
    int32_t users;
    time_t boottime;
    struct
    {
        uint32_t synced : 1;
        uint32_t server_sent : 1;

    } flags;
    struct
    {
        char* usermodes;
        char* chanmodes[0x4];
        int32_t protocol;
        char* software;
        char* nickchars;
    } features;
};

struct Watch
{
    struct Watch* hnext;
    time_t lasttime;
    struct Link* watch;
    char nick[0x1];
};

struct timeval
{
    time_t tv_sec;
    suseconds_t tv_usec;
};

typedef uint8_t u_char;

typedef uint32_t u_int;

struct dbuf
{
    u_int length;
    struct list_head dbuf_list;
};

typedef uint16_t u_short;

struct LocalClient
{
    int32_t fd;
    enum SocketType socket_type;
    void* ssl;
    time_t fake_lag;
    int32_t fake_lag_msec;
    time_t creationtime;
    time_t last_msg_received;
    struct dbuf sendQ;
    struct dbuf recvQ;
    struct ConfigItem_class* class_;
    int32_t proto;
    int32_t caps;
    time_t nexttarget;
    u_char targets[0x14];
    struct ConfigItem_listen* listener;
    int32_t serial;
    time_t next_nick_allowed;
    time_t idle_since;
    struct TrafficStats traffic;
    union ModData moddata[0xc];
    char* error_str;
    char sasl_agent[0x1f];
    uint8_t sasl_out;
    uint8_t sasl_complete;
    time_t sasl_sent_time;
    char* sni_servername;
    int32_t cap_protocol;
    uint32_t nospoof;
    char* passwd;
    int32_t authfd;
    int32_t identbufcnt;
    struct hostent* hostp;
    char sockhost[0x40];
    u_short port;
    struct FloodCounter flood[0xa];
};

struct Client
{
    struct list_head client_node;
    struct list_head lclient_node;
    struct list_head special_node;
    struct LocalClient* local;
    struct User* user;
    struct Server* server;
    enum ClientStatus status;
    struct list_head client_hash;
    char last_knock[0xd];
    char* reason;
    char name[0x40];
    time_t lastnick;
    int32_t flags;
    int32_t umodes;
    struct Client* direction;
    uint8_t hopcount;
    char ident[0xb];
    char info[0x33];
    char id[0xd];
    struct list_head id_hash;
    struct Client* uplink;
    char* ip;
    union ModData moddata[0x18];
};

typedef void (* AliasCmdFunc)(struct Client*, struct MessageTag*, int32_t, char const**, char const*);

struct ClientCapability
{
    struct ClientCapability* prev;
    struct ClientCapability* next;
    char* name;
    int32_t cap;
    int32_t flags;
    int32_t (* visible)(struct Client*);
    char const* (* parameter)(struct Client*);
    struct MessageTagHandler* mtag_handler;
    struct Module* owner;
    char unloaded;
};

typedef void (* CmdFunc)(struct Client*, struct MessageTag*, int32_t, char const**);

struct Member
{
    struct Member* next;
    struct Client* client;
    char member_modes[0x8];
    union ModData moddata[0x4];
};

struct Channel
{
    struct Channel* nextch;
    struct Channel* prevch;
    struct Channel* hnextch;
    struct Mode mode;
    time_t creationtime;
    char* topic;
    char* topic_nick;
    time_t topic_time;
    int32_t users;
    struct Member* members;
    struct Ban* banlist;
    struct Ban* exlist;
    struct Ban* invexlist;
    char* mode_lock;
    union ModData moddata[0x8];
    char name[0x21];
};

struct BanContext
{
    struct Client* client;
    struct Channel* channel;
    char const* banstr;
    int32_t ban_check_types;
    char const* msg;
    char const* error_msg;
    int32_t no_extbans;
    int32_t what;
    enum ExtbanType ban_type;
    enum ExtbanCheck is_ok_check;
    int32_t conv_options;
};

struct Cmode
{
    struct Cmode* prev;
    struct Cmode* next;
    char letter;
    enum CmodeType type;
    Cmode_t mode;
    char prefix;
    char sjoin_prefix;
    int32_t rank;
    int32_t paracount;
    int32_t (* is_ok)(struct Client*, struct Channel*, char, char const*, int32_t, int32_t);
    void* (* put_param)(void*, char const*);
    char const* (* get_param)(void*);
    char const* (* conv_param)(char const*, struct Client*, struct Channel*);
    void (* free_param)(void*);
    void* (* dup_struct)(void*);
    int32_t (* sjoin_check)(struct Channel*, void*, void*);
    char local;
    char unset_with_param;
    char unloaded;
    int32_t param_slot;
    struct Module* owner;
};

struct Extban
{
    struct Extban* prev;
    struct Extban* next;
    char letter;
    char* name;
    enum ExtbanOptions options;
    uint32_t is_banned_events;
    int32_t (* is_ok)(struct BanContext*);
    char const* (* conv_param)(struct BanContext*, struct Extban*);
    int32_t (* is_banned)(struct BanContext*);
    struct Module* owner;
    char unloaded;
};

struct Link
{
    struct Link* next;
    int32_t flags;
    union
    {
        struct Client* client;
        struct Channel* channel;
        struct Watch* wptr;
    } value;
};

struct Membership
{
    struct Membership* next;
    struct Channel* channel;
    char member_modes[0x8];
    union ModData moddata[0x4];
};

struct MessageTagHandler
{
    struct MessageTagHandler* prev;
    struct MessageTagHandler* next;
    char* name;
    int32_t flags;
    int32_t (* is_ok)(struct Client*, char const*, char const*);
    int32_t (* should_send_to_client)(struct Client*);
    struct Module* owner;
    struct ClientCapability* clicap_handler;
    char unloaded;
};

typedef void (* OverrideCmdFunc)(struct CommandOverride*, struct Client*, struct MessageTag*, int32_t, char const**);

struct CommandOverride
{
    struct CommandOverride* prev;
    struct CommandOverride* next;
    int32_t priority;
    struct Module* owner;
    struct RealCommand* command;
    OverrideCmdFunc func;
};

struct RealCommand
{
    struct RealCommand* prev;
    struct RealCommand* next;
    char* cmd;
    CmdFunc func;
    AliasCmdFunc aliasfunc;
    int32_t flags;
    uint32_t count;
    uint32_t parameters : 5;
    uint32_t bytes;
    struct Module* owner;
    struct RealCommand* friend_;
    struct CommandOverride* overriders;
};

struct Umode
{
    struct Umode* prev;
    struct Umode* next;
    int32_t mode;
    char letter;
    int32_t unset_on_deoper;
    int32_t (* allowed)(struct Client*, int32_t);
    char unloaded;
    struct Module* owner;
};

struct Whowas
{
    int32_t hashv;
    char* name;
    char* username;
    char* hostname;
    char* virthost;
    char* servername;
    char* realname;
    int32_t umodes;
    time_t logoff;
    struct Client* online;
    struct Whowas* next;
    struct Whowas* prev;
    struct Whowas* cnext;
    struct Whowas* cprev;
};

typedef struct Whowas WhoWas;

struct User
{
    struct Membership* channel;
    struct Link* dccallow;
    char account[0x1f];
    int32_t joined;
    char username[0xb];
    char realhost[0x40];
    char cloakedhost[0x40];
    char* virthost;
    char* server;
    struct SWhois* swhois;
    WhoWas* whowas;
    char* snomask;
    char* operlogin;
    char* away;
    time_t away_since;
};

typedef int32_t (* vFP);

struct Event
{
    struct Event* prev;
    struct Event* next;
    char* name;
    int32_t every_msec;
    int32_t count;
    vFP event;
    void* data;
    struct timeval last_run;
    char deleted;
    struct Module* owner;
};

struct ModuleObject
{
    struct ModuleObject* prev;
    struct ModuleObject* next;
    enum ModuleObjectType type;
    union
    {
        struct Event* event;
        struct Hook* hook;
        struct Command* command;
        struct Hooktype* hooktype;
        struct Versionflag* versionflag;
        struct Umode* umode;
        struct CommandOverride* cmdoverride;
        struct Extban* extban;
        struct Callback* callback;
        struct Efunction* efunction;
        struct ISupport* isupport;
        struct Cmode* cmode;
        struct ModDataInfo* moddata;
        void* validator;
        struct ClientCapability* clicap;
        struct MessageTagHandler* mtag;
        struct HistoryBackend* history_backend;
    } object;
};

struct Module
{
    struct Module* prev;
    struct Module* next;
    int32_t priority;
    struct ModuleHeader* header;
    void* dll;
    uint8_t flags;
    struct ModuleChild* children;
    struct ModuleObject* objects;
    struct ModuleInfo modinfo;
    uint8_t options;
    uint8_t errorcode;
    char* tmp_file;
    char* relpath;
    uint32_t mod_sys_version;
    uint32_t compiler_version;
};

typedef void* va_list;
// Globals


// Function signatures

int knock_member_exists(struct Client* client, struct Channel* channel, char const** reason);
struct Membership* find_membership_link(struct Membership* lp, struct Channel* ptr);
uint32_t strlen(char const* s);
void sendnumericfmt(struct Client* to, int32_t numeric, char const* fmt, ...);
void* malloc(uint32_t size);
void* memcpy(void* dest, void const* src, uint32_t n);
