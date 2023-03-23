#include<stdio.h>
void main(){

int a[5],i,min,max=0,sum=0,avg;

for (i=0;i<5;i++){
printf("Enter the number : ");
scanf("%d",&a[i]);

sum=sum+a[i];
if(max<a[i])
max=a[i];
}
min=a[0];

for (i=0;i<5;i++){

if(min>a[i])
min=a[i];

}
avg=sum/5;
printf("Max Number is : %d\n",max);
printf("Min Number is : %d\n",min);
printf("Sum Of Numbers is : %d\n",sum);
printf("Avg of Numbers is : %d\n",avg);

}
