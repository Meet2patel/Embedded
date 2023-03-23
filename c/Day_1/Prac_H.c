#include <stdio.h>
#include <math.h>
void main(){

int n,t,temp,total=0,i=0,g;

printf("Enter the number : ");
scanf("%d",&n);
temp=n;
i=printf("%d",n);
i--;
while(n!=0)
{

t = n%10;
g=pow(10, i);
t= t*g;
total = total + t;
n=n/10;
i--;
}

printf("rev is %d",total);

}
