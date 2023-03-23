#include <stdio.h>
void main(){

int n,d,sum=0,i;

printf("Enter four digit number : ");
scanf("%d",&n);

for(i=1;i<=4;i++)
{
d=n%10;
if(i==1 || i==4){
sum = sum + d;
}
n=n/10;
}

printf("Sum of First and Last digit is : %d\n",sum);
}
