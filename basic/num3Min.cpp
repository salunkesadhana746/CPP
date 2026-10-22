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


    if(a <= b && a <= c) {
        cout << "a is minimum = " << a;
    }
    else if(b <= a && b <= c) {
        cout << "b is minimum = " << b;
    }
    else {
        cout << "c is minimum = " << c;
    }

    return 0;
}

