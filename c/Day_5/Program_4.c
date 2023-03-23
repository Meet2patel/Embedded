#include <stdio.h>
void main(){

int n,i,total=0,temp;

printf("Enter the number : ");
scanf("%d",&n);
temp=n;

while(n!=0)
{

i = n%10;
total = total + i*i*i;

n=n/10;

}

if(total==temp)
printf("Number is armstrong Number\n");

else 
printf("Number is Not armstrong Number\n");

}
