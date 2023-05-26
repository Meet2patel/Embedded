// Function Overloading function name is same but arguments are different.

#include<iostream>

using namespace std;

void sum(int a,int b,int c){
int sum = a+b+c;
cout<<"Sum is "<<sum<<endl;
}
void sum(int a,int b){
int sum = a+b;
cout<<"Sum is "<<sum<<endl;
}
void sum(int a,int b,int c,int d){
int sum = a+b+c+d;
cout<<"Sum is "<<sum<<endl;
}


int main(){
	int a,b,c,d;
	cout<<"Enter A : ";
	cin>>a;
	cout<<"Enter B : ";
	cin>>b;
	cout<<"Enter C : ";
	cin>>c;
	cout<<"Enter D : ";
	cin>>d;
	sum(a,b);
	sum(a,b,c);
	sum(a,b,c,d);
}
