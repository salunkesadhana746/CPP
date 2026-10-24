#include<iostream>
using namespace std;

class Car{
	public:
		
		int modelNo;
    	double price;
    	string color;
    	string modelName;
    	string companyName;
    	bool isEV;
    	
    	void setCar(int mod_No, double price_Car, string clr, string mod_name, string com_name, bool isev){
		modelNo = mod_No;
		modelName = mod_name;
        price = price_Car;
        color = clr;
        companyName = com_name;
        isEV = isev;
		}
		
		void getCar()
    {
        cout << "model no - " << modelNo << endl;
        cout << "model name - " << modelName << endl;
        cout << "model company name - " << companyName << endl;
        cout << "model company color - " << color << endl;
        cout << "model is ev? - " << isEV << endl;
        cout << "model price - " << price << endl;

        cout << endl;
    }
};

int main(){
	
	Car a,b;
	
	
    a.setCar(1, 737500, "white", "nexon", "tata", false);
    b.setCar(2, 800000, "black", "3XO", "MAhindra", true);
    
    a.getCar();
    b.getCar();
	
	 return 0;
};


