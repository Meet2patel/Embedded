#include<iostream>
#include<string.h>
using namespace std;

class concate{
	char str[50];
	
	public:
	void add(){
	cin >> str;
	}
	
	concate operator+(concate a){
		concate c3;
		strcat(str,a.str);
		strcpy(c3.str,str);
		return c3;
	}

	void display(){
	cout<<str<<endl;
	}
};

int main(){
	concate c1,c2,c3;

	c1.add();
	c2.add();
	c3=(c1+c2);
	c3.display();
}
