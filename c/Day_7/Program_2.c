#include<stdio.h>
void main(){

int i,n,j,sum=0;

printf("Enter The Size of Array : ");
scanf("%d",&n);

int a[n];

sum = n*(n+1)/2;

for (i=0;i<n-1;i++){
printf("Enter the %d number : ",i);
scanf("%d",&a[i]);
sum=sum-a[i];
}

printf("Missing Number is : %d\n",sum);

}
