#include<iostream>
using namespace std;

int main() {
    int arr[10], n;
    int sum = 0;

    cout << "Enter size = ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Array Average = " << sum / n;

    return 0;
}

