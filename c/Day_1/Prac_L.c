#include <stdio.h>
void main(){

int Ps,Pp,Pc;

printf("Enter Total selling Price : ");
scanf("%d",&Ps);

printf("Enter Amount of Profit : ");
scanf("%d",&Pp);

Pc=Ps-Pp;

printf("Cost of one item is : %d\n",Pc/15);

}
