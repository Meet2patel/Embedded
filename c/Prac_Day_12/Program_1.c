#include <stdio.h>
#include <string.h>
int check(char *str){
int i,flag=1;
for (i=0;str[i]!='\0';i++){
	if(!(str[i]>='0' && str[i]<='9')){
	flag=0;
	break;
	}
}
if(flag==0){
printf("Enter Numeric only \n");
return 0;
}
}

void pal(char *str,int n){
int i,flag=0;	
for (i=0;str[i]!='\0';i++){

if(str[i]!=str[n-i-1]){
printf("Number is Not Pallindrome.\n");
flag=1;
break;
}

}
if(flag==0)
printf("Number is pallindrome.\n");
}



void main(){

char str[100];
int n;

printf("Enter Number : ");
scanf("%s",str);
n=strlen(str);
check(str);
pal(str,n);

}
