#include<vector>
#include<set>
#include<iostream>
using namespace std;

int main(){
	set<int> s1,dup;
	vector<int> v;
	v={10,20,30,40,50,60,70,80,60};
	for(int i=0;i<v.size();i++){
		if(s1.count(v[i])){
			dup.insert(v[i]);
		}
		else
		s1.insert(v[i]);
	}
	for(int i:dup)
	{
	cout<<i<<endl;
	}

	

}
