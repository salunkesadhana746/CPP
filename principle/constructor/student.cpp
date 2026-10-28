#include <iostream>
using namespace std;

class Student{
	int rollNo;
	string name;
	string course;
	string city;
	double marks;
	
	public:
		Student(){
			cout << "WelCome to Student Data..." << endl;
			cout << endl;
		}
		
		Student(int rollNo, string name, string course, string city, double marks){
			
			this->rollNo = rollNo;
			this->name = name;
			this->course = course;
			this->city = city;
			this->marks = marks;
		}
		
		void getStudent(){
			 cout << "Roll No - " << rollNo << endl;
        	 cout << "Name - " << name << endl;
        	 cout << "Course - " << course << endl;
        	 cout << "City - " << city << endl;
        	 cout << "Marks - " << marks << "%" << endl;
        	 cout << endl;
		}
		
		~Student(){
			cout << "Thank you for Search Student Data..." << endl;
		}
	
};

int main(){
	
	Student a,
	b(8, "Shruti", "BCA", "UP", 85),
	c(9, "Jayu", "MBA", "Madhura", 95);
	
	b.getStudent();
	cout << endl;
	c.getStudent();
	
	
	return 0;
}
