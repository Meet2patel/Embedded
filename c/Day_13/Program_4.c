#include<stdio.h>

typedef struct cricketer{
int score;
char name[50];
struct cricketer *next;
}crtr;

void main(){
int n,i;
crtr c[50],*p;
p=&c[0];
printf("Enter Number of Cricketers : ");
scanf("%d",&n);

for(i=0;i<n;i++){
printf("Enter Name of Cricketer : ");
scanf("%s",p->name);
printf("Enter Score of %s : ",p->name);
scanf("%d",&p->score);
p->next=c+1+i;
p++;
}
p--;
p->next=NULL;
p=&c[0];

while (((*p).next)!='\0'){
printf("Name of Criketer : %s, Score : %d\n",p->name,p->score);
p=p->next;

}



}
