//Q.3 Write a Program to print the rate of interest of different banks using hierarchical inheritance:
//- Class RBI -> Class SBI
//- Class RBI -> Class BOB
//- Class RBI -> Class ICICI
//- inherit rate attribute and getROI() method in all child classes


#include<iostream>
using namespace std;

class RBI {
    public:
        float rate;

        RBI(float r) {
            rate = r;
        }

        void getROI() {
            cout << "Rate of Interest = " << rate << "%" << endl;
        }
};

class SBI : public RBI {
    public:
        SBI() : RBI(6.5) {
        }
};

class BOB : public RBI {
    public:
        BOB() : RBI(7.0) {
        }
};

class ICICI : public RBI {
    public:
        ICICI() : RBI(7.5) {
        }
};

int main() {

    SBI s;
    BOB b;
    ICICI i;

    cout << "SBI Bank: ";
    s.getROI();

    cout << "BOB Bank: ";
    b.getROI();

    cout << "ICICI Bank: ";
    i.getROI();

    return 0;
}



