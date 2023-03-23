#include<stdio.h>

void main()
{
char ch;
FILE *fp;
fp = fopen("Program_4.c","r");

while(ch!=EOF){
ch=getc(fp);
printf("%c",ch);
}

}
