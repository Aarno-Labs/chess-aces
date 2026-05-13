int knock_member_exists(struct Client *client, struct Channel *channel,
                        char **reason) { // va=0xaf4
  struct Membership *rtn_find_membership_link__0;
  unsigned char *rtn_malloc__0;
  unsigned int n;
  unsigned int rtn_strlen__0;
  unsigned int rtn_strlen__1;
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
    rtn_strlen__0 = strlen((*(reason)));
    rtn_malloc__0 = malloc((rtn_strlen__0 + 1));
    client->reason = rtn_malloc__0;
    rtn_strlen__1 = strlen(channel->name);
    memcpy(client->last_knock, channel->name, rtn_strlen__1);
    n = strlen((*(reason)));
    memcpy(rtn_malloc__0, (*(reason)), n);
    return 0;
  }
}
