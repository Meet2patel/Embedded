#include<stdio.h>
int sum1();
int sum2();
int sum3();
void sum4();

void main(){
int a,b,ans,sum;

ans=sum1();
printf("Ans For sum1 : %d\n",ans);

printf("Enter values for sum2: ");
scanf("%d %d",&a,&b);
sum2(a,b);

printf("Enter values for sum3: ");
scanf("%d %d",&a,&b);
sum=sum3(a,b);

sum4();
}

int sum1(){
int a,b,sum;
printf("Enter values : ");
scanf("%d %d",&a,&b);
sum=a+b;
return sum;
}

int sum2(int a,int b){
printf("Ans for sum2 function is : %d\n",a+b);
}


int sum3(int a,int b){
int sum=a+b;
return sum;
}
void sum4(){
int a,b,sum;
printf("Enter values : ");
scanf("%d %d",&a,&b);
sum=a+b;
printf("sum from sum4 is : %d\n",sum);

}
