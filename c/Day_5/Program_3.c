// Palindrome

#include <stdio.h>
void main(){

int n,i,rev=0,temp;

printf("Enter the number : ");
scanf("%d",&n);

temp=n;

while(n!=0)
{

i = n%10;
rev = rev*10 + i;
n=n/10;

}

if(temp==rev)
printf("Number is Palindrome\n");

else 
printf("Number is not palindrome\n");

}
