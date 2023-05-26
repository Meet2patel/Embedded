#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
	vector<int> v1,v2,v3;
	map<int,int> map1;
	int n;
	cout<<"Enter values for V1 : ";
	while (n!=-1)
	{
		cin>>n;
		if(n!=-1)
		v1.push_back(n);
	}
	n=0;
	cout<<"Enter values for V2 : ";
	while (n!=-1)
	{
		cin>>n;
		if(n!=-1)
		v2.push_back(n);
	}
	
	for(int i: v1)
	map1.insert(pair<int, int>(i, 1));
	
	for(int i: v2){
	map1[i]+=1;
	}
	
	map<int,int>::iterator it = map1.begin();
	
	while(it!=map1.end()){
		if(it->second>1)
		v3.push_back(it->first);
		cout<<".........."<<it->first<<"...."<<it->second<<endl;
		
		++it;
	}
	

	cout<<"intersection : \n";
	for(int i: v3)
	cout<<i<<endl;
	
}
