#include <stdio.h>
void main(){

int N10,N50,N100,Wa;
printf("Enter The amount For Withdraw : ");
scanf("%d",&Wa);

if (Wa%10==0){

N100=Wa/100;
Wa = Wa - N100*100;

N50 = Wa/50;
Wa = Wa - N50*50;

N10 = Wa/10;

printf("Cashier Gave\n%d notes of Rs.100 \n%d notes of Rs.50 \n%d notes of Rs.10\n",N100,N50,N10);

printf("Total Notes : %d \n",N100+N50+N10);

}
else 
printf("Enter valid amount. \n");

}
