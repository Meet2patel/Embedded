#include<stdio.h>
#include<fcntl.h>
int fd;
int main(){
	fd = open("demo1.txt",O_RDONLY,777);
	printf("Fd is %d\n",fd);
	while(1);
}
