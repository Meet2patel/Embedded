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
printf("Array a copied into Array b .\n");
for(i=0;i<n;i++)
{
b[i]=a[i];
printf("b[%d] = %d\n",i,b[i]);
}


}
