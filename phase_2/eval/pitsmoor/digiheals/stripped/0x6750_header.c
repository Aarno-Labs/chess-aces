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

struct CODE
{
    char* c_name;
    int32_t c_val;
};

typedef int32_t CONN_ID;

struct Conf_Channel
{
    char name[0x33];
    char* modes[0x200];
    char key[0x41];
    char topic[0x201];
    char keyfile[0x200];
    uint32_t maxusers;
    uint32_t modes_num;
};

struct Conf_Oper
{
    char name[0x41];
    char pwd[0x41];
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
    uint32_t buckets[0x61];
    uint32_t chains[0x7d];
};

typedef uint64_t UDItype;

typedef uint16_t UINT16;

typedef uint32_t UINT32;

typedef uint8_t UINT8;

typedef uint32_t USItype;

struct _IO_FILE
{
};

typedef struct _IO_FILE FILE;

struct _REQUEST
{
    char* prefix;
    char* command;
    char* argv[0xf];
    int32_t argc;
};

typedef struct _REQUEST REQUEST;

struct _COMMAND
{
    char const* name;
    bool (* function)(void*, REQUEST*);
    int32_t type;
    int32_t min_argc;
    int32_t max_argc;
    int32_t penalty;
    int32_t lcount;
    int32_t rcount;
    int32_t bytes;
};

typedef struct _COMMAND COMMAND;

struct _NUMERIC
{
    int32_t numeric;
    bool (* function)(void*, REQUEST*);
};

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

struct array
{
    char* mem;
    uint32_t allocated;
    uint32_t used;
};

typedef int32_t clock_t;

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

union epoll_data
{
    void* ptr;
    int32_t fd;
    uint32_t u32;
    uint64_t u64;
};

typedef union epoll_data epoll_data_t;

struct epoll_event
{
};

enum fbit_implication_ante
{
    fbit_implication_ante_isa_nobit = 0x0,
    fbit_implication_ante_isa_bit_quirk_vlldm = 0x1,
    fbit_implication_ante_isa_bit_fp16fml = 0x2,
    fbit_implication_ante_isa_bit_mve = 0x3,
    fbit_implication_ante_isa_bit_cmse = 0x4,
    fbit_implication_ante_isa_bit_quirk_armv6kz = 0x5,
    fbit_implication_ante_isa_bit_dotprod = 0x6,
    fbit_implication_ante_isa_bit_crc32 = 0x7,
    fbit_implication_ante_isa_bit_xscale = 0x8,
    fbit_implication_ante_isa_bit_vfpv2 = 0x9,
    fbit_implication_ante_isa_bit_vfpv3 = 0xa,
    fbit_implication_ante_isa_bit_vfpv4 = 0xb,
    fbit_implication_ante_isa_bit_lpae = 0xc,
    fbit_implication_ante_isa_bit_armv7em = 0xd,
    fbit_implication_ante_isa_bit_fp16 = 0xe,
    fbit_implication_ante_isa_bit_adiv = 0xf,
    fbit_implication_ante_isa_bit_fp_d32 = 0x10,
    fbit_implication_ante_isa_bit_be8 = 0x11,
    fbit_implication_ante_isa_bit_fp16conv = 0x12,
    fbit_implication_ante_isa_bit_thumb2 = 0x13,
    fbit_implication_ante_isa_bit_crypto = 0x14,
    fbit_implication_ante_isa_bit_mp = 0x15,
    fbit_implication_ante_isa_bit_sec = 0x16,
    fbit_implication_ante_isa_bit_sb = 0x17,
    fbit_implication_ante_isa_bit_bf16 = 0x18,
    fbit_implication_ante_isa_bit_predres = 0x19,
    fbit_implication_ante_isa_bit_armv4 = 0x1a,
    fbit_implication_ante_isa_bit_quirk_cm3_ldrd = 0x1b,
    fbit_implication_ante_isa_bit_smallmul = 0x1c,
    fbit_implication_ante_isa_bit_armv5t = 0x1d,
    fbit_implication_ante_isa_bit_armv8_1m_main = 0x1e,
    fbit_implication_ante_isa_bit_armv6 = 0x1f,
    fbit_implication_ante_isa_bit_thumb = 0x20,
    fbit_implication_ante_isa_bit_quirk_no_asmcpu = 0x21,
    fbit_implication_ante_isa_bit_armv7 = 0x22,
    fbit_implication_ante_isa_bit_armv8 = 0x23,
    fbit_implication_ante_isa_bit_i8mm = 0x24,
    fbit_implication_ante_isa_bit_fp_dbl = 0x25,
    fbit_implication_ante_isa_bit_armv5te = 0x26,
    fbit_implication_ante_isa_bit_fpv5 = 0x27,
    fbit_implication_ante_isa_bit_iwmmxt2 = 0x28,
    fbit_implication_ante_isa_bit_notm = 0x29,
    fbit_implication_ante_isa_bit_cdecp0 = 0x2a,
    fbit_implication_ante_isa_bit_cdecp1 = 0x2b,
    fbit_implication_ante_isa_bit_cdecp2 = 0x2c,
    fbit_implication_ante_isa_bit_cdecp3 = 0x2d,
    fbit_implication_ante_isa_bit_iwmmxt = 0x2e,
    fbit_implication_ante_isa_bit_cdecp4 = 0x2f,
    fbit_implication_ante_isa_bit_cdecp5 = 0x30,
    fbit_implication_ante_isa_bit_cdecp6 = 0x31,
    fbit_implication_ante_isa_bit_cdecp7 = 0x32,
    fbit_implication_ante_isa_bit_mve_float = 0x33,
    fbit_implication_ante_isa_bit_armv8_1 = 0x34,
    fbit_implication_ante_isa_bit_armv8_2 = 0x35,
    fbit_implication_ante_isa_bit_armv8_3 = 0x36,
    fbit_implication_ante_isa_bit_tdiv = 0x37,
    fbit_implication_ante_isa_bit_armv8_4 = 0x38,
    fbit_implication_ante_isa_bit_armv8_5 = 0x39,
    fbit_implication_ante_isa_bit_armv8_6 = 0x3a,
    fbit_implication_ante_isa_bit_neon = 0x3b,
    fbit_implication_ante_isa_bit_quirk_no_volatile_ce = 0x3c,
    fbit_implication_ante_isa_bit_armv6k = 0x3d,
    fbit_implication_ante_isa_bit_vfp_base = 0x3e,
    fbit_implication_ante_isa_num_bits = 0x3f
};

enum fbit_implication_cons
{
    fbit_implication_cons_isa_nobit = 0x0,
    fbit_implication_cons_isa_bit_quirk_vlldm = 0x1,
    fbit_implication_cons_isa_bit_fp16fml = 0x2,
    fbit_implication_cons_isa_bit_mve = 0x3,
    fbit_implication_cons_isa_bit_cmse = 0x4,
    fbit_implication_cons_isa_bit_quirk_armv6kz = 0x5,
    fbit_implication_cons_isa_bit_dotprod = 0x6,
    fbit_implication_cons_isa_bit_crc32 = 0x7,
    fbit_implication_cons_isa_bit_xscale = 0x8,
    fbit_implication_cons_isa_bit_vfpv2 = 0x9,
    fbit_implication_cons_isa_bit_vfpv3 = 0xa,
    fbit_implication_cons_isa_bit_vfpv4 = 0xb,
    fbit_implication_cons_isa_bit_lpae = 0xc,
    fbit_implication_cons_isa_bit_armv7em = 0xd,
    fbit_implication_cons_isa_bit_fp16 = 0xe,
    fbit_implication_cons_isa_bit_adiv = 0xf,
    fbit_implication_cons_isa_bit_fp_d32 = 0x10,
    fbit_implication_cons_isa_bit_be8 = 0x11,
    fbit_implication_cons_isa_bit_fp16conv = 0x12,
    fbit_implication_cons_isa_bit_thumb2 = 0x13,
    fbit_implication_cons_isa_bit_crypto = 0x14,
    fbit_implication_cons_isa_bit_mp = 0x15,
    fbit_implication_cons_isa_bit_sec = 0x16,
    fbit_implication_cons_isa_bit_sb = 0x17,
    fbit_implication_cons_isa_bit_bf16 = 0x18,
    fbit_implication_cons_isa_bit_predres = 0x19,
    fbit_implication_cons_isa_bit_armv4 = 0x1a,
    fbit_implication_cons_isa_bit_quirk_cm3_ldrd = 0x1b,
    fbit_implication_cons_isa_bit_smallmul = 0x1c,
    fbit_implication_cons_isa_bit_armv5t = 0x1d,
    fbit_implication_cons_isa_bit_armv8_1m_main = 0x1e,
    fbit_implication_cons_isa_bit_armv6 = 0x1f,
    fbit_implication_cons_isa_bit_thumb = 0x20,
    fbit_implication_cons_isa_bit_quirk_no_asmcpu = 0x21,
    fbit_implication_cons_isa_bit_armv7 = 0x22,
    fbit_implication_cons_isa_bit_armv8 = 0x23,
    fbit_implication_cons_isa_bit_i8mm = 0x24,
    fbit_implication_cons_isa_bit_fp_dbl = 0x25,
    fbit_implication_cons_isa_bit_armv5te = 0x26,
    fbit_implication_cons_isa_bit_fpv5 = 0x27,
    fbit_implication_cons_isa_bit_iwmmxt2 = 0x28,
    fbit_implication_cons_isa_bit_notm = 0x29,
    fbit_implication_cons_isa_bit_cdecp0 = 0x2a,
    fbit_implication_cons_isa_bit_cdecp1 = 0x2b,
    fbit_implication_cons_isa_bit_cdecp2 = 0x2c,
    fbit_implication_cons_isa_bit_cdecp3 = 0x2d,
    fbit_implication_cons_isa_bit_iwmmxt = 0x2e,
    fbit_implication_cons_isa_bit_cdecp4 = 0x2f,
    fbit_implication_cons_isa_bit_cdecp5 = 0x30,
    fbit_implication_cons_isa_bit_cdecp6 = 0x31,
    fbit_implication_cons_isa_bit_cdecp7 = 0x32,
    fbit_implication_cons_isa_bit_mve_float = 0x33,
    fbit_implication_cons_isa_bit_armv8_1 = 0x34,
    fbit_implication_cons_isa_bit_armv8_2 = 0x35,
    fbit_implication_cons_isa_bit_armv8_3 = 0x36,
    fbit_implication_cons_isa_bit_tdiv = 0x37,
    fbit_implication_cons_isa_bit_armv8_4 = 0x38,
    fbit_implication_cons_isa_bit_armv8_5 = 0x39,
    fbit_implication_cons_isa_bit_armv8_6 = 0x3a,
    fbit_implication_cons_isa_bit_neon = 0x3b,
    fbit_implication_cons_isa_bit_quirk_no_volatile_ce = 0x3c,
    fbit_implication_cons_isa_bit_armv6k = 0x3d,
    fbit_implication_cons_isa_bit_vfp_base = 0x3e,
    fbit_implication_cons_isa_num_bits = 0x3f
};

struct fbit_implication
{
    enum fbit_implication_ante ante;
    enum fbit_implication_cons cons;
};

struct fd_set
{
    uint32_t fds_bits[0x20];
};

typedef int32_t gid_t;

struct group
{
};

struct hostent
{
};

struct in_addr
{
};

typedef uint32_t in_addr_t;

typedef uint16_t in_port_t;

typedef uint64_t ino_t;

struct io_event
{
    void (* callback)(int32_t, int16_t);
    int16_t what;
};

enum isa_feature
{
    isa_feature_isa_nobit = 0x0,
    isa_feature_isa_bit_quirk_vlldm = 0x1,
    isa_feature_isa_bit_fp16fml = 0x2,
    isa_feature_isa_bit_mve = 0x3,
    isa_feature_isa_bit_cmse = 0x4,
    isa_feature_isa_bit_quirk_armv6kz = 0x5,
    isa_feature_isa_bit_dotprod = 0x6,
    isa_feature_isa_bit_crc32 = 0x7,
    isa_feature_isa_bit_xscale = 0x8,
    isa_feature_isa_bit_vfpv2 = 0x9,
    isa_feature_isa_bit_vfpv3 = 0xa,
    isa_feature_isa_bit_vfpv4 = 0xb,
    isa_feature_isa_bit_lpae = 0xc,
    isa_feature_isa_bit_armv7em = 0xd,
    isa_feature_isa_bit_fp16 = 0xe,
    isa_feature_isa_bit_adiv = 0xf,
    isa_feature_isa_bit_fp_d32 = 0x10,
    isa_feature_isa_bit_be8 = 0x11,
    isa_feature_isa_bit_fp16conv = 0x12,
    isa_feature_isa_bit_thumb2 = 0x13,
    isa_feature_isa_bit_crypto = 0x14,
    isa_feature_isa_bit_mp = 0x15,
    isa_feature_isa_bit_sec = 0x16,
    isa_feature_isa_bit_sb = 0x17,
    isa_feature_isa_bit_bf16 = 0x18,
    isa_feature_isa_bit_predres = 0x19,
    isa_feature_isa_bit_armv4 = 0x1a,
    isa_feature_isa_bit_quirk_cm3_ldrd = 0x1b,
    isa_feature_isa_bit_smallmul = 0x1c,
    isa_feature_isa_bit_armv5t = 0x1d,
    isa_feature_isa_bit_armv8_1m_main = 0x1e,
    isa_feature_isa_bit_armv6 = 0x1f,
    isa_feature_isa_bit_thumb = 0x20,
    isa_feature_isa_bit_quirk_no_asmcpu = 0x21,
    isa_feature_isa_bit_armv7 = 0x22,
    isa_feature_isa_bit_armv8 = 0x23,
    isa_feature_isa_bit_i8mm = 0x24,
    isa_feature_isa_bit_fp_dbl = 0x25,
    isa_feature_isa_bit_armv5te = 0x26,
    isa_feature_isa_bit_fpv5 = 0x27,
    isa_feature_isa_bit_iwmmxt2 = 0x28,
    isa_feature_isa_bit_notm = 0x29,
    isa_feature_isa_bit_cdecp0 = 0x2a,
    isa_feature_isa_bit_cdecp1 = 0x2b,
    isa_feature_isa_bit_cdecp2 = 0x2c,
    isa_feature_isa_bit_cdecp3 = 0x2d,
    isa_feature_isa_bit_iwmmxt = 0x2e,
    isa_feature_isa_bit_cdecp4 = 0x2f,
    isa_feature_isa_bit_cdecp5 = 0x30,
    isa_feature_isa_bit_cdecp6 = 0x31,
    isa_feature_isa_bit_cdecp7 = 0x32,
    isa_feature_isa_bit_mve_float = 0x33,
    isa_feature_isa_bit_armv8_1 = 0x34,
    isa_feature_isa_bit_armv8_2 = 0x35,
    isa_feature_isa_bit_armv8_3 = 0x36,
    isa_feature_isa_bit_tdiv = 0x37,
    isa_feature_isa_bit_armv8_4 = 0x38,
    isa_feature_isa_bit_armv8_5 = 0x39,
    isa_feature_isa_bit_armv8_6 = 0x3a,
    isa_feature_isa_bit_neon = 0x3b,
    isa_feature_isa_bit_quirk_no_volatile_ce = 0x3c,
    isa_feature_isa_bit_armv6k = 0x3d,
    isa_feature_isa_bit_vfp_base = 0x3e,
    isa_feature_isa_num_bits = 0x3f
};

struct list_head
{
    void* first;
};

typedef uint32_t mode_t;

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

struct _Proc_Stat
{
    pid_t pid;
    int32_t pipe_fd;
};

typedef struct _Proc_Stat PROC_STAT;

typedef uint16_t sa_family_t;

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

struct sigaction
{
};

typedef void (* sighandler_t)(int32_t __status);

struct sigset_t
{
};

union sigval
{
    int32_t sival_int;
    void* sival_ptr;
};

struct sockaddr
{
};

struct sockaddr_in
{
    sa_family_t sin_family;
    in_port_t sin_port;
};

struct NG_IP_ADDR_DONTUSE
{
    struct sockaddr_in sin4;
};

typedef struct NG_IP_ADDR_DONTUSE ng_ipaddr_t;

typedef uint32_t socklen_t;

typedef int64_t suseconds_t;

typedef int64_t time_t;

struct _CHANNEL
{
    struct _CHANNEL* next;
    char name[0x33];
    UINT32 hash;
    char modes[0x15];
    struct array topic;
    time_t creation_time;
    time_t topic_time;
    char topic_who[0x20];
    char key[0x41];
    uint32_t maxusers;
    struct list_head list_bans;
    struct list_head list_excepts;
    struct list_head list_invites;
    struct array keyfile;
};

typedef struct _CHANNEL CHANNEL;

struct _CLIENT
{
    time_t starttime;
    char id[0x40];
    UINT32 hash;
    void* next;
    int32_t type;
    CONN_ID conn_id;
    struct _CLIENT* introducer;
    struct _CLIENT* topserver;
    char host[0x40];
    char* cloaked;
    char* ipa_text;
    char user[0x14];
    char info[0x80];
    char modes[0x15];
    int32_t hops;
    int32_t token;
    int32_t mytoken;
    char* away;
    char flags[0x10];
    char* account_name;
    int32_t capabilities;
};

typedef struct _CLIENT CLIENT;

struct _CLIENT2CHAN
{
    struct _CLIENT2CHAN* next;
    void* client;
    CHANNEL* channel;
    char modes[0x15];
};

typedef struct _CLIENT2CHAN CL2CHAN;

struct _Conf_Server
{
    char host[0x100];
    char name[0x40];
    char pwd_in[0x41];
    char pwd_out[0x41];
    UINT16 port;
    int32_t group;
    time_t lasttry;
    PROC_STAT res_stat;
    int32_t flags;
    CONN_ID conn_id;
    ng_ipaddr_t bind_addr;
    ng_ipaddr_t dst_addr[0x2];
    char svs_mask[0x40];
};

typedef struct _Conf_Server CONF_SERVER;

struct _Connection
{
    int32_t sock;
    ng_ipaddr_t addr;
    PROC_STAT proc_stat;
    char host[0x100];
    char* pwd;
    struct array rbuf;
    struct array wbuf;
    time_t signon;
    time_t lastdata;
    time_t lastping;
    time_t lastprivmsg;
    time_t delaytime;
    int32_t bytes_in;
    int32_t bytes_out;
    int32_t msg_in;
    int32_t msg_out;
    int32_t flag;
    UINT16 options;
    UINT16 bps;
    void* client;
    int32_t auth_ping;
};

typedef struct _Connection CONNECTION;

struct _WHOWAS
{
    time_t time;
    char id[0x20];
    char host[0x40];
    char user[0x14];
    char info[0x80];
    char server[0x40];
};

typedef struct _WHOWAS WHOWAS;

struct list_elem
{
    struct list_elem* next;
    char mask[0x80];
    char* reason;
    time_t valid_until;
    bool onlyonce;
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

struct siginfo_t
{
    int32_t si_signo;
    int32_t si_errno;
    int32_t si_code;
    union
    {
        char __pad[0x74];
        struct
        {
            union
            {
                struct
                {
                    pid_t si_pid;
                    uid_t si_uid;
                } __piduid;
                struct
                {
                    int32_t si_timerid;
                    int32_t si_overrun;
                } __timer;
            } __first;
            union
            {
                union sigval si_value;
                struct
                {
                    int32_t si_status;
                    clock_t si_utime;
                    clock_t si_stime;
                } __sigchld;
            } __second;
        } __si_common;
        struct
        {
            void* si_addr;
            int16_t si_addr_lsb;

            union
            {
                struct
                {
                    void* si_lower;
                    void* si_upper;
                } __addr_bnd;
                uint32_t si_pkey;
            } __first;
        } __sigfault;
        struct
        {
            int32_t si_band;
            int32_t si_fd;
        } __sigpoll;
        struct
        {
            void* si_call_addr;
            int32_t si_syscall;
            uint32_t si_arch;
        } __sigsys;
    } __si_fields;
};

typedef void* va_list;

typedef char* va_list_1;
// Globals

bool Conf_CloakUserToNick;

// Function signatures

void Client_SetInfo(CLIENT* Client, char const* Info);
