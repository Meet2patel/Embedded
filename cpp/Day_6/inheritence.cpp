#include<iostream>
using namespace std;

class A1{
	protected:
	int n;
	
	public:
	A1(){
	cout<<"Hello\n";
	}
	
	void f1(){
		cout<< "Parent class of B1.....\n";
	}
};

class B1:public A1{
	protected:			// Inheritence inherite A1..
	int m;
	public:
	B1(){
	cout<<"No ...\n";
	}
	void f2(){
	cout<<"Enter n,m :";
	cin>> n>>m;
	}
	
	void display(){
		cout<<"Your Enterd Values are : "<<n<<" , "<<m<<endl;
	}

};

class C1: public B1{
	int o;
	
	public:
	C1(){}
	
	void f3(){
		cout<<"Enter o,n,m :";
		cin>>o>>n>>m;
	}
	
	


};

int main(){
	C1 b1;
	b1.f3();
	b1.f2();
	b1.f1();
	b1.display();

}
