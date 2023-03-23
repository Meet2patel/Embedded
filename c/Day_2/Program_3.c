#include <stdio.h>
void main(){

int price,q,total;
printf("Enter the price of product :");
scanf("%d",&price);
printf("Enter the quantity of product :");
scanf("%d",&q);

total = q * price;

if (q>1000){
printf("total Bill Amount is %f \n",total-0.1*total);
}
else
printf("total Bill Amount is %d \n",total);



}
