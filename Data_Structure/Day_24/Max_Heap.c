#include<stdio.h>
#include<stdlib.h>
int arr[50],size=0;

void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}

void heapify(int *arr,int size,int i){

if(size==1){
printf("Single element in the heap");
}
else{
int largest = i;
int l = 2*i + 1;
int r = 2*i + 2;

	if(l<size && arr[l] > arr[largest])
	largest=l;
	if(r<size && arr[r] > arr[largest])
	largest=r;
	if(largest!=i)
	swap(&arr[largest],&arr[i]);

}

}

void insert(int arr[],int new){
if(size==0)
{
arr[0]=new;
size+=1;
}
else
{
arr[size]=new;
size+=1;
for(int i = size-1;i>=0;i--){
heapify(arr,size,i);
}
}
}

void main(){
int num=0,i;

while(num!=-1){
printf("Enter the value : ");
scanf("%d",&num);
if(num!=-1)
insert(arr,num);
}

printf("Max Heap:\n");
for(i=0;i<size;i++)
printf("%d\n",arr[i]);

}
