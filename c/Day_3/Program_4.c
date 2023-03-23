#include <stdio.h>
void main(){
float gross,Saving,Ti,Tax;

printf("Enter Gross salary : ");
scanf("%f",&gross);
printf("Enter savings : ");
scanf("%f",&Saving);


if(gross>Saving){
	if (Saving<100001)
	Ti=gross-Saving;

	else
	Ti=gross-100000;

	printf("Total taxable income : %f\n",Ti);

	if(Ti<100000){
	Tax=0;
	}
	else if (Ti>100000 && Ti<=200000){
	Tax=0.1*(Ti-100000);
	}
	else if (Ti>200000 && Ti<=500000){
	Tax=0.1*100000+0.2*(Ti-200000);
	}
	else if (Ti>500000){
	Tax=0.1*100000+0.2*300000+0.3*(Ti-500000);
	}
	printf("Tax : %f\n",Tax);
}
else 
printf("gross salary is less than savings is not possible.");

}
