// create class

class A			// function can define inside the class or outside of the class
{
	public:		// this represent that from here below code of class is public
	void f1(){		// inside class
	cout << "This is F1\n";
	}
	
	void f2();		// outside of the class
};

void A::f2(){
cout<< "This is F2";		// class must be specify with scope resolution operator
}
