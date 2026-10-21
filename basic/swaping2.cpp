#include<iostream>
using namespace std;

int main(){
	int a;
	int b;
	int c;
	
	cout << "Enter a = ";
	cin >> a;
	
	cout << "Enter b = ";
	cin >> b;
	
	c = a;
	a = b;
	b = c;
	
	cout << "a = "<<a <<endl;
	cout << "b = "<<b;
	
}
