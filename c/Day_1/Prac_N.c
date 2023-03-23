#include <stdio.h>
void main(){

double Hf,Hi,Hm,Hc;

printf("Enter Height in Feets : ");
scanf("%lf",&Hf);

Hm=Hf/3.280;
Hi = 39.37*Hm;
Hc = Hm*100;

printf("Height in meter is : %lf\n",Hm);
printf("Height in centimeter is : %lf\n",Hc);
printf("Height in inches is : %lf\n",Hi);
}
