#include<iostream>
using namespace std;

class Car{
	int modalNo;
	string companyName;
	double price;
	string color;
	string modalName;
	bool isEV;
	
	
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
		cout << "modal Price = " << price <<endl;
		cout << "modal Price = " << price <<endl;
	}
};


int main(){
	return 0;	
}
