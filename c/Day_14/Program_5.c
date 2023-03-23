//count characters in file

#include<stdio.h>

void main()
{
int flag=0,c1=0,c2=0;
char ch,ch2;
FILE *fp,*fp1;
fp = fopen("Program_4.c","r");
fp1 = fopen("txt.txt","r");

while(ch!=EOF || ch2!=EOF){
ch=getc(fp);
ch2=getc(fp1);
if(!(ch==ch2)){
flag=1;
}
if(ch!=EOF)
c1++;
if(ch2!=EOF)
c2++;
}
(flag)?printf("Unequal\n"):printf("Equal\n");
printf("Size is %d & %d \n",c1,c2);
}
