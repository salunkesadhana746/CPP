#include<iostream>
using namespace std;

// 3. multiple inheritance
// -> multi parent , single child
// -> when multiple class inherit/connect to single class...
// -> A -> Z, B -> Z, C -> Z


class A{
	public:
	int a = 10;
	void getA(){
		cout << "a = " << a << endl;
	}	
};

class B{
	public :
	int b = 20;
	void getB(){
		cout << "b = " << b << endl;
	}	
};

class C : public A, public B{
	public :
	int c = 30;
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
