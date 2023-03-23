#include <stdio.h>
void main(){

int m,n,i,j;
printf("Enter The Size of m x n array :");
printf("Enter value of m : ");
scanf("%d",&m);
printf("Enter value of n : ");
scanf("%d",&n);

int a[m][n];

for(i=0;i<m;i++){
for (j=0;j<n;j++){

printf("Enter Value of a[%d][%d] : ",i,j);
scanf("%d",&a[i][j]);

}

}

for(i=0;i<m;i++){
for (j=0;j<n;j++){

printf("%d	",a[i][j]);

}
printf("\n");
}



}
