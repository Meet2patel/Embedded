#include <stdio.h>
void main(){

int x,y,e1,e2;

printf("Enter the value of X : ");
scanf("%d",&x);

printf("Enter the value of Y : ");
scanf("%d",&y);


e1 = x*x*x + x*x + 2*x + 5 ;

e2 = x*x + y*y + 2*x*y-10;

printf("Value Of Equation 1 is : %d \n",e1);
printf("Value Of Equation 2 is : %d \n",e2);




}
