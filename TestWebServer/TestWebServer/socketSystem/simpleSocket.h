#pragma once

#include <winsock.h>


namespace MOEEN
{
    class simple_socket
    {
    protected:
        ~simple_socket() = default;

    protected:
       
        sockaddr_in address_;
        int sock_;
        int connection_;
    public:
        simple_socket(int domain, int service, int protocol, int port, u_long inter_face);
        virtual int connect_to_network(int  socket, struct sockaddr_in address)=0;
        void test_connection(int);
        sockaddr_in get_address() const;
        int get_sock() const;
        int get_connection() const;
    };
}
