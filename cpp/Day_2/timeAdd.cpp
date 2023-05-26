// object as argument 

#include<iostream>
using namespace std;

class comp{
int hour,min,sec;

public:
void setData(int h,int m,int s){
sec=s%60;
min=m+(s/60);
hour=min/60;
min=min%60;
hour=hour+h;
}

void sum(comp a,comp b){
sec=a.sec+b.sec;
min=a.min+b.min+(sec/60);
sec=sec%60;
hour=a.hour+b.hour+(min/60);
min=min%60;


}

void display(){
cout<<"hour = "<<hour<<"\tmin = "<<min<<"\tsec = "<<sec<<endl;
}
};

int main(){
int hour,min,sec;
comp c1,c2,c3;

cout<<"Enter values for c1 : \n";
cin>>hour>>min>>sec;
c1.setData(hour,min,sec);
cout<<"Enter values for c2 : \n";
cin>>hour>>min>>sec;
c2.setData(hour,min,sec);

c3.sum(c1,c2);
c3.display();

}
