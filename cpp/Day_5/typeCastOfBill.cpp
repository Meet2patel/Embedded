#include<iostream>
using namespace std;

class item1{
	int code,price,qty;
	public:
	item1(int a,int b,int c){
	code=a;price=b;qty=c;
	}
	int getCode(){
		return code;
	}
	int getPrice(){
		return price;
	}
	int getQty(){
		return qty;
	}
};

class item2{
	int code,total;
	
	public:
	item2(){}
	item2(item1 a){
		code=a.getCode();
		total=a.getPrice()*a.getQty();
	}
	
	void display(){
		cout<<"code : "<<code<<"\nTotal Bill : "<<total<<endl;
	}
};

int main(){
	item1 a1(101,20,14);
	item2 a2;
	a2=a1;
	a2.display();
}
