//Q.4 Write a Program to demonstrate the use of a scope resolution operator to solve ambiguity errors.

#include<iostream>
using namespace std;

class Employee {
    public:
        int id = 101;
        string name = "Naresh";
        double salary = 25000;

        void display() {
            cout << "Employee Details" << endl;
            cout << "Id : " << id << endl;
            cout << "Name : " << name << endl;
            cout << "Salary : " << salary << endl;
        }
};

class Manager {
    public:
        int id = 102;
        string name = "vaibhav";
        double salary = 50000;

        void display() {
            cout << "Manager Details" << endl;
            cout << "Id : " << id << endl;
            cout << "Name : " << name << endl;
            cout << "Salary : " << salary << endl;
        }
};

class Company : public Employee, public Manager {
};

int main() {

    Company c;

    c.Employee::display();

    cout << endl;

    c.Manager::display();

    return 0;
}
