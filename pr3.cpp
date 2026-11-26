#include<iostream>
using namespace std;

class Vehicle{
	int vehicleID, year;
	string manufacturer, model;
	
	static int totalVehicles;
	
	public :
		Vehicle(){
			this->vehicleID = 0;
			this->year = 0;
			this->model = "";
			this->manufacturer = "";
			totalVehicles++;
		}
		
		~Vehicle(){
			totalVehicles--;
		}
		
		void setVehicle(){
			
			cout << "Enter your Vehicle ID -: ";
			cin >> this->vehicleID;
			cout << "Enter your Vehicle Model -: ";
			cin >> this->model;
			cout << "Enter your Vehicle manufacturer -: ";
			cin >> this->manufacturer;
			cout << "Enter your Vehicle year -: ";
			cin >> this->year;
			cout << endl;
			
		}
		
		int getVehicleId(){
			return vehicleID;
		}
		
		void getVehicle(){
			
			cout << "Vehicle ID -: "<< this->vehicleID <<endl;
			cout << "Vehicle model -: "<< this->model <<endl;
			cout << "Vehicle manufacturer -: "<< this->manufacturer <<endl;
			cout << "Vehicle Registry year -: "<< this->year <<endl;
			cout << endl;
		}
};

int Vehicle::totalVehicles = 0;

class Car : public Vehicle{
	int fuelType;
};

class ElectricCar : public Car{
	int bettryCapacity;
};

class SportCar : public ElectricCar{
	int topSpeed;
};

class sedan : public Car{
	
};

class SUV : public Car{
	
};

class AirCraft : public Vehicle{
	int flightRange;
};

class FlyingCar : public Car, public AirCraft{
	
};

class VehicleRegistry{
	Vehicle v1[50];
	int totalVehicles = 0;
	
	public:
		
		void addVehicle(){
			v1[totalVehicles].setVehicle();
			totalVehicles++;
		}
		
		void displayVehicles(){
			cout<<"---------------------------"<<endl;
	  		for(int i =0; i<totalVehicles; i++){
	  			v1[i].getVehicle();
			  }
			
			cout<<"---------------------------"<<endl;
			
		}
		
		void searchVehicle(){
			int id;
			bool found = false;
			
			cout << "Enter Vehicle ID -:";
			cin >> id;
			cout << endl;
			
			for(int i = 0; i< totalVehicles; i++){
				
				if(id == v1[i].getVehicleId()){
					v1[i].getVehicle();
					found = true;
					break;
				}
			}
			
			if(found == false){
				cout << "Enter Velid ID.." << endl;
			};
		};
};

int main(){
	
	VehicleRegistry v1;
	int choice;
	bool isON = true;
	
		 cout << "WElCome to Vehicle registry system..!";
		 cout << endl;
		 
		 do{
		 	
		 	cout << "Enter 1 to Add Vehicle." <<endl;
		 	cout << "Enter 2 to Display Vehicle." <<endl;
		 	cout << "Enter 3 to Search Vehicle." <<endl;
		 	cout << "Enter 4 to Exit." <<endl;
		 	cout << endl;
		 	
		 	cout << "Enter your choice -: ";
		 	cin >> choice;
		 	cout << endl;
		 	
		 	switch(choice){
		 		case 1:
		 			v1.addVehicle();
		 			break;
		 			
	 			case 2:
	 				v1.displayVehicles();
	 				break;
	 				
 				case 3:
 					v1.searchVehicle();
 					break;
 					
				case 4:
					isON = false;
					cout <<"Program Exit..!"<<endl;
					break;
					
				default:
				cout <<"Enter valid input..!";
				break;	
			 }
		 }while(isON);
		 
	return 0;
}
