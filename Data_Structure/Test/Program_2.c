#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *next;
}node;
node* start1;
node* start2;
node* ptr1;
node* ptr2;

//create List
node* createList(node* start){
int n,i;
printf("Enter Number of Elements : ");
scanf("%d",&n);
node* new=malloc(sizeof(node));
printf("Enter Value : ");
scanf("%d",&new->data);
new->next=NULL;
start=new;
node* ptr=new;
for(i=1;i<n;i++){
node* new=malloc(sizeof(node));
printf("Enter Value : ");
scanf("%d",&new->data);


new->next=NULL;
ptr->next=new;
ptr=new;
}
return start;
}

//sorting
node* sortList(node* start){
int temp;
node* ptr=start;
node* ptr1=start;
while(ptr1->next!=NULL){
	ptr=start;
	while(ptr->next!=NULL){
		if(ptr->data < ptr->next->data){
		temp=ptr->data;
		ptr->data=ptr->next->data;
		ptr->next->data=temp;
		}
		ptr=ptr->next;
	}
	ptr1=ptr1->next;
}
return start;
}

//merge
node* mergeList(node* start1,node* start2){
ptr1=start1;
ptr2=start2;
node* new=malloc(sizeof(node));
new->next=NULL;
node* start = new;
node* ptr=start;
ptr->next=NULL;
while(ptr1!=NULL && ptr2!=NULL){
node* pre=ptr;

if(ptr1->data > ptr2->data){
	ptr->data=ptr1->data;
	node* new=malloc(sizeof(node));
	new->next=NULL;
	ptr->next=new;
	ptr=ptr->next;
	ptr1=ptr1->next;
}
else if(ptr1->data < ptr2->data){
	ptr->data=ptr2->data;
	node* new=malloc(sizeof(node));
	new->next=NULL;
	ptr->next=new;
	ptr=ptr->next;
	ptr2=ptr2->next;
}
}
if(ptr1==NULL){
ptr->data=ptr2->data;
ptr->next=ptr2->next;
}
if(ptr2==NULL){
ptr->data=ptr1->data;
ptr->next=ptr1->next;
}
return start;
}

//Display
void displayList(node* start){
node* ptr=start;
while(ptr!=NULL){
printf("%d\n",ptr->data);
ptr=ptr->next;
}
}

void main(){
start1=createList(start1);
start2=createList(start2);
start1=sortList(start1);
start2=sortList(start2);
printf("Sorted List-1 : \n");
displayList(start1);
printf("Sorted List-2 : \n");
displayList(start2);
node* start=mergeList(start1,start2);
printf("sorted Merge List : \n");
displayList(start);

}
