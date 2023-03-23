#include<stdio.h>
#include<stdlib.h>

void main(){

int *n,n1,n2,*l,i;
printf("Enter the size of list : ");
scanf("%d",&n1);

n=(int *)malloc(sizeof(int)*n1);

printf("Enter %d numbers : \n",n1);
for(i=0;i<n1;i++){
scanf("%d",&n[i]);
}

printf("Enter the size of second list : ");
scanf("%d",&n2);

l=realloc(n,sizeof(int)*n2);
if(n2>n1){
printf("Enter %d remaining Numbers : \n",n2-n1);
for(i=n1;i<n2;i++)
scanf("%d",&l[i]);
}
printf("Values in second list is : \n");
for(i=0;i<n2;i++)
printf("%d\n",l[i]);

free(l);

}
