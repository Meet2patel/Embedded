#include<stdio.h>
void main(){
int i,n;
printf("Enter Number : ");
scanf("%d",&n);
printf("Even : \n");
for(i=n+1;i<=(n+20);i++)
{

if(i%2==0)
printf("%d\n",i);

}

printf("Odd : \n");
for(i=n+1;i<=(n+20);i++)
{

if(i%2!=0)
printf("%d\n",i);

}

}
