// Sum using Function

#include<iostream>
using namespace std;

void sum(int a,int b){
int sum = a+b;
cout<<"Sum is "<<sum<<endl;
}

int main(){
	int a,b,c;
	cout << "Enter number A : ";
	cin >> a;
	cout << "Enter number A : ";
	cin >> b;
	sum(a,b);
}
