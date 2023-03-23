// calculate Holidays.

#include <stdio.h>
void main(){
int Nh,hol=8,i,j,k=0;

printf("Enter Number of holidays : ");
scanf("%d",&Nh);

for(i=1;i<=Nh;i++){
printf("Enter Festival Date : ");
scanf("%d",&j);
k=j%7;

switch (k){

case 1:
case 2:
case 3:
case 4:
case 5:
	hol++;
	break;
case 6:
case 0:
	break;

}


}
printf("Number Of Holidays is : %d\n",hol);



}
