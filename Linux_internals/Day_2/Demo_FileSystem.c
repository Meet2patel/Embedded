#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main(){
int fd1,fd2,fd3;


fd1=open("file2.txt",O_RDONLY,777);
fd2=open("file.txt",O_RDONLY,777);
fd3=open("file.txt",O_RDONLY,777);
close(fd2);

printf("fd returned by kernal file.txt= %d ,%d ,%d ,\n",fd2,fd3,fd1);


}
