#include<stdio.h>
#include<string.h>

typedef struct student{
int roll,yoj;
char name[50],dep[15];
}stud;

void isYear(stud *s,int year,int n){
int i;
for(i=0;i<n;i++){
if(s[i].yoj==year){
printf("Name : %s\nRoll no. : %d\nDepartment : %s\nYear Of Join : %d\n\n",s[i].name,s[i].roll,s[i].dep,s[i].yoj);
}

}

}

void main(){
stud s[450];
int i,n,year;
printf("Enter Number of students: ");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter Name of student : ");
scanf("%s",s[i].name);
printf("Enter Roll No of student : ");
scanf("%d",&s[i].roll);
printf("Enter Year of joining : ");
scanf("%d",&s[i].yoj);
printf("Enter Department of student : ");
scanf("%s",s[i].dep);
}
printf("Enter Year of joining for sort : ");
scanf("%d",&year);
isYear(s,year,n);

}
