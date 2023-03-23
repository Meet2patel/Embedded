#include<stdio.h>
#include<fcntl.h>

int main(){
	int inputFd, outputFd,openFlags;
	mode_t filePerms;
	ssize_t numRead;
	char buf[BUF_SIZE];

	inputFd = open("file.txt",O_RDONLY);
	if(inputFd==-1){
		printf("No file Found.\n");
		return 0;
	}
	outputFd = open("file1.txt",O_RDWR,777);
	if(outputFd == -1){
		printf("Write Error");
		return 0;
	
	}
	while((numRead=read(inputFd,buf,BUF_SIZE))>0)
	{
		if(write(outputFd,buf,numRead)!=numRead)
		{

}
