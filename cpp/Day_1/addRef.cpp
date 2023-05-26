// addition using call by reference

#include<iostream>
using namespace std;

void add(int &x){
	x=x+10;
}
int main(){
	int a=10;
	int &x =a;			// x is reference variable or calls as alias
	cout<<"A = "<<a<<endl;
	add(a);
	cout<<"A(after add 10) = "<<x<<endl;
}
