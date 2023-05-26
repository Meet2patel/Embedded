#include<iostream>
using namespace std;

class A{
	int a;
	public:
	A(int x){
	a=x;
	}
	friend void max(A x,B y);
};

class B{
	int b;
	public:
	A(int x){
	b=x;
	}
	friend void max(A x,B y);
};

void max(A x,B y){
	if(x.a>y.b){
	cout<<"A is max \n"
	}
	else
	cout<< "B is max \n"

}
