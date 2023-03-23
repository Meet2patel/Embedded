#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *next;
}node;
node* start;
void main(){
node* ptr;
node* n1=malloc(sizeof(node));
node* n2=malloc(sizeof(node));
node* n3=malloc(sizeof(node));

n1->data=10;
n1->next=n2;
start=n1;
ptr=start;
n2->data=20;
n2->next=n3;

n3->data=30;
n3->next=NULL;

while(ptr!=NULL){
printf("%d\n",ptr->data);
ptr=ptr->next;
}
free(n1);
free(n2);
free(n3);
}
