#include<iostream>
#include<string.h>
using namespace std;

class Person{
	protected:
	char name[20];
	
	public:
	Person(){}
	Person(char *p){
		//cout<< "Enter name : ";
		strcpy(name,p);
	}
};

class employee : public Person{
	protected:
	int empId;
	
	public:
	employee(){}
	employee(char *p,int n):Person(p){
		//cout<<"Enter Employee Id : ";
		empId=n;
	}
};

class manager : public employee{
	int num;
	
	public:
	manager(){}
	manager(char *p,int n,int nu):employee(p,n){
		num=nu;
	}
	void setdata(char *p,int n,int nu){
		strcpy(name,p);
		empId=n;
		num=nu;
	}
	
	void display(){
		cout<<"Name : "<<name<<"\nEmp Id : "<<empId<<"\nNum : "<<num<<endl;
	
	}

};

int main(){
	manager m1,*ptr;
	ptr=&m1;
	ptr->setdata("name",10,20);
	cout<<endl;
	m1.display();
}
