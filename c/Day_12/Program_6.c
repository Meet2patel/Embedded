#include<stdio.h>
#include<string.h>

char isAlphabet(char str){
if((str>='A' && str<='Z') || (str>='a' && str<='z'))
{
return 1;
}
else
{
return 0;
}
}


void main(){
int i;
char str[100],revstr[100];
printf("Enter String 1 : ");
scanf("%s",str);
for(i=0;i<strlen(str);i++){
if(isAlphabet(str[i]))
printf("%c",str[i]);
}
}
