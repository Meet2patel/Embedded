#include <stdio.h>
void main(){
float distance,Di,Dm,Dcm,Df;

printf("Enter distance in km ");
scanf("%f",&distance);

Di = distance * 39370.1;
Dm = distance * 1000;
Dcm = Dm * 100;
Df = distance * 3280.84;

printf("\nDistance in inches %f \n",Di);
printf("Distance in feet %f \n",Df);
printf("Distance in meter %f \n",Dm);
printf("Distance in centimeter %f \n",Dcm);
}
