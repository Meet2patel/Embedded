#include <stdio.h>
void main(){

int a,b,op;
float ans;

printf("Enter the value of A : ");
scanf("%d",&a);
printf("Enter the value of B : ");
scanf("%d",&b);
printf("Enter the Operation code : \n For Addition press 1\n For subtraction press 2\n For Multiplication press 3\n For Division press 4 ::");
scanf("%d",&op);

switch(op)
{
case 1 :
	ans=a+b;
	break;
case 2 :
	ans=a-b;
	break;
case 3 :
	ans=a*b;
	break;
case 4 :
	ans=a/b;
	break;

}
printf("Answer is %f\n",ans);


}
