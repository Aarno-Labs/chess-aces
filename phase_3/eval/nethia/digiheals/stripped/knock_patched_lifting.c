/* level=0 */
enum AuthenticationType {
  AUTHTYPE_INVALID = 4294967295,
  AUTHTYPE_PLAINTEXT = 0,
  AUTHTYPE_TLS_CLIENTCERT = 1,
  AUTHTYPE_TLS_CLIENTCERTFP = 2,
  AUTHTYPE_SPKIFP = 3,
  AUTHTYPE_UNIXCRYPT = 4,
  AUTHTYPE_BCRYPT = 5,
  AUTHTYPE_ARGON2 = 6
};
enum SocketType {
  SOCKET_TYPE_IPV4 = 0,
  SOCKET_TYPE_IPV6 = 1,
  SOCKET_TYPE_UNIX = 2
};
enum ClientStatus {
  CLIENT_STATUS_CONTROL = 4294967288,
  CLIENT_STATUS_LOG = 4294967289,
  CLIENT_STATUS_TLS_STARTTLS_HANDSHAKE = 4294967288,
  CLIENT_STATUS_CONNECTING = 4294967290,
  CLIENT_STATUS_TLS_CONNECT_HANDSHAKE = 4294967291,
  CLIENT_STATUS_TLS_ACCEPT_HANDSHAKE = 4294967292,
  CLIENT_STATUS_HANDSHAKE = 4294967293,
  CLIENT_STATUS_ME = 4294967294,
  CLIENT_STATUS_UNKNOWN = 4294967295,
  CLIENT_STATUS_SERVER = 0,
  CLIENT_STATUS_USER = 1
};
/* type decls */
struct ConfigFlag {
  unsigned int temporary;
  unsigned int permanent;
};
struct ConfigItem_class {
  struct ConfigItem_class *prev;
  struct ConfigItem_class *next;
  struct ConfigFlag flag;
  char *name;
  int pingfreq;
  int connfreq;
  int maxclients;
  int sendq;
  int recvq;
  int clients;
  int xrefcount;
  unsigned int options;
};
struct TLSOptions {
  char *certificate_file;
  char *key_file;
  char *trusted_ca_file;
  unsigned int protocols;
  char *ciphers;
  char *ciphersuites;
  char *ecdh_curves;
  char *outdated_protocols;
  char *outdated_ciphers;
  int options;
  int renegotiate_bytes;
  int renegotiate_timeout;
  int sts_port;
  int sts_duration;
  int sts_preload;
};
struct ConfigItem_listen {
  struct ConfigItem_listen *prev;
  struct ConfigItem_listen *next;
  struct ConfigFlag flag;
  enum SocketType socket_type;
  char *file;
  char *ip;
  int port;
  int options;
  int clients;
  int fd;
  void *ssl_ctx;
  struct TLSOptions *tls_options;
  int websocket_options;
  char *websocket_forward;
};
struct FloodCounter {
  int count;
  int t;
};
struct TrafficStats {
  long long messages_sent;
  long long messages_received;
  long long bytes_sent;
  long long bytes_received;
};
struct list_head {
  struct list_head *next;
  struct list_head *prev;
};
struct dbuf {
  unsigned int length;
  struct list_head dbuf_list;
};
struct hostent {
  char *h_name;
  char **h_aliases;
  int h_addrtype;
  int h_length;
  char **h_addr_list;
};
union ModData {
  void *ptr;
  char *str;
  int l;
  int i;
};
struct LocalClient {
  int fd;
  enum SocketType socket_type;
  void *ssl;
  long long fake_lag;
  int fake_lag_msec;
  long long creationtime;
  long long last_msg_received;
  struct dbuf sendQ;
  struct dbuf recvQ;
  struct ConfigItem_class *class_;
  int proto;
  int caps;
  long long nexttarget;
  unsigned char targets[20];
  struct ConfigItem_listen *listener;
  int serial;
  long long next_nick_allowed;
  long long idle_since;
  struct TrafficStats traffic;
  union ModData moddata[12];
  char *error_str;
  char sasl_agent[31];
  unsigned char sasl_out;
  unsigned char sasl_complete;
  long long sasl_sent_time;
  char *sni_servername;
  int cap_protocol;
  unsigned int nospoof;
  char *passwd;
  int authfd;
  int identbufcnt;
  struct hostent *hostp;
  char sockhost[64];
  unsigned short port;
  struct FloodCounter flood[10];
};
struct AuthConfig {
  enum AuthenticationType type;
  char *data;
};
struct ConfigItem_mask {
  struct ConfigItem_mask *prev;
  struct ConfigItem_mask *next;
  struct ConfigFlag flag;
  char *mask;
};
struct __anonstruct_incoming_760536334 {
  struct ConfigItem_mask *mask;
};
struct __anonstruct_outgoing_885597328 {
  char *bind_ip;
  char *hostname;
  int port;
  int options;
};
struct ConfigItem_link {
  struct ConfigItem_link *prev;
  struct ConfigItem_link *next;
  struct ConfigFlag flag;
  char *servername;
  struct __anonstruct_incoming_760536334 incoming;
  struct __anonstruct_outgoing_885597328 outgoing;
  struct AuthConfig *auth;
  char *hub;
  char *leaf;
  int leaf_depth;
  struct ConfigItem_class *class_;
  int options;
  int verify_certificate;
  int refcount;
  long long hold;
  char *connect_ip;
  void *ssl_ctx;
  struct TLSOptions *tls_options;
};
struct __anonstruct_features_201202926 {
  char *usermodes;
  char *chanmodes[4];
  int protocol;
  char *software;
  char *nickchars;
};
struct __anonstruct_flags_1034260629 {
  unsigned int synced;
  unsigned int server_sent;
};
struct Server {
  char by[31];
  struct ConfigItem_link *conf;
  int users;
  long long boottime;
  struct __anonstruct_flags_1034260629 flags;
  struct __anonstruct_features_201202926 features;
};
struct Ban {
  struct Ban *next;
  char *banstr;
  char *who;
  long long when;
};
struct Mode {
  unsigned int mode;
  void *mode_params[17];
};
struct SWhois {
  struct SWhois *prev;
  struct SWhois *next;
  int priority;
  char *line;
  char *setby;
};
/* scc of ['struct Whowas', 'struct Client', 'struct User', 'struct Channel',
 * 'struct Member', 'struct Membership', 'struct Link', 'union
 * __anonunion_value_917384593', 'struct Watch'] */
union __anonunion_value_917384593 {
  struct Watch *wptr;
  struct Channel *channel;
  struct Client *client;
};
struct Whowas {
  int hashv;
  char *name;
  char *username;
  char *hostname;
  char *virthost;
  char *servername;
  char *realname;
  int umodes;
  long long logoff;
  struct Client *online;
  struct Whowas *next;
  struct Whowas *prev;
  struct Whowas *cnext;
  struct Whowas *cprev;
};
struct Client {
  struct list_head client_node;
  struct list_head lclient_node;
  struct list_head special_node;
  struct LocalClient *local;
  struct User *user;
  struct Server *server;
  enum ClientStatus status;
  struct list_head client_hash;
  char last_knock[13];
  char *reason;
  char name[64];
  long long lastnick;
  int flags;
  int umodes;
  struct Client *direction;
  unsigned char hopcount;
  char ident[11];
  char info[51];
  char id[13];
  struct list_head id_hash;
  struct Client *uplink;
  char *ip;
  union ModData moddata[24];
};
struct User {
  struct Membership *channel;
  struct Link *dccallow;
  char account[31];
  int joined;
  char username[11];
  char realhost[64];
  char cloakedhost[64];
  char *virthost;
  char *server;
  struct SWhois *swhois;
  struct Whowas *whowas;
  char *snomask;
  char *operlogin;
  char *away;
  long long away_since;
};
struct Channel {
  struct Channel *nextch;
  struct Channel *prevch;
  struct Channel *hnextch;
  struct Mode mode;
  long long creationtime;
  char *topic;
  char *topic_nick;
  long long topic_time;
  int users;
  struct Member *members;
  struct Ban *banlist;
  struct Ban *exlist;
  struct Ban *invexlist;
  char *mode_lock;
  union ModData moddata[8];
  char name[33];
};
struct Member {
  struct Member *next;
  struct Client *client;
  char member_modes[8];
  union ModData moddata[4];
};
struct Membership {
  struct Membership *next;
  struct Channel *channel;
  char member_modes[8];
  union ModData moddata[4];
};
struct Link {
  struct Link *next;
  int flags;
  union __anonunion_value_917384593 value;
};
struct Watch {
  struct Watch *hnext;
  long long lasttime;
  struct Link *watch;
  char nick[1];
};
/* global variables */
/* function decls */
struct Membership *find_membership_link(struct Membership *, struct Channel *);
void sendnumericfmt(void *, int, char *, ...);
/* func defns */
int knock_member_exists(struct Client *client, struct Channel *channel,
                        char **reason) { // va=0xaf4
  struct Membership *rtn_find_membership_link__0;
  {
    if ((client != 0)) {
      if ((client->user != 0)) {
        rtn_find_membership_link__0 =
            find_membership_link(client->user->channel, channel);
        if ((rtn_find_membership_link__0 != 0)) {
          sendnumericfmt(client, 480, ":Cannot knock on %s (%s)");
          return 1;
        }
      }
    }
    return 0;
  }
}
