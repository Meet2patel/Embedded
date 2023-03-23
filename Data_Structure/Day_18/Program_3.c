#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *next;
}node;
node* start;
node* ptr;
void createList(){
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
void displayList(){
ptr=start;
while(ptr!=NULL){
printf("%d\n",ptr->data);
ptr=ptr->next;
}

}


void freeList(){
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
createList();
displayList();
freeList();

}
