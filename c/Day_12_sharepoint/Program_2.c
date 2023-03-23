//reverse string for specific length


#include<stdio.h>
#include<string.h>

void rev(char *str,int k){
int i;
char temp;
for(i=0;i<k;i++){
	temp=str[i];
	str[i]=str[k-1];
	str[k-1]=temp;
	k--;
}
}

void main(){

char str[100];
int k;
printf("Enter String : ");
scanf("%s",str);
printf("Enter the number for reverse :");
scanf("%d",&k);
if(k>strlen(str))
k=strlen(str);

rev(str,k);
printf("String is : %s\n",str);

}
