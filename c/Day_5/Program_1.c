#include <stdio.h>
void main(){

int n,i,total=0;

printf("Enter the number : ");
scanf("%d",&n);

while(n!=0)
{

i = n%10;
total = total + i;
n=n/10;

}

printf("sum is %d\n",total);

}
