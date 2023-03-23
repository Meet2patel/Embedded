#include <stdio.h>
void main(){

char ch;

printf("Enter character : ");
scanf("%c",&ch);

if (ch>64 && ch<91)
printf("character is Uppercase\n");

else if (ch>96 && ch<123)
printf("character is Lowercase\n");

else if (ch>47 && ch<58)
printf("character is Numeric\n");

else
printf("character is invalid\n");


}
