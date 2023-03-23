#include<stdio.h>
#include<string.h>

char concate(char *str,char *str2){
int i=0;
while(*str!='\0'){
str++;
}
while(*str2!='\0'){
*str=*str2;
str=str+1;
str2=str2 + 1;
}
return 0;
}


void main(){
char str[100],str2[100],mydest[100];
printf("Enter String 1 : ");
scanf("%s",str);
printf("Enter String 2 : ");
scanf("%s",str2);


concate(str,str2);
printf("%s\n",str);
}
