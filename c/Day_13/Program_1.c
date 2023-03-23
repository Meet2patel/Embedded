#include<stdio.h>

struct student{
int roll;
char name[50];
};

void main(){
int n,i;
struct student s[50];
printf("Enter Number of students : ");
scanf("%d",&n);

for(i=0;i<n;i++){
printf("Enter Name of student : ");
scanf("%s",s[i].name);
printf("Enter Roll No of student : ");
scanf("%d",&s[i].roll);
}

for(i=0;i<n;i++){
printf("For s[%d] Name of student : %s \t",i,s[i].name);
printf("Roll No of student : %d \n",s[i].roll);
}

}
