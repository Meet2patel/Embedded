#include<stdio.h>
#include<fcntl.h>
#define BUF_SIZE 1024

int main()
{
    int inputFd,output,openFlags;
    mode_t filePerms;
    ssize_t numRead;
    char buf[BUF_SIZE];

    inputFd = open("file.txt",O_RDONLY);
    if(inputFd == -1)
    {
        printf("open Error\n");
        return 0;

    }
    output = open("file1.txt",O_CREAT|O_RDWR,777);
    if(output == -1)
    {
        printf("Opening file\n");
        return 0;

    }
    while((numRead = read(inputFd,buf,BUF_SIZE))>0)
    {
        if(write(output,buf,numRead)!= numRead)
        {
            printf("Write Error\n");
            return 0;
        }
        printf("%d",numRead);
    }
    
    if (numRead == -1)
    {
        return 0;
    }
    if (close(inputFd)== -1)
    {
        printf("Close input\n");
        return 0;
        /* code */
    }
    if (close(output)== -1)
    {
        printf("Close output\n");
        return 0;
        /* code */
    }
    
    
}
