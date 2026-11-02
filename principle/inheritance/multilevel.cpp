#include<iostream>
using namespace std;

// 2. multilevel inheritance
// -> multi parent, multi child
// -> when one class connect to another one and that one connect to another second class....
// -> A -> B -> C -> D ....

class A{
	public:
	int a = 5;
	void getA(){
		cout << "a = " << a << endl;
	}	
};

class B : public A{
	public :
	int b = 10;
	void getB(){
		cout << "b = " << b << endl;
	}	
};

class C : public B{
	public :
	int c = 15;
	void getC(){
		cout << "c = " << c << endl;
	}	
};

int main(){
	C c1;
	c1.getA();
	c1.getB();
	c1.getC();
};
