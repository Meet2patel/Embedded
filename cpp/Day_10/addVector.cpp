#include<vector>
#include<set>
#include<iostream>
#include <algorithm>
using namespace std;

int main(){

	vector<int> v,v1,v2;
	v1={1,2,3,4};
	v2={9,8,9,4,1};
	int a,b,carry=0;
	int size_1=v1.size(),size_2=v2.size();
	int m = max(size_1,size_2);
	for(int i=0;i<m;i++){
		if(i<=size_1) a=v1[(size_1-1)-i];
		else a=0;
		if(i<=size_2) b=v2[(size_2-1)-i];
		else b=0;
		v.push_back((a+b+carry)%10);
		carry=(a+b+carry)/10;
	}
	if(carry!=0)
	v.push_back(carry);
	reverse(v.begin(),v.end());
	for(int i : v){
	cout<<i;
	}
	cout<<endl;
}
