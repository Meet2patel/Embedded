// Swap using Reference Operator "&"

#include<iostream>
using namespace std;

void swap(int &a,int &b){
	a=a+b;
	b=a-b;
	a=a-b;
}
int main(){
	int a,b;
	cout<<"Enter A : ";
	cin>>a;
	cout<<"Enter B : ";
	cin>>b;
	swap(a,b);
	cout<<"A = "<<a<<" B = "<<b<<endl;
}
