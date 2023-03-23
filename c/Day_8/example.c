//generate bill

#include<stdio.h>
void main(){
int a,b,c,d,e,f,min=32768,min1=32768,min2=32768,sum;

printf("Enter the value : ");
scanf("%d",&a);
printf("Enter the value : ");
scanf("%d",&b);
printf("Enter the value : ");
scanf("%d",&c);
printf("Enter the value : ");
scanf("%d",&d);
printf("Enter the value : ");
scanf("%d",&e);
printf("Enter the value : ");
scanf("%d",&f);

if(a<min){
min2=min1;
min1=min;
min=a;
}
else if(a<min1){
min2=min1;
min1=a;
}
else if (a<min2){
min2=a;
}

if(b<min){
min2=min1;
min1=min;
min=b;
}
else if(b<min1){
min2=min1;
min1=b;
}
else if (b<min2){
min2=b;
}


if(c<min){
min2=min1;
min1=min;
min=c;
}
else if(c<min1){
min2=min1;
min1=c;
}
else if (c<min2){
min2=c;
}


if(d<min){
min2=min1;
min1=min;
min=d;
}
else if(d<min1){
min2=min1;
min1=d;
}
else if (d<min2){
min2=d;
}


if(e<min){
min2=min1;
min1=min;
min=e;
}
else if(e<min1){
min2=min1;
min1=e;
}
else if (e<min2){
min2=e;
}

if(f<min){
min2=min1;
min1=min;
min=f;
}
else if(f<min1){
min2=min1;
min1=f;
}
else if (f<min2){
min2=f;
}

sum=min+min1+min2;
printf("Bill : %d\n",sum);

}
