#include <iostream>
using namespace std;

class Employee{
	int empId;
    string name;
    string email;
    string role;
    double salary;
    
    public:
    	
    	Employee(){
    		cout << "WelCome to Employee Data..." << endl;
    		cout << endl;
		}
    	
    	Employee(int empId, string name, string email, string role, double salary){
    		this->empId = empId;
    		this->name = name;
    		this->email = email;
    		this->role = role;
    		this->salary = salary;
		}
		
		void getEmployee(){
			 cout << "Employee ID - " << empId << endl;
        	 cout << "Name - " << name << endl;
			 cout << "Email - " << email << endl;
        	 cout << "Role - " << role << endl;
        	 cout << "Salary - " << salary << endl;
        	 cout << endl;
		}
		
		~Employee(){
			cout << "Thank you for search Employee Data..."  << endl;
		}
};

int main(){
	Employee a,
	 b(145, "Pavan", "pavan11@gmail.com", "manager", 45000),
	 c(146, "Sonu", "sonu12@gmail.com", "HR", 85000);
	 
	 b.getEmployee();
	 cout << endl;
	 c.getEmployee();
}
