#include<stdio.h>
void main(){
int i,n,sum=0;
printf("Enter Number : ");
scanf("%d",&n);
printf("divisable By 5 : \n");
for(i=1;i<=n;i++)
{
if(i%5==0){
printf("%d\n",i);
sum++;
}

}
printf("Total Count %d\n",sum);
}
