#include <iostream>
using namespace std;

class Length
{
public:
    double inches;
    double feet;

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

