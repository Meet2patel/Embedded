#include <stdio.h>
void main(){
	int basic,HA,DA,gross;
	
	printf("Enter Your Basic sallary");
	scanf("%d",&basic);

	DA= basic*0.4;
	HA = basic*0.2;
	
	gross = basic + HA + DA;
	printf("Total Gross Salary is : %d",gross);
}
