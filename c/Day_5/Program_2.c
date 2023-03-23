#include <stdio.h>
void main(){

int n,i,rev=0;

printf("Enter the number : ");
scanf("%d",&n);

while(n!=0)
{

i = n%10;
rev = rev*10 + i;

n=n/10;

}

printf("reverse is %d\n",rev);

}
