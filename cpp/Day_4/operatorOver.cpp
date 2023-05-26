// operator overloading using Friend Function

/*
comp operator+ (comp a){
	comp b;
	b.x=a.x+x;
	b.y=a.y+y;
	return b;
}

*/

#include<iostream>
using namespace std;

class comp{
	float x,y;
	
	public:
	comp(float a,float b){
	x=a;
	y=b;
	}
	comp(){}
	friend comp operator+(comp a,comp b);
	friend comp operator-(comp a,comp b);
	friend comp operator*(comp a,comp b);
	friend comp operator/(comp a,comp b);
	void display(){
	cout<<x<<endl;
	cout<<y<<endl;
	}
};

comp operator+ (comp a,comp b){
	comp c;
	c.x=a.x+b.x;
	c.y=a.y+b.y;
	return c;
}

comp operator- (comp a,comp b){
	comp c;
	c.x=a.x-b.x;
	c.y=a.y-b.y;
	return c;
}

comp operator* (comp a,comp b){
	comp c;
	c.x=a.x*b.x;
	c.y=a.y*b.y;
	return c;
}

comp operator/ (comp a,comp b){
	comp c;
	c.x=a.x/b.x;
	c.y=a.y/b.y;
	return c;
}

int main(){
comp a1(10,20),a2(45,87),a3;
a3=a1+a2;	
a3.display();
a3=a1-a2;	
a3.display();
a3=a1*a2;	
a3.display();
a3=a1/a2;	
a3.display();
}
