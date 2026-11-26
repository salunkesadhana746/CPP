#include<iostream>
using namespace std;

class Vehicle{
	
	int VehicleId, year;
	string manufacturer, model;
	
	static int totalVehicles;
	
	public :
		Vehicle(){
			this->VehicleId = 0;
			this->model = "";
			this->manufacturer = "";
			this->year = 0;
			totalVehicles++;
		}
		
		~Vehicle(){
			totalVehicles--;
		}
		
		void getVehicleID(){
			return vehicleId = 0;
		}
		
		void setVehicle(){
			
			cout << "Enter Your Vehicle ID -: ";
			cin >> this->vehicleId;
			cout << "Enter Your Vehicle Model -: ";
			cin >> this->model;
			cout << "Enter Your Vehicle Manufacturer -: ";
			cin >> this->manufacturer;
			cout << "Enter Your Vehicle year -: ";
			cin >> this->year;
			cout << endl;
			
		}
		
		void displayVehicle(){
			
			cout << "Vehicle ID -: " << this->VehicleId <<endl;
			cout << "Vehicle Model -: " << this->model <<endl;
			cout << "Vehicle Manufacturer -: " << this->manufacturer <<endl;
			cout << "Vehicle Registry Year -: " << this->year <<endl;
			cout << endl;
		}
};

int Vehicle::totalVehicles = 0;

class Car : public Vehicle{
	int fuelType;
};

class ElectricCar : public Car {
	int betteryCapacity;
};

class sportsCar : public ElectricCar{
	int topSpeed;
};

class Sedan : public Car{
	
};

class SUV : public Car{
	
};

class AirCraft : public Car{
	int flightRange;
};

class FlyingCar : public Car, public AirCraft{
	
};


class vehicleRegistry{
	Vehicle v1;
	int totalVehicles = 0;
	
	public :
		
		void addVehicle(){
			
			v1[totalVehicles].setVehicle();
			totalVehicles++;
		}
		
		void displayAllVehicles(){
			cout <<"--------------------------------------"<<endl;
			
			for(int i=0; i < totalVehicles; i++){
				v1[i].displayVehicle();
				cout <<endl;
			}
			cout <<"--------------------------------------"<<endl;
		}
		
		void searchVehicle(){
			
			int id;
			cout << "Enter Vehicle ID -: ";
			cin >> id;
			
			for(int i=0; i< totalVehicles; i++){
				
				if(id == v1[i].getVehicleID()){
					v1[i].displayVehicle();
				};
			};
		}
}

int main(){
	
	vehicleRegistry v1;
	int choice;
	bool isON = true;
	
	cout << "WelCome to Vehicle Registry System ...!" << endl << endl;
	
	do{
		
		cout << "Enter 1 to Add Vehicle. " << endl;
		cout << "Enter 2 to Display Vehicle. " << endl;
		cout << "Enter 3 to Search Vehicle by ID. " << endl;
		cout << "Enter 4 to Exit. " << endl;
		cout << endl;
		
		cout << "Enter Your Choice -: ";
		cin >> choice;
		cout << endl;
		
		switch(choice){
			case 1:
				v1.addVehicle();
				break;
				
			case 2:
				v1.displayAllVehicles();
				break;
				
			case 3:
				v1.searchVehicle();
				break;
			
			case 4:
				isON = false;
				cout << "Exited Program...!"<<endl;
				break;
				
			default:
				cout << "Enter Valid Input...!";
				break;
				
		}
		
	}
	while(isON);
	
	
	return 0;
}

/*/#include<iostream>
using namespace std;

class Vehicle{
	
		int vehicleID, year;
		string manufacturer, model; 
		
	static int totalVehicle;	
	
	public :	
	//default constructor is set empty
	Vehicle(){
		this->vehicleID = 0;
		this->manufacturer = "";
		model = "";
		year = 0;
		totalVehicle++;
	}
	
	
	//destructor
	~Vehicle(){
		totalVehicle--;
	}
	
	int getVehicleID()
	{
		return this->vehicleID;
	}
	
	void setVehicle(){
		
		cout << "Enter your Vehicle ID -: ";
		cin >> this->vehicleID;
		cout << "Enter your Vehicle Model -: ";
		cin >> this->model;
		cout << "Enter your Vehicle Manufacturer -: ";
		cin >> this->manufacturer;
		cout << "Enter your Vehicle Year -: ";
		cin >> this->year;
		cout << endl;
	
	}
	
	void displayVehicle()
        {
            cout << "Vehicle ID :- " << this->vehicleID << endl;
            cout << "Vehicle Model :- " << this->model << endl;
            cout << "Vehicle Manufacturer :- " << this->manufacturer <<endl; 
            cout << "Vehicle registration Year  :- " << this->year << endl;
        }
	
	
};

// static 
int Vehicle::totalVehicle = 0;



class Car : public Vehicle{	
	string fuleType;
};

class ElectricCar : public Car {
	int bettryCapacity;
};

class SportsCar : public ElectricCar{
	int topSpeed;
};

class SUV : public Car {
	
};

class Sedan : public Car {
	
};

class AirCraft : public Car {
	int flightRange;
};

class FlyingCar : public Car, public AirCraft{
	
};


class VehicleRegistry{
	
	Vehicle v1[50];
	int totalVehicle =0;
	
	public :
		void addVehicles(){
			v1[totalVehicle].setVehicle();
			totalVehicle++;
		}
		
		void displayAllVehicles(){
			cout << "--------Display Vehicle---------" <<endl;
			
			for(int i=0; i< totalVehicle; i++){
				v1[i].displayVehicle();
				cout << endl;
			}
			cout << "--------------------------------" << endl;
		}
		
		void searchVehicle(){
			
			int id;
			cout << "Enter Vehicle ID -: ";
			cin >> id;
			
			for(int i = 0; i < totalVehicle; i++){
				if(id == v1[i].getVehicleID()){
					v1[i].displayVehicle();
				}
			}
			
		};
};

int main(){
	
	VehicleRegistry v1;
	int choice;
	bool isON = true;
	
	
	do{
		cout << endl;
		cout << "WelCome to Vehicle Registry System !!" << endl;
		cout << endl;
		cout << "Enter 1 to Add Vehicle. " << endl;
		cout << "Enter 2 to Display All Vehicle. " << endl;
		cout << "Enter 3 to Search Vehicle by ID. " << endl;
		cout << "Enter 4 to Exit system" << endl;
		cout << endl;
		
		cout << "Enter your Choice -: ";
		cin >> choice;
		cout << endl;
		
		switch(choice){
			case 1:
				v1.addVehicles();
				break;
				
			case 2:
			    v1.displayAllVehicles();
			    break;
			    
			case 3:
				v1.searchVehicle();
				break;
				
			case 4:
				isON = false;
				cout << "Program is Exited...!" << endl;
				break;
				
			default:
				cout << "Enter Valid Input...!";
				break;
				
		}
	}while(isON);
	
	return 0;
};*/
