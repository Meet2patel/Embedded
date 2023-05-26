#include<iostream>
using namespace std;

class DM{
	int km,meter;
	public:
	void set(){
	cout<< "Enter DM km : ";
	cin>>km;
	cout<< "Enter DM meter : ";
	cin>>meter;
	}
	friend DM sum (DM d1,DB d2);

};

class DB{
	int feet,inches;
	public:
	void set(){
	cout<< "Enter DB feet : ";
	cin>>feet;
	cout<< "Enter DM inches : ";
	cin>>inches;
	}
	
	friend DM sum (DM d1,DB d2);
};

DM sum (DM d1,DB d2){
	DM d3;
	d3.km=d1.km+d2.feet/3281.0;
	d3.meter=d1.meter+d2.inches/39.37;
	return d3;
}

