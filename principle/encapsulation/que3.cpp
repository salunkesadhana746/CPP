#include <iostream>
using namespace std;

class employee{
	int empId;
    string name;
    string email;
    string role;
    double salary;
    
    public:
    	void setEmployee(int empId, string name, string email, string role, double salary){
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
        	 cout << "Number - " << salary << endl;
		}
};

int main(){
	
	employee a, b;
	
	a.setEmployee(15, "Subhu", "subhu123@gmail.com", "HR", 45000);
	b.setEmployee(16, "vansh", "vansh@gmail.com", "manager", 40000);
	
	a.getEmployee();
	cout << endl;
	b.getEmployee();
	return 0;
}
