// Embiguity

#include<iostream>
using namespace std;

void f(int a){
	cout << "Integer\n";
}

void f(float a){
	cout << "float\n";
}

void f1(int a){
	cout << "int\n";
}

void f1(int a,float b=10){
	cout << "int , float\n";
}


int main(){
	f(10);
	f(10.5f);
	f1(10,0);
}
