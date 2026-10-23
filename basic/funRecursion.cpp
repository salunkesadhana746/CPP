#include<iostream>
using namespace std;

int sum(int n) {
    if(n <= 0) {
        return 0;
    }

    return n + sum(n - 1);
}

int main() {
    int n;

    cout << "Enter n = ";
    cin >> n;

    if(n < 1) {
        cout << "Enter a positive number";
    }
    else {
        cout << "Sum = " << sum(n);
    }

    return 0;
}

