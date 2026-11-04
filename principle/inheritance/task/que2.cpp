#include<iostream>
using namespace std;

//Q.2 Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert that Fahrenheit temperature into Kelvin by implementing multilevel inheritance: Class P -> Class Q -> Class R
//- Class P has the following members: temperature attribute in float
//- Class Q has the following members: toFehrenheit() method
//- Class R has the following members: toKelvin() method.


class P{
	protected :
	float temperature;
	
	public :
		void setTemperature(){
			cout << "Enter Celsius temperature = ";
			cin >> temperature;
			cout << endl;
		};
		
};

class Q : public P{
	
	protected :
		float fehrenheit;
		
		public :
			void toFehrenheit(){
				
				fehrenheit = (temperature * 9/5) + 32;
				
				cout << "temperature into Fahrenheit = " << fehrenheit << "F" << endl;
				cout << endl;;
			};
		
};

class R :  public Q {
	protected :
		float kelvin;
		
		public :
			void toKelvin(){
				
				kelvin = (fehrenheit - 32) * 5/9 + 273.15;
				
				cout << "Fahrenheit temperature into Kelvin = " << kelvin << "K" << endl;
				cout << endl;
			}
};

int main(){
	
	R r1;
	
	r1.setTemperature();
	r1.toFehrenheit();
	r1.toKelvin();
	
	return 0;
}
