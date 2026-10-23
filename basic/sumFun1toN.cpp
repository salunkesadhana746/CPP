#include<iostream>
using namespace std;

int sum(int n) {
    int total = 0;

    for(int i = 1; i <= n; i++) {
        total += i;
    }

    return total;
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

