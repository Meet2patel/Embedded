#include<stdio.h>
#include<string.h>

char compare(char *str,char *str2){
int i=0,n,flag=1;
for(i=0;(str[i]!='\0' || str2[i]!='\0');i++){
if(!(str[i]==str2[i])){
n=str[i]-str2[i];
if(n<0)
printf("%s < %s\n",str,str2);
else if(n >0)
printf("%s > %s\n",str,str2);
flag=0;
break;
}
}
if(flag==1)
printf("%s = %s\n",str,str2);
}


void main(){
char str[100],str2[100],mydest[100];
printf("Enter String 1 : ");
scanf("%s",str);
printf("Enter String 2 : ");
scanf("%s",str2);
compare(str,str2);
}
