#include<stdio.h>
#include"file.h"  // we are forceing cpreprocessor tool to check whether this file is in current file location.
int main(){
	int a=10,b=5;
	printf("Addition is : %d\n",add(a,b));
	printf("Subtraction is : %d\n",sub(a,b));
	return 0;
}
