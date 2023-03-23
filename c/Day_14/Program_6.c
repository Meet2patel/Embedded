#include<stdio.h>

void main()
{
int flag=0,c1=0,c2=0;
char ch,ch2;
FILE *fp,*fp1;
fp = fopen("Program_4.c","r");
fp1 = fopen("txt.txt","w");

while(ch!=EOF){
ch=getc(fp);
putc(ch,fp1);
}
fclose(fp);
fclose(fp1);

}
