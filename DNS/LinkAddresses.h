#ifndef _S_LINKADDRESSES_H#define _S_LINKADDRESSES_H#include <sys/socket.h>#include <net/if.h>#include <net/if_dl.h>typedef struct {    struct sockaddr_dl * *	list;    int				count;} LinkAddresses_t;LinkAddresses_t * LinkAddresses_create();voidLinkAddresses_free(LinkAddresses_t * * list_p);struct sockaddr_dl * LinkAddresses_lookup(LinkAddresses_t * list, char * ifname);char*sockaddr_dl_create_macaddr_string( struct sockaddr_dl * dl_p, const char* interfaceToMatch );extern voidsockaddr_dl_print(struct sockaddr_dl * dl_p);#endif _S_LINKADDRESSES_H