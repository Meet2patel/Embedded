#include<stdio.h>

typedef struct point{
int x,y;
}point;

point sum(point a,point b){
point total;

total.x=a.x+b.x;
total.y=a.y+b.y;

return total;

}


void main(){
point A,B,C;
A.x=10;
A.y=15;
B.x=25;
B.y=35;
C=sum(A,B);
printf("Sum of A,B is x = %d, y=%d \n",C.x,C.y);
}

