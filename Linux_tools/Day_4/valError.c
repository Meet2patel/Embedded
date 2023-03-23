#include<stdio.h>
#include<stdlib.h>

void main(){
	int *ptr=malloc(sizeof(int));
	*ptr=15;
	printf("pointer value before free : %d\n",(*ptr));
	free(ptr);
	*ptr=10;
	printf("Pointer value after free : %d\n",(*ptr));
}
