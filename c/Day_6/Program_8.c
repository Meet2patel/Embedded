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


for(i=0;i<n;i++)
{
j=i;
	for(i=0;i<j;i++){
	l=l+a[i];
	}
	for(k=i+1;k<n;k++){
	r=r+a[k];
	}

	if(l==r){
	printf("%d Element is Equilibrium \n",j);
	flag=0;
	break;
	}
	l=0,r=0;
}
if(flag==1)
printf("No Equilibrium available for this array\n");

}
