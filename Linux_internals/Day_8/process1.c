#include<stdio.h>
#include<stdlib.h>

int main(){
	int pid, stat;
	pid = fork();

	if (pid == 0){
		printf("\nCHILd Process\n");
		exit(1);
	}
	pid = wait(&stat);
	printf("%d\n",WEXITSTATUS(stat));
}
