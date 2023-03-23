#include<stdio.h>
int f=0,r=-1,size=10;
//		EnQueue
int enQ(int *q,int num){
if(r!=-1){
if((r+1)%size==f){
printf("Queue is Full.\n");
return 0;
}
}
r++;
r=r%size;
q[r]=num;
printf("data : %d is EnQueue.\t F=%d R=%d\n",num,f,r);
}
//		DeQueue
int deQ(int *q){
int x;
if(r==-1){
printf("Queue is Empty");
}
if(f==r){
x=q[f];
f=0,r=-1;
printf("data : %d is DeQueue.\t F=%d R=%d\n",q[f],(f+1)%size,r);
return 0;
}
printf("data : %d is DeQueue.\t F=%d R=%d\n",q[f],(f+1)%size,r);
f++;
f=f%size;
}
//		Display
int display(int *q){
int i;
if(r==-1){
printf("Queue is Empty");
return 0;
}
printf("Queue has : \n");
i=f;
do{
printf("%d\n",q[i]);
i++;
i=i%size;
}while((i-1)!=r);

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
