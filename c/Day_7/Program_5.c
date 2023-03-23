#include <stdio.h>
void main(){

int m,n,i,j,k,flag=1;
printf("Enter The Size of m x n array :");
printf("Enter value of m : ");
scanf("%d",&m);
printf("Enter value of n : ");
scanf("%d",&n);

int a[m][n];

for(i=0;i<m;i++){
	for (j=0;j<n;j++){
	
	printf("Enter Value of a[%d] X[%d] : ",i,j);
	scanf("%d",&a[i][j]);

}

}
//main code
for(i=0;i<m;i++){
	for (j=0;j<n;j++){

		if(a[i][j]!=0){
		flag=0;
		break;
		}
	}
	
	
	if(flag==1){
		for(k=0;k<n;k++){
			
			if(i!=k){	
				if(a[k][i]!=1){
				flag=0;
				break;
				}
			}
		}
	}
	
	if(flag==1)
	break;
	flag=1;
}

printf("celebrity a[%d][]\n",i);


}
