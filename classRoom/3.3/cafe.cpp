/*Q.2 Write a Program to get and display Fast Food cafe information using encapsulation and the use of a Default constructor by including the below-mentioned attributes:
- cafe_id
- cafe_name
- cafe_type (like a rooftop or normal)
- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
- cafe_location (city name)
- cafe_establish_year
- cafe_staff_quantity*/

#include<iostream>
using namespace std;

class Cafe
{
    private:
        int cafe_id;
        string cafe_name;
        string cafe_type;
        string cafe_rating;
        string cafe_location;
        int cafe_establish_year;
        int cafe_staff_quantity;

    public:

        Cafe()
        {
            cafe_id = 0;
            cafe_name = "Not Available";
            cafe_type = "Normal";
            cafe_rating = "3 Star";
            cafe_location = "Surat";
            cafe_establish_year = 2020;
            cafe_staff_quantity = 0;
        }

        void setCafe(int id, string name, string type,
                     string rating, string location,
                     int year, int staff)
        {
            cafe_id = id;
            cafe_name = name;
            cafe_type = type;
            cafe_rating = rating;
            cafe_location = location;
            cafe_establish_year = year;
            cafe_staff_quantity = staff;
        }

        void getCafe()
        {
            cout << endl;
            cout << "Fast Food Cafe Details :-"<< endl << endl;

            cout << "Cafe ID : " << cafe_id << endl;
            cout << "Cafe Name : " << cafe_name << endl;
            cout << "Cafe Type : " << cafe_type << endl;
            cout << "Cafe Rating : " << cafe_rating << endl;
            cout << "Cafe Location : " << cafe_location << endl;
            cout << "Cafe Establish Year : " << cafe_establish_year << endl;
            cout << "Cafe Staff Quantity : " << cafe_staff_quantity << endl;
        }
};

int main()
{
    Cafe c[5];

    c[0].setCafe(101, "Food Hub", "Rooftop", "5 Star",
                 "Surat", 2018, 25);

    c[1].setCafe(102, "Pizza Point", "Normal", "4 Star",
                 "Mumbai", 2020, 15);

    c[2].setCafe(103, "Burger House", "Rooftop", "3 Star",
                 "Ahmedabad", 2019, 20);

    c[3].setCafe(104, "Food Zone", "Normal", "5 Star",
                 "Vadodara", 2021, 18);

    c[4].setCafe(105, "Tasty Corner", "Rooftop", "4 Star",
                 "Surat", 2022, 12);

    for(int i = 0; i < 5; i++)
    {
        c[i].getCafe();
    }

    return 0;
}

