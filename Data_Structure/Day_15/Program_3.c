#include<stdio.h>
int size=20,top=-1;

void push(char *s,char c){

if(top>=size-1){
printf("Stack is Full.\n");
}
else{
top=top+1;
s[top]=c;
}

}

void pop(char *s){

if(top<=-1);
else{
top--;
}

}

void main(){
char str[20],stack[20];
int i;

printf("Enter expression : ");
scanf("%s",str);

for(i=0;str[i]!=0;i++){
if(str[i]=='{' || str[i]=='(' || str[i]=='['){
push(stack,str[i]);
}
else{
	if(str[i]=='}' && stack[top]=='{' || str[i]==']' && stack[top]=='[' || str[i]==')' && stack[top]=='('){
	pop(stack);
	}
	else{
	printf("Not balanced\n");
	break;
	}
}

}

if(top==-1)
printf("Balanced\n");
else
printf("Not Balanced\n");

}
