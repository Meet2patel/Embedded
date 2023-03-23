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

//insert from Start
void insertFirst(){
node* new = createNode();
if(start==NULL){
start=new;
last=new;
new->next=NULL;
new->prev=NULL;
}
else{
new->next=start;
start->prev=new;
new->prev=NULL;
start=new;
}
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

//insert After
void insertAfter(){
int num;
node* temp;
temp=start;
printf("Enter You Want to add the Number After : ");
scanf("%d",&num);
node* new = createNode();
if(start==NULL){
printf("List is Empty.");
}
else{
while(temp->data!=num){
temp=temp->next;
}
if(temp->data==num){
new->next=temp->next;
temp->next->prev=new;
new->prev=temp;
temp->next=new;
}
else{
printf("Given Number is not available");
free(new);
}
}
}

//insert Before
void insertBefore(){
int num;
node* temp;
temp=start;
printf("Enter You Want to add the Number After : ");
scanf("%d",&num);
node* new = createNode();
if(start==NULL){
printf("List is Empty.");
}
else{
while(temp->data!=num){
temp=temp->next;
}
if(temp->data==num){
new->next=temp;
temp->prev->next=new;
new->prev=temp->prev;
temp->prev=new;
}
else{
printf("Given Number is not available");
free(new);
}
}
}

//Delete First
void deleteFirst(){
if(start==NULL){
printf("List is Empty.");
}
else if(start->next==NULL && start->prev==NULL){
start=NULL;
last=NULL;
}
else{
node* temp=start->next;
temp->prev=NULL;
free(start);
start=temp;
}
}

//Delete last
void deleteLast(){
if(start==NULL){
printf("List is Empty.");
}
else if(start->next==NULL && start->prev==NULL){
start=NULL;
last=NULL;
}
else{
node* temp=last->prev;
temp->next=NULL;
free(last);
last=temp;
}
}

//Display
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
int n,i,m=1;

while(m!=0){
printf("Enter your Activity\nPress 1 to insert\nPress 2 to Delete\nPress 3 to Display\nPress 0 to Exit\n");
scanf("%d",&m);
switch(m){

case 1:
	printf("Press 1 to Insert form Start\nPress 2 to Insert Before Number\nPress 3 to Insert After Number\nPress 4 to Insert from End.\n");
	scanf("%d",&n);
	switch(n){
	case 1:
		insertFirst();
		break;
	case 2:
		insertBefore();
		break;
	case 3:
		insertAfter();
		break;
	case 4: 
		insertLast();
		break;
	}
	break;
case 2:
	printf("Press 1 to Delete form Start\nPress 2 to Delete from End.\n");
	scanf("%d",&n);
	switch(n){
	case 1:
		deleteFirst();
		break;
	case 2: 
		deleteLast();
		break;
	}
	break;
case 3:
	displayList();
	break;
}


}


}
