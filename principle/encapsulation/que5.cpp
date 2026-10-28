#include <iostream>
using namespace std;

class Length
{
    double inches;
    double feet;

public:
    void setData()
    {
        cout << "Enter inches: ";
        cin >> inches;
    }

    void getData()
    {
        feet = inches / 12;

        cout << "Inches - " << inches << endl;
        cout << "Feet - " << feet << endl;
    }
};

int main()
{
    Length a;

    a.setData();
    a.getData();

    return 0;
}

