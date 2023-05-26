// object array as argument

#include<iostream>
using namespace std;

class student{
char name[20],status;
int marks[5],total=0;
float per;
char grade;
public:
void setData(){
	int flag=0;
	cout<<"Enter name of student : ";
	cin>> name;
	cout<<"Enter marks of student : \n";
	for(int i=0;i<5;i++){
		cout<<"Enter marks of Subject"<<i+1<<" : ";
		cin>>marks[i];
		if(marks[i]<35)
		flag=1;
		total=total+marks[i];
	}
	if(flag==0)
	status='P';
	else
	status='F';
	
	per=total/5;
	if(total >= 90)
	grade='A';
	else if (total<90 && total >= 80)
	grade='B';
	else if (total<80 && total >= 70)
	grade='C';
	else if (total<70 && total >= 60)
	grade='D';
	else if (total<60 && total >= 50)
	grade='E';
	else if (total<50 && total >= 35)
	grade='F';
	else
	grade='F';
	cout<<endl;
}

void display(){
	cout<<"\n Name : "<<name;
	cout<<"\n Total : "<<total;
	cout<<"\n Percentage : "<<per;
	cout<<"\n Grade : "<<grade;
	cout<<"\n Status : "<<status<<endl;
}

friend void Total();
void percent();
void grad();
void statu();

};

void Total(student s[],int num){
	for(int i=0;i<10;i++){
		if(s[i]total<s[i]num){
		s[i].display();
		}
	}
}
void percent(){}
void grad(){}
void statu(){}

int main(){
	int num;
	char stat;
	student s[10];
	for(int i=0;i<10;i++){
	s[i].setData();
	}
	while(n!=0){
		cout<<"\n--- Functions ---\n 1) Total\n 2) Percentage\n 3) Grade \n 4) Status\n 0) Exit \n Enter your Input : ";
		cin>>n;
		cout<<"\n";
		switch(n){
		case 1:
			cout<<"Enter Total to display less than total : ";
			cin>>num;
			Total(s[],num);
			break;
		case 2:
			cout<<"Enter Percent to display less than Percent : ";
			cin>>num;
			percent(s[],num);
			break;
		case 3:
			cout<<"Enter Grade to display : ";
			cin>>stat;
			grad(s[],num);
			break;
		case 4:
			cout<<"Enter Status to display : ";
			cin>>stat;
			statu(s[],num);
			break;
		case 0:
			break;
		
		}
	}
	

}
