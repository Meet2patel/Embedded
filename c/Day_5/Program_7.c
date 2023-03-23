#include <stdio.h>
void main(){
int n,temp=1,i,m,count=2;
printf("Enter The Number : ");
scanf("%d",&m);

for(n=3;n<=m;n++){

	for(i=2;i<n;i++){

	if(n%i==0){
	temp=0;
	break;
	}
	else
	temp=1;

	}
	
	if(temp==1){
	printf("%d Number is Prime.\n",n);
	count++;
	}

}

printf("Total Prime numbers is : %d",count);
}
