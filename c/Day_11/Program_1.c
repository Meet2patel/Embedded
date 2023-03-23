#include<stdio.h>
void add(int *p,int n);
void print(int *p,int n);

void main(){
int n;
printf("Enter the size of Array : ");
scanf("%d",&n);
int a[n];

add(a,n);
print(a,n);
}

void add(int *p,int n){
int i;
for(i=0;i<n;i++){
printf("Enter Element : ");
scanf("%d",p);
p=p+1;
}
}

void print(int *p,int n){
int i;
for(i=0;i<n;i++){
printf("Element : %d\n",*p);
p=p+1;
}

}
