// cout and cin for object of classes

#include<iostream>
using namespace std;

class comp{
	int x,y;
	
	public:
	
	/*comp(int a,int b){
	x=a;
	y=b;
	}
	comp(){}*/
	
	friend void operator>>(istream &input,comp &a);		// require assign address 
	friend void operator<<(ostream &output,comp a);
	
};

void operator<<(ostream &output,comp a){				// output viA ostream
	output<<"X = "<<a.x<<endl;
	output<<"Y = "<<a.y<<endl;
}

void operator>>(istream &input,comp &a){				// input via istream
	cout<<"X = ";
	input>>a.x;
	cout<<"Y = ";
	input>>a.y;
}

int main(){
	comp a;
	cout<<a;
	cin>>a;
	cout<<a;
}
