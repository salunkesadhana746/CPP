#include<iostream>
using namespace std;

int main() {
    int arr[10], n;

    cout << "Enter size = ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "maximum num is  = " << max;

    return 0;
}

