#include<iostream>
using namespace std;

int main() {
    int n, temp, digit;
    int sum = 0, product = 1;

    cout << "Enter number = ";
    cin >> n;

    temp = n;

    while(temp > 0) {
        digit = temp % 10;

        sum = sum + digit;
        product = product * digit;

        temp = temp / 10;
    }

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;

    if(sum == product) {
        cout << "Magic number";
    }
    else {
        cout << "Not a magic number";
    }

    return 0;
}

