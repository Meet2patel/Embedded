#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main(){
int fd1,fd2,fd3;


fd1=creat("file.txt",777);
fd2=creat("file1.txt",777);
fd3=creat("file2.txt",777);

printf("fd1 create by kernal file.txt= %d \n",fd1);
printf("fd2 create by kernal file1.txt= %d \n",fd2);
printf("fd3 create by kernal file2.txt= %d \n",fd3);

close(fd1);
close(fd2);
close(fd3);

}
