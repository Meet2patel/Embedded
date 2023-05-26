#include<iostream>
using namespace std;

class A{
	public:
	int a;
	void show(){
		cout<<a;
	}
};

class B: public A{
	public:
	int b;
	void show(){
		cout<<b;
	}
};

int main(){
	A a1,*ptr;
	B b1;
	
	ptr=&a1;
	ptr->a=10;
	ptr->show();
	
	ptr=&b1;
	ptr->a=200;
	ptr->show();
	

}
