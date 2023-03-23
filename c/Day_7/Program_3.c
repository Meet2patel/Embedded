#include<stdio.h>
void main(){

int i,n,j,sum=0,sub=0,k;

printf("Enter The Size of Array : ");
scanf("%d",&n);

int a[n];
printf("Enter Sum : ");
scanf("%d",&sum);

for (i=0;i<n;i++){
printf("Enter the %d number : ",i);
scanf("%d",&a[i]);
}


for (i=0;i<n;i++){

for(j=i;j<n;j++){
sub=sub+a[j];
	if(sub==sum){
		printf("Sub Array is : ");
		for(k=i;k<=j;k++)
		{
		printf("%d,",a[k]);	
		}
		printf("\b\n");
	}

}
sub=0;
}


}
