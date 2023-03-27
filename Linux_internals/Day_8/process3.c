#include<stdio.h>
int main(){
	int ret;
	ret = execl("/usr/bin/vim","info1.txt",0);
	if(ret==-1){
		printf("excel return error %d\n",ret);
	}
}
