#include<stdlib.h>
#include<signal.h>
#include<unistd.h>
#include<stdio.h>

void sighand(int sig)
{
	if(sig==14){
	printf("I have to wake up my boss\n");
	abort();
	}
	if(sig==6){
	printf("Process Aborted\n");
	}
}

int main()
{
	signal(SIGALRM,sighand);
	signal(SIGABRT,sighand);
	alarm(5);
	printf("PID of the processss = %d\n",getpid());
	printf("\nHELLO\n");
	while(1){
		
	}
}
