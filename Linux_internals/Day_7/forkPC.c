#include<stdio.h>
#include<unistd.h>

int main(){
	int pid_1;
	printf("current process pid = %d\n",getpid());

	pid_1 = fork();

	if(pid_1==0){
		printf("new child process pid = %d\n",getpid());
		printf("new child parent process ppid = %d\n",getppid());
	}
	else{
		printf("parent process pid = %d\n",getpid());
		printf("parent parent process ppid = %d\n",getppid());
	}
