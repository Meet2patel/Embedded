#include<iostream>
using namespace std;

class Time{
	int hour,min;
	
	public:
	Time(){}
	Time(int x){
		hour=x/60;
		min=x%60;
	}
	void display(){
		cout<<hour<<" "<<min<<endl;
	
	}

};

int main(){
	Time t;
	int x;
	cout << "Enter value of integer : ";
	cin>>x;
	t=x;
	t.display();
	
}
