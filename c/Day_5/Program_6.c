#include <stdio.h>
void main(){
int n,temp,i;
printf("Enter The Number : ");
scanf("%d",&n);
for(i=2;i<n;i++){

if(n%i==0){
temp=0;
printf("Number is Not Prime\n");
break;
}

}

if(temp==1){
printf("%d Number is Prime.\n",n);
}

}
