/*Q.1 Write a Program to get and display Hotels and static information using Encapsulation with an array of objects member by including the below-mentioned attributes:
- hotel_id
- hotel_name -static
- hotel_type (like hotel or motel)
- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
- hotel_location (city name)
- hotel_establish_year - static
- hotel_staff_quantity
- hotel_room_quantity*/

#include<iostream>
using namespace std;

class Hotel
{
    private:
        int hotel_id;
        string hotel_type, hotel_rating, hotel_location;
        int hotel_staff_quantity, hotel_room_quantity;

    public:
        static string hotel_name;
        static int hotel_establish_year;

        void setHotel(int id, string type, string rating,
                      string location, int staff, int room)
        {
            this->hotel_id = id;
            this->hotel_type = type;
            this->hotel_rating = rating;
            this->hotel_location = location;
            this->hotel_staff_quantity = staff;
            this->hotel_room_quantity = room;
        }

        void getHotel()
        {
            cout << endl;
            cout << "Hotel Details" <<endl << endl;

            cout << "Hotel ID : " << this->hotel_id << endl;
            cout << "Hotel Name : " << hotel_name << endl;
            cout << "Hotel Type : " << this->hotel_type << endl;
            cout << "Hotel Rating : " << this->hotel_rating << endl;
            cout << "Hotel Location : " << this->hotel_location << endl;
            cout << "Hotel Establish Year : " << hotel_establish_year << endl;
            cout << "Hotel Staff Quantity : " << this->hotel_staff_quantity << endl;
            cout << "Hotel Room Quantity : " << this->hotel_room_quantity << endl;
        }
};

// Static Members Initialization
string Hotel::hotel_name = "Taj Hotel";
int Hotel::hotel_establish_year = 1903;

int main()
{
    Hotel h[5];

    h[0].setHotel(101, "Hotel", "5 Star", "Mumbai", 150, 100);

    h[1].setHotel(102, "Motel", "3 Star", "Surat", 50, 40);

    h[2].setHotel(103, "Hotel", "7 Star", "Delhi", 200, 150);

    h[3].setHotel(104, "Motel", "2 Star", "Ahmedabad", 30, 25);

    h[4].setHotel(105, "Hotel", "4 Star", "Jaipur", 100, 80);

    for(int i = 0; i < 5; i++)
    {
        h[i].getHotel();
    }

    return 0;
}

