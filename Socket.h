#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>

class Socket {
public: 
    Socket(const char *host, int clientPort);
    ~Socket();

private:
    int sock;
    unsigned long inaddr;
    sockaddr_in ad;
    hostent *hp;
};