
	
#include<iostream>
using namespace std;

class item2{
	public:
	int code,total;

	item2(){}
	
	
	void display(){
		cout<<"code : "<<code<<"\nTotal Bill : "<<total<<endl;
	}
};

class item1{
	int code,price,qty;
	public:
	item1(int a,int b,int c){
	code=a;price=b;qty=c;
	}
	operator item2(){
		item2 temp;
		temp.code=code;
		temp.total=price*qty;
		return temp;
	}
	
	operator int(){
		return price*qty;
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



int main(){
	item1 a1(101,20,14);
	item2 a2;
	a2=a1;
	//cout<<a2;
	a2.display();
}
