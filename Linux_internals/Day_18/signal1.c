#include<stdio.h>
#include<signal.h>
#include<sys/types.h>

void main(){
	pid_t pid;
	int sig_no;
	printf("Enter the pid of the process for which of the signal need to be sent : ");
	scanf("%d",&pid);
	printf("Enter the signal that need to be sent : ");
	scanf("%d",&sig_no);
	kill(pid,sig_no);
	perror("Sig_res:");

}
