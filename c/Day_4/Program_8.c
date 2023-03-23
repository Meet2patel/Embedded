#include<stdio.h>
void main(){
int i,n,j=0,even=0,odd=0,zero=0,pos=0,neg=0;
printf("Enter Numbers Do you want to enter: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
printf("Enter Number %d ",i);
scanf("%d",&j);

if(j%2==0)
even++;

if(j%2!=0)
odd++;

if(j==0)
zero++;

if(j>0)
pos++;

if(j<0)
neg++;

}

printf("Total Possitive : %d\n",pos);

printf("Total Negative : %d\n",neg);

printf("Total zero : %d\n",zero);

printf("Total Odd : %d\n",odd);

printf("Total Even : %d\n",even);


}
