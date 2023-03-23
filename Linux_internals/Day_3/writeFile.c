#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
	int fd;
	char buf[3000];
	int res;
	fd = open("readFile.c", O_CREAT|O_RDWR,664);
	printf("%d\n",fd);
	if(fd<0){
		printf("File is not opened or craeted\n");
		return 0;	
	}
	read(fd,buf,300);
	printf("Data from buffer = %s\n",buf);
	int fd1;
	fd1 = open("file.txt",O_CREAT|O_RDWR,777);
	write(fd1,buf,3000);
	close(fd);
	return 0;
}
