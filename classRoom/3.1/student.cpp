//Q.1 Write a Program to create Student Record System for 5 students using Encapsulation. 
//Consider the below-mentioned attributes in the Student class:
// stu_id stu_name - stu_age - stu_course - stu_city - stu_email - stu_college


#include<iostream>
using namespace std;

class Student
{
    private:
        int stu_id, stu_age;
        string stu_name, stu_course, stu_city;
        string stu_email, stu_college;

    public:

        void setStudent(int id, string name, int age,
                        string course, string city,
                        string email, string college)
        {
            stu_id = id;
            stu_name = name;
            stu_age = age;
            stu_course = course;
            stu_city = city;
            stu_email = email;
            stu_college = college;
        }

        void getStudent()
        {
            cout << endl;
            cout << "Student Details :-" << endl << endl;

            cout << "Student ID : " << stu_id << endl;
            cout << "Student Name : " << stu_name << endl;
            cout << "Student Age : " << stu_age << endl;
            cout << "Student Course : " << stu_course << endl;
            cout << "Student City : " << stu_city << endl;
            cout << "Student Email : " << stu_email << endl;
            cout << "Student College : " << stu_college << endl;
        }
};

int main()
{
    Student s[5];

    s[0].setStudent(101, "Raj", 18, "BCA", "Surat",
                    "raj@gmail.com", "ABC College");

    s[1].setStudent(102, "Amit", 19, "BBA", "Mumbai",
                    "amit@gmail.com", "XYZ College");

    s[2].setStudent(103, "Karan", 20, "BCA", "Vadodara",
                    "karan@gmail.com", "ABC College");

    s[3].setStudent(104, "Priya", 18, "BCom", "Ahmedabad",
                    "priya@gmail.com", "PQR College");

    s[4].setStudent(105, "Neha", 21, "MCA", "Surat",
                    "neha@gmail.com", "XYZ College");

    for(int i = 0; i < 5; i++)
    {
        s[i].getStudent();
    }

    return 0;
}
