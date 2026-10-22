#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    
    cout << "Enter a numbers = ";
    cin >> a;
	
	 cout << "Enter b numbers = ";
    cin >> b;

	 cout << "Enter c numbers = ";
    cin >> c;

	cout << "Enter d numbers = ";
    cin >> d;

    
    if (a >= b) {
        if (a >= c) {
            if (a >= d) {
                cout << "Maximum number is a: " << a;
            } else {
                cout << "Maximum number is d: " << d;
            }
        } else {
            if (c >= d) {
                cout << "Maximum number is c: " << c;
            } else {
                cout << "Maximum number is d: " << d;
            }
        }
    } else {
        if (b >= c) {
            if (b >= d) {
                cout << "Maximum number is b: " << b;
            } else {
                cout << "Maximum number is d: " << d;
            }
        } else {
            if (c >= d) {
                cout << "Maximum number is c: " << c;
            } else {
                cout << "Maximum number is d: " << d;
            }
        }
    }

    return 0;
}

