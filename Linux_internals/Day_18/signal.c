#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>

void sh_for_one(int signum)
{
	printf("This is handler for signal no one \n");
}
void sh_for_nine(int signum)
{
	printf("This is handler for signal no %d \n",signum);
}
void main()
{
	printf("PID of the processss = %d\n",getpid());
	signal(1,sh_for_one);
	signal(SIGKILL,sh_for_nine);
	perror("Siginstall");
	getchar();
	getchar();
	while(1)
	{
		sleep(1);
		printf("I am happy now , I will do same work forever\n");
	}
}
