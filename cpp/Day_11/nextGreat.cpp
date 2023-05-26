#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<int > num1,num2,out;
	int n;
	
	cout<<"Enter values for V1 : ";
	while (n!=-1)
	{
		cin>>n;
		if(n!=-1)
		num1.push_back(n);
	}
	n=0;
	cout<<"Enter values for V2 : ";
	while (n!=-1)
	{
		cin>>n;
		if(n!=-1)
		num2.push_back(n);
	}
	vector<int>::iterator it;
	for(int i : num1){
		it= find(num2.begin(),num2.end(),i);
		while(it!=num2.end()){
			if(i<*it){
				out.push_back(i);
				break;
			}
			++it;
		}
	}
	
	for(int i:out)
	cout<<i<<endl;

}
