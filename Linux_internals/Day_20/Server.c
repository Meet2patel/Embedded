#include<unistd.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<string.h>
#include<netinet/in.h>
#include<stdio.h>
#include<stdlib.h>
#define PORT 8000
#define MAXSZ 100
int sockfd,i=0,j=0;
int newsockfd;
struct sockaddr_in servaddr;
struct sockaddr_in clientaddr;
int n;
char msg[MAXSZ];
int clientAddressLength;
pthread_t tid[5];

void *rec(sockfd){
	while(1){
		n = recv(sockfd,msg,MAXSZ,0);
		if(n==0)
		{
			close(sockfd);
			break;
		}
		msg[n]=0;
		send(sockfd,msg,n,0);
		printf("Receive and set :%s\n",msg);
	}
}

int main()
{
	sockfd = socket(AF_INET,SOCK_STREAM,0);
	memset(&servaddr,0,sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servaddr.sin_port = htons(PORT);

	bind(sockfd,(struct sockaddr *)&servaddr,sizeof(servaddr));
	
	listen(sockfd,5);
	
	while(1)
	{
		clientAddressLength = sizeof(clientaddr);
		if(newsockfd = accept(sockfd,(struct sockaddr *)&clientaddr,&clientAddressLength )){
		pthread_create(&tid[i],NULL,rec,newsockfd);
		i++;
		}
	}
	return 0;
}
