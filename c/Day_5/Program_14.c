#include <stdio.h>
void main(){

int no,temp=0,sum=0,count=0,i;

printf("Enter Number : ");
scanf("%d",&no);

temp=no;
while(no!=1){

sum=0;
while (no>0){

i=no%10;
sum=sum+(i*i);
no =no/10;
}
no=sum;
count++;

if(count==50 && sum>1){
printf("Number %d is Not Happy Number\n",temp);
break;
}

}

if(no==1)
printf("Number %d is happy number\n",temp);

}
