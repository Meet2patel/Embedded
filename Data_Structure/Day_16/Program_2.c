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

int pop(int *a){

if(top<=-1){
printf("Stack is Empty.");
}
else{
top--;
printf("%d is Poped\n",a[top+1]);
return a[top+1];
//top--;
}

}

void display(int *a){
int i;
printf("stack is : \n");
for(i=0;i<=top;i++){
printf("%d\n",a[i]);
}

}

void insert_last(int a[],int num,int j){
if(top==j/2){
push(a,num);
return ;
}
int x=pop(a);
insert_last(a,num,j);
push(a,x);
}

void main(){
int num,a[size],j;
push(a,12);
push(a,13);
push(a,43);
push(a,23);
push(a,21);
push(a,46);
push(a,56);
push(a,45);
printf("Enter the value to insert at last : ");
scanf("%d",&num);

j=top;
insert_last(a,num,j);
display(a);

}
