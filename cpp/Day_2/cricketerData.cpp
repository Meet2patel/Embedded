#include<iostream>
using namespace std;

class cricketer{
	char name[20];
	int no_of_match;
	int total;
	int high;
	int avg;
	
	public:
	void setData(){
		cout<<"Enter the name of cricketer : ";
		cin>>name;
		cout<<"Enter the No. of matches : ";
		cin>>no_of_match;
		cout<<"Enter the total runs : ";
		cin>>total;
		cout<<"Enter highest runs : ";
		cin>>high;
		cout<<"Enter the Average runs of player : ";
		cin>>avg;
		cout<<endl;
	}
	
	void display(){
		cout<<"Name of cricketer : "<<name<<endl;
		cout<<"No. of matches : "<<no_of_match<<endl;
		cout<<"Total runs : "<<total<<endl;
		cout<<"Highest runs : "<<high<<endl;
		cout<<"Average runs of player : "<<avg<<endl<<endl<<endl;
	}

};

int main(){
	cricketer p1,p2,p3;
	p1.setData();
	p2.setData();
	p3.setData();
	p1.display();
	p2.display();
	p3.display();
}
