#include <stdio.h>
void main(){

int Nq,Ac,Ai,Total,Mc,Mi,Om,Tc,Ti;
float per;

printf("Enter Number of Question : ");
scanf("%d",&Nq);

printf("Enter Number of Correct Answer : ");
scanf("%d",&Ac);

printf("Enter Marks for Correct Answer : ");
scanf("%d",&Mc);

printf("Enter Marks for InCorrect Answer : ");
scanf("%d",&Mi);

Tc=Mc*Ac;
Ai=Nq-Ac;
Ti=Ai*Mi;

Om = Tc-Ti;
Total = Nq*Mc;

per=(Om*100)/Total;

printf("Student gets %f% \n",per);

if(per > 49)
printf("Student Pass the exam\n");

else 
printf("student is fail in exam\n");

printf("Student Obtain total %d marks",Om);



}
