#include <iostream>
using namespace std;

class Car{
	int modalNo;
	string modalName;
	string companyName;
	string color;
	double price;
	bool isEV;
	
	public:
		Car(){
			cout << "Hello and welcome to My Car Shop" << endl;
			cout << endl;
		}
		
		Car(int modalNo, string modalName, string companyName, string color, double price, bool isEV){
			
			this->modalNo = modalNo;
			this->modalName = modalName;
			this->companyName = companyName;
			this->color = color;
			this->price = price;
			this->isEV = isEV;
		}
		
		void getCar(){
			cout << "Modal NO = " << modalNo << endl;
			cout << "Modal Name = " << modalName << endl;
			cout << "Modal Company Name = " << companyName << endl;
			cout << "Modal Color = " << color << endl;
			cout << "Modal price = $" << price << endl;
			cout << "Modal is EV? = " << isEV << endl;
			cout << endl;
		}
		
		~Car(){
			cout << "Thank you to visit My Car Shop" << endl;
		}
};

int main(){
	
	Car a,
	 b(42, "NEXON", "TATA", "Red", 200561, true),
	 c(4, "BALENO", "MARUTI", "Black", 172556, false);
	 
	 b.getCar();
	 c.getCar();
	
	
	
	return 0;
}
