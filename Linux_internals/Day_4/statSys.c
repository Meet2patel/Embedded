#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
int main(){
	struct stat st;
	int fd=open("demo.txt",O_RDONLY);
	fstat(fd,&st);
	printf("File size		= %lu\n",(st.st_size));
	printf("File inode		= %lu\n",st.st_ino);
	printf("size disc of blocks	= %lu\n",st.st_blksize);
	printf("User Name		= %u\n",(st.st_mode));
	printf("File UID		= %u\n",st.st_uid);
	printf("File GID		= %u\n",st.st_gid);
	printf("blocks			= %lu\n",st.st_blocks);
	printf("\n\n");
	close(fd);
	return 0;

}
