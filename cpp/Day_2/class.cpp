// class basic program

#include<iostream>

using namespace std;

class A
{
	int a;
	int b;
	public:
	void setData(int x,int y){
	a=x;
	b=y;
	}
	void display(){
	cout<<"A = "<<a<<endl;
	cout<<"B = "<<b<<endl;
	
	}
};

int main(){
	A obj1,obj2;
	obj1.setData(10,29);
	obj2.setData(32,43);
	cout<< "obj1 parameters \n";
	obj1.display();
	cout<< "obj2 parameters \n";
	obj2.display();	

}
