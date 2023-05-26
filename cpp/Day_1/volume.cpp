// Default Argument

#include<iostream>

using namespace std;

int volume(int l=1,int b=1,int h=1){ 	//default Argument Take from Right to left
	int cube=l*b*h;
	return cube;
}

int main(){
	int l,b,h,volu;
	cout<<"Enter L : ";
	cin>>l;
	cout<<"Enter B : ";
	cin>>b;
	cout<<"Enter H : ";
	cin>>h;
	cout << "volume(l,b,h) is " << volume(l,b,h) << endl;
	cout << "volume(l,b) is " << volume(l,b) << endl;
	cout << "volume(l) is " << volume(l) << endl;
	cout << "volume() is " << volume() << endl;
}
