#include<stdio.h>
void main(){

int i,n,sea,flag=1;

printf("Enter The Size of Array : ");
scanf("%d",&n);

int a[n];

for (i=0;i<n;i++){
printf("Enter the %d number : ",i);
scanf("%d",&a[i]);
}

printf("Enter the Number You Want to Search : ");
scanf("%d",&sea);

for(i=0;i<n;i++)
{
if(sea==a[i])
{
printf("We Found The Number %d at %d Possition .\n",a[i],i);
flag=0;
break;
}
}
if(flag==1)
printf("Sorry , We aren`t Able to find the number %d . \n",sea);

}
