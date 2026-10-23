#include <iostream>
using namespace std;

class Employee
{
public:
    int empId;
    string name;
    string email;
    string role;
    string number;

    void setEmployee(int id, string n, string e,
                     string r, string num)
    {
        empId = id;
        name = n;
        email = e;
        role = r;
        number = num;
    }

    void getEmployee()
    {
        cout << "Employee ID - " << empId << endl;
        cout << "Name - " << name << endl;
        cout << "Email - " << email << endl;
        cout << "Role - " << role << endl;
        cout << "Number - " << number << endl;
    }
};

int main()
{
    Employee a, b;

    a.setEmployee(1, "Sadhana", "sadhana@gmail.com", "Developer", "9876543210");

    b.setEmployee(2, "Sanu", "sanu@gmail.com", "Manager", "9876543211");

    a.getEmployee();
    cout << endl;
    b.getEmployee();

    return 0;
}
