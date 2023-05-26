

#include<iostream>
using namespace std;

class comp{
	int x,y;
	
	public:
	comp(){}
	comp(int a,int b){
	x=a;
	y=b;
	}
	
	//friend bool operator==(comp a,comp b);
	
	bool operator==(comp a){
		if(a.x == x && a.y==y)
		return 1;
		else
		return 0;
	}
};

/*
bool operator==(comp a,comp b){
		if(a.x == b.x && a.y==b.y)
		return 1;
		else
		return 0;
	}
*/

int main(){
	comp a1(10,20),a2(10,20);
	if(a1==a2){
	cout<< "Both object are same...."<<endl;
	}

}
