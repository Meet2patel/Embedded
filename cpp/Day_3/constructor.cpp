#include<iostream>
#include<string.h>
using namespace std;

class cricketer{
	char name[20];
	int no_of_match;
	int total;
	int high;
	int avg;
	
	public:
	cricketer(){
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
	
	cricketer(char a[],int b,int c,int d,int e){
		strcat(name,a);
		no_of_match=b;
		total=c;
		high=d;
		avg=e;
	
	}
	
	cricketer(cricketer &obj){
		strcat(name,obj.name);
		no_of_match=obj.no_of_match;
		total=obj.total;
		high=obj.high;
		avg=obj.avg;
	
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
	cricketer p1,p2("meet",45,100,6,2),p3(p1);
	p1.display();
	p2.display();
	p3.display();
}
