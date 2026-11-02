#include<iostream>
using namespace std;

// 4. hierachical inheritance
// -> single parent, multi child
// -> when single class inherit to multiple class ....
// -> A -> B, A -> C, A -> D


class A{
	public:
	int a = 10;
	void getA(){
		cout << "a = " << a << endl;
	}	
};

class B : public A{
	public :
	int b = 20;
	void getB(){
		cout << "b = " << b << endl;
	}	
};

class C : public A{
	public :
	int c = 30;
	void getC(){
		cout << "c = " << c << endl;
	}	
};


int main(){
	B b1;
	C c1;
	c1.getA();
	c1.getC();
	b1.getB();
	b1.getA();
};
