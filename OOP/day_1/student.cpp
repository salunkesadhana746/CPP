#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    string course;
    string city;
    double marks;

    void setStudent(int roll, string n, string c,
                    string ct, double m)
    {
        rollNo = roll;
        name = n;
        course = c;
        city = ct;
        marks = m;
    }

    void getStudent()
    {
        cout << "Roll No - " << rollNo << endl;
        cout << "Name - " << name << endl;
        cout << "Course - " << course << endl;
        cout << "City - " << city << endl;
        cout << "Marks - " << marks << endl;
    }
};

int main()
{
    Student a, b;

    a.setStudent(1, "Sadhana", "BCA", "Surat", 85.5);
    b.setStudent(2, "Sanu", "BCA", "Navsari", 90);

    a.getStudent();
    cout << endl;
    b.getStudent();

    return 0;
}
