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

    
    if (a <= b) {
        if (a <= c) {
            if (a <= d) {
                cout << "minimum number is a: " << a;
            } else {
                cout << "minimum number is d: " << d;
            }
        } else {
            if (c <= d) {
                cout << "minimum number is c: " << c;
            } else {
                cout << "minimum number is d: " << d;
            }
        }
    } else {
        if (b <= c) {
            if (b <= d) {
                cout << "minimum number is b: " << b;
            } else {
                cout << "minimum number is d: " << d;
            }
        } else {
            if (c <= d) {
                cout << "minimum number is c: " << c;
            } else {
                cout << "minimum number is d: " << d;
            }
        }
    }

    return 0;
}

