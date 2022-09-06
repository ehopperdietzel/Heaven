#ifndef HEAVENCOMMON_H
#define HEAVENCOMMON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>

#define HV_DEFAULT_SOCKET "/tmp/heaven-0"

struct hv_client;
struct hv_menu_bar;

// Array
struct hv_node
{
    struct hv_node *prev;
    struct hv_node *next;
    void *data;
};

struct hv_array
{
    struct hv_node *begin;
    struct hv_node *end;
};

struct hv_array *hv_array_create();
void hv_array_destroy(struct hv_array *array);
void hv_array_pop_back(struct hv_array *array);
int hv_array_empty(struct hv_array *array);


// Requests
#define HV_CLIENT_SET_APP_NAME_ID 1

#endif // HEAVENCOMMON_H
