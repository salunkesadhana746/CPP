/*Q.1 Write a Program to get and display Diamond company information using encapsulation and the use of a Parameterised Constructor by including the below mentioned attributes:
- comp_id
- comp_name
- comp_staff_quantity
- comp_revenue (per year)
- comp_import_raw_diamonds (no. of raw diamonds
imported per year)
- comp_export_diamonds (no. of diamonds per year)
- comp_ceo (name of CEO of the company)*/

#include<iostream>
using namespace std;

class Diamond
{
    private:
        int comp_id;
        string comp_name;
        int comp_staff_quantity;
        double comp_revenue;
        int comp_import_raw_diamonds;
        int comp_export_diamonds;
        string comp_ceo;

    public:

        Diamond(int id, string name, int staff,
                double revenue, int import_diamond,
                int export_diamond, string ceo)
        {
            comp_id = id;
            comp_name = name;
            comp_staff_quantity = staff;
            comp_revenue = revenue;
            comp_import_raw_diamonds = import_diamond;
            comp_export_diamonds = export_diamond;
            comp_ceo = ceo;
        }

        void getCompany()
        {
            cout << endl;
            cout << "Diamond Company Details :-" <<endl << endl;

            cout << "Company ID : " << comp_id << endl;
            cout << "Company Name : " << comp_name << endl;
            cout << "Staff Quantity : " << comp_staff_quantity << endl;
            cout << "Revenue Per Year : " << comp_revenue << endl;
            cout << "Import Raw Diamonds : " << comp_import_raw_diamonds << endl;
            cout << "Export Diamonds : " << comp_export_diamonds << endl;
            cout << "Company CEO : " << comp_ceo << endl;
        }
};

int main()
{
    Diamond d[5] = {
        Diamond(101, "ABC Diamonds", 150, 50000000, 10000, 8000, "Raj Shah"),

        Diamond(102, "XYZ Diamonds", 200, 75000000, 15000, 12000, "Amit Patel"),

        Diamond(103, "PQR Diamonds", 100, 30000000, 8000, 6000, "Karan Mehta"),

        Diamond(104, "LMN Diamonds", 250, 90000000, 20000, 18000, "Rahul Jain"),

        Diamond(105, "DEF Diamonds", 180, 60000000, 12000, 10000, "Neha Shah")
    };

    for(int i = 0; i < 5; i++)
    {
        d[i].getCompany();
    }

    return 0;
}

