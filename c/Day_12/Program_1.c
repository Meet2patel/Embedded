#include<stdio.h>
#include<string.h>

int mystrlen(char *str){
int i=0;
while(str[i]!='\0'){
i++;
}
return i;
}


void main(){
char str[100];
printf("Enter String : ");
scanf("%s",str);
int len,mylen;
len=strlen(str);
printf("%d\n",len);
mylen=mystrlen(str);
printf("%d\n",mylen);
}
