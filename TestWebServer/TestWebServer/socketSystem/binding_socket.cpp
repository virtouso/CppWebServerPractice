#include "binding_socket.h"


int MOEEN::binding_socket::connect(int sock,  sockaddr_in addr)
{
    return bind(sock,(struct sockaddr *)&addr,sizeof(addr));
}
