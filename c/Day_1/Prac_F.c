#include <stdio.h>
void main(){
int c,d;

printf("Your first value is : ");
scanf("%d",&c);
printf("Your second value is : ");
scanf("%d",&d);
c= c+d;
d= c-d;
c = c-d;

printf("Your swaped first value is : %d \n",c);
printf("Your swaped second value is : %d \n",d);
}
