#include<iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter a numbers = ";
    cin >> a;
	
	 cout << "Enter b numbers = ";
    cin >> b;

	 cout << "Enter c numbers = ";
    cin >> c;


    if(a >= b && a >= c) {
        cout << "a is Maximum = " << a;
    }
    else if(b >= a && b >= c) {
        cout << "b is Maximum = " << b;
    }
    else {
        cout << "c is Maximum = " << c;
    }

    return 0;
}

