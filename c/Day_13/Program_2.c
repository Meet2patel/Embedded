#include<stdio.h>

struct student{
int roll;
char name[50];
};

void main(){
int n,i;
struct student s[50],*p;
p=&s[0];
printf("Enter Number of students : ");
scanf("%d",&n);

for(i=0;i<n;i++){
printf("Enter Name of student : ");
scanf("%s",p->name);
printf("Enter Roll No of student : ");
scanf("%d",&p->roll);
p++;
}
p=&s[0];

for(i=0;i<n;i++){
printf("For s[%d] Name of student : %s \t",i,p->name);
printf("Roll No of student : %d \n",p->roll);
p++;
}

}
