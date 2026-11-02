#include<iostream>
using namespace std;

// 5. hybrid inheritance
// -> combination of two or more inheritance.
// -> A -> B -> C, B -> D, C -> E, D -> E


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

class D : public B, public C{
	public :
	int d = 40;
	void getD(){
		cout << "d = " << d << endl;
	}	
};


int main(){

};
