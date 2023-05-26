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
	friend void operator+=(int a,comp &b);
	friend void operator+=(comp &b,int a);
	friend void operator-=(int a,comp &b);
	friend void operator-=(comp &b,int a);
	friend void operator*=(int a,comp &b);
	friend void operator*=(comp &b,int a);
	friend void operator/=(int a,comp &b);
	friend void operator/=(comp &b,int a);
	void display(){
	cout<<x<<endl;
	cout<<y<<endl;
	}
};

void operator+= (int a,comp &b){
	b.x=a+b.x;
	b.y=a+b.y;
}

void operator+= (comp &b,int a){
	b.x=a+b.x;
	b.y=a+b.y;
}

void operator-= (int a,comp &b){
	b.x=a-b.x;
	b.y=a-b.y;
}

void operator-= (comp &b,int a){
	b.x=b.x-a;
	b.y=b.y-a;
}


void operator*= (int a,comp &b){
	b.x=b.x*a;
	b.y=b.y*a;
}

void operator*= (comp &b,int a){
	b.x=b.x*a;
	b.y=b.y*a;
}
void operator/= (int a,comp &b){
	b.x=a/b.x;
	b.y=a/b.y;
}

void operator/= (comp &b,int a){
	b.x=b.x/a;
	b.y=b.y/a;
}
int main(){
comp a1(10,20),a2(45,87),a3;
a1+=10;	
a1.display();

}
