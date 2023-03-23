// To Check String is Capital or not 

#include<stdio.h>
#include<string.h>

void check(char *str){
int flag=1,i;
if(*str>='A' && *str<='Z'){
str++;

if(*str>='A' && *str<='Z'){
for(i=0;str[i]!='\0';i++){
if(!(str[i]>='A' && str[i]<='Z')){
	flag=0;
	break;
}
}}

if(*str>='a' && *str<='z'){
for(i=0;str[i]!='\0';i++){
if(!(str[i]>='a' && str[i]<='z')){
	flag=0;
	break;
}
}}

}
else if(*str>='a' && *str<='z'){
for(i=0;str[i]!='\0';i++){
if(!(str[i]>='a' && str[i]<='z')){
	flag=0;
	break;
}
}}


if(flag==0)
printf("False\n");
else
printf("True\n");
}

void main(){

char str[100];
printf("Enter String : ");
scanf("%s",str);
check(str);

}
