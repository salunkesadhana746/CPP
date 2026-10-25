#include <iostream> 
using namespace std;

class student{
	int rollNo;
    string name;
    string course;
    string city;
    double marks;
    
    public:
        void setStudent(int rollNo, string name, string course, string city, double marks){
    		this->rollNo = rollNo;
    		this->name = name;
    		this->course = course;
    		this->city = city;
    		this->marks = marks;
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

int main(){
	
	student a, b;
	
	a.setStudent(1, "alok", "AI/AM", "surat", 80);
	b.setStudent(2, "vikas", "MBA", "mumbai", 70);
	
	a.getStudent();
	cout << endl;
	b.getStudent();
	
	return 0;
}
