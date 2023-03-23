#include<stdio.h>
void add(int *p,int m,int n);
void print(int *p,int m,int n);

void main(){
int n,m;
printf("Enter the row of Array : ");
scanf("%d",&n);
printf("Enter the column of Array : ");
scanf("%d",&m);
int a[m][n];

add(a,m,n);
print(a,m,n);
}

void add(int *p,int m,int n){
int i,j;
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("Enter Element : ");
scanf("%d",p+i*n+j);
}
}
}

void print(int *p,int m,int n){
int i,j;
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("Element : %d\n",*p+i*n+j);
}
}

}
