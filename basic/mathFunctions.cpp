#include<iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    return (double)a / b;
}

int main() {
    int a, b;

    cout << "Enter two numbers = ";
    cin >> a >> b;

    cout << "addition = " << add(a, b) << endl;
    cout << "subtraction = " << subtract(a, b) << endl;
    cout << "umltiplication = " << multiply(a, b) << endl;

    if(b != 0) {
        cout << "division = " << divide(a, b);
    }
    else {
        cout << "division by zero is not allowed";
    }

    return 0;
}

