#include<stdio.h>
void main(){

int i,n,j,k,l=0,r=0,flag=1;

printf("Enter The Size of Array : ");
scanf("%d",&n);

int a[n];

for (i=0;i<n;i++){
printf("Enter the %d number : ",i);
scanf("%d",&a[i]);
}

for(i=0;i<n;i++){

for(j=i+1;j<n;j++){

if(a[i]<a[j])
flag=0;

}

if(flag==1)
printf("Leader : %d\n",a[i]);

flag=1;

}

}
