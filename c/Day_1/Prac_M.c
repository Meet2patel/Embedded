#include <stdio.h>
void main(){

int in,out=0,j=1,x=0,i=0;

printf("Enter the 5 digit number : ");
scanf("%d",&in);

for (i=1;i<=5;i++){

x = in%10;
x++;
x=x%10;
x=x*j;
out = out + x;
in=in/10;
j=10*j;
}

printf("Output Number is : %d\n",out);

}
