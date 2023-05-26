#include<iostream>
using namespace std;

class comp{
	int x,y;
	
	public:
	comp(int a,int b){
	x=a;
	y=b;
	}
	comp(){}
	void operator++()		// pre-increment
	{	
		x=x+1;
		y=y+1;
	}
	
	void operator++(int a)		// Post-increment 
	{	
		x=x+1;
		y=y+1;
	}
	
	void operator--()		// pre-decrement
	{	
		x=x-1;
		y=y-1;
	}
	
	void operator--(int a)		// Post-decrement 
	{	
		x=x-1;
		y=y-1;
	}

	void display(){
	cout<<x<<endl;
	cout<<y<<endl;
	}
};


int main(){
comp a1(10,20),a2(45,87),a3;

++a1;
a1++;
a1.display();

a2--;
--a2;
a2.display();
}
