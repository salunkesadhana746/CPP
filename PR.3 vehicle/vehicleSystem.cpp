#include<iostream>
using namespace std;

class Vehicle{
	
	// declear attributes
	int vehicleId, year;
	string manufacturer, model;
	
	static int totalVehicles;
	
	
	//default constructor
	public :
		Vehicle(){
			this->vehicleId = 0;
			this->model = "";
			this->manufacturer = "";
			this->year = 0;
			totalVehicles++;
		}
		
		//Destructor
		~Vehicle(){
			totalVehicles--;
		}
		
		
		// is function me hum vahicle id me jo int num hoga use getVehicleID se return kar rahe hai 
		int getVehicleID(){
			return this->vehicleId;
		}
		
		
		//isme user input set ho raha hai 
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
		
		
		//isme user input display hoga
		void displayVehicle(){
			
			cout << "Vehicle ID -: " << this->vehicleId <<endl;
			cout << "Vehicle Model -: " << this->model <<endl;
			cout << "Vehicle Manufacturer -: " << this->manufacturer <<endl;
			cout << "Vehicle Registry Year -: " << this->year <<endl;
			cout << endl;
		}
};

//static member
int Vehicle::totalVehicles = 0;


//simple inheritance
class Car : public Vehicle{
	int fuelType;
};

//multilevel inheritance
class ElectricCar : public Car {
	int betteryCapacity;
};

//multilevel inheritance
class sportsCar : public ElectricCar{
	int topSpeed;
};

//hierarchical inheritance
class Sedan : public Car{
	
};

//hierarchical inheritance
class SUV : public Car{
	
};

//multiple inheritance
class AirCraft : public Vehicle{
	int flightRange;
};

//multiple inheritance
class FlyingCar : public Car, public AirCraft{
	
};

//vehicle registry system 
class vehicleRegistry{
	Vehicle v1[50];
	int totalVehicles = 0;
	
	public :
		
		//add vahicle ki process yaha hogi
		void addVehicle(){
			v1[totalVehicles].setVehicle();
			totalVehicles++;
		}
		
		//sabhi vehicle yaha dikhege
		void displayAllVehicles(){
			cout <<"--------------------------------------"<<endl;
			
			for(int i=0; i < totalVehicles; i++){
				v1[i].displayVehicle();
				cout <<endl;
			}
			cout <<"--------------------------------------"<<endl;
		}
		
		// VEhicle id se vehicle ka data display kar sakte hai
		void searchVehicle() {
			
			int id;
			bool found = false;
			
			cout<< "Enter Vehicle ID -: ";
			cin >> id;
			cout << endl;
			
			for(int i = 0;  i< totalVehicles; i++){
				
				if(id == v1[i].getVehicleID()){
					v1[i].displayVehicle();
					found = true;
					break;
				}
			}
			
			if(found == false){
				cout << "Enter Valid ID... Vehicle not found.!" << endl;
			}


		};

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

