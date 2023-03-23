#include<stdio.h>
void main(){

int i,n,sea,j=0,zero=0,pos=0,neg=0,even=0,odd=0;

printf("Enter The Size of Array : ");
scanf("%d",&n);

int a[n],b[n];

for (i=0;i<n;i++){
printf("Enter the %d number : ",i);
scanf("%d",&a[i]);
if(a[i]%2==0)
even++;

if(a[i]%2!=0)
odd++;

if(a[i]>0)
pos++;

if(a[i]<0)
neg++;

if(a[i]==0)
zero++;
}
printf("----------------------------------\n");
printf("Total even Numbers is : %d\n",even);
printf("Total odd Numbers is : %d\n",odd);
printf("Total zeros Numbers is : %d\n",zero);
printf("Total positive Numbers is : %d\n",pos);
printf("Total Negative Numbers is : %d\n",neg);

}
