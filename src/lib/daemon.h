/*----------------------------------------------------------------------------------------------------------
 *  Copyright (c) Peter Bjorklund. All rights reserved. https://github.com/game-relay/daemon
 *  Licensed under the MIT License. See LICENSE in the project root for license information.
 *--------------------------------------------------------------------------------------------------------*/
#ifndef GAME_RELAY_DAEMON_H
#define GAME_RELAY_DAEMON_H

#include <relay-server-lib/server.h>
#include <udp-server/udp_server.h>

typedef struct RelayDaemon {
    UdpServerSocket socket;
} RelayDaemon;

int relayDaemonInit(RelayDaemon* self);

#endif
