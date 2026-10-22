#include<iostream>
using namespace std;

int main() {
	int units;
    double bill;

    cout << "Enter electricity units = ";
    cin >> units;

	if(units < 0){
		cout << "Invalid units..";
	}
	else if(units <= 100){
		 bill = units * 1.5;
        cout << "Bill = Rs. " << bill;
    }
    else if(units <= 200) {
        bill = 100 * 1.5 + (units - 100) * 2.5;
        cout << "Bill = Rs. " << bill;
    }
    else {
        bill = 100 * 1.5 + 100 * 2.5
             + (units - 200) * 4;
        cout << "Bill = Rs. " << bill;
    }

    return 0;	
	
}

