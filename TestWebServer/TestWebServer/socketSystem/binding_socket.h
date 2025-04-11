#pragma once
#include "simpleSocket.h"


namespace MOEEN
{
    class binding_socket: simple_socket
    {
    public:
        virtual ~binding_socket() = default;
        binding_socket(int domain, int service, int protocol,int port, u_long inter_face);
        int connect(int sock, struct sockaddr_in addr);
    };
}
