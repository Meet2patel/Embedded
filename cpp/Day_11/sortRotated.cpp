#include<iostream>
#include<vector>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){
	vector<int> v;
	int n,min_index=0,min_val,flag=0,flag_final=0,temp;
	cout<<"Enter values : ";
	while (n!=-1)
	{
		cin>>n;
		if(n!=-1)
		v.push_back(n);
	}
	min_val=v[0];
	for(int i=0;i<v.size();i++){
	if(min_val>min(min_val,v[i])){
	min_index = i;
	min_val=v[i];
	}
	}
	
	for(int i=min_index;i<v.size();i++){
		if(flag==1 && i==min_index){
			break;
		}
		if(temp>v[i]){
		flag_final=1;
		break;
		}
		temp=v[i];
		
		if(i==(v.size()-1)){
		i=-1;
		flag=1;
		}
	}
	
	if(flag_final==0)
	cout<<"Vector is Sorted And Rotated....\n";
	else
	cout<<"Vector is Not Sorted And Rotated....";
}
