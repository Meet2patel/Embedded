// Food bill cal

#include<stdio.h>
void main(){

int b,p,s,Pb=150,Pp=300,Ps=100;
double total=0;
printf("Price of Burger is 150.\nPrice of Pizza is 300.\nPrice of Sandwitch is 100.\n");
printf("Enter the quantities of Burger : ");
scanf("%d",&b);
printf("Enter the quantities of Pizza : ");
scanf("%d",&p);
printf("Enter the quantities of Sandwitch : ");
scanf("%d",&s);



if(b>5){
total= total + 0.9*b*Pb;
}
else 
total= total + b*Pb;

if(p*Pp > 1000){
total = total + 0.85*p*Pp;
}
else
total = total + p*Pp;

if(s*Ps > 500){
total = total + 0.8*s*Ps;
}
else
total = total + s*Ps;

total = 1.12*total;

printf("Total bill is : %lf (GST included)\n",total);
}
