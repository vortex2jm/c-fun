#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#define PORT_LIMIT 0xffff    

int main(int argc, char const *argv[])
{
    char ip[20] = "127.0.0.1";
    if(argc < 2){
        printf("If you don't insert a target IP address, 127.0.0.1 will be used by default!\n");
    }else{
        strcpy(ip, argv[1]);
    }

    int my_socket;
    struct sockaddr_in target_addr;
    target_addr.sin_family = AF_INET;
    target_addr.sin_addr.s_addr = inet_addr(ip);

    printf("Scanning...\n\n");
    for(int port=0; port<PORT_LIMIT; port++){
        my_socket = socket(AF_INET, SOCK_STREAM, 0);
        target_addr.sin_port = htons(port);
        if(!connect(my_socket, (struct sockaddr*) &target_addr, sizeof(target_addr))){
            printf("Port: %d - status [OPEN]\n", port);
        }
        close(my_socket);
    }
    printf("\nPORT SCANNING IS FINISHED!\n");
    return 0;
}
