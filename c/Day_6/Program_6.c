#include<stdio.h>
void main(){

int i,n,sea,flag=1,j=0;

printf("Enter The Size of Array : ");
scanf("%d",&n);

int a[n],b[n];

for (i=0;i<n;i++){
printf("Enter the %d number : ",i);
scanf("%d",&a[i]);
}
printf("Reverse array is  .\n");
for(i=n-1;i>=0;i--)
{
	
	b[j]=a[i];
	j++;
}

for (i=0;i<n;i++){
printf("b[%d] = %d\n",i,b[i]);
}

}
