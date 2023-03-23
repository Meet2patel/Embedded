#include<stdio.h>
#include<stdlib.h>

typedef struct employee{
char name[15];
int id,exp;
long mobile;
struct employee* next;
}employee;

void main(){
int n=1;
employee* start;
employee* ptr;
employee* new=malloc(sizeof(employee));
new->next=NULL;
start=new;
ptr=new;

while(n!=0){
printf("Enter Name : ");
scanf("%s",ptr->name);
printf("Enter id : ");
scanf("%d",&ptr->id);
printf("Enter Experience : ");
scanf("%d",&ptr->exp);
printf("Enter mobile number : ");
scanf("%ld",&ptr->mobile);
printf("Do you want to add another? \npress 1 if yes \npress 0 for NO");
scanf("%d",&n);
if(n!=0){
employee* new=malloc(sizeof(employee));
new->next=NULL;
ptr->next=new;
ptr=new;
}
}



}
