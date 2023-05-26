

#include<iostream>
#include<string.h>
using namespace std;

class comp{
	char s[100];
	
	public:
	void setData(){
	cout<<"Give string 1 : ";
	cin>>s;
	}
	
	//friend bool operator==(comp a,comp b);
	
	bool operator==(comp a){
		int temp;
		temp = strcmp(s,a.s);
		if(temp==0)
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
	comp a1,a2;
	a1.setData();
	a2.setData();
	if(a1==a2){
	cout<< "Both object are same...."<<endl;
	}
	else
	cout<<"Not Same"<<endl;

}
