#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main(int argc, char **argv)
{
    int sockfd;
    struct sockaddr_in servaddr;
    int dst;
    sockfd = socket(PF_INET, SOCK_DGRAM, 0);
    
    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    //servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    //inet_pton(AF_INET,"192.168.0.2",(void *)&dst);
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    //servaddr.sin_addr.s_addr = htonl(dst);
    servaddr.sin_port = htons(50001);
    
    bind(sockfd, (struct sockaddr *)&servaddr, sizeof(servaddr));
    
    int n;
    char recvline[1024];
    
    recvfrom(sockfd, recvline, 1024, 0, NULL, NULL);
    
    printf("%s\n", recvline);
    
    close(sockfd);
}
