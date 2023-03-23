#include <stdio.h>
void main(){

int n,i,total=0,temp,k=0,l=0,j=0;

printf("Enter the number : ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
k=i;
while(k!=0)
{

j = k%10;
total = total + j*j*j;

k=k/10;

}

if(total==i)
{
printf("%d\n",i);
l++;
}

total=0;

}
printf("Total armstrong Numbers is : %d\n",l);
}
