#include<stdio.h>
#include<stdlib.h>

int main(){
	char *args[3];
	printf("I am going to exexc an 'ls' program in current process\n");

	/*args[0]="ls";
	args[1]="-l";
	args[2]=0;*/
	execlp("ls","ls","-l",0);
	printf("execute the program ");
}
