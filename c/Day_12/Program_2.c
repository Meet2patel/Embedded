#include<stdio.h>
#include<string.h>

char mystrcpy(char *dest,char *str){
int i=0;
while(str[i]!='\0'){
dest[i]=str[i];
i++;
}
return 0;
}


void main(){
char str[100],dest[100],mydest[100];
printf("Enter String : ");
scanf("%s",str);

strcpy(dest,str);
printf("%s\n",dest);
mystrcpy(mydest,str);
printf("%s\n",mydest);
}
