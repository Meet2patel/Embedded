//Electricity Bill

#include <stdio.h>
void main(){

int x,phase,units;
double total=0,Ptax,bill;

printf("Enter your Ans For domestic enter 1 for Commercial enter 0 : ");
scanf("%d",&x);

printf("Enter the ans for singlephase enter 0 for Three phase enter 1 : ");
scanf("%d",&phase);

printf("Enter the Units : ");
scanf("%d",&units);

Ptax = 0.06*units;


if (x==1){

if (units<51)
bill=1.45*units;

else if(units>50 && units<101)
bill=1.45*50 + (units-50)*2.85;

else if(units>100 && units<201)
bill=1.45*50 + 50*2.85 + (units-100)*3.95;

else if(units>200)
bill=1.45*50 + 50*2.85 + 100*3.95 + (units-200)*4.50;

else 
printf("Enter valid input");

if (phase==0)
	if (Ptax>20)
	total = bill+10+Ptax;
	else 
	total = bill + 10 + 20;

else if (phase==1)
	if (Ptax>50)
	total = bill+10+Ptax;
	else 
	total = bill + 10 + 50;
else
	printf("Enter valid Phase");

}



else if (x==0){

if (units>0 && units<101)
bill=3.95*units;

else if(units>100)
bill=3.95*100 + (units-100)*7;


else 
printf("Enter valid input");

if (phase==0)
	if (Ptax>50)
	total = bill+10+Ptax;
	else 
	total = bill + 20 + 50;

else if (phase==1)
	if (Ptax>100)
	total = bill+10+Ptax;
	else 
	total = bill + 20 + 100;
else
	printf("Enter valid Phase");

}

printf("Total Bill is : %lf",total);


}
