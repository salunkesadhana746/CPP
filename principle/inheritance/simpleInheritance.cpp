#include <iostream>
using namespace std;

// 1. simple inheritance
// -> single parent, single child
// -> when one class connect to another one class .....
// -> A -> B

class A{
	public:
		int a = 18;
		void getA(){
			cout << "a = " << a << endl;
		};
};


class B : public A{
	public:
		int b = 16;
		void getB(){
			
			getA();
			cout << "b = " << b << endl;
		}
};

int main(){
	
	B b1;
	b1.getB();
	
}
