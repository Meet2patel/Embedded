#include <stdio.h>
void main(){

int Bp=0,Q=0,Sp=0,n,x=1,profit=0,i=0;

while(x!=0)
{
printf("How many share Do you want to Enter : ");
scanf("%d",&n);

for(i=1;i<=n;i++){

printf("Enter the Buying Price : ");
scanf("%d",&Bp);

printf("Enter the Quantiy : ");
scanf("%d",&Q);

printf("Enter the Selling Price : ");
scanf("%d",&Sp);

profit = profit+(Sp*Q)-(Bp*Q);


}

printf("Do You want to add more ??\n if yes Press 1 if No press 0.\n");
scanf("%d",&n);




}

if (profit>0)
{
printf("Profit is : %d\n",profit);
}
if (profit<0)
printf("Your Loss is %d\n",profit);

if(profit==0)
printf("No Profit No Loss\n");


}
