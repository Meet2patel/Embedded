#include<stdio.h>
int size=20,top=-1;

void push(int *a,int num){

if(top>=size-1){
printf("Stack is Full.\n");
}
else{
top=top+1;
a[top]=num;
printf("%d is Pushed.\n",a[top]);
}

}

void pop(int *a){

if(top<=-1){
printf("Stack is Empty.");
}
else{
printf("%d is Poped\n",a[top]);
top--;
}

}

void peep(int *a){

if(top<=-1){
printf("Stack is Empty.");
}
else{
printf("%d is on top.\n",a[top]);
}

}


void display(int *a){
int i;
printf("stack is : \n");
for(i=0;i<=top;i++){
printf("%d\n",a[top]);
}

}

void main(){
int n=1,a[20],num;
while(n!=0){
printf("Choise The activity\nPress 1 to Push\nPress 2 to Pop\nPress 3 to Peep\nPress 4 to Empty\nPress 5 to Display Stack\nPress 0 to Exit\n");
scanf("%d",&n);
switch(n){

case 1:
	printf("Enter value to Push : ");
	scanf("%d",&num);
	push(a,num);
	break;

case 2:
	pop(a);
	break;

case 3:
	peep(a);
	break;

case 4:
	printf("Stack is Empty.\n");
	top=-1;
	break;
case 5:
	display(a);
	break;
case 0:
	display(a);
	

}


}
}
