#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int data;
struct node* next;
struct node* prev;
}node;

node* start=NULL;
node* last=NULL;
node* ptr;

//Create Node
node* createNode(){
node* new=malloc(sizeof(node));
new->next=NULL;
new->prev=NULL;
printf("Enter The Data for list : ");
scanf("%d",&new->data);
return new;
}

//insert from Last
void insertLast(){
node *new = createNode();
if(start==NULL){
start=new;
last=new;
new->next=NULL;
new->prev=NULL;
}
else{
new->next=NULL;
last->next=new;
new->prev=last;
last=new;
}
}

//delete nth from End
void deleteEnd(){
int i,n;
printf("Enter the position You Want to delete from Last : ");
scanf("%d",&n);
ptr=last;
for(i=1;i<n;i++){
ptr=ptr->prev;
}
ptr->next->prev=ptr->prev;
ptr->prev->next=ptr->next;
free(ptr);
}

//Display
void displayList(){
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

void main(){
int n,i,m=1;

while(m!=0){
printf("Enter your Activity\nPress 1 to insert\nPress 2 to Delete\nPress 3 to Display\nPress 0 to Exit\n");
scanf("%d",&m);
switch(m){

case 1:
	insertLast();
	break;
case 2:
	deleteEnd();
	break;
case 3:
	displayList();
	break;
}
}

}
