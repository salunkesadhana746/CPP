#include <iostream>
using namespace std;

class Length{
	
	double inches;
	double feet;

public :	
	Length(){
		cout << "Here find lenght..." << endl;
		cout << endl;
		
		cout << "Enter inches = " ;
		cin >> inches;
		cout << endl;
	}
	
	void getLength(){
		
		feet = inches / 12;
		
		cout << "inches = " << inches << endl;
		cout << "feet = " << feet << endl;
		cout << endl;
	}
	
	~Length(){
		cout << "Thank you for finding length!" << endl;
		cout << endl;
	}
};

int main(){
	
	Length a;
	
	a.getLength();
	
	return 0;
}
