// obj as argument 

#include<iostream>
using namespace std;

class comp{
int x,y;

public:
void setData(int a,int b){
x=a;
y=b;
}

void sum(comp a,comp b){
x=a.x+b.x;
y=a.y+b.y;
}

void display(){
cout<<"x = "<<x<<"\ty = "<<y<<endl;
}
};

int main(){
int a,b;
comp c1,c2,c3;

cout<<"Enter values for c1 : \n";
cin>>a>>b;
c1.setData(a,b);
cout<<"Enter values for c2 : \n";
cin>>a>>b;
c2.setData(a,b);

c3.sum(c1,c2);
c3.display();

}
