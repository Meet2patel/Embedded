#include<iostream>
using namespace std;

class stat{
	int a,b;
	static int c;
	public:
	void setData(int x, int y){
		a=x;
		b=y;
		c++;
	}
	
	void display(){
	cout<<"A = "<<a<<"\tB = "<<b<<"\tC = "<<c<<endl;
	}
};

int stat::c=0;

int main(){
	stat a1,a2;
	a1.setData(10,20);
	a2.setData(43,45);
	a1.display();
	a2.display();
	cout<<sizeof(a1)<<endl;
}
