#include<unistd.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<string.h>
#include<netinet/in.h>
#include<stdio.h>
#include<stdlib.h>
#define PORT 8000
#define MAXSZ 100
int main()
{
	int sockfd;
	int newsockfd;
	struct sockaddr_in servaddr;
	struct sockaddr_in clientaddr;
	int n;
	char msg[MAXSZ];
	int clientAddressLength;
	sockfd = socket(AF_INET,SOCK_STREAM,0);
	memset(&servaddr,0,sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servaddr.sin_port = htons(PORT);

	bind(sockfd,(struct sockaddr *)&servaddr,sizeof(servaddr));
	
	listen(sockfd,5);
	while(1)
	{
		printf("\n ******Server waiting for new client connection:*****\n");
		clientAddressLength = sizeof(clientaddr);
		newsockfd = accept(sockfd,(struct sockaddr *)&clientaddr,&clientAddressLength);
		while(1)
		{
			n = recv(newsockfd,msg,MAXSZ,0);
			if(n==0)
			{
				close(newsockfd);
				break;
			}
			msg[n]=0;
			send(newsockfd,msg,n,0);
			printf("Receive and set :%s\n",msg);
		}
	}
	return 0;
}
