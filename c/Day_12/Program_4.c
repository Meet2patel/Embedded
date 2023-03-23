#include<stdio.h>
#include<string.h>

char rev(char *str,char *str2){
int n=0,i=0;
while(*str!='\0'){
n++;
str++;
}
str--;
for(i=0;i<=n;i++){
str2[i]=*str;
str--;
}
return 0;
}


void main(){
char str[100],revstr[100];
printf("Enter String 1 : ");
scanf("%s",str);


rev(str,revstr);
printf("Reverse String : %s\n",revstr);
}
