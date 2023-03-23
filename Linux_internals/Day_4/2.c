#include<stdio.h>
#include<fcntl.h>

int main(){
	int fd;
	fd = open("demo.txt",O_RDONLY,777);
	printf("Fd is %d\n",fd);
	while(1);
}
