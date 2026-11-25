#include<iostream>
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
};

