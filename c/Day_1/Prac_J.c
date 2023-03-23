#include <stdio.h>
void main(){

int Tp=80000,Tm,Tw,Tl,Lm,Lw;

Tm=0.52*Tp;
Tw=Tp-Tm;
Tl=0.48*Tp;
Lm=0.35*Tp;
Lw=Tl-Lm;

printf("Total literate mans are : %d\n",Lm);
printf("Total literate women are : %d\n",Lw);


}
