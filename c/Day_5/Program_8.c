#include <stdio.h>
void main(){

int n,i=0,rev=0,temp=0,pal=0,j=0;

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



else {
printf("Number ");
j=printf("%d",temp);
printf(" is not palindrome\n");
pal=temp;
j=j-1;

while(j!=0){
temp=temp/10;
i=temp%10;
pal=(pal*10)+i;
j--;
}
printf("%d is palindrome Number \n",pal);
}
}
