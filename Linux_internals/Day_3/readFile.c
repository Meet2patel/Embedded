#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
	int fd;
	char buf[300];
	int res;
	fd = open("file.txt", O_CREAT|O_RDWR,664);
	printf("%d\n",fd);
	if(fd<0)
		printf("File is not opened or craeted\n");
	read(fd,buf,300);
	printf("Data from buffer = %s\n",buf);
	close(fd);
	return 0;
}
