#include "simpleSocket.h"


MOEEN::simple_socket::simple_socket(int domain, int service, int protocol, int port, u_long inter_face)
{
    address_.sin_family = domain;
    address_.sin_port = htons(port);
    address_.sin_addr.s_addr = inter_face;
    sock_ = socket(domain, service, protocol);
    test_connection(sock_);
    connection_ = connect_to_network(sock_, address_);
    test_connection(connection_);
}


void MOEEN::simple_socket::test_connection(int item_to_test)
{
    if (item_to_test < 0)
    {
        perror("Error opening socket");
        exit(EXIT_FAILURE);
    }
}

sockaddr_in MOEEN::simple_socket::get_address() const
{
    return address_;
}

int MOEEN::simple_socket::get_sock() const
{
 return sock_;   
}

int MOEEN::simple_socket::get_connection() const
{
    return connection_;
}
