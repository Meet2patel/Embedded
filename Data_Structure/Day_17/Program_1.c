#include<stdio.h>
int f=0,r=-1,size=10;
//EnQueue
int enQ(int *q,int num){
if(r==size-1){
printf("Queue is Full.\n");
return 0;
}
r++;
q[r]=num;
printf("data : %d is EnQueue.\t F=%d R=%d\n",num,f,r);
}
//		DeQueue
int deQ(int *q){
if(f>r){
printf("Queue is Empty.\n");
return 0;
}
f++;
printf("data : %d is DeQueue.\t F=%d R=%d\n",q[f-1],f,r);
}
//		Display
int display(int *q){
int i;
if(f>r){
printf("Queue is Empty.\n");
f=0,r=-1;
return 0;
}
printf("Queue has : \n");
for(i=f;i<=r;i++){
printf("%d\n",q[i]);
}
}
//		main
void main(){
int q[size],num,n;

while(n!=0){
printf("Choise The activity\nPress 1 to Enqueue\nPress 2 to Dequeue\nPress 3 to Display\nPress 0 to Exit\n");
scanf("%d",&n);
switch(n){

case 1:
	printf("Enter value to Enqueue : ");
	scanf("%d",&num);
	enQ(q,num);
	break;

case 2:
	deQ(q);
	break;
case 3: 
	display(q);
	break;

case 0:
	display(q);
	
}

}
}
