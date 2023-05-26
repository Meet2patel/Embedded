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
	friend void operator++(comp &a);
	friend void operator++(comp &a,int);
	friend void operator--(comp &a);
	friend void operator--(comp &a,int);

	void display(){
	cout<<x<<endl;
	cout<<y<<endl;
	}
};

void operator++(comp &a)		// pre-increment
{	
	a.x=a.x+1;
	a.y=a.y+1;
}

void operator++(comp &a,int)		// Post-increment 
{	
	a.x=a.x+1;
	a.y=a.y+1;
}

void operator--(comp &a)		// pre-decrement
{	
	a.x=a.x-1;
	a.y=a.y-1;
}

void operator--(comp &a,int)		// Post-decrement 
{	
	a.x=a.x-1;
	a.y=a.y-1;
}


int main(){
comp a1(10,20),a2(45,87),a3;

++a1;
a1++;
a1.display();

a2--;
--a2;
a2.display();
}
