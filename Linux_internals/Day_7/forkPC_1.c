#include<stdio.h>
#include<unistd.h>
int main(void)
{
	int pid_1;
	printf("Current process pid = %d\n",getpid());
	pid_1 = fork();
	printf("%d\n\n",pid_1);
	if(pid_1==0)
	{
		printf("New child process = %d\n",getpid());
		printf("New child parent process ppid =%d\n",getppid());

	}
	else
	{
		sleep(3);
		printf("Parent process = %d\n",getpid());
		
		printf("Parents parent process ppid =%d\n",getppid());
	}
	printf("%d\n\n",pid_1);
	//while(1);
	exit(0);
}
