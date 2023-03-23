#include<stdio.h>
#include<string.h>

void anagram(char *a,char *b){
int flag=1;
while(*a!='\0'){
	flag=1;
	while(*b!='\0'){
	if(*a==*b){
	flag=0;
	break;
	}
	b++;
	}
	if(flag==1){
	break;	
	}
a++;
}

if(flag==1){
printf("Given Strings are Anagram \n");
}
else
printf("Given Strings are not Anagram \n");

}

void main(){
char a[50],b[50];

printf("Enter the String 1 : ");
scanf("%s",a);
printf("Enter the String 2 : ");
scanf("%s",b);

if(strlen(a)==strlen(b))
anagram(a,b);
else
printf("Given Strings are not anagram");

}
