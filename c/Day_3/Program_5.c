// Library Book's fine calculator

#include<stdio.h>
void main(){
int days ,Bp,fine;

printf("Enter the Price of Book : ");
scanf("%d",&Bp);
printf("Enter the Days Late for Returning Book : ");
scanf("%d",&days);

if (days <= 5){
fine = 5*days;
}
else if (days>5 && days<=10){
fine = 5*5 +10*(days-5);
}
else if (days >10 && days<=30){
fine = 25+50+20*(days-10);
}
else if(days>30){
	fine = 25+50+20*(days-10);

	if (fine < Bp)
	fine = Bp;
}
else ;

printf("Payable Charges for book is Rs.%d \n",fine);


}
