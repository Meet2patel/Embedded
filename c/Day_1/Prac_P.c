#include <stdio.h>
void main(){
int INdays,mon,year=0,week=0,days;

printf("Enter total days : ");
scanf("%d",&INdays);


year = INdays/365;
INdays = INdays- 365*year;

week = INdays/7;
INdays = INdays - 7*week;

days = INdays;


printf ("Output : \n		%d years , %d Weeks , %d Days \n",year,week,days);
}
