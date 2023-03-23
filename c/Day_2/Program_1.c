#include <stdio.h>
void main(){
int a,b,c,d;

printf("Enter values of a,b,c,d ");
scanf("%d %d %d %d",&a,&b,&c,&d);


if(a>b && a>c && a>d)
printf("A is max\n");

else if(b>a && b>c && b>d)
printf("B is max\n");

else if(c>b && c>a && c>d)
printf("C is max\n");

else
printf("D is Max\n");


}
