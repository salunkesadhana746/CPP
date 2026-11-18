/*Q.2 Write a Program to create a Customer Record System for 5 customers using Encapsulation. Consider the below-mentioned attributes in the Customer structure:
- cust_id
- cust_name
- cust_age
- cust_city
- cust_mobile_number
- cust_simcard_validity (in years)
- cust_telecom_brand_name (like Jio, Airtel, Vi, etc.)*/

#include<iostream>
using namespace std;

class Customer{
    private:
        int cust_id, cust_age;
        string cust_name, cust_city;
        long long cust_mobile_number;
        int cust_simcard_validity;
        string cust_telecom_brand_name;

    public:

        void setCustomer(int id, string name, int age,
                         string city, long long mobile,
                         int validity, string brand)
        {
            this->cust_id = id;
            this->cust_name = name;
            this->cust_age = age;
            this->cust_city = city;
            this->cust_mobile_number = mobile;
            this->cust_simcard_validity = validity;
            this->cust_telecom_brand_name = brand;
        }

        void getCustomer()
        {
            cout << endl;
            cout << " Customer Details :-" << endl << endl;

            cout << "Customer ID : " << this->cust_id << endl;
            cout << "Customer Name : " << this->cust_name << endl;
            cout << "Customer Age : " << this->cust_age << endl;
            cout << "Customer City : " << this->cust_city << endl;
            cout << "Mobile Number : " << this->cust_mobile_number << endl;
            cout << "SIM Validity : " << this->cust_simcard_validity << " Years" << endl;
            cout << "Telecom Brand : " << this->cust_telecom_brand_name << endl;
        }
};

int main()
{
    Customer c[5];

    c[0].setCustomer(101, "Raj", 22, "Surat",
                     9876543210, 2, "Jio");

    c[1].setCustomer(102, "Amit", 25, "Mumbai",
                     8896543210, 1, "Airtel");

    c[2].setCustomer(103, "Karan", 23, "Vadodara",
                     9896543210, 3, "Vi");

    c[3].setCustomer(104, "Priya", 21, "Ahmedabad",
                     7896543210, 2, "Jio");

    c[4].setCustomer(105, "Neha", 24, "Surat",
                     6896543210, 1, "Airtel");

    for(int i = 0; i < 5; i++)
    {
        c[i].getCustomer();
    }

    return 0;
}

