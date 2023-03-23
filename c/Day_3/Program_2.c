// Commission Calculator for electronics

#include <stdio.h>
void main(){

int Ncpu,Nmon,Pcpu,Pmon,Tcpu,Tmon,Total=0,C;

printf("Enter number of CPU : ");
scanf("%d",&Ncpu);
printf("Enter number of Monitor : ");
scanf("%d",&Nmon);

printf("Enter Price of CPU : ");
scanf("%d",&Pcpu);
printf("Enter Price of Monitor : ");
scanf("%d",&Pmon);

Tcpu=Ncpu*Pcpu;
Tmon=Nmon*Pmon;

if (Tcpu>=10000 && Tcpu < 25000){

C=0.08*Tcpu;
Total=Total+C;
}
else if (Tcpu>25000){

C=2000+0.1*(Tcpu-25000);
Total=Total+C;
}
else{

C=0;

}

printf("Commision On CPU is : %d\n",C);


if (Tmon<10000){

C=0.05*Tmon;
Total=Total+C;
}
else if (Tmon>=10000){

C=0.05*10000+0.08*(Tmon-10000);
Total=Total+C;
}
else;
printf("Commision On Monitor is : %d\n",C);

printf("Total Commision is %d .\n",Total);

}
