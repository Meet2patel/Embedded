#include<stdio.h>
void scanArray(int a[],int n);
void printArray(int a[],int n);
void main(){
int a[10],b[5],c[20];

scanArray(a,10);
scanArray(b,5);
scanArray(c,20);

printf("\nvalues of A : ");
printArray(a,10);
printf("\nvalues of B : ");
printArray(b,5);
printf("\nvalues of C : ");
printArray(c,20);

}

void scanArray(int a[],int n){

printf("Enter value : ");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}

}

void printArray(int a[],int n){

for(int i=0;i<n;i++){
printf("%d\n",a[i]);
}
}
