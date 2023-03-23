#include<stdio.h>
#include<string.h>

int compare(char *str,char *str2){
int i=0,n,flag=0,count=0;
for(i=0;*str!=0;i++){
	for(i=0;str2[i]!=0;i++){
		if(!(str[i]==str2[i])){
		flag=1;
		break;
		}
	}
	str++;
	if(flag==0)
	count++;
	flag=0;
}
return count;
}

void main(){
char str[100],str2[100];
int n;

printf("Enter String 1 : ");
gets(str);
printf("Enter Sub-String : ");
gets(str2);
n=compare(str,str2);
printf("%d times Sub-String Matched.\n",n);
}
