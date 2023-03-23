#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *next;
}node;
node* start;
node* ptr;


/*void createList(){
int n,i;
printf("Enter Number of Elements : ");
scanf("%d",&n);
node* new=malloc(sizeof(node));
printf("Enter Value : ");
scanf("%d",&new->data);
new->next=NULL;
start=new;
ptr=new;
for(i=1;i<n;i++){
node* new=malloc(sizeof(node));
printf("Enter Value : ");
scanf("%d",&new->data);
new->next=NULL;
ptr->next=new;
ptr=new;
}
}
*/

void insertAtLast(){
node* new = malloc(sizeof(node));
printf("Enter Value : ");
scanf("%d",&new->data);
new->next=NULL;
if(start==NULL){
start=new;
ptr=new;
}
else{
ptr->next=new;
ptr=new;
}

}

void insertAtFirst(){
node* new = malloc(sizeof(node));
printf("Enter Value : ");
scanf("%d",&new->data);
new->next=NULL;
if(start==NULL){
start=new;
ptr=new;
}
else{
new->next=start;
start=new;
}
}

int displayList(){
if(start==NULL){
printf(".......Please Add List......\n");
return 0;
}
ptr=start;
printf("List Values : \n");
while(ptr!=NULL){
printf("%d\n",ptr->data);
ptr=ptr->next;
}

}


int freeList(){
if(start==NULL) return 0;
node* ptr2;
ptr=start;
ptr2=ptr->next;
while(ptr2!=NULL){
free(ptr);
ptr=ptr2;
ptr2=ptr->next;
}
}

void main(){
int n;

while(n!=0){
printf("Enter 1 to add at First\nEnter 2 to add at Last\nEnter 3 to Display\nEnter 0 to Exit\n");
scanf("%d",&n);
if(n==1)
insertAtFirst();
else if(n==2)
insertAtLast();
else if(n==3)
displayList();
}

//createList();

freeList();

}
