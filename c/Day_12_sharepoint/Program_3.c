//Attendence system

#include<stdio.h>
#include<string.h>

void attand(char *str){
int abs=0,flag=1,i;
char late[]="LLL";
while(*str!='\0'){
	flag=1;
	for(i=0;i<3;i++){
		if(!(str[i]==late[i])){
		flag=0;
		break;
		}
	}
	if(*str=='A'){
	abs++;
		if(abs<=2){
		flag=1;
		break;		
		}
	}
	if(flag==1)
	break;
	
	str++;
}
if(flag==1){
printf("False\n");
}
else
printf("True\n");
}

void main(){
char str[100];
printf("Enter String : ");
scanf("%s",str);
attand(str);

}
