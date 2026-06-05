/* Auto-generated from libmosquitto.so.2.0.9 */
/* Self-contained: requires no system headers. */
#ifndef LIBMOSQUITTO_SO_2_0_9_H
#define LIBMOSQUITTO_SO_2_0_9_H

#ifdef __cplusplus
extern "C" {
#endif

/* ── enums ───────────────────────────────────────────────── */

enum __anon_0x00017bc3 {
    _ISupper = 256,
    _ISlower = 512,
    _ISalpha = 1024,
    _ISdigit = 2048,
    _ISxdigit = 4096,
    _ISspace = 8192,
    _ISprint = 16384,
    _ISgraph = 32768,
    _ISblank = 1,
    _IScntrl = 2,
    _ISpunct = 4,
    _ISalnum = 8,
};

enum __anon_0x00019aaf {
    IPPROTO_IP = 0,
    IPPROTO_ICMP = 1,
    IPPROTO_IGMP = 2,
    IPPROTO_IPIP = 4,
    IPPROTO_TCP = 6,
    IPPROTO_EGP = 8,
    IPPROTO_PUP = 12,
    IPPROTO_UDP = 17,
    IPPROTO_IDP = 22,
    IPPROTO_TP = 29,
    IPPROTO_DCCP = 33,
    IPPROTO_IPV6 = 41,
    IPPROTO_RSVP = 46,
    IPPROTO_GRE = 47,
    IPPROTO_ESP = 50,
    IPPROTO_AH = 51,
    IPPROTO_MTP = 92,
    IPPROTO_BEETPH = 94,
    IPPROTO_ENCAP = 98,
    IPPROTO_PIM = 103,
    IPPROTO_COMP = 108,
    IPPROTO_SCTP = 132,
    IPPROTO_UDPLITE = 136,
    IPPROTO_MPLS = 137,
    IPPROTO_RAW = 255,
    IPPROTO_MAX = 256,
};

enum __socket_type {
    SOCK_STREAM = 1,
    SOCK_DGRAM = 2,
    SOCK_RAW = 3,
    SOCK_RDM = 4,
    SOCK_SEQPACKET = 5,
    SOCK_DCCP = 6,
    SOCK_PACKET = 10,
    SOCK_CLOEXEC = 524288,
    SOCK_NONBLOCK = 2048,
};

enum mosq_err_t {
    MOSQ_ERR_AUTH_CONTINUE = -4,
    MOSQ_ERR_NO_SUBSCRIBERS = -3,
    MOSQ_ERR_SUB_EXISTS = -2,
    MOSQ_ERR_CONN_PENDING = -1,
    MOSQ_ERR_SUCCESS = 0,
    MOSQ_ERR_NOMEM = 1,
    MOSQ_ERR_PROTOCOL = 2,
    MOSQ_ERR_INVAL = 3,
    MOSQ_ERR_NO_CONN = 4,
    MOSQ_ERR_CONN_REFUSED = 5,
    MOSQ_ERR_NOT_FOUND = 6,
    MOSQ_ERR_CONN_LOST = 7,
    MOSQ_ERR_TLS = 8,
    MOSQ_ERR_PAYLOAD_SIZE = 9,
    MOSQ_ERR_NOT_SUPPORTED = 10,
    MOSQ_ERR_AUTH = 11,
    MOSQ_ERR_ACL_DENIED = 12,
    MOSQ_ERR_UNKNOWN = 13,
    MOSQ_ERR_ERRNO = 14,
    MOSQ_ERR_EAI = 15,
    MOSQ_ERR_PROXY = 16,
    MOSQ_ERR_PLUGIN_DEFER = 17,
    MOSQ_ERR_MALFORMED_UTF8 = 18,
    MOSQ_ERR_KEEPALIVE = 19,
    MOSQ_ERR_LOOKUP = 20,
    MOSQ_ERR_MALFORMED_PACKET = 21,
    MOSQ_ERR_DUPLICATE_PROPERTY = 22,
    MOSQ_ERR_TLS_HANDSHAKE = 23,
    MOSQ_ERR_QOS_NOT_SUPPORTED = 24,
    MOSQ_ERR_OVERSIZE_PACKET = 25,
    MOSQ_ERR_OCSP = 26,
    MOSQ_ERR_TIMEOUT = 27,
    MOSQ_ERR_RETAIN_NOT_SUPPORTED = 28,
    MOSQ_ERR_TOPIC_ALIAS_INVALID = 29,
    MOSQ_ERR_ADMINISTRATIVE_ACTION = 30,
    MOSQ_ERR_ALREADY_EXISTS = 31,
};

enum mosq_opt_t {
    MOSQ_OPT_PROTOCOL_VERSION = 1,
    MOSQ_OPT_SSL_CTX = 2,
    MOSQ_OPT_SSL_CTX_WITH_DEFAULTS = 3,
    MOSQ_OPT_RECEIVE_MAXIMUM = 4,
    MOSQ_OPT_SEND_MAXIMUM = 5,
    MOSQ_OPT_TLS_KEYFORM = 6,
    MOSQ_OPT_TLS_ENGINE = 7,
    MOSQ_OPT_TLS_ENGINE_KPASS_SHA1 = 8,
    MOSQ_OPT_TLS_OCSP_REQUIRED = 9,
    MOSQ_OPT_TLS_ALPN = 10,
    MOSQ_OPT_TCP_NODELAY = 11,
    MOSQ_OPT_BIND_ADDRESS = 12,
    MOSQ_OPT_TLS_USE_OS_CERTS = 13,
};

enum mosquitto__keyform {
    mosq_k_pem = 0,
    mosq_k_engine = 1,
};

enum mosquitto__protocol {
    mosq_p_invalid = 0,
    mosq_p_mqtt31 = 1,
    mosq_p_mqtt311 = 2,
    mosq_p_mqtts = 3,
    mosq_p_mqtt5 = 5,
};

enum mosquitto__threaded_state {
    mosq_ts_none = 0,
    mosq_ts_self = 1,
    mosq_ts_external = 2,
};

enum mosquitto_client_state {
    mosq_cs_new = 0,
    mosq_cs_connected = 1,
    mosq_cs_disconnecting = 2,
    mosq_cs_active = 3,
    mosq_cs_connect_pending = 4,
    mosq_cs_connect_srv = 5,
    mosq_cs_disconnect_ws = 6,
    mosq_cs_disconnected = 7,
    mosq_cs_socks5_new = 8,
    mosq_cs_socks5_start = 9,
    mosq_cs_socks5_request = 10,
    mosq_cs_socks5_reply = 11,
    mosq_cs_socks5_auth_ok = 12,
    mosq_cs_socks5_userpass_reply = 13,
    mosq_cs_socks5_send_userpass = 14,
    mosq_cs_expiring = 15,
    mosq_cs_duplicate = 17,
    mosq_cs_disconnect_with_will = 18,
    mosq_cs_disused = 19,
    mosq_cs_authenticating = 20,
    mosq_cs_reauthenticating = 21,
};

enum mosquitto_msg_direction {
    mosq_md_in = 0,
    mosq_md_out = 1,
};

enum mosquitto_msg_state {
    mosq_ms_invalid = 0,
    mosq_ms_publish_qos0 = 1,
    mosq_ms_publish_qos1 = 2,
    mosq_ms_wait_for_puback = 3,
    mosq_ms_publish_qos2 = 4,
    mosq_ms_wait_for_pubrec = 5,
    mosq_ms_resend_pubrel = 6,
    mosq_ms_wait_for_pubrel = 7,
    mosq_ms_resend_pubcomp = 8,
    mosq_ms_wait_for_pubcomp = 9,
    mosq_ms_send_pubrec = 10,
    mosq_ms_queued = 11,
};

enum mqtt311_connack_codes {
    CONNACK_ACCEPTED = 0,
    CONNACK_REFUSED_PROTOCOL_VERSION = 1,
    CONNACK_REFUSED_IDENTIFIER_REJECTED = 2,
    CONNACK_REFUSED_SERVER_UNAVAILABLE = 3,
    CONNACK_REFUSED_BAD_USERNAME_PASSWORD = 4,
    CONNACK_REFUSED_NOT_AUTHORIZED = 5,
};

enum mqtt5_property {
    MQTT_PROP_PAYLOAD_FORMAT_INDICATOR = 1,
    MQTT_PROP_MESSAGE_EXPIRY_INTERVAL = 2,
    MQTT_PROP_CONTENT_TYPE = 3,
    MQTT_PROP_RESPONSE_TOPIC = 8,
    MQTT_PROP_CORRELATION_DATA = 9,
    MQTT_PROP_SUBSCRIPTION_IDENTIFIER = 11,
    MQTT_PROP_SESSION_EXPIRY_INTERVAL = 17,
    MQTT_PROP_ASSIGNED_CLIENT_IDENTIFIER = 18,
    MQTT_PROP_SERVER_KEEP_ALIVE = 19,
    MQTT_PROP_AUTHENTICATION_METHOD = 21,
    MQTT_PROP_AUTHENTICATION_DATA = 22,
    MQTT_PROP_REQUEST_PROBLEM_INFORMATION = 23,
    MQTT_PROP_WILL_DELAY_INTERVAL = 24,
    MQTT_PROP_REQUEST_RESPONSE_INFORMATION = 25,
    MQTT_PROP_RESPONSE_INFORMATION = 26,
    MQTT_PROP_SERVER_REFERENCE = 28,
    MQTT_PROP_REASON_STRING = 31,
    MQTT_PROP_RECEIVE_MAXIMUM = 33,
    MQTT_PROP_TOPIC_ALIAS_MAXIMUM = 34,
    MQTT_PROP_TOPIC_ALIAS = 35,
    MQTT_PROP_MAXIMUM_QOS = 36,
    MQTT_PROP_RETAIN_AVAILABLE = 37,
    MQTT_PROP_USER_PROPERTY = 38,
    MQTT_PROP_MAXIMUM_PACKET_SIZE = 39,
    MQTT_PROP_WILDCARD_SUB_AVAILABLE = 40,
    MQTT_PROP_SUBSCRIPTION_ID_AVAILABLE = 41,
    MQTT_PROP_SHARED_SUB_AVAILABLE = 42,
};

enum mqtt5_property_type {
    MQTT_PROP_TYPE_BYTE = 1,
    MQTT_PROP_TYPE_INT16 = 2,
    MQTT_PROP_TYPE_INT32 = 3,
    MQTT_PROP_TYPE_VARINT = 4,
    MQTT_PROP_TYPE_BINARY = 5,
    MQTT_PROP_TYPE_STRING = 6,
    MQTT_PROP_TYPE_STRING_PAIR = 7,
};

enum mqtt5_return_codes {
    MQTT_RC_SUCCESS = 0,
    MQTT_RC_NORMAL_DISCONNECTION = 0,
    MQTT_RC_GRANTED_QOS0 = 0,
    MQTT_RC_GRANTED_QOS1 = 1,
    MQTT_RC_GRANTED_QOS2 = 2,
    MQTT_RC_DISCONNECT_WITH_WILL_MSG = 4,
    MQTT_RC_NO_MATCHING_SUBSCRIBERS = 16,
    MQTT_RC_NO_SUBSCRIPTION_EXISTED = 17,
    MQTT_RC_CONTINUE_AUTHENTICATION = 24,
    MQTT_RC_REAUTHENTICATE = 25,
    MQTT_RC_UNSPECIFIED = 128,
    MQTT_RC_MALFORMED_PACKET = 129,
    MQTT_RC_PROTOCOL_ERROR = 130,
    MQTT_RC_IMPLEMENTATION_SPECIFIC = 131,
    MQTT_RC_UNSUPPORTED_PROTOCOL_VERSION = 132,
    MQTT_RC_CLIENTID_NOT_VALID = 133,
    MQTT_RC_BAD_USERNAME_OR_PASSWORD = 134,
    MQTT_RC_NOT_AUTHORIZED = 135,
    MQTT_RC_SERVER_UNAVAILABLE = 136,
    MQTT_RC_SERVER_BUSY = 137,
    MQTT_RC_BANNED = 138,
    MQTT_RC_SERVER_SHUTTING_DOWN = 139,
    MQTT_RC_BAD_AUTHENTICATION_METHOD = 140,
    MQTT_RC_KEEP_ALIVE_TIMEOUT = 141,
    MQTT_RC_SESSION_TAKEN_OVER = 142,
    MQTT_RC_TOPIC_FILTER_INVALID = 143,
    MQTT_RC_TOPIC_NAME_INVALID = 144,
    MQTT_RC_PACKET_ID_IN_USE = 145,
    MQTT_RC_PACKET_ID_NOT_FOUND = 146,
    MQTT_RC_RECEIVE_MAXIMUM_EXCEEDED = 147,
    MQTT_RC_TOPIC_ALIAS_INVALID = 148,
    MQTT_RC_PACKET_TOO_LARGE = 149,
    MQTT_RC_MESSAGE_RATE_TOO_HIGH = 150,
    MQTT_RC_QUOTA_EXCEEDED = 151,
    MQTT_RC_ADMINISTRATIVE_ACTION = 152,
    MQTT_RC_PAYLOAD_FORMAT_INVALID = 153,
    MQTT_RC_RETAIN_NOT_SUPPORTED = 154,
    MQTT_RC_QOS_NOT_SUPPORTED = 155,
    MQTT_RC_USE_ANOTHER_SERVER = 156,
    MQTT_RC_SERVER_MOVED = 157,
    MQTT_RC_SHARED_SUBS_NOT_SUPPORTED = 158,
    MQTT_RC_CONNECTION_RATE_EXCEEDED = 159,
    MQTT_RC_MAXIMUM_CONNECT_TIME = 160,
    MQTT_RC_SUBSCRIPTION_IDS_NOT_SUPPORTED = 161,
    MQTT_RC_WILDCARD_SUBS_NOT_SUPPORTED = 162,
};

/* ── forward declarations ────────────────────────────────── */

struct EDIPartyName_st;
struct GENERAL_NAME_st;
struct _IO_FILE;
union __anon_0x000001e7;
union __anon_0x00001e5a;
union __anon_0x0000298e;
union __anon_0x00003a40;
union __anon_0x00004f2d;
union __anon_0x00005980;
union __anon_0x00006b74;
union __anon_0x000075c7;
union __anon_0x00007af2;
union __anon_0x00008758;
union __anon_0x0000904d;
union __anon_0x00009aa0;
union __anon_0x0000a015;
union __anon_0x0000aa68;
union __anon_0x0000b088;
union __anon_0x0000bafa;
union __anon_0x0000c291;
union __anon_0x0000cd03;
union __anon_0x0000d5c2;
union __anon_0x0000e034;
union __anon_0x0000e7c6;
union __anon_0x0000f238;
union __anon_0x0000f977;
union __anon_0x000103d0;
union __anon_0x00010b10;
union __anon_0x00011563;
union __anon_0x00011c2c;
union __anon_0x00013186;
struct __anon_0x00014040;
union __anon_0x0001430d;
union __anon_0x00015d1c;
union __anon_0x000169f1;
union __anon_0x000183a9;
union __anon_0x00019751;
union __anon_0x00019b67;
union __anon_0x0001cb9c;
union __anon_0x0001f5eb;
union __anon_0x00020e37;
union __anon_0x00023154;
union __anon_0x00023ba7;
union __anon_0x000241e7;
union __anon_0x00024cef;
union __anon_0x00025822;
union __anon_0x00026275;
union __anon_0x000268ce;
union __anon_0x00027321;
union __anon_0x00028091;
union __anon_0x00028ba0;
union __anon_0x00029685;
union __anon_0x0002a0de;
union __anon_0x0002a8cc;
union __anon_0x0002b325;
union __anon_0x0002b908;
union __anon_0x0002bbf6;
union __anon_0x0002c866;
union __anon_0x0002d430;
union __anon_0x0002e60b;
union __anon_0x0002f818;
union __anon_0x0002fb06;
union __anon_0x0002fd67;
union __anon_0x0002ff9f;
union __anon_0x00031675;
union __anon_0x00032297;
union __anon_0x000332ad;
union __anon_0x00033d07;
struct __pthread_internal_list;
struct __pthread_mutex_s;
struct __va_list_tag;
struct addrinfo;
struct asn1_string_st;
struct asn1_type_st;
struct in6_addr;
struct in_addr;
struct libmosquitto_tls;
struct libmosquitto_will;
struct mosquitto;
struct mosquitto__alias;
struct mosquitto__packet;
struct mosquitto_message;
struct mosquitto_message_all;
struct mosquitto_msg_data;
struct mqtt5__property;
struct mqtt__string;
struct otherName_st;
struct sockaddr;
struct sockaddr_in;
struct sockaddr_in6;
struct sockaddr_un;
struct timespec;
struct userdata__callback;
struct userdata__simple;
struct will_delay_list;

/* ── typedefs, structs & unions (dependency-ordered) ──────── */

struct __pthread_internal_list {
    struct __pthread_internal_list * __prev;
    struct __pthread_internal_list * __next;
};

struct __va_list_tag {
    unsigned int gp_offset;
    unsigned int fp_offset;
    void * overflow_arg_area;
    void * reg_save_area;
};

struct asn1_string_st {
    int length;
    int type;
    unsigned char * data;
    long int flags;
};

struct libmosquitto_tls {
    char * cafile;
    char * capath;
    char * certfile;
    char * keyfile;
    char * ciphers;
    char * tls_version;
    int (*pw_callback)(char *, int, int, void *);
    int cert_reqs;
};

struct libmosquitto_will {
    char * topic;
    void * payload;
    int payloadlen;
    int qos;
    _Bool retain;
};

struct mosquitto_message {
    int mid;
    char * topic;
    void * payload;
    int payloadlen;
    int qos;
    _Bool retain;
};

struct userdata__callback {
    const char * topic;
    int (*callback)(struct mosquitto *, void *, const struct mosquitto_message *);
    void * userdata;
    int qos;
};

struct userdata__simple {
    struct mosquitto_message * messages;
    int max_msg_count;
    int message_count;
    _Bool want_retained;
};

struct will_delay_list {
    struct mosquitto * context;
    struct will_delay_list * prev;
    struct will_delay_list * next;
};

typedef struct asn1_string_st ASN1_BIT_STRING;
typedef struct asn1_string_st ASN1_BMPSTRING;
typedef int ASN1_BOOLEAN;
typedef struct asn1_string_st ASN1_ENUMERATED;
typedef struct asn1_string_st ASN1_GENERALIZEDTIME;
typedef struct asn1_string_st ASN1_GENERALSTRING;
typedef struct asn1_string_st ASN1_IA5STRING;
typedef struct asn1_string_st ASN1_INTEGER;
typedef struct asn1_object_st ASN1_OBJECT;
typedef struct asn1_string_st ASN1_OCTET_STRING;
typedef struct asn1_string_st ASN1_PRINTABLESTRING;
typedef struct asn1_string_st ASN1_STRING;
typedef struct asn1_string_st ASN1_T61STRING;
typedef struct asn1_type_st ASN1_TYPE;
typedef struct asn1_string_st ASN1_UNIVERSALSTRING;
typedef struct asn1_string_st ASN1_UTCTIME;
typedef struct asn1_string_st ASN1_UTF8STRING;
typedef struct ASN1_VALUE_st ASN1_VALUE;
typedef struct asn1_string_st ASN1_VISIBLESTRING;
typedef struct bignum_st BIGNUM;
typedef struct bio_st BIO;
typedef struct EDIPartyName_st EDIPARTYNAME;
typedef struct engine_st ENGINE;
typedef struct evp_pkey_st EVP_PKEY;
typedef struct _IO_FILE FILE;
typedef struct GENERAL_NAME_st GENERAL_NAME;
typedef struct ocsp_basic_response_st OCSP_BASICRESP;
typedef struct ocsp_response_st OCSP_RESPONSE;
typedef struct ocsp_single_response_st OCSP_SINGLERESP;
typedef struct stack_st OPENSSL_STACK;
typedef void (*OPENSSL_sk_freefunc)(void *);
typedef struct otherName_st OTHERNAME;
typedef struct ssl_st SSL;
typedef struct ssl_ctx_st SSL_CTX;
typedef struct ui_st UI;
typedef struct ui_method_st UI_METHOD;
typedef struct ui_string_st UI_STRING;
typedef struct x509_st X509;
typedef struct X509_name_st X509_NAME;
typedef struct x509_store_st X509_STORE;
typedef struct x509_store_ctx_st X509_STORE_CTX;
typedef void _IO_lock_t;
typedef long int __fd_mask;
typedef int __int32_t;
typedef signed char __int8_t;
typedef unsigned int __mode_t;
typedef long int __off64_t;
typedef long int __off_t;
typedef struct __pthread_internal_list __pthread_list_t;
typedef void (*__sighandler_t)(int);
typedef unsigned int __socklen_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef long int __time_t;
typedef short unsigned int __uint16_t;
typedef unsigned int __uint32_t;
typedef unsigned char __uint8_t;
typedef struct __anon_0x00014040 fd_set;
typedef int mosq_sock_t;
typedef struct mqtt5__property mosquitto_property;
typedef union __anon_0x000001e7 pthread_mutex_t;
typedef long unsigned int pthread_t;
typedef short unsigned int sa_family_t;
typedef long unsigned int size_t;
typedef struct __va_list_tag __builtin_va_list[1];
struct EDIPartyName_st {
    ASN1_STRING * nameAssigner;
    ASN1_STRING * partyName;
};

struct otherName_st {
    ASN1_OBJECT * type_id;
    ASN1_TYPE * value;
};

union __anon_0x0002fd67 {
    char * ptr;
    ASN1_BOOLEAN boolean;
    ASN1_STRING * asn1_string;
    ASN1_OBJECT * object;
    ASN1_INTEGER * integer;
    ASN1_ENUMERATED * enumerated;
    ASN1_BIT_STRING * bit_string;
    ASN1_OCTET_STRING * octet_string;
    ASN1_PRINTABLESTRING * printablestring;
    ASN1_T61STRING * t61string;
    ASN1_IA5STRING * ia5string;
    ASN1_GENERALSTRING * generalstring;
    ASN1_BMPSTRING * bmpstring;
    ASN1_UNIVERSALSTRING * universalstring;
    ASN1_UTCTIME * utctime;
    ASN1_GENERALIZEDTIME * generalizedtime;
    ASN1_VISIBLESTRING * visiblestring;
    ASN1_UTF8STRING * utf8string;
    ASN1_STRING * set;
    ASN1_STRING * sequence;
    ASN1_VALUE * asn1_value;
};

typedef void (*sk_GENERAL_NAME_freefunc)(GENERAL_NAME *);
union __anon_0x0002ff9f {
    char * ptr;
    OTHERNAME * otherName;
    ASN1_IA5STRING * rfc822Name;
    ASN1_IA5STRING * dNSName;
    ASN1_STRING * x400Address;
    X509_NAME * directoryName;
    EDIPARTYNAME * ediPartyName;
    ASN1_IA5STRING * uniformResourceIdentifier;
    ASN1_OCTET_STRING * iPAddress;
    ASN1_OBJECT * registeredID;
    ASN1_OCTET_STRING * ip;
    X509_NAME * dirn;
    ASN1_IA5STRING * ia5;
    ASN1_OBJECT * rid;
    ASN1_TYPE * other;
};

struct __anon_0x00014040 {
    __fd_mask fds_bits[16];
};

typedef __int32_t int32_t;
typedef __int8_t int8_t;
typedef __mode_t mode_t;
struct __pthread_mutex_s {
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    short int __spins;
    short int __elision;
    __pthread_list_t __list;
};

typedef __socklen_t socklen_t;
typedef __ssize_t ssize_t;
struct timespec {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
};

typedef __time_t time_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint8_t uint8_t;
struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

struct sockaddr_un {
    sa_family_t sun_family;
    char sun_path[108];
};

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    short unsigned int _cur_column;
    signed char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    struct _IO_codecvt * _codecvt;
    struct _IO_wide_data * _wide_data;
    struct _IO_FILE * _freeres_list;
    void * _freeres_buf;
    size_t __pad5;
    int _mode;
    char _unused2[20];
};

typedef __builtin_va_list __gnuc_va_list;
struct asn1_type_st {
    int type;
    union __anon_0x0002fd67 value;
};

struct GENERAL_NAME_st {
    int type;
    union __anon_0x0002ff9f d;
};

union __anon_0x000001e7 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x00001e5a {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x00003a40 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x00004f2d {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x00006b74 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x00007af2 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x0000904d {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x0000a015 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x0000b088 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x0000c291 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x0000d5c2 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x0000e7c6 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x0000f977 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x00010b10 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x00011c2c {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x00013186 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x0001430d {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x00015d1c {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x000183a9 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x00019751 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x0001cb9c {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x0001f5eb {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x00023154 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x000241e7 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x00025822 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x000268ce {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x00028091 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x00029685 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x0002a8cc {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x0002b908 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x0002d430 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x0002e60b {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x0002f818 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x00031675 {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
};

union __anon_0x000332ad {
    struct __pthread_mutex_s __data;
    char __size[40];
    long int __align;
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

struct mosquitto__alias {
    char * topic;
    uint16_t alias;
};

struct mqtt__string {
    char * v;
    uint16_t len;
};

typedef uint16_t in_port_t;
struct mosquitto_message_all {
    struct mosquitto_message_all * next;
    struct mosquitto_message_all * prev;
    mosquitto_property * properties;
    time_t timestamp;
    enum mosquitto_msg_state state;
    _Bool dup;
    struct mosquitto_message msg;
    uint32_t expiry_interval;
};

typedef uint32_t in_addr_t;
union __anon_0x00019b67 {
    uint8_t __u6_addr8[16];
    uint16_t __u6_addr16[8];
    uint32_t __u6_addr32[4];
};

union __anon_0x0002bbf6 {
    uint8_t __u6_addr8[16];
    uint16_t __u6_addr16[8];
    uint32_t __u6_addr32[4];
};

union __anon_0x0002fb06 {
    uint8_t __u6_addr8[16];
    uint16_t __u6_addr16[8];
    uint32_t __u6_addr32[4];
};

struct mosquitto__packet {
    uint8_t * payload;
    struct mosquitto__packet * next;
    uint32_t remaining_mult;
    uint32_t remaining_length;
    uint32_t packet_length;
    uint32_t to_process;
    uint32_t pos;
    uint16_t mid;
    uint8_t command;
    int8_t remaining_count;
};

typedef __gnuc_va_list va_list;
struct mosquitto_msg_data {
    struct mosquitto_message_all * inflight;
    int queue_len;
    pthread_mutex_t mutex;
    int inflight_quota;
    uint16_t inflight_maximum;
};

union __anon_0x0000298e {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00005980 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x000075c7 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00008758 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00009aa0 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0000aa68 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0000bafa {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0000cd03 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0000e034 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0000f238 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x000103d0 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00011563 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x000169f1 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00020e37 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00023ba7 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00024cef {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00026275 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00027321 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00028ba0 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0002a0de {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0002b325 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0002c866 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00032297 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00033d07 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

struct in_addr {
    in_addr_t s_addr;
};

struct in6_addr {
    union __anon_0x00019b67 __in6_u;
};

struct mosquitto {
    mosq_sock_t sock;
    mosq_sock_t sockpairR;
    mosq_sock_t sockpairW;
    uint32_t maximum_packet_size;
    enum mosquitto__protocol protocol;
    char * address;
    char * id;
    char * username;
    char * password;
    uint16_t keepalive;
    uint16_t last_mid;
    enum mosquitto_client_state state;
    time_t last_msg_in;
    time_t next_msg_out;
    time_t ping_t;
    struct mosquitto__packet in_packet;
    struct mosquitto__packet * current_out_packet;
    struct mosquitto__packet * out_packet;
    struct mosquitto_message_all * will;
    struct mosquitto__alias * aliases;
    struct will_delay_list * will_delay_entry;
    int alias_count;
    uint32_t will_delay_interval;
    time_t will_delay_time;
    SSL * ssl;
    SSL_CTX * ssl_ctx;
    char * tls_cafile;
    char * tls_capath;
    char * tls_certfile;
    char * tls_keyfile;
    int (*tls_pw_callback)(char *, int, int, void *);
    char * tls_version;
    char * tls_ciphers;
    char * tls_psk;
    char * tls_psk_identity;
    char * tls_engine;
    char * tls_engine_kpass_sha1;
    char * tls_alpn;
    int tls_cert_reqs;
    _Bool tls_insecure;
    _Bool ssl_ctx_defaults;
    _Bool tls_ocsp_required;
    _Bool tls_use_os_certs;
    enum mosquitto__keyform tls_keyform;
    _Bool want_write;
    _Bool want_connect;
    pthread_mutex_t callback_mutex;
    pthread_mutex_t log_callback_mutex;
    pthread_mutex_t msgtime_mutex;
    pthread_mutex_t out_packet_mutex;
    pthread_mutex_t current_out_packet_mutex;
    pthread_mutex_t state_mutex;
    pthread_mutex_t mid_mutex;
    pthread_t thread_id;
    _Bool clean_start;
    time_t session_expiry_time;
    uint32_t session_expiry_interval;
    char * socks5_host;
    uint16_t socks5_port;
    char * socks5_username;
    char * socks5_password;
    _Bool in_callback;
    struct mosquitto_msg_data msgs_in;
    struct mosquitto_msg_data msgs_out;
    char log_string[600];
    void * userdata;
    void (*on_connect)(struct mosquitto *, void *, int);
    void (*on_connect_with_flags)(struct mosquitto *, void *, int, int);
    void (*on_disconnect)(struct mosquitto *, void *, int);
    void (*on_message)(struct mosquitto *, void *, const struct mosquitto_message *);
    void (*on_publish)(struct mosquitto *, void *, int);
    void (*on_log)(struct mosquitto *, void *, int, const char *);
    void (*on_subscribe)(struct mosquitto *, void *, int, int, const int *);
    void (*on_unsubscribe)(struct mosquitto *, void *, int);
    void (*on_disconnect_v5)(struct mosquitto *, void *, int, const mosquitto_property *);
    void (*on_connect_v5)(struct mosquitto *, void *, int, int, const mosquitto_property *);
    void (*on_message_v5)(struct mosquitto *, void *, const struct mosquitto_message *, const mosquitto_property *);
    void (*on_publish_v5)(struct mosquitto *, void *, int, int, const mosquitto_property *);
    void (*on_subscribe_v5)(struct mosquitto *, void *, int, int, const int *, const mosquitto_property *);
    void (*on_unsubscribe_v5)(struct mosquitto *, void *, int, const mosquitto_property *);
    char * host;
    uint16_t port;
    char * bind_address;
    unsigned int reconnects;
    unsigned int reconnect_delay;
    unsigned int reconnect_delay_max;
    _Bool reconnect_exponential_backoff;
    char threaded;
    struct mosquitto__packet * out_packet_last;
    mosquitto_property * connect_properties;
    uint8_t max_qos;
    uint8_t retain_available;
    _Bool tcp_nodelay;
    uint32_t events;
};

struct mqtt5__property {
    struct mqtt5__property * next;
    union __anon_0x0000298e value;
    struct mqtt__string name;
    int32_t identifier;
    _Bool client_generated;
};

struct sockaddr_in {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;
    unsigned char sin_zero[8];
};

struct sockaddr_in6 {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
};


/* ── exported function declarations ──────────────────────── */

extern const char * mosquitto_connack_string(int connack_code);
extern void mosquitto_connect(void);
extern int mosquitto_connect_async(struct mosquitto * mosq, const char * host, int port, int keepalive);
extern int mosquitto_connect_bind(struct mosquitto * mosq, const char * host, int port, int keepalive, const char * bind_address);
extern int mosquitto_connect_bind_async(struct mosquitto * mosq, const char * host, int port, int keepalive, const char * bind_address);
extern int mosquitto_connect_bind_v5(struct mosquitto * mosq, const char * host, int port, int keepalive, const char * bind_address, const mosquitto_property * properties);
extern void mosquitto_connect_callback_set(void);
extern int mosquitto_connect_srv(struct mosquitto * mosq, const char * host, int keepalive, const char * bind_address);
extern void mosquitto_connect_v5_callback_set(struct mosquitto * mosq, void (*on_connect)(struct mosquitto *, void *, int, int, const mosquitto_property *));
extern void mosquitto_connect_with_flags_callback_set(struct mosquitto * mosq, void (*on_connect)(struct mosquitto *, void *, int, int));
extern void mosquitto_destroy(void);
extern void mosquitto_disconnect(void);
extern void mosquitto_disconnect_callback_set(struct mosquitto * mosq, void (*on_disconnect)(struct mosquitto *, void *, int));
extern int mosquitto_disconnect_v5(struct mosquitto * mosq, int reason_code, const mosquitto_property * properties);
extern void mosquitto_disconnect_v5_callback_set(struct mosquitto * mosq, void (*on_disconnect)(struct mosquitto *, void *, int, const mosquitto_property *));
extern int mosquitto_int_option(struct mosquitto * mosq, enum mosq_opt_t option, int value);
extern int mosquitto_lib_cleanup(void);
extern int mosquitto_lib_init(void);
extern int mosquitto_lib_version(int * major, int * minor, int * revision);
extern void mosquitto_log_callback_set(struct mosquitto * mosq, void (*on_log)(struct mosquitto *, void *, int, const char *));
extern int mosquitto_loop(struct mosquitto * mosq, int timeout, int max_packets);
extern void mosquitto_loop_forever(void);
extern int mosquitto_loop_misc(struct mosquitto * mosq);
extern int mosquitto_loop_read(struct mosquitto * mosq, int max_packets);
extern int mosquitto_loop_start(struct mosquitto * mosq);
extern int mosquitto_loop_stop(struct mosquitto * mosq, _Bool force);
extern int mosquitto_loop_write(struct mosquitto * mosq, int max_packets);
extern int mosquitto_max_inflight_messages_set(struct mosquitto * mosq, unsigned int max_inflight_messages);
extern void mosquitto_message_callback_set(void);
extern int mosquitto_message_copy(struct mosquitto_message * dst, const struct mosquitto_message * src);
extern void mosquitto_message_free(struct mosquitto_message * * message);
extern void mosquitto_message_free_contents(struct mosquitto_message * message);
extern void mosquitto_message_retry_set(struct mosquitto * mosq, unsigned int message_retry);
extern void mosquitto_message_v5_callback_set(struct mosquitto * mosq, void (*on_message)(struct mosquitto *, void *, const struct mosquitto_message *, const mosquitto_property *));
extern void mosquitto_new(void);
extern int mosquitto_opts_set(struct mosquitto * mosq, enum mosq_opt_t option, void * value);
extern int mosquitto_property_add_binary(mosquitto_property * * proplist, int identifier, const void * value, uint16_t len);
extern int mosquitto_property_add_byte(mosquitto_property * * proplist, int identifier, uint8_t value);
extern void mosquitto_property_add_int16(void);
extern int mosquitto_property_add_int32(mosquitto_property * * proplist, int identifier, uint32_t value);
extern int mosquitto_property_add_string(mosquitto_property * * proplist, int identifier, const char * value);
extern int mosquitto_property_add_string_pair(mosquitto_property * * proplist, int identifier, const char * name, const char * value);
extern int mosquitto_property_add_varint(mosquitto_property * * proplist, int identifier, uint32_t value);
extern int mosquitto_property_check_all(int command, const mosquitto_property * properties);
extern void mosquitto_property_check_command(void);
extern int mosquitto_property_copy_all(mosquitto_property * * dest, const mosquitto_property * src);
extern void mosquitto_property_free_all(void);
extern int mosquitto_property_identifier(const mosquitto_property * property);
extern const char * mosquitto_property_identifier_to_string(int identifier);
extern const mosquitto_property * mosquitto_property_next(const mosquitto_property * proplist);
extern const mosquitto_property * mosquitto_property_read_binary(const mosquitto_property * proplist, int identifier, void * * value, uint16_t * len, _Bool skip_first);
extern const mosquitto_property * mosquitto_property_read_byte(const mosquitto_property * proplist, int identifier, uint8_t * value, _Bool skip_first);
extern void mosquitto_property_read_int16(void);
extern const mosquitto_property * mosquitto_property_read_int32(const mosquitto_property * proplist, int identifier, uint32_t * value, _Bool skip_first);
extern const mosquitto_property * mosquitto_property_read_string(const mosquitto_property * proplist, int identifier, char * * value, _Bool skip_first);
extern const mosquitto_property * mosquitto_property_read_string_pair(const mosquitto_property * proplist, int identifier, char * * name, char * * value, _Bool skip_first);
extern const mosquitto_property * mosquitto_property_read_varint(const mosquitto_property * proplist, int identifier, uint32_t * value, _Bool skip_first);
extern void mosquitto_pub_topic_check(void);
extern int mosquitto_pub_topic_check2(const char * str, size_t len);
extern int mosquitto_publish(struct mosquitto * mosq, int * mid, const char * topic, int payloadlen, const void * payload, int qos, _Bool retain);
extern void mosquitto_publish_callback_set(struct mosquitto * mosq, void (*on_publish)(struct mosquitto *, void *, int));
extern int mosquitto_publish_v5(struct mosquitto * mosq, int * mid, const char * topic, int payloadlen, const void * payload, int qos, _Bool retain, const mosquitto_property * properties);
extern void mosquitto_publish_v5_callback_set(struct mosquitto * mosq, void (*on_publish)(struct mosquitto *, void *, int, int, const mosquitto_property *));
extern const char * mosquitto_reason_string(int reason_code);
extern void mosquitto_reconnect(void);
extern int mosquitto_reconnect_async(struct mosquitto * mosq);
extern int mosquitto_reconnect_delay_set(struct mosquitto * mosq, unsigned int reconnect_delay, unsigned int reconnect_delay_max, _Bool reconnect_exponential_backoff);
extern int mosquitto_reinitialise(struct mosquitto * mosq, const char * id, _Bool clean_start, void * userdata);
extern int mosquitto_socket(struct mosquitto * mosq);
extern int mosquitto_socks5_set(struct mosquitto * mosq, const char * host, int port, const char * username, const char * password);
extern void * mosquitto_ssl_get(struct mosquitto * mosq);
extern const char * mosquitto_strerror(int mosq_errno);
extern int mosquitto_string_option(struct mosquitto * mosq, enum mosq_opt_t option, const char * value);
extern int mosquitto_string_to_command(const char * str, int * cmd);
extern int mosquitto_string_to_property_info(const char * propname, int * identifier, int * type);
extern int mosquitto_sub_topic_check(const char * str);
extern int mosquitto_sub_topic_check2(const char * str, size_t len);
extern int mosquitto_sub_topic_tokenise(const char * subtopic, char * * * topics, int * count);
extern int mosquitto_sub_topic_tokens_free(char * * * topics, int count);
extern void mosquitto_subscribe(void);
extern int mosquitto_subscribe_callback(int (*callback)(struct mosquitto *, void *, const struct mosquitto_message *), void * userdata, const char * topic, int qos, const char * host, int port, const char * client_id, int keepalive, _Bool clean_session, const char * username, const char * password, const struct libmosquitto_will * will, const struct libmosquitto_tls * tls);
extern void mosquitto_subscribe_callback_set(struct mosquitto * mosq, void (*on_subscribe)(struct mosquitto *, void *, int, int, const int *));
extern int mosquitto_subscribe_multiple(struct mosquitto * mosq, int * mid, int sub_count, const char * * sub, int qos, int options, const mosquitto_property * properties);
extern int mosquitto_subscribe_simple(struct mosquitto_message * * messages, int msg_count, _Bool want_retained, const char * topic, int qos, const char * host, int port, const char * client_id, int keepalive, _Bool clean_session, const char * username, const char * password, const struct libmosquitto_will * will, const struct libmosquitto_tls * tls);
extern int mosquitto_subscribe_v5(struct mosquitto * mosq, int * mid, const char * sub, int qos, int options, const mosquitto_property * properties);
extern void mosquitto_subscribe_v5_callback_set(struct mosquitto * mosq, void (*on_subscribe)(struct mosquitto *, void *, int, int, const int *, const mosquitto_property *));
extern int mosquitto_threaded_set(struct mosquitto * mosq, _Bool threaded);
extern int mosquitto_tls_insecure_set(struct mosquitto * mosq, _Bool value);
extern int mosquitto_tls_opts_set(struct mosquitto * mosq, int cert_reqs, const char * tls_version, const char * ciphers);
extern int mosquitto_tls_psk_set(struct mosquitto * mosq, const char * psk, const char * identity, const char * ciphers);
extern int mosquitto_tls_set(struct mosquitto * mosq, const char * cafile, const char * capath, const char * certfile, const char * keyfile, int (*pw_callback)(char *, int, int, void *));
extern int mosquitto_topic_matches_sub(const char * sub, const char * topic, _Bool * result);
extern int mosquitto_topic_matches_sub2(const char * sub, size_t sublen, const char * topic, size_t topiclen, _Bool * result);
extern int mosquitto_unsubscribe(struct mosquitto * mosq, int * mid, const char * sub);
extern void mosquitto_unsubscribe_callback_set(struct mosquitto * mosq, void (*on_unsubscribe)(struct mosquitto *, void *, int));
extern int mosquitto_unsubscribe_multiple(struct mosquitto * mosq, int * mid, int sub_count, const char * * sub, const mosquitto_property * properties);
extern int mosquitto_unsubscribe_v5(struct mosquitto * mosq, int * mid, const char * sub, const mosquitto_property * properties);
extern void mosquitto_unsubscribe_v5_callback_set(struct mosquitto * mosq, void (*on_unsubscribe)(struct mosquitto *, void *, int, const mosquitto_property *));
extern void mosquitto_user_data_set(struct mosquitto * mosq, void * userdata);
extern void * mosquitto_userdata(struct mosquitto * mosq);
extern int mosquitto_username_pw_set(struct mosquitto * mosq, const char * username, const char * password);
extern void mosquitto_validate_utf8(void);
extern int mosquitto_void_option(struct mosquitto * mosq, enum mosq_opt_t option, void * value);
extern _Bool mosquitto_want_write(struct mosquitto * mosq);
extern int mosquitto_will_clear(struct mosquitto * mosq);
extern int mosquitto_will_set(struct mosquitto * mosq, const char * topic, int payloadlen, const void * payload, int qos, _Bool retain);
extern int mosquitto_will_set_v5(struct mosquitto * mosq, const char * topic, int payloadlen, const void * payload, int qos, _Bool retain, mosquitto_property * properties);

#ifdef __cplusplus
}
#endif

#endif /* LIBMOSQUITTO_SO_2_0_9_H */
