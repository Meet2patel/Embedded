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
printf("%c",s[top]);
top--;
}

}




void main(){
int i;
char s[20];
printf("Enter String : ");
scanf("%s",s);

while(s[i]!='\0'){
push(s,s[i]);
i++;
}

for(i=i;i>=0;i--){
pop(s);
}
printf("\n");

}
