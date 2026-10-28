#include<iostream>
using namespace std;

class Car{
	int modalNo;
	string companyName;
	double price;
	string color;
	string modalName;
	bool isEV;
	
public:	
	void setCar(int modalNo, string companyName, double price, string color, string modalName, bool isEV){
		this->modalNo = modalNo;
		this->companyName = companyName;
		this->price = price;
		this->color = color;
		this->modalName = modalName;
		this->isEV = isEV;
	}
	
	void getCar(){
		
		cout << "modal NO = " << modalNo <<endl;
		cout << "modal Company Name = " << companyName <<endl;
		cout << "modal Price = " << price <<endl;
		cout << "modal color = " << color <<endl;
		cout << "modal Name = " << modalName <<endl;
		cout << "modal is EV ? = " << isEV <<endl;
		cout <<endl;
	}
};


int main(){
	
	Car a, b;
	
	a.setCar(1, "BMW", 800000, "black", "M2 coupe", true);
	b.setCar(2, "BMW", 120000, "white", "i7", false);
	
	a.getCar();
	b.getCar();
	
	return 0;	
}
