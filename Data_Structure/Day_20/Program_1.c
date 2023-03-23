#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node* next;
}node;

node* start;
node* last;
node* ptr;

//create node
node* createNode(){
node* new=malloc(sizeof(node));
new->next=NULL;
printf("Enter The Data for list : ");
scanf("%d",&new->data);
return new;
}

// Add at First
void addFirst(){
node* new;
new=createNode();
if(start==NULL){
start=new;
new->next=start;
}
else{
new->next=start;
start=new;
last->next=start;
}
}

// Add at last;
void addLast(){
node* new;
new=createNode();
if(start==NULL){
start=new;
new->next=start;
}
else{
new->next=start;
last->next=new;
last=new;
}
}


//Display the node
void displayList(){
node* ptr;
ptr=start;
if(start==NULL){
printf("List is Empty.");
}
else{
printf("List Data is : \n");
do{
printf("%d\n",ptr->data);
ptr=ptr->next;
}while(ptr!=start);


}
}
//main

void main(){
int n,i;
node* new;

printf("Enter no of Nodes : ");
scanf("%d",&n);
new=createNode();
last=new;
start=new;
new->next=start;

for(i=1;i<n;i++){
new=createNode();
last->next=new;
new->next=start;
last=new;
}

displayList();
printf("Enter at First : \n");
addFirst();
printf("Enter at Last : \n");
addLast();
displayList();
}
