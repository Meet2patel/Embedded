#include<iostream>
using namespace std;

class matrix{
	int m[3][3];
	
	public:
	void setData(){
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cout<<"m["<<i<<"]"<<"["<<j<<"] : ";
				cin>>m[i][j];
			}
		}
	}
	matrix operator+(matrix a)
	{	
		matrix x;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				
				x.m[i][j]=m[i][j]+a.m[i][j];
			}
		}
		return x;
	}
	
	matrix operator*(matrix a)		
	{	
		matrix x;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				
				x.m[i][j]=(m[i][0]*a.m[0][j]) + (m[i][1]*a.m[1][j]) + (m[i][2]*a.m[2][j]);
			}
		}
		return x;
	}
	
	matrix operator-(matrix a)		
	{	
		matrix x;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				
				x.m[i][j]=m[i][j]-a.m[i][j];
			}
		}
		return x;
	}
	

	void display(){
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				
				cout<<m[i][j]<<" ";
			}
			cout<<endl;
		}
	}
};


int main(){
matrix m1,m2,m3;
cout<<"M1 : \n";
m1.setData();
cout<<"M2 : \n";
m2.setData();
cout<<"M3 (Addition) : \n";
m3=m1+m2;
m3.display();
cout<<endl;
m3=m1*m2;
m3.display();
}
