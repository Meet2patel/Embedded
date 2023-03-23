#include <stdio.h>
void main(){
int sum,s1,s2,s3,s4,s5;
float per;
printf("Enter Your 5 Subjects marks : ");
scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
sum = s1 + s2+s3+s4+s5;
per = sum/5;
printf("Aggregate marks of student is %d.\nPersentages of student is %f. \n",sum,per);
}
