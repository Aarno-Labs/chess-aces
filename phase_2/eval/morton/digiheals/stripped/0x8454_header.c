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
    uint32_t chains[0x10b];
};

typedef uint64_t UDItype;

typedef uint32_t USItype;

struct _IO_FILE
{
};

typedef struct _IO_FILE FILE;

union __anon_0x000002b3
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x00000321
{
    union __anon_0x000002b3 __u;
};

union __anon_0x00001526
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x00001594
{
    union __anon_0x00001526 __u;
};

union __anon_0x000023c9
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x0000243a
{
    union __anon_0x000023c9 __u;
};

union __anon_0x000035b1
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x0000361f
{
    union __anon_0x000035b1 __u;
};

union __anon_0x00004252
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x000042c3
{
    union __anon_0x00004252 __u;
};

union __anon_0x000052ad
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x0000531b
{
    union __anon_0x000052ad __u;
};

union __anon_0x00005f6b
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x00005fdc
{
    union __anon_0x00005f6b __u;
};

union __anon_0x00006c52
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x00006cc3
{
    union __anon_0x00006c52 __u;
};

union __anon_0x00007a43
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x00007ab4
{
    union __anon_0x00007a43 __u;
};

union __anon_0x000088c9
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x0000893a
{
    union __anon_0x000088c9 __u;
};

union __anon_0x000096e1
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x00009752
{
    union __anon_0x000096e1 __u;
};

union __anon_0x0000a4d6
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x0000a547
{
    union __anon_0x0000a4d6 __u;
};

union __anon_0x0000b296
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x0000b307
{
    union __anon_0x0000b296 __u;
};

union __anon_0x0000c07f
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x0000c0ed
{
    union __anon_0x0000c07f __u;
};

union __anon_0x0000cfb7
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x0000d028
{
    union __anon_0x0000cfb7 __u;
};

struct __anon_0x0000dc23
{
    uint32_t fds_bits[0x20];
};

union __anon_0x0000de34
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x0000dea5
{
    union __anon_0x0000de34 __u;
};

union __anon_0x0000ee7a
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x0000eeeb
{
    union __anon_0x0000ee7a __u;
};

struct __anon_0x000105f5
{
    uint32_t __attr;
};

union __anon_0x0001061d
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x0001068b
{
    union __anon_0x0001061d __u;
};

union __anon_0x0001163e
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

union __anon_0x000117ae
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x0001181f
{
    union __anon_0x000117ae __u;
};

union __anon_0x00012bc6
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x00012c34
{
    union __anon_0x00012bc6 __u;
};

union __anon_0x000143e5
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x00014456
{
    union __anon_0x000143e5 __u;
};

union __anon_0x00015331
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x0001539f
{
    union __anon_0x00015331 __u;
};

union __anon_0x00016ddd
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x00016e4e
{
    union __anon_0x00016ddd __u;
};

union __anon_0x00017b47
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x00017bb8
{
    union __anon_0x00017b47 __u;
};

union __anon_0x00018af8
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x00018b69
{
    union __anon_0x00018af8 __u;
};

union __anon_0x0001985c
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x000198cd
{
    union __anon_0x0001985c __u;
};

union __anon_0x0001a824
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x0001a895
{
    union __anon_0x0001a824 __u;
};

union __anon_0x0001b853
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x0001b8c4
{
    union __anon_0x0001b853 __u;
};

union __anon_0x0001c67e
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x0001c6ef
{
    union __anon_0x0001c67e __u;
};

union __anon_0x0001d2cb
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

union __anon_0x0001d375
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x0001d3e6
{
    union __anon_0x0001d375 __u;
};

union __anon_0x0001e3f4
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x0001e462
{
    union __anon_0x0001e3f4 __u;
};

union __anon_0x0001f143
{
    int32_t __i[0x9];
    int32_t volatile __vi[0x9];
    uint32_t __s[0x9];
};

struct __anon_0x0001f1a5
{
    union __anon_0x0001f143 __u;
};

union __anon_0x0001f1cb
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x0001f23d
{
    union __anon_0x0001f1cb __u;
};

union __anon_0x00020432
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x000204a3
{
    union __anon_0x00020432 __u;
};

union __anon_0x00021633
{
    int32_t __i[0x6];
    int32_t volatile __vi[0x6];
    void volatile* __p[0x6];
};

struct __anon_0x000216a1
{
    union __anon_0x00021633 __u;
};

struct __pthread
{
};

struct __sigset_t
{
    uint32_t __bits[0x20];
};

struct __va_list
{
    void* __ap;
};

typedef struct __va_list __isoc_va_list;

typedef int32_t clockid_t;

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

typedef struct __anon_0x0000dc23 fd_set;

struct in6_addr
{
    union __anon_0x0001163e __in6_union;
};

typedef uint32_t in_addr_t;

struct in_addr
{
    in_addr_t s_addr;
};

typedef uint16_t in_port_t;

enum isa_feature
{
    isa_nobit = 0x0,
    isa_bit_quirk_vlldm = 0x1,
    isa_bit_fp16fml = 0x2,
    isa_bit_mve = 0x3,
    isa_bit_cmse = 0x4,
    isa_bit_quirk_armv6kz = 0x5,
    isa_bit_dotprod = 0x6,
    isa_bit_crc32 = 0x7,
    isa_bit_xscale = 0x8,
    isa_bit_vfpv2 = 0x9,
    isa_bit_vfpv3 = 0xa,
    isa_bit_vfpv4 = 0xb,
    isa_bit_lpae = 0xc,
    isa_bit_armv7em = 0xd,
    isa_bit_fp16 = 0xe,
    isa_bit_adiv = 0xf,
    isa_bit_fp_d32 = 0x10,
    isa_bit_be8 = 0x11,
    isa_bit_fp16conv = 0x12,
    isa_bit_thumb2 = 0x13,
    isa_bit_crypto = 0x14,
    isa_bit_mp = 0x15,
    isa_bit_sec = 0x16,
    isa_bit_sb = 0x17,
    isa_bit_bf16 = 0x18,
    isa_bit_predres = 0x19,
    isa_bit_armv4 = 0x1a,
    isa_bit_quirk_cm3_ldrd = 0x1b,
    isa_bit_smallmul = 0x1c,
    isa_bit_armv5t = 0x1d,
    isa_bit_armv8_1m_main = 0x1e,
    isa_bit_armv6 = 0x1f,
    isa_bit_thumb = 0x20,
    isa_bit_quirk_no_asmcpu = 0x21,
    isa_bit_armv7 = 0x22,
    isa_bit_armv8 = 0x23,
    isa_bit_i8mm = 0x24,
    isa_bit_fp_dbl = 0x25,
    isa_bit_armv5te = 0x26,
    isa_bit_fpv5 = 0x27,
    isa_bit_iwmmxt2 = 0x28,
    isa_bit_notm = 0x29,
    isa_bit_cdecp0 = 0x2a,
    isa_bit_cdecp1 = 0x2b,
    isa_bit_cdecp2 = 0x2c,
    isa_bit_cdecp3 = 0x2d,
    isa_bit_iwmmxt = 0x2e,
    isa_bit_cdecp4 = 0x2f,
    isa_bit_cdecp5 = 0x30,
    isa_bit_cdecp6 = 0x31,
    isa_bit_cdecp7 = 0x32,
    isa_bit_mve_float = 0x33,
    isa_bit_armv8_1 = 0x34,
    isa_bit_armv8_2 = 0x35,
    isa_bit_armv8_3 = 0x36,
    isa_bit_tdiv = 0x37,
    isa_bit_armv8_4 = 0x38,
    isa_bit_armv8_5 = 0x39,
    isa_bit_armv8_6 = 0x3a,
    isa_bit_neon = 0x3b,
    isa_bit_quirk_no_volatile_ce = 0x3c,
    isa_bit_armv6k = 0x3d,
    isa_bit_vfp_base = 0x3e,
    isa_num_bits = 0x3f
};

struct fbit_implication
{
    enum isa_feature ante;
    enum isa_feature cons;
};

struct libmosquitto_tls
{
    uint8_t* cafile;
    uint8_t* capath;
    uint8_t* certfile;
    uint8_t* keyfile;
    uint8_t* ciphers;
    uint8_t* tls_version;
    int32_t (* pw_callback)(uint8_t*, int32_t, int32_t, void*);
    int32_t cert_reqs;
};

struct libmosquitto_will
{
    uint8_t* topic;
    void* payload;
    int32_t payloadlen;
    int32_t qos;
    bool retain;
};

typedef uint32_t mode_t;

enum mosq_err_t
{
    MOSQ_ERR_AUTH_CONTINUE = -0x4,
    MOSQ_ERR_NO_SUBSCRIBERS = -0x3,
    MOSQ_ERR_SUB_EXISTS = -0x2,
    MOSQ_ERR_CONN_PENDING = -0x1,
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

enum mosq_opt_t
{
    MOSQ_OPT_PROTOCOL_VERSION = 0x1,
    MOSQ_OPT_SSL_CTX = 0x2,
    MOSQ_OPT_SSL_CTX_WITH_DEFAULTS = 0x3,
    MOSQ_OPT_RECEIVE_MAXIMUM = 0x4,
    MOSQ_OPT_SEND_MAXIMUM = 0x5,
    MOSQ_OPT_TLS_KEYFORM = 0x6,
    MOSQ_OPT_TLS_ENGINE = 0x7,
    MOSQ_OPT_TLS_ENGINE_KPASS_SHA1 = 0x8,
    MOSQ_OPT_TLS_OCSP_REQUIRED = 0x9,
    MOSQ_OPT_TLS_ALPN = 0xa,
    MOSQ_OPT_TCP_NODELAY = 0xb,
    MOSQ_OPT_BIND_ADDRESS = 0xc,
    MOSQ_OPT_TLS_USE_OS_CERTS = 0xd
};

typedef int32_t mosq_sock_t;

struct mosquitto;
struct mosquitto__alias
{
    uint8_t* topic;
    uint16_t alias;
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
    mosq_p_invalid = 0x0,
    mosq_p_mqtt31 = 0x1,
    mosq_p_mqtt311 = 0x2,
    mosq_p_mqtts = 0x3,
    mosq_p_mqtt5 = 0x5
};

enum mosquitto__threaded_state
{
    mosq_ts_none = 0x0,
    mosq_ts_self = 0x1,
    mosq_ts_external = 0x2
};

enum mosquitto_client_state
{
    mosq_cs_new = 0x0,
    mosq_cs_connected = 0x1,
    mosq_cs_disconnecting = 0x2,
    mosq_cs_active = 0x3,
    mosq_cs_connect_pending = 0x4,
    mosq_cs_connect_srv = 0x5,
    mosq_cs_disconnect_ws = 0x6,
    mosq_cs_disconnected = 0x7,
    mosq_cs_socks5_new = 0x8,
    mosq_cs_socks5_start = 0x9,
    mosq_cs_socks5_request = 0xa,
    mosq_cs_socks5_reply = 0xb,
    mosq_cs_socks5_auth_ok = 0xc,
    mosq_cs_socks5_userpass_reply = 0xd,
    mosq_cs_socks5_send_userpass = 0xe,
    mosq_cs_expiring = 0xf,
    mosq_cs_duplicate = 0x11,
    mosq_cs_disconnect_with_will = 0x12,
    mosq_cs_disused = 0x13,
    mosq_cs_authenticating = 0x14,
    mosq_cs_reauthenticating = 0x15
};

struct mosquitto_message
{
    int32_t mid;
    uint8_t* topic;
    void* payload;
    int32_t payloadlen;
    int32_t qos;
    bool retain;
};

enum mosquitto_msg_direction
{
    mosq_md_in = 0x0,
    mosq_md_out = 0x1
};

enum mosquitto_msg_state
{
    mosq_ms_invalid = 0x0,
    mosq_ms_publish_qos0 = 0x1,
    mosq_ms_publish_qos1 = 0x2,
    mosq_ms_wait_for_puback = 0x3,
    mosq_ms_publish_qos2 = 0x4,
    mosq_ms_wait_for_pubrec = 0x5,
    mosq_ms_resend_pubrel = 0x6,
    mosq_ms_wait_for_pubrel = 0x7,
    mosq_ms_resend_pubcomp = 0x8,
    mosq_ms_wait_for_pubcomp = 0x9,
    mosq_ms_send_pubrec = 0xa,
    mosq_ms_queued = 0xb
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

struct mqtt__string
{
    uint8_t* v;
    uint16_t len;
};

union __anon_0x00000c71
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00002cba
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00003e98
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00004d48
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00005b94
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00006855
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00007559
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00008351
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x000091d0
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00009fe8
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0000adc7
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0000bb80
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0000f9fc
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00015d06
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x000176c7
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x000184e4
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x000193e9
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0001a146
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0001b1c8
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0001c144
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0001cf68
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0001de1c
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00020d1c
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00021f1a
{
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

struct mqtt5__property
{
    struct mqtt5__property* next;
    union __anon_0x00000c71 value;
    struct mqtt__string name;
    int32_t identifier;
    bool client_generated;
};

typedef struct mqtt5__property mosquitto_property;

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

typedef struct __anon_0x0001f1a5 pthread_attr_t;

typedef struct __anon_0x00000321 pthread_mutex_t;

typedef struct __anon_0x000105f5 pthread_mutexattr_t;

typedef struct __pthread* pthread_t;

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

typedef void (* sighandler_t)(int32_t __status);

typedef struct __sigset_t sigset_t;

struct sockaddr
{
    sa_family_t sa_family;
    uint8_t sa_data[0xe];
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

struct sockaddr_un
{
    sa_family_t sun_family;
    uint8_t sun_path[0x6c];
};

typedef uint32_t socklen_t;

struct addrinfo
{
    int32_t ai_flags;
    int32_t ai_family;
    int32_t ai_socktype;
    int32_t ai_protocol;
    socklen_t ai_addrlen;
    struct sockaddr* ai_addr;
    uint8_t* ai_canonname;
    struct addrinfo* ai_next;
};

typedef int64_t time_t;

struct mosquitto_message_all
{
    struct mosquitto_message_all* next;
    struct mosquitto_message_all* prev;
    mosquitto_property* properties;
    time_t timestamp;
    enum mosquitto_msg_state state;
    bool dup;
    struct mosquitto_message msg;
    uint32_t expiry_interval;
};

struct mosquitto_msg_data
{
    struct mosquitto_message_all* inflight;
    int32_t queue_len;
    pthread_mutex_t mutex;
    int32_t inflight_quota;
    uint16_t inflight_maximum;
};

struct timespec
{
    time_t tv_sec;
    int32_t tv_nsec;
};

struct userdata__callback
{
    uint8_t const* topic;
    int32_t (* callback)(struct mosquitto*, void*, struct mosquitto_message const*);
    void* userdata;
    int32_t qos;
};

struct userdata__simple
{
    struct mosquitto_message* messages;
    int32_t max_msg_count;
    int32_t message_count;
    bool want_retained;
};

typedef struct __va_list va_list;

typedef char* va_list_1;

struct will_delay_list
{
    struct mosquitto* context;
    struct will_delay_list* prev;
    struct will_delay_list* next;
};

struct mosquitto
{
    mosq_sock_t sock;
    mosq_sock_t sockpairR;
    mosq_sock_t sockpairW;
    uint32_t maximum_packet_size;
    enum mosquitto__protocol protocol;
    uint8_t* address;
    uint8_t* id;
    uint8_t* username;
    uint8_t* password;
    uint16_t keepalive;
    uint16_t last_mid;
    enum mosquitto_client_state state;
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
    pthread_mutex_t callback_mutex;
    pthread_mutex_t log_callback_mutex;
    pthread_mutex_t msgtime_mutex;
    pthread_mutex_t out_packet_mutex;
    pthread_mutex_t current_out_packet_mutex;
    pthread_mutex_t state_mutex;
    pthread_mutex_t mid_mutex;
    pthread_t thread_id;
    bool clean_start;
    time_t session_expiry_time;
    uint32_t session_expiry_interval;
    uint8_t* socks5_host;
    uint16_t socks5_port;
    uint8_t* socks5_username;
    uint8_t* socks5_password;
    bool in_callback;
    struct mosquitto_msg_data msgs_in;
    struct mosquitto_msg_data msgs_out;
    uint8_t log_string[0x258];
    void* userdata;
    void (* on_connect)(struct mosquitto*, void*, int32_t);
    void (* on_connect_with_flags)(struct mosquitto*, void*, int32_t, int32_t);
    void (* on_disconnect)(struct mosquitto*, void*, int32_t);
    void (* on_message)(struct mosquitto*, void*, struct mosquitto_message const*);
    void (* on_publish)(struct mosquitto*, void*, int32_t);
    void (* on_log)(struct mosquitto*, void*, int32_t, uint8_t const*);
    void (* on_subscribe)(struct mosquitto*, void*, int32_t, int32_t, int32_t const*);
    void (* on_unsubscribe)(struct mosquitto*, void*, int32_t);
    void (* on_disconnect_v5)(struct mosquitto*, void*, int32_t, mosquitto_property const*);
    void (* on_connect_v5)(struct mosquitto*, void*, int32_t, int32_t, mosquitto_property const*);
    void (* on_message_v5)(struct mosquitto*, void*, struct mosquitto_message const*, mosquitto_property const*);
    void (* on_publish_v5)(struct mosquitto*, void*, int32_t, int32_t, mosquitto_property const*);
    void (* on_subscribe_v5)(struct mosquitto*, void*, int32_t, int32_t, int32_t const*, mosquitto_property const*);
    void (* on_unsubscribe_v5)(struct mosquitto*, void*, int32_t, mosquitto_property const*);
    uint8_t* host;
    uint16_t port;
    uint8_t* bind_address;
    uint32_t reconnects;
    uint32_t reconnect_delay;
    uint32_t reconnect_delay_max;
    bool reconnect_exponential_backoff;
    uint8_t threaded;
    struct mosquitto__packet* out_packet_last;
    mosquitto_property* connect_properties;
    uint8_t max_qos;
    uint8_t retain_available;
    bool tcp_nodelay;
    uint32_t events;
};
// Globals


// Function signatures

int32_t log__printf(struct mosquitto* mosq, int32_t priority, char const* fmt, ...);
int32_t pthread_mutex_lock(pthread_mutex_t* mutex);
int32_t pthread_mutex_unlock(pthread_mutex_t* mutex);
int32_t vsnprintf(char* str, uint32_t size, char const* format, va_list_1 arg);
uint32_t strlen(char const* s);
void __assert_fail(char const* __assertion, char const* __file, uint32_t __line, char const* __function) __noreturn;

// CH Function Summary Typedefs
typedef pthread_mutex_t ch__pthread_mutex_t;
