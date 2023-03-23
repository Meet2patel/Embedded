#include <stdio.h>
void main(){
int r,a,b,Ar,peri;
float Ac,circu;
printf("Enter Length and width of Rectangle : ");
scanf("%d %d",&a,&b);

printf("Enter radious of Circle : ");
scanf("%d",&r);

Ac = r*r*3.14;
Ar= a*b;
peri = 2*(a+b);
circu = 2*3.14*r;

printf("Ractangle Area is %d,Ractangle Perimeter is %d\n",Ar,peri);
printf("circle Area is %f,circle circumference is %f\n",Ac,circu);
}
