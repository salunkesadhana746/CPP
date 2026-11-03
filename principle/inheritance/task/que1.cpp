#include<iostream>
using namespace std;

//Q.1 Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
//- Class X has the following members: a, b & c attributes in integer data type
//- Class Y has the following members: setData() and getData() methods

class X{
	protected :
		int a, b, c;
};

class Y : public X {
	
	public :
		void setData(){
			cout << "Enter a = ";
			cin >> a;
			
			cout << "Enter b = ";
			cin >> b;
			
			cout << "Enter c = ";
			cin >> c;
		};
		
		void getData(){
			
			int sum;
			
			sum = (a*a*a) + (b*b*b) + (c*c*c);
			
			cout << "sum of all three numbers cubes = " << sum;
			
		}
};

int main(){
	
	Y n1;
	
	n1.setData();
	n1.getData();
	
	return 0;
	
};
