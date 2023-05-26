#include<iostream>
#include<fstream>
using namespace std;

int main(){
	char ch;
	fstream fout;
	fout.open("Hello.txt",ios::app);
	cout<<"location : "<<fout.tellp()<<"\n";
	fout.seekg(0,ios::beg);
	cout<<"location : "<<fout.tellp()<<"\n";
	fout<<"Hello";
	cout<<"location : "<<fout.tellp()<<"\n";
	fout.put('X');
	//fout.seekp(2,ios::end);
	//fout.seekp(10);
	fout.put('\n');
	fout.put('A');	
	//fout.seekg(-1,ios::end);
	//ch=fout.get();
	cout<<fout.tellg()<<"\n"<<ch<<endl;
}
