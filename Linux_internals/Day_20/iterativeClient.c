#include<sys/types.h>
#include<string.h>
#include<unistd.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<stdio.h>
#include<stdlib.h>
#define PORT 8000
#define MAXSZ 100
main()
{
char *SERVER_IP="127.0.0.1";
int sockfd;
struct sockaddr_in serverAddress;
int n;
char msg1[MAXSZ];
char msg2[MAXSZ];
sockfd=socket(AF_INET,SOCK_STREAM,0);
memset(&serverAddress,0,sizeof(serverAddress));
serverAddress.sin_family=AF_INET;
serverAddress.sin_addr.s_addr=inet_addr(SERVER_IP);//TCP Port-----HTTP
serverAddress.sin_port=htons(PORT);
//client connect to server on port 
//inet_pton(AF_INET,&serv_ip,&servaddr.sin_addr);
connect(sockfd,(struct sockaddr *)&serverAddress,sizeof(serverAddress));
//send to server and receive from server
/*printf("client established connection with server */
	while(1)
{
printf("Enter the data that you want to send to the server\n");
fgets(msg1,MAXSZ,stdin);
if(msg1[0]=='#')
break;
n=strlen(msg1)+1;
send(sockfd,msg1,n,0);
n=recv(sockfd,msg2,MAXSZ,0);
printf("Receive message from server::%s\n",msg2);
}
return 0;
}
