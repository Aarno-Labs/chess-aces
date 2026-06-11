/* Auto-generated from /home/ricardo/code/aarno/amp/digiheals/chess-aces/phase_2/eval/morton/digiheals/unstripped/libmosquitto.so.2.0.10 */
/* Self-contained: requires no system headers. */
#ifndef LIBMOSQUITTO_SO_2_0_10_H
#define LIBMOSQUITTO_SO_2_0_10_H

#ifdef __cplusplus
extern "C" {
#endif

/* ── enums ───────────────────────────────────────────────── */

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

union __anon_0x000002b3;
struct __anon_0x00000321;
union __anon_0x00000c71;
union __anon_0x00001526;
struct __anon_0x00001594;
union __anon_0x000023c9;
struct __anon_0x0000243a;
union __anon_0x00002cba;
union __anon_0x000035b1;
struct __anon_0x0000361f;
union __anon_0x00003e98;
union __anon_0x00004252;
struct __anon_0x000042c3;
union __anon_0x00004d48;
union __anon_0x000052ad;
struct __anon_0x0000531b;
union __anon_0x00005b94;
union __anon_0x00005f6b;
struct __anon_0x00005fdc;
union __anon_0x00006855;
union __anon_0x00006c52;
struct __anon_0x00006cc3;
union __anon_0x00007559;
union __anon_0x00007a43;
struct __anon_0x00007ab4;
union __anon_0x00008351;
union __anon_0x000088c9;
struct __anon_0x0000893a;
union __anon_0x000091d0;
union __anon_0x000096e1;
struct __anon_0x00009752;
union __anon_0x00009fe8;
union __anon_0x0000a4d6;
struct __anon_0x0000a547;
union __anon_0x0000adc7;
union __anon_0x0000b296;
struct __anon_0x0000b307;
union __anon_0x0000bb80;
union __anon_0x0000c07f;
struct __anon_0x0000c0ed;
union __anon_0x0000cfb7;
struct __anon_0x0000d028;
struct __anon_0x0000dc23;
union __anon_0x0000de34;
struct __anon_0x0000dea5;
union __anon_0x0000ee7a;
struct __anon_0x0000eeeb;
union __anon_0x0000f9fc;
struct __anon_0x000105f5;
union __anon_0x0001061d;
struct __anon_0x0001068b;
union __anon_0x0001163e;
union __anon_0x000117ae;
struct __anon_0x0001181f;
union __anon_0x00012bc6;
struct __anon_0x00012c34;
union __anon_0x000143e5;
struct __anon_0x00014456;
union __anon_0x00015331;
struct __anon_0x0001539f;
union __anon_0x00015d06;
union __anon_0x00016ddd;
struct __anon_0x00016e4e;
union __anon_0x000176c7;
union __anon_0x00017b47;
struct __anon_0x00017bb8;
union __anon_0x000184e4;
union __anon_0x00018af8;
struct __anon_0x00018b69;
union __anon_0x000193e9;
union __anon_0x0001985c;
struct __anon_0x000198cd;
union __anon_0x0001a146;
union __anon_0x0001a824;
struct __anon_0x0001a895;
union __anon_0x0001b1c8;
union __anon_0x0001b853;
struct __anon_0x0001b8c4;
union __anon_0x0001c144;
union __anon_0x0001c67e;
struct __anon_0x0001c6ef;
union __anon_0x0001cf68;
union __anon_0x0001d2cb;
union __anon_0x0001d375;
struct __anon_0x0001d3e6;
union __anon_0x0001de1c;
union __anon_0x0001e3f4;
struct __anon_0x0001e462;
union __anon_0x0001f143;
struct __anon_0x0001f1a5;
union __anon_0x0001f1cb;
struct __anon_0x0001f23d;
union __anon_0x00020432;
struct __anon_0x000204a3;
union __anon_0x00020d1c;
union __anon_0x00021633;
struct __anon_0x000216a1;
union __anon_0x00021f1a;
struct __sigset_t;
struct __va_list;
struct addrinfo;
struct fbit_implication;
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
struct sockaddr;
struct sockaddr_in;
struct sockaddr_in6;
struct sockaddr_un;
struct timespec;
struct userdata__callback;
struct userdata__simple;
struct will_delay_list;

/* ── typedefs, structs & unions (dependency-ordered) ──────── */

union __anon_0x000002b3 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x00001526 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x000023c9 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x000035b1 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x00004252 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x000052ad {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x00005f6b {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x00006c52 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x00007a43 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x000088c9 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x000096e1 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x0000a4d6 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x0000b296 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x0000c07f {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x0000cfb7 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

struct __anon_0x0000dc23 {
    long unsigned int fds_bits[32];
};

union __anon_0x0000de34 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x0000ee7a {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

struct __anon_0x000105f5 {
    unsigned int __attr;
};

union __anon_0x0001061d {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x000117ae {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x00012bc6 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x000143e5 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x00015331 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x00016ddd {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x00017b47 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x00018af8 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x0001985c {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x0001a824 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x0001b853 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x0001c67e {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x0001d375 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x0001e3f4 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x0001f143 {
    int __i[9];
    volatile int __vi[9];
    long unsigned int __s[9];
};

union __anon_0x0001f1cb {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x00020432 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

union __anon_0x00021633 {
    int __i[6];
    volatile int __vi[6];
    volatile void * __p[6];
};

struct __sigset_t {
    long unsigned int __bits[32];
};

struct __va_list {
    void * __ap;
};

struct fbit_implication {
    enum isa_feature ante;
    enum isa_feature cons;
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

typedef struct _IO_FILE FILE;
typedef long long unsigned int UDItype;
typedef unsigned int USItype;
typedef struct __va_list __isoc_va_list;
typedef int clockid_t;
typedef struct __anon_0x0000dc23 fd_set;
typedef int int32_t;
typedef signed char int8_t;
typedef unsigned int mode_t;
typedef int mosq_sock_t;
typedef struct mqtt5__property mosquitto_property;
typedef struct __anon_0x0001f1a5 pthread_attr_t;
typedef struct __anon_0x00000321 pthread_mutex_t;
typedef struct __anon_0x000105f5 pthread_mutexattr_t;
typedef struct __pthread * pthread_t;
typedef short unsigned int sa_family_t;
typedef struct __sigset_t sigset_t;
typedef unsigned int size_t;
typedef unsigned int socklen_t;
typedef int ssize_t;
typedef long long int time_t;
typedef short unsigned int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned char uint8_t;
typedef struct __va_list va_list;
struct __anon_0x00000321 {
    union __anon_0x000002b3 __u;
};

struct __anon_0x00001594 {
    union __anon_0x00001526 __u;
};

struct __anon_0x0000243a {
    union __anon_0x000023c9 __u;
};

struct __anon_0x0000361f {
    union __anon_0x000035b1 __u;
};

struct __anon_0x000042c3 {
    union __anon_0x00004252 __u;
};

struct __anon_0x0000531b {
    union __anon_0x000052ad __u;
};

struct __anon_0x00005fdc {
    union __anon_0x00005f6b __u;
};

struct __anon_0x00006cc3 {
    union __anon_0x00006c52 __u;
};

struct __anon_0x00007ab4 {
    union __anon_0x00007a43 __u;
};

struct __anon_0x0000893a {
    union __anon_0x000088c9 __u;
};

struct __anon_0x00009752 {
    union __anon_0x000096e1 __u;
};

struct __anon_0x0000a547 {
    union __anon_0x0000a4d6 __u;
};

struct __anon_0x0000b307 {
    union __anon_0x0000b296 __u;
};

struct __anon_0x0000c0ed {
    union __anon_0x0000c07f __u;
};

struct __anon_0x0000d028 {
    union __anon_0x0000cfb7 __u;
};

struct __anon_0x0000dea5 {
    union __anon_0x0000de34 __u;
};

struct __anon_0x0000eeeb {
    union __anon_0x0000ee7a __u;
};

struct __anon_0x0001068b {
    union __anon_0x0001061d __u;
};

struct __anon_0x0001181f {
    union __anon_0x000117ae __u;
};

struct __anon_0x00012c34 {
    union __anon_0x00012bc6 __u;
};

struct __anon_0x00014456 {
    union __anon_0x000143e5 __u;
};

struct __anon_0x0001539f {
    union __anon_0x00015331 __u;
};

struct __anon_0x00016e4e {
    union __anon_0x00016ddd __u;
};

struct __anon_0x00017bb8 {
    union __anon_0x00017b47 __u;
};

struct __anon_0x00018b69 {
    union __anon_0x00018af8 __u;
};

struct __anon_0x000198cd {
    union __anon_0x0001985c __u;
};

struct __anon_0x0001a895 {
    union __anon_0x0001a824 __u;
};

struct __anon_0x0001b8c4 {
    union __anon_0x0001b853 __u;
};

struct __anon_0x0001c6ef {
    union __anon_0x0001c67e __u;
};

struct __anon_0x0001d3e6 {
    union __anon_0x0001d375 __u;
};

struct __anon_0x0001e462 {
    union __anon_0x0001e3f4 __u;
};

struct __anon_0x0001f1a5 {
    union __anon_0x0001f143 __u;
};

struct __anon_0x0001f23d {
    union __anon_0x0001f1cb __u;
};

struct __anon_0x000204a3 {
    union __anon_0x00020432 __u;
};

struct __anon_0x000216a1 {
    union __anon_0x00021633 __u;
};

struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

struct sockaddr_un {
    sa_family_t sun_family;
    char sun_path[108];
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

struct timespec {
    time_t tv_sec;
    long int tv_nsec;
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
union __anon_0x0001163e {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
};

union __anon_0x0001d2cb {
    uint8_t __s6_addr[16];
    uint16_t __s6_addr16[8];
    uint32_t __s6_addr32[4];
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

struct mosquitto_msg_data {
    struct mosquitto_message_all * inflight;
    int queue_len;
    pthread_mutex_t mutex;
    int inflight_quota;
    uint16_t inflight_maximum;
};

union __anon_0x00000c71 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00002cba {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00003e98 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00004d48 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00005b94 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00006855 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00007559 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00008351 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x000091d0 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00009fe8 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0000adc7 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0000bb80 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0000f9fc {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00015d06 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x000176c7 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x000184e4 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x000193e9 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0001a146 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0001b1c8 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0001c144 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0001cf68 {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x0001de1c {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00020d1c {
    uint8_t i8;
    uint16_t i16;
    uint32_t i32;
    uint32_t varint;
    struct mqtt__string bin;
    struct mqtt__string s;
};

union __anon_0x00021f1a {
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
    union __anon_0x0001163e __in6_union;
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
    union __anon_0x00000c71 value;
    struct mqtt__string name;
    int32_t identifier;
    _Bool client_generated;
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


/* ── exported function declarations ──────────────────────── */

extern void *_fini(/* signature unavailable */);
extern void *_init(/* signature unavailable */);
extern void do_client_disconnect(struct mosquitto *, int, const mosquitto_property *);
extern char * fgets_extending(char * * buf, int * buflen, FILE * stream);
extern int handle__auth(struct mosquitto *);
extern int handle__connack(struct mosquitto *);
extern int handle__disconnect(struct mosquitto *);
extern int handle__packet(struct mosquitto * mosq);
extern int handle__pingreq(struct mosquitto *);
extern int handle__pingresp(struct mosquitto *);
extern int handle__pubackcomp(struct mosquitto *, const char *);
extern int handle__publish(struct mosquitto *);
extern int handle__pubrec(struct mosquitto *);
extern int handle__pubrel(struct mosquitto *);
extern int handle__suback(struct mosquitto *);
extern int handle__unsuback(struct mosquitto *);
extern int log__printf(struct mosquitto *, unsigned int, const char *, ...);
extern void message__cleanup(struct mosquitto_message_all * * message);
extern void message__cleanup_all(struct mosquitto *);
extern int message__delete(struct mosquitto * mosq, uint16_t mid, enum mosquitto_msg_direction dir, int qos);
extern int message__out_update(struct mosquitto * mosq, uint16_t mid, enum mosquitto_msg_state state, int qos);
extern int message__queue(struct mosquitto * mosq, struct mosquitto_message_all * message, enum mosquitto_msg_direction dir);
extern void message__reconnect_reset(struct mosquitto * mosq);
extern int message__release_to_inflight(struct mosquitto * mosq, enum mosquitto_msg_direction dir);
extern int message__remove(struct mosquitto * mosq, uint16_t mid, enum mosquitto_msg_direction dir, struct mosquitto_message_all * * message, int qos);
extern void message__retry_check(struct mosquitto * mosq);
extern char * misc__trimblanks(char * str);
extern void * mosquitto__calloc(size_t, size_t);
extern int mosquitto__check_keepalive(struct mosquitto * mosq);
extern void mosquitto__destroy(struct mosquitto * mosq);
extern FILE * mosquitto__fopen(const char * path, const char * mode, _Bool restrict_read);
extern void mosquitto__free(void *);
extern enum mosquitto_client_state mosquitto__get_state(struct mosquitto * mosq);
extern void * mosquitto__malloc(size_t);
extern uint16_t mosquitto__mid_generate(struct mosquitto * mosq);
extern void * mosquitto__realloc(void *, size_t);
extern int mosquitto__set_state(struct mosquitto * mosq, enum mosquitto_client_state state);
extern char * mosquitto__strdup(const char *);
extern void * mosquitto__thread_main(void * obj);
extern const char * mosquitto_connack_string(int connack_code);
extern int mosquitto_connect(struct mosquitto *, const char *, int, int);
extern int mosquitto_connect_async(struct mosquitto * mosq, const char * host, int port, int keepalive);
extern int mosquitto_connect_bind(struct mosquitto * mosq, const char * host, int port, int keepalive, const char * bind_address);
extern int mosquitto_connect_bind_async(struct mosquitto * mosq, const char * host, int port, int keepalive, const char * bind_address);
extern int mosquitto_connect_bind_v5(struct mosquitto * mosq, const char * host, int port, int keepalive, const char * bind_address, const mosquitto_property * properties);
extern void mosquitto_connect_callback_set(struct mosquitto *, void (*)(struct mosquitto *, void *, int));
extern int mosquitto_connect_srv(struct mosquitto * mosq, const char * host, int keepalive, const char * bind_address);
extern void mosquitto_connect_v5_callback_set(struct mosquitto * mosq, void (*on_connect)(struct mosquitto *, void *, int, int, const mosquitto_property *));
extern void mosquitto_connect_with_flags_callback_set(struct mosquitto * mosq, void (*on_connect)(struct mosquitto *, void *, int, int));
extern void mosquitto_destroy(struct mosquitto * mosq);
extern int mosquitto_disconnect(struct mosquitto *);
extern void mosquitto_disconnect_callback_set(struct mosquitto * mosq, void (*on_disconnect)(struct mosquitto *, void *, int));
extern int mosquitto_disconnect_v5(struct mosquitto * mosq, int reason_code, const mosquitto_property * properties);
extern void mosquitto_disconnect_v5_callback_set(struct mosquitto * mosq, void (*on_disconnect)(struct mosquitto *, void *, int, const mosquitto_property *));
extern int mosquitto_int_option(struct mosquitto * mosq, enum mosq_opt_t option, int value);
extern int mosquitto_lib_cleanup(void);
extern int mosquitto_lib_init(void);
extern int mosquitto_lib_version(int * major, int * minor, int * revision);
extern void mosquitto_log_callback_set(struct mosquitto * mosq, void (*on_log)(struct mosquitto *, void *, int, const char *));
extern int mosquitto_loop(struct mosquitto * mosq, int timeout, int max_packets);
extern int mosquitto_loop_forever(struct mosquitto *, int, int);
extern int mosquitto_loop_misc(struct mosquitto * mosq);
extern int mosquitto_loop_read(struct mosquitto * mosq, int max_packets);
extern int mosquitto_loop_start(struct mosquitto * mosq);
extern int mosquitto_loop_stop(struct mosquitto * mosq, _Bool force);
extern int mosquitto_loop_write(struct mosquitto * mosq, int max_packets);
extern int mosquitto_max_inflight_messages_set(struct mosquitto * mosq, unsigned int max_inflight_messages);
extern void mosquitto_message_callback_set(struct mosquitto *, void (*)(struct mosquitto *, void *, const struct mosquitto_message *));
extern int mosquitto_message_copy(struct mosquitto_message * dst, const struct mosquitto_message * src);
extern void mosquitto_message_free(struct mosquitto_message * * message);
extern void mosquitto_message_free_contents(struct mosquitto_message * message);
extern void mosquitto_message_retry_set(struct mosquitto * mosq, unsigned int message_retry);
extern void mosquitto_message_v5_callback_set(struct mosquitto * mosq, void (*on_message)(struct mosquitto *, void *, const struct mosquitto_message *, const mosquitto_property *));
extern struct mosquitto * mosquitto_new(const char * id, _Bool clean_start, void * userdata);
extern int mosquitto_opts_set(struct mosquitto * mosq, enum mosq_opt_t option, void * value);
extern int mosquitto_property_add_binary(mosquitto_property * * proplist, int identifier, const void * value, uint16_t len);
extern int mosquitto_property_add_byte(mosquitto_property * * proplist, int identifier, uint8_t value);
extern int mosquitto_property_add_int16(mosquitto_property * *, int, uint16_t);
extern int mosquitto_property_add_int32(mosquitto_property * * proplist, int identifier, uint32_t value);
extern int mosquitto_property_add_string(mosquitto_property * * proplist, int identifier, const char * value);
extern int mosquitto_property_add_string_pair(mosquitto_property * * proplist, int identifier, const char * name, const char * value);
extern int mosquitto_property_add_varint(mosquitto_property * * proplist, int identifier, uint32_t value);
extern int mosquitto_property_check_all(int command, const mosquitto_property * properties);
extern int mosquitto_property_check_command(int, int);
extern int mosquitto_property_copy_all(mosquitto_property * * dest, const mosquitto_property * src);
extern void mosquitto_property_free_all(mosquitto_property * *);
extern int mosquitto_property_identifier(const mosquitto_property * property);
extern const char * mosquitto_property_identifier_to_string(int identifier);
extern const mosquitto_property * mosquitto_property_next(const mosquitto_property * proplist);
extern const mosquitto_property * mosquitto_property_read_binary(const mosquitto_property * proplist, int identifier, void * * value, uint16_t * len, _Bool skip_first);
extern const mosquitto_property * mosquitto_property_read_byte(const mosquitto_property * proplist, int identifier, uint8_t * value, _Bool skip_first);
extern const mosquitto_property * mosquitto_property_read_int16(const mosquitto_property *, int, uint16_t *, _Bool);
extern const mosquitto_property * mosquitto_property_read_int32(const mosquitto_property * proplist, int identifier, uint32_t * value, _Bool skip_first);
extern const mosquitto_property * mosquitto_property_read_string(const mosquitto_property * proplist, int identifier, char * * value, _Bool skip_first);
extern const mosquitto_property * mosquitto_property_read_string_pair(const mosquitto_property * proplist, int identifier, char * * name, char * * value, _Bool skip_first);
extern const mosquitto_property * mosquitto_property_read_varint(const mosquitto_property * proplist, int identifier, uint32_t * value, _Bool skip_first);
extern int mosquitto_pub_topic_check(const char *);
extern int mosquitto_pub_topic_check2(const char * str, size_t len);
extern int mosquitto_publish(struct mosquitto * mosq, int * mid, const char * topic, int payloadlen, const void * payload, int qos, _Bool retain);
extern void mosquitto_publish_callback_set(struct mosquitto * mosq, void (*on_publish)(struct mosquitto *, void *, int));
extern int mosquitto_publish_v5(struct mosquitto * mosq, int * mid, const char * topic, int payloadlen, const void * payload, int qos, _Bool retain, const mosquitto_property * properties);
extern void mosquitto_publish_v5_callback_set(struct mosquitto * mosq, void (*on_publish)(struct mosquitto *, void *, int, int, const mosquitto_property *));
extern const char * mosquitto_reason_string(int reason_code);
extern int mosquitto_reconnect(struct mosquitto *);
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
extern int mosquitto_subscribe(struct mosquitto *, int *, const char *, int);
extern int mosquitto_subscribe_callback(int (*callback)(struct mosquitto *, void *, const struct mosquitto_message *), void * userdata, const char * topic, int qos, const char * host, int port, const char * client_id, int keepalive, _Bool clean_session, const char * username, const char * password, const struct libmosquitto_will * will, const struct libmosquitto_tls * tls);
extern void mosquitto_subscribe_callback_set(struct mosquitto * mosq, void (*on_subscribe)(struct mosquitto *, void *, int, int, const int *));
extern int mosquitto_subscribe_multiple(struct mosquitto * mosq, int * mid, int sub_count, const char * * sub, int qos, int options, const mosquitto_property * properties);
extern int mosquitto_subscribe_simple(struct mosquitto_message * * messages, int msg_count, _Bool want_retained, const char * topic, int qos, const char * host, int port, const char * client_id, int keepalive, _Bool clean_session, const char * username, const char * password, const struct libmosquitto_will * will, const struct libmosquitto_tls * tls);
extern int mosquitto_subscribe_v5(struct mosquitto * mosq, int * mid, const char * sub, int qos, int options, const mosquitto_property * properties);
extern void mosquitto_subscribe_v5_callback_set(struct mosquitto * mosq, void (*on_subscribe)(struct mosquitto *, void *, int, int, const int *, const mosquitto_property *));
extern int mosquitto_threaded_set(struct mosquitto * mosq, _Bool threaded);
extern time_t mosquitto_time(void);
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
extern int mosquitto_validate_utf8(const char *, int);
extern int mosquitto_void_option(struct mosquitto * mosq, enum mosq_opt_t option, void * value);
extern _Bool mosquitto_want_write(struct mosquitto * mosq);
extern int mosquitto_will_clear(struct mosquitto * mosq);
extern int mosquitto_will_set(struct mosquitto * mosq, const char * topic, int payloadlen, const void * payload, int qos, _Bool retain);
extern int mosquitto_will_set_v5(struct mosquitto * mosq, const char * topic, int payloadlen, const void * payload, int qos, _Bool retain, mosquitto_property * properties);
extern void net__cleanup(void);
extern int net__init(void);
extern ssize_t net__read(struct mosquitto *, void *, size_t);
extern int net__socket_close(struct mosquitto *);
extern int net__socket_connect(struct mosquitto * mosq, const char * host, uint16_t port, const char * bind_address, _Bool blocking);
extern int net__socket_connect_step3(struct mosquitto *, const char *);
extern int net__socket_nonblock(mosq_sock_t * sock);
extern int net__socketpair(mosq_sock_t * pairR, mosq_sock_t * pairW);
extern int net__try_connect(const char * host, uint16_t port, mosq_sock_t * sock, const char * bind_address, _Bool blocking);
extern ssize_t net__write(struct mosquitto *, const void *, size_t);
extern int packet__alloc(struct mosquitto__packet *);
extern int packet__check_oversize(struct mosquitto *, uint32_t);
extern void packet__cleanup(struct mosquitto__packet *);
extern void packet__cleanup_all(struct mosquitto * mosq);
extern void packet__cleanup_all_no_locks(struct mosquitto * mosq);
extern int packet__queue(struct mosquitto *, struct mosquitto__packet *);
extern int packet__read(struct mosquitto *);
extern int packet__read_binary(struct mosquitto__packet *, uint8_t * *, uint16_t *);
extern int packet__read_byte(struct mosquitto__packet *, uint8_t *);
extern int packet__read_bytes(struct mosquitto__packet * packet, void * bytes, uint32_t count);
extern int packet__read_string(struct mosquitto__packet *, char * *, uint16_t *);
extern int packet__read_uint16(struct mosquitto__packet *, uint16_t *);
extern int packet__read_uint32(struct mosquitto__packet *, uint32_t *);
extern int packet__read_varint(struct mosquitto__packet *, uint32_t *, uint8_t *);
extern unsigned int packet__varint_bytes(uint32_t);
extern int packet__write(struct mosquitto * mosq);
extern void packet__write_byte(struct mosquitto__packet *, uint8_t);
extern void packet__write_bytes(struct mosquitto__packet *, const void *, uint32_t);
extern void packet__write_string(struct mosquitto__packet *, const char *, uint16_t);
extern void packet__write_uint16(struct mosquitto__packet *, uint16_t);
extern void packet__write_uint32(struct mosquitto__packet *, uint32_t);
extern int packet__write_varint(struct mosquitto__packet *, uint32_t);
extern void property__free(mosquitto_property * * property);
extern unsigned int property__get_length(const mosquitto_property * property);
extern unsigned int property__get_length_all(const mosquitto_property *);
extern const mosquitto_property * property__get_property(const mosquitto_property * proplist, int identifier, _Bool skip_first);
extern unsigned int property__get_remaining_length(const mosquitto_property *);
extern int property__read(struct mosquitto__packet * packet, uint32_t * len, mosquitto_property * property);
extern int property__read_all(int command, struct mosquitto__packet * packet, mosquitto_property * * properties);
extern int property__write(struct mosquitto__packet * packet, const mosquitto_property * property);
extern int property__write_all(struct mosquitto__packet *, const mosquitto_property *, _Bool);
extern int send__command_with_mid(struct mosquitto * mosq, uint8_t command, uint16_t mid, _Bool dup, uint8_t reason_code, const mosquitto_property * properties);
extern int send__connect(struct mosquitto *, uint16_t, _Bool, const mosquitto_property *);
extern int send__disconnect(struct mosquitto * mosq, uint8_t reason_code, const mosquitto_property * properties);
extern int send__pingreq(struct mosquitto *);
extern int send__pingresp(struct mosquitto * mosq);
extern int send__puback(struct mosquitto * mosq, uint16_t mid, uint8_t reason_code, const mosquitto_property * properties);
extern int send__pubcomp(struct mosquitto * mosq, uint16_t mid, const mosquitto_property * properties);
extern int send__publish(struct mosquitto * mosq, uint16_t mid, const char * topic, uint32_t payloadlen, const void * payload, uint8_t qos, _Bool retain, _Bool dup, const mosquitto_property * cmsg_props, const mosquitto_property * store_props, uint32_t expiry_interval);
extern int send__pubrec(struct mosquitto * mosq, uint16_t mid, uint8_t reason_code, const mosquitto_property * properties);
extern int send__pubrel(struct mosquitto * mosq, uint16_t mid, const mosquitto_property * properties);
extern int send__real_publish(struct mosquitto * mosq, uint16_t mid, const char * topic, uint32_t payloadlen, const void * payload, uint8_t qos, _Bool retain, _Bool dup, const mosquitto_property * cmsg_props, const mosquitto_property * store_props, uint32_t expiry_interval);
extern int send__simple_command(struct mosquitto * mosq, uint8_t command);
extern int send__subscribe(struct mosquitto * mosq, int * mid, int topic_count, const char * * topic, int topic_qos, const mosquitto_property * properties);
extern int send__unsubscribe(struct mosquitto * mosq, int * mid, int topic_count, const char * * topic, const mosquitto_property * properties);
extern int socks5__read(struct mosquitto * mosq);
extern int socks5__send(struct mosquitto * mosq);
extern void util__decrement_receive_quota(struct mosquitto * mosq);
extern void util__decrement_send_quota(struct mosquitto * mosq);
extern void util__increment_receive_quota(struct mosquitto * mosq);
extern void util__increment_send_quota(struct mosquitto * mosq);
extern int util__random_bytes(void * bytes, int count);
extern int will__clear(struct mosquitto * mosq);
extern int will__set(struct mosquitto * mosq, const char * topic, int payloadlen, const void * payload, int qos, _Bool retain, mosquitto_property * properties);

#ifdef __cplusplus
}
#endif

#endif /* LIBMOSQUITTO_SO_2_0_10_H */
