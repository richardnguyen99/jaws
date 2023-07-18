/**
 * @file reactor.h
 * @author Richard Nguyen (richard@richardhnguyen.com)
 * @brief Reactor class header file.
 * @version 0.1
 * @date 2023-07-17
 *
 * @copyright Copyright (c) 2023
 */

#ifndef _REACTOR_H_
#define _REACTOR_H_ 1

#include "defs.h"

struct __port
{
    int16_t number;
    char str[6];
};

typedef struct __port port_t;

struct reactor
{
    port_t port;
    int server_fd;

    char ip[INET_ADDRSTRLEN];
};

struct reactor *
reactor_init(int argc, char *argv[]);

int
reactor_load(struct reactor *server);

void
reactor_destroy(struct reactor *server);

#endif // _REACTOR_H_
