#include<stdio.h>
#include<stdlib.h>
void main(){
int *p;
p=(int *)malloc(sizeof(int));
*p=20;
printf("%d\n",*p);
free(p);

}
