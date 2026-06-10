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

typedef double DFtype;

typedef int64_t DItype;

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
    uint32_t buckets[0x407];
    uint32_t chains[0x57e];
};

typedef float SFtype;

typedef uint64_t UDItype;

typedef uint32_t USItype;

struct _IO_FILE
{
};

typedef struct _IO_FILE FILE;

struct __anon_0x000001dc
{
    uint32_t fds_bits[0x20];
};

union __anon_0x00000323
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00001109
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

enum __anon_0x00001336
{
    PR_SYM_CONF = 0x1,
    PR_SYM_CMD = 0x2,
    PR_SYM_AUTH = 0x3,
    PR_SYM_HOOK = 0x4
};

struct __anon_0x00006862
{
    uint32_t fds_bits[0x20];
};

struct __anon_0x000068db
{
    int32_t si_timerid;
    int32_t si_overrun;
};

struct __anon_0x00006998
{
    void* si_lower;
    void* si_upper;
};

union __anon_0x000069bc
{
    struct __anon_0x00006998 __addr_bnd;
    uint32_t si_pkey;
};

struct __anon_0x000069de
{
    void* si_addr;
    int16_t si_addr_lsb;
    union __anon_0x000069bc __first;
};

struct __anon_0x00006a0f
{
    int32_t si_band;
    int32_t si_fd;
};

struct __anon_0x00006a33
{
    void* si_call_addr;
    int32_t si_syscall;
    uint32_t si_arch;
};

union __anon_0x00006c33
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000074fe
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x00008b77
{
    int32_t have_pool_info;
    uint8_t const* tag;
    void const* ptr;
    uint32_t byte_count;
    uint32_t block_count;
    uint32_t subpool_count;
    uint32_t level;
    int32_t have_freelist_info;
    uint32_t freelist_byte_count;
    uint32_t freelist_block_count;
    int32_t have_total_info;
    uint32_t total_byte_count;
    uint32_t total_blocks_allocated;
    uint32_t total_blocks_reused;
};

union __anon_0x0000b345
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0000c063
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x000118c0
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000121ba
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x000132ce
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00013b7e
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x00015b32
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x00015cf8
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00016ad5
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x0001c18a
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0001cea8
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x0001d857
{
    int32_t si_timerid;
    int32_t si_overrun;
};

struct __anon_0x0001d914
{
    void* si_lower;
    void* si_upper;
};

union __anon_0x0001d938
{
    struct __anon_0x0001d914 __addr_bnd;
    uint32_t si_pkey;
};

struct __anon_0x0001d95a
{
    void* si_addr;
    int16_t si_addr_lsb;
    union __anon_0x0001d938 __first;
};

struct __anon_0x0001d98b
{
    int32_t si_band;
    int32_t si_fd;
};

struct __anon_0x0001d9af
{
    void* si_call_addr;
    int32_t si_syscall;
    uint32_t si_arch;
};

union __anon_0x0001dbaf
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0001e8e2
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x00020300
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000204ba
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000212a7
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x00025309
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00026126
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x0002c16a
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0002cf37
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x00030f99
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x00031154
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00031ef4
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x0003577b
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x00035935
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0003671c
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x00038e0b
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00039b2f
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x0003a4ca
{
    uint32_t fds_bits[0x20];
};

union __anon_0x0003a58a
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0003aebe
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x0003e635
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

enum __anon_0x0003e892
{
    PR_NETACL_TYPE_ALL = 0x0,
    PR_NETACL_TYPE_NONE = 0x1,
    PR_NETACL_TYPE_IPMASK = 0x2,
    PR_NETACL_TYPE_IPMATCH = 0x3,
    PR_NETACL_TYPE_DNSMATCH = 0x4,
    PR_NETACL_TYPE_IPGLOB = 0x5,
    PR_NETACL_TYPE_DNSGLOB = 0x6
};

union __anon_0x0003fb36
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000404c4
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000411f7
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000413b1
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00042147
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x00045035
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00045929
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x00046513
{
    uint32_t fds_bits[0x20];
};

union __anon_0x000465e3
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00047313
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x0004a212
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0004aaa5
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x0004bbc6
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0004c8e4
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x0004e09a
{
    uint32_t fds_bits[0x20];
};

struct __anon_0x0004e113
{
    int32_t si_timerid;
    int32_t si_overrun;
};

struct __anon_0x0004e1d0
{
    void* si_lower;
    void* si_upper;
};

union __anon_0x0004e1f4
{
    struct __anon_0x0004e1d0 __addr_bnd;
    uint32_t si_pkey;
};

struct __anon_0x0004e216
{
    void* si_addr;
    int16_t si_addr_lsb;
    union __anon_0x0004e1f4 __first;
};

struct __anon_0x0004e247
{
    int32_t si_band;
    int32_t si_fd;
};

struct __anon_0x0004e26b
{
    void* si_call_addr;
    int32_t si_syscall;
    uint32_t si_arch;
};

union __anon_0x0004e4a6
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0004f219
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x00052109
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000529c0
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x00053aff
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000543bf
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x0005646b
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x00056626
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0005744f
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x000595de
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0005a3c2
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x0005f163
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x0005f351
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000601fc
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x0006ed83
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x0006ef3e
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0006f846
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x00070e5d
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x00071096
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000719bf
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x00075b2d
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000763dc
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000776d2
{
    uint32_t fds_bits[0x20];
};

union __anon_0x00077792
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000784bc
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x00079172
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x00079ebe
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x0007b286
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0007c057
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000802bf
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x0008047a
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0008054f
{
    int16_t __e_termination;
    int16_t __e_exit;
};

struct __anon_0x000812c3
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

enum __anon_0x00081a5b
{
    JSON_NULL = 0x0,
    JSON_BOOL = 0x1,
    JSON_STRING = 0x2,
    JSON_NUMBER = 0x3,
    JSON_ARRAY = 0x4,
    JSON_OBJECT = 0x5
};

typedef enum __anon_0x00081a5b JsonTag;

union __anon_0x0008568a
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0008644f
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000866fa
{
    void* log;
    void const* user_data;
};

struct __anon_0x0008672a
{
    uint8_t* ptr;
    uint8_t* buf;
    uint32_t bufsz;
    uint32_t buflen;
};

union __anon_0x0008eb22
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0008f3af
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x000900dc
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000909cf
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x00093ca4
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x00093f13
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0009c831
{
    uint32_t fds_bits[0x20];
};

struct __anon_0x0009c860
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x0009ca61
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x0009d95c
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000aaa5c
{
    uint8_t* name;
    int32_t facility;
};

struct __anon_0x000b19b8
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000b1b73
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000b2961
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x000bcb28
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000bd3df
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x000bf45c
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000c01a4
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000c2e1d
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000c2fd7
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000c3d7e
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000c95d9
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000c9794
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000ca5bf
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000d45e1
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000d479b
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000d56c9
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000dc482
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000dc63d
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000dd437
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000dd675
{
    void* log;
    void const* user_data;
};

struct __anon_0x000dd6a5
{
    uint8_t* ptr;
    uint8_t* buf;
    uint32_t bufsz;
    uint32_t buflen;
};

struct __anon_0x000e09b3
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000e0b6e
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000e18cf
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000e1b49
{
    uint8_t* cmd;
    uint8_t* syntax;
    int32_t implemented;
};

struct __anon_0x000e3526
{
    uint32_t fds_bits[0x20];
};

struct __anon_0x000e3555
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000e370f
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000e450f
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000e52ee
{
    int32_t dt_enabled;
    uint8_t const* dt_path;
    int32_t dt_fd;
    uint32_t dt_size;
    void* dt_data;
};

struct __anon_0x000e9cad
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000e9e68
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000eacb5
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x000efad0
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000f083b
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000f1cfc
{
    uint32_t fds_bits[0x20];
};

union __anon_0x000f1e05
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000f274b
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000f5f2f
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

union __anon_0x000f60ea
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000f6eac
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

union __anon_0x000f97f8
{
    uint8_t __s6_addr[0x10];
    uint16_t __s6_addr16[0x8];
    uint32_t __s6_addr32[0x4];
};

struct __anon_0x000fa074
{
    uint8_t* buf;
    uint32_t buflen;
    uint8_t* current;
    uint32_t remaining;
};

struct __anon_0x000fb1df
{
    int32_t tv_sec;
    int32_t tv_nsec;
};

struct __anon_0x000fe489
{
    uint8_t* cur;
    uint8_t* end;
    uint8_t* start;
};

typedef struct __anon_0x000fe489 SB;

struct __dirstream
{
};

typedef struct __dirstream DIR;

struct __fsid_t
{
    int32_t __val[0x2];
};

typedef int32_t __rlimit_resource_t;

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

union align
{
    uint8_t* cp;
    void (* f)();
    int32_t l;
    FILE* fp;
    double d;
};

struct auth_module_elt
{
    struct auth_module_elt* next;
    struct auth_module_elt* prev;
    uint8_t const* name;
};

typedef int64_t blkcnt_t;

typedef int32_t blksize_t;

union block_hdr;
struct __anon_0x00008d0e
{
    void* endp;
    union block_hdr* next;
    void* first_avail;
};

union block_hdr
{
    union align a;
    struct __anon_0x00008d0e h;
};

typedef int32_t (* callback_t)(uint32_t, uint32_t, uint32_t, void*);

struct candidate
{
    uint8_t const* s;
    int32_t distance;
    int32_t flags;
};

struct cleanup
{
    void* user_data;
    void (* cleanup_cb)(void*);
    struct cleanup* next;
};

typedef struct cleanup cleanup_t;

typedef int32_t clock_t;

struct __anon_0x00006921
{
    int32_t si_status;
    clock_t si_utime;
    clock_t si_stime;
};

struct __anon_0x0001d89d
{
    int32_t si_status;
    clock_t si_utime;
    clock_t si_stime;
};

struct __anon_0x0004e159
{
    int32_t si_status;
    clock_t si_utime;
    clock_t si_stime;
};

struct cmd_entry
{
    uint8_t const* cmd_name;
    uint32_t cmd_namelen;
};

typedef struct config_struc config_rec;;
enum crypt_pass_results
{
    CRYPT_FAILURE = 0x0,
    NO_CIPHERTXT_PASS = 0x1,
    NO_CLEARTXT_PASS = 0x2,
    NO_AFUSER_FILE = 0x3,
    NO_CRYPT_PASS = 0x4,
    CRYPT_PASS_SUCCESS = 0x5
};

struct delay_vals_rec
{
    uint8_t dv_proto[0x10];
    uint32_t dv_nvals;
    int32_t dv_vals[0x100];
};

struct delay_rec
{
    uint32_t d_sid;
    uint8_t d_addr[0x50];
    uint32_t d_port;
    struct delay_vals_rec d_vals[0x3];
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

struct errno_info
{
    int32_t error_number;
    uint8_t const* name;
};

struct extlog_buffer
{
    uint8_t* ptr;
    uint8_t* buf;
    uint32_t bufsz;
    uint32_t buflen;
};

typedef struct __anon_0x000001dc fd_set;

struct filename
{
    struct filename* down;
    struct filename* right;
    uint8_t* line;
    int32_t top;
};

struct fnmatch_struct
{
    uint8_t const* pattern;
    uint8_t const* string;
    int32_t no_leading_period;
};

typedef uint64_t fsblkcnt_t;

typedef uint64_t fsfilcnt_t;

typedef struct __fsid_t fsid_t;

typedef struct fsopendir fsopendir_t;;
typedef int32_t gid_t;

struct __anon_0x00071e4c
{
    uint8_t allow;
    uint32_t ngids;
    gid_t* gids;
};

struct __anon_0x000e5128
{
    uint8_t allow;
    uint32_t ngids;
    gid_t* gids;
};

struct __anon_0x000f2bc5
{
    uint8_t allow;
    uint32_t ngids;
    gid_t* gids;
};

typedef struct __anon_0x00071e4c ctrls_group_acl_t;

struct globlink
{
    struct globlink* next;
    uint8_t* name;
};

struct group
{
};

struct help_rec
{
    uint8_t const* cmd;
    uint8_t const* syntax;
    int32_t impl;
};

struct hostent
{
};

typedef void* iconv_t;

struct in6_addr
{
    union __anon_0x00000323 __in6_union;
};

typedef uint32_t in_addr_t;

struct in_addr
{
    in_addr_t s_addr;
};

typedef uint16_t in_port_t;

typedef uint64_t ino_t;

typedef int32_t intptr_t;

struct iovec
{
    void* iov_base;
    uint32_t iov_len;
};

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

struct json_node_st;
struct __anon_0x00081a9a
{
    struct json_node_st* head;
    struct json_node_st* tail;
};

union __anon_0x00081b15
{
    int32_t bool_;
    uint8_t* string_;
    double number_;
    struct __anon_0x00081a9a children;
};

struct __anon_0x000fe32a
{
    struct json_node_st* head;
    struct json_node_st* tail;
};

union __anon_0x000fe3a8
{
    int32_t bool_;
    uint8_t* string_;
    double number_;
    struct __anon_0x000fe32a children;
};

struct json_node_st
{
    struct json_node_st* parent;
    struct json_node_st* prev;
    struct json_node_st* next;
    uint8_t* key;
    JsonTag tag;
    union __anon_0x00081b15 __anon0;
};

typedef struct json_node_st JsonNode;

struct list_limit_rec
{
    uint32_t curr;
    uint32_t max;
    uint8_t logged;
};

struct log_event
{
    uint32_t log_type;
    int32_t log_fd;
    int32_t log_level;
    uint8_t const* log_msg;
    uint32_t log_msglen;
};

typedef struct logfile_struc logfile_t;;
struct logfmt_json_info
{
    uint32_t json_type;
    uint8_t const* json_key;
};

typedef struct logformat_struc logformat_t;;
struct logformat_struc
{
    logformat_t* next;
    logformat_t* prev;
    uint8_t* lf_fmt_name;
    uint8_t* lf_format;
};

typedef struct logformat_struc logformat_t;

struct mcache_rec
{
};

typedef uint32_t mode_t;

typedef struct module_struc module;;
struct event_handler
{
    struct event_handler* next;
    struct event_handler* prev;
    module* module;
    void (* cb)(void const*, void*);
    void* user_data;
    uint32_t flags;
};

struct modret_struc
{
    module* mr_handler_module;
    int32_t mr_error;
    uint8_t const* mr_numeric;
    uint8_t const* mr_message;
    void* data;
};

typedef struct modret_struc modret_t;

typedef int32_t nl_item;

typedef uint32_t nlink_t;

typedef int32_t off_t;

struct option
{
    uint8_t const* name;
    int32_t has_arg;
    int32_t* flag;
    int32_t val;
};

struct option_help
{
    uint8_t const* long_opt;
    uint8_t const* short_opt;
    uint8_t const* desc;
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

struct passwd
{
};

struct patternlist
{
    struct patternlist* next;
    uint8_t str[0x1];
};

typedef int32_t pid_t;

struct flock
{
    int16_t l_type;
    int16_t l_whence;
    off_t l_start;
    off_t l_len;
    pid_t l_pid;
};

struct pool_rec
{
    union block_hdr* first;
    union block_hdr* last;
    struct cleanup* cleanups;
    struct pool_rec* sub_pools;
    struct pool_rec* sub_next;
    struct pool_rec* sub_prev;
    struct pool_rec* parent;
    uint8_t* free_first_avail;
    uint8_t const* tag;
};

typedef struct pool_rec pool;

struct __anon_0x0000043a
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00008c5d
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0000b430
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0000cccd
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000119bd
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00015e3f
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0001c275
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0001dca3
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00020674
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000254ee
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0002c2f8
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000312aa
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00035add
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00038efc
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0003a691
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0003e72e
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0003fc33
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0004150b
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0004512c
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000466e0
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0004bcb1
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0004e59f
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00056811
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00059777
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0005f4ae
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000711b7
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0007787d
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00079273
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0007b424
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00080691
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0008581c
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000901cd
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x00094099
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x0009cc5c
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000b1cdd
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000bf54d
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000c3126
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000c98fe
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000d4a73
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000dc7e0
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000e0c64
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000e38b4
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000ea05f
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000efbc1
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000f1f02
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

struct __anon_0x000f6256
{
    struct pool_rec* pool;
    uint32_t elt_size;
    uint32_t nelts;
    uint32_t nalloc;
    void* elts;
};

typedef struct __anon_0x0000043a array_header;

struct event_list
{
    struct event_list* next;
    pool* pool;
    uint8_t const* event;
    uint32_t event_len;
    struct event_handler* handlers;
};

struct jot_filters_rec
{
    pool* pool;
    int32_t included_classes;
    int32_t excluded_classes;
    array_header* cmd_ids;
};

struct json_list_st
{
    pool* pool;
    JsonNode* array;
    uint32_t item_count;
};

struct json_obj_st
{
    pool* pool;
    JsonNode* object;
    uint32_t member_count;
};

typedef struct __anon_0x00001109 pr_buffer_t;

typedef struct fs_rec pr_fs_t;;
struct fh_rec
{
    pool* fh_pool;
    int32_t fh_fd;
    uint8_t* fh_path;
    void* fh_data;
    pr_fs_t* fh_fs;
    pr_buffer_t* fh_buf;
    uint32_t fh_iosz;
};

struct fsopendir
{
    fsopendir_t* next;
    fsopendir_t* prev;
    pool* pool;
    pr_fs_t* fsdir;
    DIR* dir;
};

typedef struct fsopendir fsopendir_t;

typedef struct fh_rec pr_fh_t;

struct config_src
{
    struct config_src* cs_next;
    pool* cs_pool;
    pr_fh_t* cs_fh;
    uint32_t cs_lineno;
};

typedef struct __anon_0x000866fa pr_jot_ctx_t;

typedef struct jot_filters_rec pr_jot_filters_t;

struct logfile_struc
{
    logfile_t* next;
    logfile_t* prev;
    uint8_t* lf_filename;
    int32_t lf_fd;
    int32_t lf_syslog_level;
    logformat_t* lf_format;
    pr_jot_filters_t* lf_jot_filters;
    config_rec* lf_conf;
};

typedef struct logfile_struc logfile_t;

typedef struct __anon_0x0008672a pr_jot_parsed_t;

typedef struct json_list_st pr_json_array_t;

typedef struct json_obj_st pr_json_object_t;

typedef struct log_event pr_log_event_t;

typedef struct mcache_rec pr_memcache_t;

typedef enum __anon_0x0003e892 pr_netacl_type_t;

typedef struct __anon_0x00001209 pr_netio_stream_t;;
struct netio_rec
{
    struct pool_rec* pool;
    void (* abort)(pr_netio_stream_t*);
    int32_t (* close)(pr_netio_stream_t*);
    pr_netio_stream_t* (* open)(pr_netio_stream_t*, int32_t, int32_t);
    int32_t (* poll)(pr_netio_stream_t*);
    int32_t (* postopen)(pr_netio_stream_t*);
    int32_t (* read)(pr_netio_stream_t*, uint8_t*, uint32_t);
    pr_netio_stream_t* (* reopen)(pr_netio_stream_t*, int32_t, int32_t);
    int32_t (* shutdown)(pr_netio_stream_t*, int32_t);
    int32_t (* write)(pr_netio_stream_t*, uint8_t*, uint32_t);
    module* owner;
    uint8_t const* owner_name;
};

typedef struct netio_rec pr_netio_t;

typedef struct __anon_0x00008b77 pr_pool_info_t;

typedef int32_t pr_sendfile_t;

typedef enum __anon_0x00001336 pr_stash_type_t;

struct protoent
{
};

struct re_pattern_buffer
{
};

struct redis_rec
{
};

typedef struct redis_rec pr_redis_t;

typedef struct re_pattern_buffer regex_t;

struct regexp_rec
{
    pool* regex_pool;
    module* m;
    uint8_t const* pattern;
    int32_t flags;
    regex_t* re;
};

typedef struct regexp_rec pr_regex_t;

struct regmatch_t
{
};

typedef int32_t regoff_t;

struct __anon_0x00012461
{
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x00016d0e
{
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x0007eb22
{
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x0009db95
{
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x000c3fb7
{
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x000ca7f8
{
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x000e1b08
{
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct __anon_0x000eaeee
{
    regoff_t rm_so;
    regoff_t rm_eo;
};

struct resp_msg
{
    uint8_t* resp_code;
    int32_t cpy_path_len;
    uint8_t cpy_path[0x80];
    void (* pr_resp_fcp)(uint8_t const*, uint8_t const*, ...);
};

typedef struct resp_msg pr_resp_msg;

struct resp_struc
{
    struct resp_struc* next;
    uint8_t const* num;
    uint8_t const* msg;
};

typedef struct resp_struc pr_response_t;

typedef uint64_t rlim_t;

struct rlimit
{
};

typedef uint16_t sa_family_t;

struct sched_obj
{
    struct sched_obj* next;
    struct sched_obj* prev;
    pool* pool;
    void (* cb)(void*, void*, void*, void*);
    int32_t nloops;
    void* arg1;
    void* arg2;
    void* arg3;
    void* arg4;
};

typedef struct sched_obj sched_t;

struct servent
{
};

typedef struct server_struc server_rec;;
struct namebind_rec
{
    uint8_t const* nb_name;
    uint8_t nb_iswildcard;
    uint8_t nb_isactive;
    server_rec* nb_server;
    uint32_t nb_server_port;
};

typedef struct namebind_rec pr_namebind_t;

struct server_struc;
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

union __anon_0x00006952
{
    union sigval si_value;
    struct __anon_0x00006921 __sigchld;
};

union __anon_0x0001d8ce
{
    union sigval si_value;
    struct __anon_0x0001d89d __sigchld;
};

union __anon_0x0004e18a
{
    union sigval si_value;
    struct __anon_0x0004e159 __sigchld;
};

struct sockaddr
{
};

union __anon_0x00026376
{
    struct sockaddr* ifu_broadaddr;
    struct sockaddr* ifu_dstaddr;
};

struct ifaddrs
{
    struct ifaddrs* ifa_next;
    uint8_t* ifa_name;
    uint32_t ifa_flags;
    struct sockaddr* ifa_addr;
    struct sockaddr* ifa_netmask;
    union __anon_0x00026376 ifa_ifu;
    void* ifa_data;
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

union __anon_0x000004a7
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00006d43
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0000b49d
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00011a29
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000133e1
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00015eac
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0001c2e2
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0001dd10
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000206e1
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00025560
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0002c365
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00031317
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00035b4a
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00038f69
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0003a6fd
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0003e78a
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0003fc9f
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00041578
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00045198
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0004674d
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0004a319
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0004bd1e
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0004e60c
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00052210
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00053c0f
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0005687e
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000597e4
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0005f7ba
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0006f0af
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00071229
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00075c50
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000778ea
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000792e0
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0007b491
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000806fe
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x00085889
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0008ec23
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0009023e
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000943a0
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x0009ccc9
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000b1d4a
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000bcc2f
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000bf5ba
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000c3193
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000c9970
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000d4ae0
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000dc84d
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000e0cd1
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000e3921
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000ea0cc
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000efc2e
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000f1f6e
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000f62c3
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

union __anon_0x000f98e8
{
    struct sockaddr_in v4;
    struct sockaddr_in6 v6;
};

struct netaddr_struc
{
    int32_t na_family;
    uint8_t na_dnsstr[0x100];
    int32_t na_have_dnsstr;
    uint8_t na_ipstr[0x2e];
    int32_t na_have_ipstr;
    union __anon_0x000004a7 na_addr;
};

typedef struct netaddr_struc pr_netaddr_t;

struct conn_struc
{
    struct conn_struc* next;
    struct pool_rec* pool;
    int32_t mode;
    int32_t listen_fd;
    int32_t rcvbuf;
    int32_t sndbuf;
    int32_t xerrno;
    int32_t rfd;
    int32_t wfd;
    pr_netio_stream_t* instrm;
    pr_netio_stream_t* outstrm;
    pr_netaddr_t const* remote_addr;
    int32_t remote_port;
    uint8_t const* remote_name;
    pr_netaddr_t const* local_addr;
    int32_t local_port;
};

typedef struct conn_struc conn_t;

struct ipbind_rec
{
    struct ipbind_rec* ib_next;
    pr_netaddr_t const* ib_addr;
    uint32_t ib_port;
    server_rec* ib_server;
    conn_t* ib_listener;
    array_header* ib_namebinds;
    uint8_t ib_isdefault;
    uint8_t ib_islocalhost;
    uint8_t ib_isactive;
};

struct listener_rec
{
    struct listener_rec* next;
    struct listener_rec* prev;
    pool* pool;
    pr_netaddr_t const* addr;
    uint32_t port;
    conn_t* conn;
    int32_t claimed;
};

typedef struct ipbind_rec pr_ipbind_t;

struct pr_netacl_t
{
    pr_netacl_type_t type;
    uint8_t const* aclstr;
    uint8_t* pattern;
    int32_t negated;
    pr_netaddr_t const* addr;
    uint32_t masklen;
};

struct sockaddr_un
{
    sa_family_t sun_family;
    uint8_t sun_path[0x6c];
};

struct socket_ctx
{
    server_rec* server;
    pr_netaddr_t const* addr;
    int32_t sockfd;
};

typedef uint32_t socklen_t;

struct spwd
{
    uint8_t* sp_namp;
    uint8_t* sp_pwdp;
    int32_t sp_lstchg;
    int32_t sp_min;
    int32_t sp_max;
    int32_t sp_warn;
    int32_t sp_inact;
    int32_t sp_expire;
    uint32_t sp_flag;
};

struct statfs
{
};

struct statvfs
{
};

typedef int64_t suseconds_t;

struct tab_key
{
    struct tab_key* next;
    void const* key_data;
    uint32_t key_datasz;
    uint32_t hash;
    uint32_t nents;
};

typedef struct tab_key pr_table_key_t;

struct tab_entry
{
    struct tab_entry* next;
    struct tab_entry* prev;
    uint32_t idx;
    pr_table_key_t* key;
    void const* value_data;
    uint32_t value_datasz;
};

typedef struct tab_entry pr_table_entry_t;

struct table_rec
{
    pool* pool;
    uint32_t flags;
    uint32_t seed;
    uint32_t nmaxents;
    pr_table_entry_t** chains;
    uint32_t nchains;
    uint32_t nents;
    pr_table_entry_t* free_ents;
    pr_table_key_t* free_keys;
    pr_table_entry_t* tab_iter_ent;
    pr_table_entry_t* val_iter_ent;
    pr_table_entry_t* cache_ent;
    int32_t (* keycmp)(void const*, uint32_t, void const*, uint32_t);
    uint32_t (* keyhash)(void const*, uint32_t);
    void (* entinsert)(pr_table_entry_t**, pr_table_entry_t*);
    void (* entremove)(pr_table_entry_t**, pr_table_entry_t*);
};

typedef struct table_rec pr_table_t;

struct __anon_0x00001209
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000075fe
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0000c163
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000122b9
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00013c7c
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00016bd5
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0001cfa8
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0001e9e2
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000213a7
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00026226
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0002d037
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00031ff4
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0003681c
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00039c2f
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0003afbd
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000405c3
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00042247
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00045a28
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00047413
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0004aba3
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0004c9e4
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0004f319
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00052abe
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000544bd
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0005754f
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0005a4c2
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000602fc
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0006f946
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00071abf
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000764da
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000785bc
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00079fbe
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0007c157
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000813c3
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0008654f
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0008f4ad
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x00090ace
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x0009da5c
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000b2a61
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000bd4dd
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000c02a4
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000c3e7e
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000ca6bf
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000d57c9
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000dd537
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000e19cf
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000e460f
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000eadb5
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000f093b
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000f284a
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000f6fac
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct __anon_0x000fa172
{
    struct pool_rec* strm_pool;
    int32_t strm_type;
    int32_t strm_fd;
    int32_t strm_mode;
    uint32_t strm_interval;
    uint32_t volatile strm_flags;
    pr_buffer_t* strm_buf;
    void* strm_data;
    int32_t strm_errno;
    pr_table_t* notes;
    pr_netio_t* strm_netio;
};

struct class_struc
{
    pool* cls_pool;
    uint8_t* cls_name;
    uint32_t cls_satisfy;
    array_header* cls_acls;
    pr_table_t* cls_notes;
    struct class_struc* cls_next;
};

struct cmd_struc
{
    struct pool_rec* pool;
    server_rec* server;
    config_rec* config;
    struct pool_rec* tmp_pool;
    uint32_t argc;
    uint8_t* arg;
    void** argv;
    uint8_t* group;
    int32_t cmd_class;
    int32_t stash_index;
    uint32_t stash_hash;
    pr_table_t* notes;
    int32_t cmd_id;
    int32_t is_ftp;
    uint8_t const* protocol;
};

typedef struct cmd_struc cmd_rec;

struct authtab_rec
{
    int32_t auth_flags;
    uint8_t const* name;
    modret_t* (* handler)(cmd_rec*);
    module* m;
};

typedef struct authtab_rec authtable;

struct cmdtab_rec
{
    uint8_t cmd_type;
    uint8_t const* command;
    uint8_t const* group;
    modret_t* (* handler)(cmd_rec*);
    uint8_t requires_auth;
    uint8_t interrupt_xfer;
    int32_t cmd_class;
    module* m;
};

typedef struct cmdtab_rec cmdtable;

struct conftab_rec
{
    uint8_t* directive;
    modret_t* (* handler)(cmd_rec*);
    module* m;
};

typedef struct conftab_rec conftable;

union __anon_0x0005461b
{
    conftable* sym_conf;
    cmdtable* sym_cmd;
    authtable* sym_auth;
    cmdtable* sym_hook;
    void* sym_generic;
};

struct module_struc
{
    module* next;
    module* prev;
    int32_t api_version;
    uint8_t const* name;
    struct conftab_rec* conftable;
    struct cmdtab_rec* cmdtable;
    struct authtab_rec* authtable;
    int32_t (* init)();
    int32_t (* sess_init)();
    uint8_t const* module_version;
    void* handle;
    int32_t priority;
};

typedef struct module_struc module;

typedef struct class_struc pr_class_t;

typedef struct __anon_0x00001209 pr_netio_stream_t;

struct stash
{
    struct stash* next;
    struct stash* prev;
    pool* sym_pool;
    uint32_t sym_hash;
    uint8_t const* sym_name;
    uint32_t sym_namelen;
    pr_stash_type_t sym_type;
    module* sym_module;
    union __anon_0x0005461b ptr;
};

struct tcp_keepalive
{
    int32_t keepalive_enabled;
    int32_t keepalive_idle;
    int32_t keepalive_count;
    int32_t keepalive_intvl;
};

typedef int64_t time_t;

struct __anon_0x00042374
{
    uint32_t sch_magic;
    uint32_t sch_version;
    pid_t sch_pid;
    time_t sch_uptime;
};

struct child
{
    struct child* next;
    struct child* prev;
    pool* ch_pool;
    pid_t ch_pid;
    time_t ch_when;
    int32_t ch_pipefd;
    uint8_t ch_dead;
};

typedef struct child pr_child_t;

typedef struct __anon_0x00042374 pr_scoreboard_header_t;

struct sort_filename
{
    time_t sort_time;
    off_t size;
    uint8_t* name;
    uint8_t* suffix;
};

struct timer
{
    struct timer* next;
    struct timer* prev;
    int32_t count;
    int32_t interval;
    int32_t timerno;
    module* mod;
    callback_t callback;
    uint8_t remove;
    uint8_t const* desc;
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

struct __anon_0x000005c7
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0000b5ad
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x00015fd2
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0001c3f2
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0001de20
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000207f1
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x00025670
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0002c475
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x00031426
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x00035c5a
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x00039079
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x00041688
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0004685d
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0004be2e
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0004e74b
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0005698d
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000598f4
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0005fe31
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000779fa
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000793f0
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0007b5a1
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0008080d
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x00085999
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x00095424
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x0009ce2e
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000b1e88
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000bf6ca
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000c32a4
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000c9aae
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000d4bef
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000dc95d
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000e0de1
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000e3a30
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000ea1db
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000efd6d
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct __anon_0x000f63d2
{
    struct pool_rec* p;
    int32_t xfer_type;
    int32_t direction;
    uint8_t const* filename;
    uint8_t const* path;
    uint8_t const* path_hidden;
    uint32_t bufsize;
    uint32_t buflen;
    struct timeval start_time;
    off_t file_size;
    off_t total_bytes;
    uint8_t* bufstart;
    uint8_t* buf;
};

struct tm
{
};

struct trace_levels
{
    int32_t min_level;
    int32_t max_level;
};

typedef uint16_t u_int16_t;

typedef uint32_t u_int32_t;

struct BlowfishContext
{
    u_int32_t S[0x4][0x100];
    u_int32_t P[0x12];
};

typedef struct BlowfishContext blf_ctx;

typedef uint8_t u_int8_t;

typedef int32_t uid_t;

struct __anon_0x000068b7
{
    pid_t si_pid;
    uid_t si_uid;
};

union __anon_0x000068ff
{
    struct __anon_0x000068b7 __piduid;
    struct __anon_0x000068db __timer;
};

struct __anon_0x00006974
{
    union __anon_0x000068ff __first;
    union __anon_0x00006952 __second;
};

union __anon_0x00006a64
{
    uint8_t __pad[0x74];
    struct __anon_0x00006974 __si_common;
    struct __anon_0x000069de __sigfault;
    struct __anon_0x00006a0f __sigpoll;
    struct __anon_0x00006a33 __sigsys;
};

struct __anon_0x00006aba
{
    int32_t si_signo;
    int32_t si_errno;
    int32_t si_code;
    union __anon_0x00006a64 __si_fields;
};

struct __anon_0x0001d833
{
    pid_t si_pid;
    uid_t si_uid;
};

union __anon_0x0001d87b
{
    struct __anon_0x0001d833 __piduid;
    struct __anon_0x0001d857 __timer;
};

struct __anon_0x0001d8f0
{
    union __anon_0x0001d87b __first;
    union __anon_0x0001d8ce __second;
};

union __anon_0x0001d9e0
{
    uint8_t __pad[0x74];
    struct __anon_0x0001d8f0 __si_common;
    struct __anon_0x0001d95a __sigfault;
    struct __anon_0x0001d98b __sigpoll;
    struct __anon_0x0001d9af __sigsys;
};

struct __anon_0x0001da36
{
    int32_t si_signo;
    int32_t si_errno;
    int32_t si_code;
    union __anon_0x0001d9e0 __si_fields;
};

struct __anon_0x000423be
{
    pid_t sce_pid;
    uid_t sce_uid;
    gid_t sce_gid;
    uint8_t sce_user[0x20];
    int32_t sce_server_port;
    uint8_t sce_server_addr[0x50];
    uint8_t sce_server_label[0x20];
    uint8_t sce_client_addr[0x2e];
    uint8_t sce_client_name[0x50];
    uint8_t sce_class[0x20];
    uint8_t sce_protocol[0x20];
    uint8_t sce_cwd[0x50];
    uint8_t sce_cmd[0x41];
    uint8_t sce_cmd_arg[0x50];
    time_t sce_begin_idle;
    time_t sce_begin_session;
    off_t sce_xfer_size;
    off_t sce_xfer_done;
    off_t sce_xfer_len;
    uint32_t sce_xfer_elapsed;
};

struct __anon_0x0004e0ef
{
    pid_t si_pid;
    uid_t si_uid;
};

union __anon_0x0004e137
{
    struct __anon_0x0004e0ef __piduid;
    struct __anon_0x0004e113 __timer;
};

struct __anon_0x0004e1ac
{
    union __anon_0x0004e137 __first;
    union __anon_0x0004e18a __second;
};

union __anon_0x0004e29c
{
    uint8_t __pad[0x74];
    struct __anon_0x0004e1ac __si_common;
    struct __anon_0x0004e216 __sigfault;
    struct __anon_0x0004e247 __sigpoll;
    struct __anon_0x0004e26b __sigsys;
};

struct __anon_0x0004e2f2
{
    int32_t si_signo;
    int32_t si_errno;
    int32_t si_code;
    union __anon_0x0004e29c __si_fields;
};

struct __anon_0x00071e05
{
    uint8_t allow;
    uint32_t nuids;
    uid_t* uids;
};

struct __anon_0x000b2c02
{
    pid_t sce_pid;
    uid_t sce_uid;
    gid_t sce_gid;
    uint8_t sce_user[0x20];
    int32_t sce_server_port;
    uint8_t sce_server_addr[0x50];
    uint8_t sce_server_label[0x20];
    uint8_t sce_client_addr[0x2e];
    uint8_t sce_client_name[0x50];
    uint8_t sce_class[0x20];
    uint8_t sce_protocol[0x20];
    uint8_t sce_cwd[0x50];
    uint8_t sce_cmd[0x41];
    uint8_t sce_cmd_arg[0x50];
    time_t sce_begin_idle;
    time_t sce_begin_session;
    off_t sce_xfer_size;
    off_t sce_xfer_done;
    off_t sce_xfer_len;
    uint32_t sce_xfer_elapsed;
};

union __anon_0x000c481e
{
    uid_t uid;
    gid_t gid;
};

struct __anon_0x000ca83e
{
    pid_t sce_pid;
    uid_t sce_uid;
    gid_t sce_gid;
    uint8_t sce_user[0x20];
    int32_t sce_server_port;
    uint8_t sce_server_addr[0x50];
    uint8_t sce_server_label[0x20];
    uint8_t sce_client_addr[0x2e];
    uint8_t sce_client_name[0x50];
    uint8_t sce_class[0x20];
    uint8_t sce_protocol[0x20];
    uint8_t sce_cwd[0x50];
    uint8_t sce_cmd[0x41];
    uint8_t sce_cmd_arg[0x50];
    time_t sce_begin_idle;
    time_t sce_begin_session;
    off_t sce_xfer_size;
    off_t sce_xfer_done;
    off_t sce_xfer_len;
    uint32_t sce_xfer_elapsed;
};

struct __anon_0x000e50e6
{
    uint8_t allow;
    uint32_t nuids;
    uid_t* uids;
};

struct __anon_0x000f2b7f
{
    uint8_t allow;
    uint32_t nuids;
    uid_t* uids;
};

typedef union __anon_0x000c481e authfile_id_t;

struct cl_obj
{
    struct cl_obj* cl_next;
    struct cl_obj* cl_prev;
    pool* cl_pool;
    int32_t cl_fd;
    uid_t cl_uid;
    uint8_t const* cl_user;
    gid_t cl_gid;
    uint8_t const* cl_group;
    pid_t cl_pid;
    uint32_t volatile cl_flags;
    array_header* cl_ctrls;
};

typedef struct __anon_0x00071e05 ctrls_user_acl_t;

struct __anon_0x00071e93
{
    pool* acl_pool;
    ctrls_user_acl_t acl_users;
    ctrls_group_acl_t acl_groups;
};

struct __anon_0x000e516a
{
    pool* acl_pool;
    ctrls_user_acl_t acl_users;
    ctrls_group_acl_t acl_groups;
};

struct __anon_0x000f2c0b
{
    pool* acl_pool;
    ctrls_user_acl_t acl_users;
    ctrls_group_acl_t acl_groups;
};

typedef struct __anon_0x00071e93 ctrls_acl_t;

struct err_rec
{
    pool* err_pool;
    int32_t err_errno;
    uint8_t const* err_name;
    uint8_t const* err_desc;
    module* err_module;
    uint8_t const* err_file;
    uint32_t err_lineno;
    uint8_t const* err_user;
    uid_t err_uid;
    gid_t err_gid;
    uint8_t const* err_goal;
    uint8_t const* err_oper;
    uint8_t const* err_args;
    uint8_t const* err_explained;
};

struct file_rec
{
    uint8_t* af_path;
    pr_fh_t* af_file_fh;
    uint32_t af_lineno;
    uint8_t af_restricted_ids;
    authfile_id_t af_min_id;
    authfile_id_t af_max_id;
    uint8_t af_restricted_names;
    uint8_t* af_name_filter;
    pr_regex_t* af_name_regex;
    uint8_t af_name_regex_inverted;
    uint8_t af_restricted_homes;
    uint8_t* af_home_filter;
    pr_regex_t* af_home_regex;
    uint8_t af_home_regex_inverted;
};

typedef struct file_rec authfile_file_t;

typedef struct cl_obj pr_ctrls_cl_t;

struct ctrls_obj
{
    struct ctrls_obj* ctrls_next;
    struct ctrls_obj* ctrls_prev;
    uint32_t ctrls_id;
    module const* ctrls_module;
    pr_ctrls_cl_t* ctrls_cl;
    uint8_t const* ctrls_action;
    time_t ctrls_when;
    uint8_t const* ctrls_desc;
    pool* ctrls_tmp_pool;
    int32_t (* ctrls_cb)(struct ctrls_obj*, int32_t, uint8_t**);
    array_header* ctrls_cb_args;
    int32_t ctrls_cb_retval;
    array_header* ctrls_cb_resps;
    void* ctrls_data;
    uint32_t volatile ctrls_flags;
};

typedef struct ctrls_obj pr_ctrls_t;

struct __anon_0x00071ed0
{
    uint8_t const* act_action;
    uint8_t const* act_desc;
    ctrls_acl_t* act_acl;
    int32_t (* act_cb)(pr_ctrls_t*, int32_t, uint8_t**);
};

struct __anon_0x000e51a7
{
    uint8_t const* act_action;
    uint8_t const* act_desc;
    ctrls_acl_t* act_acl;
    int32_t (* act_cb)(pr_ctrls_t*, int32_t, uint8_t**);
};

struct __anon_0x000f2c47
{
    uint8_t const* act_action;
    uint8_t const* act_desc;
    ctrls_acl_t* act_acl;
    int32_t (* act_cb)(pr_ctrls_t*, int32_t, uint8_t**);
};

struct ctrls_act_obj
{
    struct ctrls_act_obj* prev;
    struct ctrls_act_obj* next;
    pool* pool;
    uint32_t id;
    uint8_t const* action;
    uint8_t const* desc;
    module const* module;
    uint32_t volatile flags;
    int32_t (* action_cb)(pr_ctrls_t*, int32_t, uint8_t**);
};

typedef struct ctrls_act_obj ctrls_action_t;

typedef struct __anon_0x00071ed0 ctrls_acttab_t;

typedef struct err_rec pr_error_t;

typedef struct __anon_0x000423be pr_scoreboard_entry_t;

typedef struct __anon_0x00006aba siginfo_t;

union __anon_0x00006b04
{
    void (* sa_handler)(int32_t);
    void (* sa_sigaction)(int32_t, siginfo_t*, void*);
};

union __anon_0x0001da80
{
    void (* sa_handler)(int32_t);
    void (* sa_sigaction)(int32_t, siginfo_t*, void*);
};

union __anon_0x0004e33c
{
    void (* sa_handler)(int32_t);
    void (* sa_sigaction)(int32_t, siginfo_t*, void*);
};

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
    struct __anon_0x00015b32 __st_atim32;
    struct __anon_0x00015b32 __st_mtim32;
    struct __anon_0x00015b32 __st_ctim32;
    ino_t st_ino;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
};

struct __anon_0x0005fce5
{
    uint32_t gl_pathc;
    uint8_t** gl_pathv;
    uint32_t gl_offs;
    int32_t gl_flags;
    void (* gl_closedir)(void*);
    struct dirent* (* gl_readdir)(void*);
    void* (* gl_opendir)(uint8_t const*);
    int32_t (* gl_lstat)(uint8_t const*, struct stat*);
    int32_t (* gl_stat)(uint8_t const*, struct stat*);
};

struct __anon_0x000d4971
{
    uint32_t gl_pathc;
    uint8_t** gl_pathv;
    uint32_t gl_offs;
    int32_t gl_flags;
    void (* gl_closedir)(void*);
    struct dirent* (* gl_readdir)(void*);
    void* (* gl_opendir)(uint8_t const*);
    int32_t (* gl_lstat)(uint8_t const*, struct stat*);
    int32_t (* gl_stat)(uint8_t const*, struct stat*);
};

struct __anon_0x000fb414
{
    uint32_t gl_pathc;
    uint8_t** gl_pathv;
    uint32_t gl_offs;
    int32_t gl_flags;
    void (* gl_closedir)(void*);
    struct dirent* (* gl_readdir)(void*);
    void* (* gl_opendir)(uint8_t const*);
    int32_t (* gl_lstat)(uint8_t const*, struct stat*);
    int32_t (* gl_stat)(uint8_t const*, struct stat*);
};

struct err_explain_rec
{
    uint8_t const* (* explain_accept)(pool*, int32_t, int32_t, struct sockaddr*, socklen_t*, uint8_t const**);
    uint8_t const* (* explain_bind)(pool*, int32_t, int32_t, struct sockaddr const*, socklen_t, uint8_t const**);
    uint8_t const* (* explain_chdir)(pool*, int32_t, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_chmod)(pool*, int32_t, uint8_t const*, mode_t, uint8_t const**);
    uint8_t const* (* explain_chown)(pool*, int32_t, uint8_t const*, uid_t, gid_t, uint8_t const**);
    uint8_t const* (* explain_chroot)(pool*, int32_t, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_close)(pool*, int32_t, int32_t, uint8_t const**);
    uint8_t const* (* explain_closedir)(pool*, int32_t, void*, uint8_t const**);
    uint8_t const* (* explain_connect)(pool*, int32_t, int32_t, struct sockaddr const*, socklen_t, uint8_t const**);
    uint8_t const* (* explain_fchmod)(pool*, int32_t, int32_t, mode_t, uint8_t const**);
    uint8_t const* (* explain_fchown)(pool*, int32_t, int32_t, uid_t, gid_t, uint8_t const**);
    uint8_t const* (* explain_fclose)(pool*, int32_t, FILE*, uint8_t const**);
    uint8_t const* (* explain_fcntl)(pool*, int32_t, int32_t, int32_t, int32_t, uint8_t const**);
    uint8_t const* (* explain_fdopen)(pool*, int32_t, int32_t, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_flock)(pool*, int32_t, int32_t, int32_t, uint8_t const**);
    uint8_t const* (* explain_fopen)(pool*, int32_t, uint8_t const*, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_fork)(pool*, int32_t, uint8_t const**);
    uint8_t const* (* explain_fstat)(pool*, int32_t, int32_t, struct stat*, uint8_t const**);
    uint8_t const* (* explain_fstatfs)(pool*, int32_t, int32_t, void*, uint8_t const**);
    uint8_t const* (* explain_fstatvfs)(pool*, int32_t, int32_t, void*, uint8_t const**);
    uint8_t const* (* explain_fsync)(pool*, int32_t, int32_t, uint8_t const**);
    uint8_t const* (* explain_ftruncate)(pool*, int32_t, int32_t, off_t, uint8_t const**);
    uint8_t const* (* explain_futimes)(pool*, int32_t, int32_t, struct timeval const*, uint8_t const**);
    uint8_t const* (* explain_getaddrinfo)(pool*, int32_t, uint8_t const*, uint8_t const*, struct addrinfo const*, struct addrinfo**, uint8_t const**);
    uint8_t const* (* explain_gethostbyname)(pool*, int32_t, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_gethostbyname2)(pool*, int32_t, uint8_t const*, int32_t, uint8_t const**);
    uint8_t const* (* explain_gethostname)(pool*, int32_t, uint8_t*, uint32_t, uint8_t const**);
    uint8_t const* (* explain_getnameinfo)(pool*, int32_t, struct sockaddr const*, socklen_t, uint8_t*, uint32_t, uint8_t*, uint32_t, int32_t, uint8_t const**);
    uint8_t const* (* explain_getpeername)(pool*, int32_t, int32_t, struct sockaddr*, socklen_t*, uint8_t const**);
    uint8_t const* (* explain_getrlimit)(pool*, int32_t, int32_t, struct rlimit*, uint8_t const**);
    uint8_t const* (* explain_getsockname)(pool*, int32_t, int32_t, struct sockaddr*, socklen_t*, uint8_t const**);
    uint8_t const* (* explain_getsockopt)(pool*, int32_t, int32_t, int32_t, int32_t, void*, socklen_t*, uint8_t const**);
    uint8_t const* (* explain_lchown)(pool*, int32_t, uint8_t const*, uid_t, gid_t, uint8_t const**);
    uint8_t const* (* explain_link)(pool*, int32_t, uint8_t const*, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_listen)(pool*, int32_t, int32_t, int32_t, uint8_t const**);
    uint8_t const* (* explain_lseek)(pool*, int32_t, int32_t, off_t, int32_t, uint8_t const**);
    uint8_t const* (* explain_lstat)(pool*, int32_t, uint8_t const*, struct stat*, uint8_t const**);
    uint8_t const* (* explain_mkdir)(pool*, int32_t, uint8_t const*, mode_t, uint8_t const**);
    uint8_t const* (* explain_mkdtemp)(pool*, int32_t, uint8_t*, uint8_t const**);
    uint8_t const* (* explain_mkstemp)(pool*, int32_t, uint8_t*, uint8_t const**);
    uint8_t const* (* explain_open)(pool*, int32_t, uint8_t const*, int32_t, mode_t, uint8_t const**);
    uint8_t const* (* explain_opendir)(pool*, int32_t, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_read)(pool*, int32_t, int32_t, void*, uint32_t, uint8_t const**);
    uint8_t const* (* explain_readdir)(pool*, int32_t, void*, uint8_t const**);
    uint8_t const* (* explain_readlink)(pool*, int32_t, uint8_t const*, uint8_t*, uint32_t, uint8_t const**);
    uint8_t const* (* explain_readv)(pool*, int32_t, int32_t, struct iovec const*, int32_t, uint8_t const**);
    uint8_t const* (* explain_rename)(pool*, int32_t, uint8_t const*, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_rmdir)(pool*, int32_t, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_setegid)(pool*, int32_t, gid_t, uint8_t const**);
    uint8_t const* (* explain_seteuid)(pool*, int32_t, uid_t, uint8_t const**);
    uint8_t const* (* explain_setgid)(pool*, int32_t, gid_t, uint8_t const**);
    uint8_t const* (* explain_setregid)(pool*, int32_t, gid_t, gid_t, uint8_t const**);
    uint8_t const* (* explain_setresgid)(pool*, int32_t, gid_t, gid_t, gid_t, uint8_t const**);
    uint8_t const* (* explain_setresuid)(pool*, int32_t, uid_t, uid_t, uid_t, uint8_t const**);
    uint8_t const* (* explain_setreuid)(pool*, int32_t, uid_t, uid_t, uint8_t const**);
    uint8_t const* (* explain_setrlimit)(pool*, int32_t, int32_t, struct rlimit const*, uint8_t const**);
    uint8_t const* (* explain_setsockopt)(pool*, int32_t, int32_t, int32_t, int32_t, void const*, socklen_t, uint8_t const**);
    uint8_t const* (* explain_setuid)(pool*, int32_t, uid_t, uint8_t const**);
    uint8_t const* (* explain_socket)(pool*, int32_t, int32_t, int32_t, int32_t, uint8_t const**);
    uint8_t const* (* explain_stat)(pool*, int32_t, uint8_t const*, struct stat*, uint8_t const**);
    uint8_t const* (* explain_statfs)(pool*, int32_t, uint8_t const*, void*, uint8_t const**);
    uint8_t const* (* explain_statvfs)(pool*, int32_t, uint8_t const*, void*, uint8_t const**);
    uint8_t const* (* explain_symlink)(pool*, int32_t, uint8_t const*, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_truncate)(pool*, int32_t, uint8_t const*, off_t, uint8_t const**);
    uint8_t const* (* explain_unlink)(pool*, int32_t, uint8_t const*, uint8_t const**);
    uint8_t const* (* explain_utimes)(pool*, int32_t, uint8_t const*, struct timeval const*, uint8_t const**);
    uint8_t const* (* explain_write)(pool*, int32_t, int32_t, void const*, uint32_t, uint8_t const**);
    uint8_t const* (* explain_writev)(pool*, int32_t, int32_t, struct iovec const*, int32_t, uint8_t const**);
};

struct fs_rec
{
    pr_fs_t* fs_next;
    pr_fs_t* fs_prev;
    uint8_t* fs_name;
    uint8_t* fs_path;
    void* fs_data;
    struct pool_rec* fs_pool;
    int32_t (* stat)(pr_fs_t*, uint8_t const*, struct stat*);
    int32_t (* fstat)(pr_fh_t*, int32_t, struct stat*);
    int32_t (* lstat)(pr_fs_t*, uint8_t const*, struct stat*);
    int32_t (* rename)(pr_fs_t*, uint8_t const*, uint8_t const*);
    int32_t (* unlink)(pr_fs_t*, uint8_t const*);
    int32_t (* open)(pr_fh_t*, uint8_t const*, int32_t);
    int32_t (* close)(pr_fh_t*, int32_t);
    int32_t (* read)(pr_fh_t*, int32_t, uint8_t*, uint32_t);
    int32_t (* pread)(pr_fh_t*, int32_t, void*, uint32_t, off_t);
    int32_t (* write)(pr_fh_t*, int32_t, uint8_t const*, uint32_t);
    int32_t (* pwrite)(pr_fh_t*, int32_t, void const*, uint32_t, off_t);
    off_t (* lseek)(pr_fh_t*, int32_t, off_t, int32_t);
    int32_t (* link)(pr_fs_t*, uint8_t const*, uint8_t const*);
    int32_t (* readlink)(pr_fs_t*, uint8_t const*, uint8_t*, uint32_t);
    int32_t (* symlink)(pr_fs_t*, uint8_t const*, uint8_t const*);
    int32_t (* ftruncate)(pr_fh_t*, int32_t, off_t);
    int32_t (* truncate)(pr_fs_t*, uint8_t const*, off_t);
    int32_t (* chmod)(pr_fs_t*, uint8_t const*, mode_t);
    int32_t (* fchmod)(pr_fh_t*, int32_t, mode_t);
    int32_t (* chown)(pr_fs_t*, uint8_t const*, uid_t, gid_t);
    int32_t (* fchown)(pr_fh_t*, int32_t, uid_t, gid_t);
    int32_t (* lchown)(pr_fs_t*, uint8_t const*, uid_t, gid_t);
    int32_t (* access)(pr_fs_t*, uint8_t const*, int32_t, uid_t, gid_t, array_header*);
    int32_t (* faccess)(pr_fh_t*, int32_t, uid_t, gid_t, array_header*);
    int32_t (* utimes)(pr_fs_t*, uint8_t const*, struct timeval*);
    int32_t (* futimes)(pr_fh_t*, int32_t, struct timeval*);
    int32_t (* fsync)(pr_fh_t*, int32_t);
    int32_t (* getxattr)(pool*, pr_fs_t*, uint8_t const*, uint8_t const*, void*, uint32_t);
    int32_t (* lgetxattr)(pool*, pr_fs_t*, uint8_t const*, uint8_t const*, void*, uint32_t);
    int32_t (* fgetxattr)(pool*, pr_fh_t*, int32_t, uint8_t const*, void*, uint32_t);
    int32_t (* listxattr)(pool*, pr_fs_t*, uint8_t const*, array_header**);
    int32_t (* llistxattr)(pool*, pr_fs_t*, uint8_t const*, array_header**);
    int32_t (* flistxattr)(pool*, pr_fh_t*, int32_t, array_header**);
    int32_t (* removexattr)(pool*, pr_fs_t*, uint8_t const*, uint8_t const*);
    int32_t (* lremovexattr)(pool*, pr_fs_t*, uint8_t const*, uint8_t const*);
    int32_t (* fremovexattr)(pool*, pr_fh_t*, int32_t, uint8_t const*);
    int32_t (* setxattr)(pool*, pr_fs_t*, uint8_t const*, uint8_t const*, void*, uint32_t, int32_t);
    int32_t (* lsetxattr)(pool*, pr_fs_t*, uint8_t const*, uint8_t const*, void*, uint32_t, int32_t);
    int32_t (* fsetxattr)(pool*, pr_fh_t*, int32_t, uint8_t const*, void*, uint32_t, int32_t);
    int32_t (* chdir)(pr_fs_t*, uint8_t const*);
    int32_t (* chroot)(pr_fs_t*, uint8_t const*);
    void* (* opendir)(pr_fs_t*, uint8_t const*);
    int32_t (* closedir)(pr_fs_t*, void*);
    struct dirent* (* readdir)(pr_fs_t*, void*);
    int32_t (* mkdir)(pr_fs_t*, uint8_t const*, mode_t);
    int32_t (* rmdir)(pr_fs_t*, uint8_t const*);
    int32_t allow_xdev_link;
    int32_t allow_xdev_rename;
    int32_t non_std_path;
};

typedef struct __anon_0x0005fce5 glob_t;

struct mlinfo
{
    pool* pool;
    struct stat st;
    struct tm* tm;
    uint8_t const* user;
    uint8_t const* group;
    uint8_t const* type;
    uint8_t const* perm;
    uint8_t const* path;
    uint8_t const* real_path;
};

typedef struct err_explain_rec pr_error_explainer_t;

struct err_explainer
{
    struct err_explainer* next;
    struct err_explainer* prev;
    module* m;
    uint8_t const* name;
    pr_error_explainer_t* explainer;
};

typedef struct fs_rec pr_fs_t;

struct ucred
{
    pid_t pid;
    uid_t uid;
    gid_t gid;
};

struct utmpx
{
    int16_t ut_type;
    int16_t __ut_pad1;
    pid_t ut_pid;
    uint8_t ut_line[0x20];
    uint8_t ut_id[0x4];
    uint8_t ut_user[0x20];
    uint8_t ut_host[0x100];
    struct __anon_0x0008054f ut_exit;
    int32_t ut_session;
    int32_t __ut_pad2;
    struct timeval ut_tv;
    uint32_t ut_addr_v6[0x4];
    uint8_t __unused[0x14];
};

struct utsname
{
};

typedef void* va_list;

typedef char* va_list_1;

struct var
{
    int32_t v_type;
    uint8_t const* v_desc;
    void* v_val;
    void* v_data;
    uint32_t v_datasz;
};

typedef uint8_t const* (* var_vstr_cb)(void*, uint32_t);

typedef struct XAsetmember xasetmember_t;;
typedef int32_t (* XASET_COMPARE)(xasetmember_t*, xasetmember_t*);

typedef xasetmember_t* (* XASET_MCOPY)(xasetmember_t*);

struct XAset
{
    xasetmember_t* xas_list;
    struct pool_rec* pool;
    XASET_COMPARE xas_compare;
};

struct XAsetmember
{
    xasetmember_t* next;
    xasetmember_t* prev;
};

struct fs_statcache
{
    xasetmember_t* next;
    xasetmember_t* prev;
    pool* sc_pool;
    uint8_t const* sc_path;
    struct stat sc_stat;
    int32_t sc_errno;
    int32_t sc_retval;
    time_t sc_cached_ts;
};

typedef struct XAset xaset_t;

struct config_struc
{
    struct config_struc* next;
    struct config_struc* prev;
    int32_t config_type;
    uint32_t config_id;
    struct pool_rec* pool;
    xaset_t* set;
    uint8_t* name;
    uint32_t argc;
    void** argv;
    int32_t flags;
    struct server_struc* server;
    config_rec* parent;
    xaset_t* subset;
};

struct __anon_0x00000678
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000005c7 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0000b65e
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0000b5ad xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00016083
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00015fd2 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0001c4a3
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0001c3f2 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0001ded1
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0001de20 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000208a2
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000207f1 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00025721
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00025670 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0002c526
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0002c475 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000314d7
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00031426 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00035d0b
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00035c5a xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0003912a
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00039079 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00041739
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00041688 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0004690e
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0004685d xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0004bedf
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0004be2e xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0004e7fc
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0004e74b xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00056a3e
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0005698d xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000599a5
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000598f4 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0005fee2
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0005fe31 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00077aab
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000779fa xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000794a1
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000793f0 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0007b652
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0007b5a1 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000808be
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0008080d xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x00085a4a
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00085999 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000954d5
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x00095424 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x0009cedf
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x0009ce2e xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000b1f39
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000b1e88 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000bf77b
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000bf6ca xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000c3355
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000c32a4 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000c9b5f
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000c9aae xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000d4ca0
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000d4bef xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000dca0e
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000dc95d xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000e0e92
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000e0de1 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000e3ae1
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000e3a30 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000ea28c
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000ea1db xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000efe1e
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000efd6d xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

struct __anon_0x000f6483
{
    struct pool_rec* pool;
    int32_t volatile sf_flags;
    int32_t volatile sp_flags;
    pr_netaddr_t data_addr;
    uint16_t data_port;
    uint8_t const* auth_mech;
    uint8_t const* rfc2228_mech;
    uint8_t cwd[0x1000];
    uint8_t vwd[0x1000];
    struct config_struc* dir_config;
    pid_t pid;
    int32_t disable_id_switching;
    uid_t uid;
    uid_t ouid;
    gid_t gid;
    array_header* gids;
    array_header* groups;
    uid_t fsuid;
    gid_t fsgid;
    uint8_t const* user;
    uint8_t const* group;
    uid_t login_uid;
    gid_t login_gid;
    pr_table_t* notes;
    struct class_struc const* conn_class;
    uint8_t const* proc_prefix;
    int32_t wtmp_log;
    struct conn_struc* c;
    struct conn_struc* d;
    int32_t hide_password;
    uint8_t const* chroot_path;
    struct config_struc* anon_config;
    uint8_t const* anon_user;
    uint8_t const* curr_cmd;
    int32_t curr_cmd_id;
    struct cmd_struc* curr_cmd_rec;
    int32_t curr_phase;
    struct server_struc* prev_server;
    off_t restart_pos;
    off_t range_start;
    off_t range_len;
    struct __anon_0x000f63d2 xfer;
    off_t total_bytes_in;
    off_t total_bytes_out;
    off_t total_bytes;
    uint32_t total_files_in;
    uint32_t total_files_out;
    uint32_t total_files_xfer;
    off_t total_raw_in;
    off_t total_raw_out;
    int32_t disconnect_reason;
    struct module_struc* disconnect_module;
    uint64_t connect_time_ms;
};

typedef struct config_struc config_rec;

struct server_struc
{
    struct server_struc* next;
    struct server_struc* prev;
    struct pool_rec* pool;
    xaset_t* set;
    uint8_t const* ServerName;
    uint8_t const* ServerAddress;
    uint8_t const* ServerFQDN;
    uint32_t ServerPort;
    struct tcp_keepalive* tcp_keepalive;
    int32_t tcp_mss_len;
    int32_t tcp_rcvbuf_len;
    uint8_t tcp_rcvbuf_override;
    int32_t tcp_sndbuf_len;
    uint8_t tcp_sndbuf_override;
    uint8_t const* ServerAdmin;
    pr_netaddr_t const* addr;
    struct conn_struc* listen;
    xaset_t* conf;
    int32_t config_type;
    uint32_t sid;
    pr_table_t* notes;
};

typedef struct server_struc server_rec;

typedef struct __anon_0x00000678 session_t;

typedef struct XAsetmember xasetmember_t;
// Globals

pr_resp_msg* response;

// Function signatures

char* dgettext(char const* __domainname, char const* __msgid);
char* strerror(int32_t errnum);
int32_t pr_cmd_set_errno(cmd_rec* arg1, int32_t arg2);
int32_t pr_fs_getsize2(uint8_t* arg1, off_t* arg2);
int32_t* __errno_location();
modret_t* mod_create_ret(cmd_rec* arg1, uint8_t arg2, uint8_t const* arg3, uint8_t const* arg4);
modret_t* xfer_allo(cmd_rec* cmd);
uint32_t strlen(char const* s);
uint8_t const* pr_cmd_get_displayable_str(cmd_rec* arg1, uint32_t* arg2);
void free(void* ptr);
void pr_log_debug(int32_t arg1, uint8_t const* arg2, ...);
void pr_response_add(uint8_t const* arg1, uint8_t const* arg2, ...);
void pr_response_add_err(uint8_t const* arg1, uint8_t const* arg2, ...);
void pr_response_failure(cmd_rec* arg1, pr_resp_msg* arg2);
void pr_response_success(cmd_rec* arg1, pr_resp_msg* arg2);
void* malloc(uint32_t size);
void* memcpy(void* dest, void const* src, uint32_t n);
