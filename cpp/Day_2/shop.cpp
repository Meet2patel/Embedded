#include<iostream>
using namespace std;

class shop{
	char name[20];
	int code[30],price[30],count=0,total=0,temp;
	
	public:
	void setName(){
	cout<< "Enter Your Name : ";
	cin>>name;
	}
	
	void addItem(){
	cout<< "Enter Item Code : ";
	cin>>code[count];
	cout<< "Enter Item Price : ";
	cin>>price[count];
	count++;
	}
	
	void remArr(int i){
		for(i=i;i<count-1;i++){
		code[i]=code[i+1];
		price[i]=price[i+1];
		}
		count--;
	}
	
	void remove(){
	cout<<"Enter item Code to remove";
	cin>>temp;
	for(int i=0;i<=count;i++){
		if(code[i]==temp){
			remArr(i);
		}
	}
	}
	
	void Total(){
		total=0;
		for(int i=0;i<count;i++){
			total=total+price[i];
		}
		cout << "Bill amount is Now : "<<total<<endl;
	}
	
	void bill(){
		total=0;
		for(int i=0;i<count;i++){
			total=total+price[i];
		}
		cout<<"Name : "<<name<<"\n";
		cout<<"\nItem Code\t\tItem Price\n";
		cout<<"----------------------------------------\n";
		for(int i=0;i<count;i++){
			cout<<code[i]<<"\t\t\t"<<price[i]<<endl;
		}
		cout<<"----------------------------------------\n";
		cout<<"Total Bill \t\t"<<total<<endl;
	}
};

int main(){
	int n;
	shop s1;
	s1.setName();
	while(n!=0){
		cout<<"\n--- Functions ---\n 1) Add Item\n 2) Remove Item\n 3) Display Total Amount \n 4) Display Bill\n 0) Exit & Display Bill\n Enter your Input : ";
		cin>>n;
		cout<<"\n";
		switch(n){
		case 1:
			s1.addItem();
			break;
		case 2:
			s1.remove();
			break;
		case 3:
			s1.Total();
			break;
		case 4:
			s1.bill();
			break;
		case 0:
			s1.bill();
			break;
		
		}
	}
	

}
