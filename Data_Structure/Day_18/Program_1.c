#include<stdio.h>
int f=-1,r=-1,size=10;
//		EnQueue
int enQ_r(int *q,int num){

if((r+1)%size==f && r!=-1){
printf("Queue is Full.\n");
return 0;
}

r++;
r=r%size;
q[r]=num;
printf("data : %d is EnQueue.\t F=%d R=%d\n",num,f,r);
}

int enQ_f(int *q,int num){
if(f-1==r && r!=-1){
printf("Queue is Full.\n");
return 0;
}
if(f==-1){
f=size;
r=size-1;
}
if(f==0){
f=size;
}
f--;
q[f]=num;
printf("data : %d is EnQueue.\t F=%d R=%d\n",num,f,r);


}
//		DeQueue
int deQ_f(int *q){
int x;
if(r==-1){
printf("Queue is Empty\n");
return 0;
}
if(f==r){
x=q[f];
f=0,r=-1;
printf("data : %d is DeQueue.\t F=%d R=%d\n",x,f,r);
return 0;
}
printf("data : %d is DeQueue.\t F=%d R=%d\n",q[f],(f+1)%size,r);
f++;
f=f%size;
}

int deQ_r(int *q){
int x;
if(r==-1){
printf("Queue is Empty\n");
return 0;
}
if(f==r){
x=q[r];
f=-1,r=-1;
printf("data : %d is DeQueue.\t F=%d R=%d\n",x,f,r);
return 0;
}
if(r==0)
r=size;
r--;
printf("data : %d is EnQueue.\t F=%d R=%d\n",q[(r+1)%size],f,r);
}


//		Display
int display(int *q){
int i;
if(r==-1){
printf("Queue is Empty\n");
return 0;
}
printf("Queue has : \n");
i=f;
if(f==r){
printf("%d\n",q[f]);
return 0;
}
while(i!=r){

printf("%d\n",q[i]);
i++;
i=i%size;
};

}
//		main
void main(){
int q[size],num,n,m;

while(n!=0){
printf("Choose The activity\nPress 1 to Enqueue\nPress 2 to Dequeue\nPress 3 to Display\nPress 0 to Exit\n");
scanf("%d",&n);
switch(n){

case 1:
	printf("Enter value to Enqueue : ");
	scanf("%d",&num);
	printf("0 to Insert At front\n1 to Insert At back.\n");
	scanf("%d",&m);
	(m)?(enQ_r(q,num)):enQ_f(q,num);
	break;

case 2:
	printf("0 to DeQueue from front\n1 to DeQueue from back.\n");
	scanf("%d",&m);
	(m)?deQ_r(q):deQ_f(q);
	break;
case 3: 
	display(q);
	break;

case 0:
	display(q);
	
}

}
}
