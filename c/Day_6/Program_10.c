#include<stdio.h>
void main(){

int i,n,temp;

printf("Enter The Size of Array : ");
scanf("%d",&n);

int a[n];

for (i=0;i<n;i++){
printf("Enter the %d number : ",i);
scanf("%d",&a[i]);
}
temp=a[n-1];
for(i=n-1;i>0;i--){
a[i]=a[i-1];
}
a[0]=temp;

for(i=0;i<n;i++){

printf("a[%d] = %d\n",i,a[i]);


}
}
