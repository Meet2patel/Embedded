#include<stdio.h>
void main(){

int i,n,j,sum=0,sub=0,temp;

printf("Enter The Size of Array : ");
scanf("%d",&n);

int a[n];

if(n%2==0)
{
for (i=0;i<n;i++){
printf("Enter the %d number : ",i);
scanf("%d",&a[i]);
}

for(i=0;i<n;i=i+2){
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}

for (i=0;i<n;i++){
printf("Array is : %d\n",a[i]);

}

}

}
