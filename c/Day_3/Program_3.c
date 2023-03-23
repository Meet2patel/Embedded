#include <stdio.h>
void main(){

int Dep,Year,Qua,salary;

printf("Department : \n Enter 0 for IT\n Enter 1 for Acc\n Enter 2 for HR : ");
scanf("%d",&Dep);

printf("Year of Service : \n");
scanf("%d",&Year);

printf("Qualification : \n Enter 0 for Graduate\n Enter 1 for PostGraduate : ");
scanf("%d",&Qua);

if(Dep==0){

	if(Year<10){
		if(Qua==0)
		salary = 70000;
		else if(Qua==1)
		salary = 100000;
		else 
		printf("Enter valid Qualification\n");
	}
	else if(Year>=10){
		if(Qua==0)
		salary = 100000;
		else if(Qua==1)
		salary = 150000;
		else 
		printf("Enter valid Qualification\n");
	}
	else
	printf("Enter valid Number of Years\n");

}
else if (Dep==1){

	if(Year<10){
		if(Qua==0)
		salary = 60000;
		else if(Qua==1)
		salary = 100000;
		else 
		printf("Enter valid Qualification\n");
	}
	else if(Year>=10){
		if(Qua==0)
		salary = 90000;
		else if(Qua==1)
		salary = 120000;
		else 
		printf("Enter valid Qualification\n");
	}
	else
	printf("Enter valid Number of Years\n");

}
else if (Dep==2){

	if(Year<10){
		if(Qua==0)
		salary = 50000;
		else if(Qua==1)
		salary = 90000;
		else 
		printf("Enter valid Qualification\n");
	}
	else if(Year>=10){
		if(Qua==0)
		salary = 80000;
		else if(Qua==1)
		salary = 100000;
		else 
		printf("Enter valid Qualification\n");
	}
	else
	printf("Enter valid Number of Years\n");

}
else
printf("Enter valid Department\n");

printf("salary is %d .\n",salary);

}
