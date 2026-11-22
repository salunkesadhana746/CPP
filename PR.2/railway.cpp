#include <iostream>
#include <cstring>
using namespace std;

class Train { //this class store train details
private:// we declare private variable user can be not access directly.
    int trainNumber;
    char trainName[50];
    char source[50];
    char destination[50];
    char trainTime[10];

    static int trainCount;  

public:
// default constructor is sets empty
    Train() {
        trainNumber = 0;
        strcpy(trainName, "");
        strcpy(source, "");
        strcpy(destination, "");
        strcpy(trainTime, "");
    }

    //paramiterized constructo sets value given by the user
    Train(int num, const char* name, const char* src, const char* dest, const char* time) {
        trainNumber = num;
        strcpy(trainName, name);
        strcpy(source, src);
        strcpy(destination, dest);                                                                                              
        strcpy(trainTime, time);
        trainCount++; // add some trains, so increase the count    
    }

    ~Train() { // destructor jab object khatam hota hai tab chalta hai
        if (trainNumber != 0) { // train ho tabhi count karga 
            trainCount--;// varna -- karega 
        }
    }

    // Setters
    void setTrainNumber(int n) {
        // same train nahi hogi pehle to is me count badhao
        if (trainNumber == 0 && n != 0) {
            trainCount++;
        }
        trainNumber = n;
    }

    void setTrainName(const char* name) {
        strcpy(trainName, name);//name ko trainName me copy
    }

    void setSource(const char* src) {
        strcpy(source, src); //src ko source me copy
    }

    void setDestination(const char* dest) {
        strcpy(destination, dest);//dest ko destination me copy
    }

    void setTrainTime(const char* time) {
        strcpy(trainTime, time);//time ko trainTime me copy
    }

    // Getters
    int getTrainNumber() {
        return trainNumber;
    }

    const char* getTrainName() {
        return trainName;
    }

    const char* getSource() {
        return source;
    }

    const char* getDestination() {
        return destination;
    }

    const char* getTrainTime() {
        return trainTime;
    }

    //user se train ki details lene ke liye
    void inputTrainDetails() {
        int n;
        char temp[50];// thode time ke liye user ne likha huva save karta hai

        cout << "Enter Train Number: ";
        cin >> n;
        cin.ignore();
        setTrainNumber(n);

        cout << "Enter Train Name: ";
        cin.getline(temp, 50);
        setTrainName(temp);

        cout << "Enter Source: ";
        cin.getline(temp, 50);
        setSource(temp);

        cout << "Enter Destination: ";
        cin.getline(temp, 50);
        setDestination(temp);

        cout << "Enter Train Time: ";
        cin.getline(temp, 10);
        setTrainTime(temp);
    }

    //dispay par train details dikhata hai
    void displayTrainDetails() {
        cout << "Train Number: " << getTrainNumber() << endl;
        cout << "Train Name: " << getTrainName() << endl;
        cout << "Source: " << getSource() << endl;
        cout << "Destination: " << getDestination() << endl;
        cout << "Train Time: " << getTrainTime() << endl;
    }

    static int getTrainCount() {
        return trainCount;
    }
};

int Train::trainCount = 0;


//ye class sabhi ko manage karti hai 
class RailwaySystem {
private:
    Train trains[100];
    int totalTrains;

public:
    RailwaySystem() {
        totalTrains = 0;
    }

    //user ke input sre train add karta hai 
    void addTrain() {
        if (totalTrains >= 100) {
            cout << "Train limit reached!" << endl;
            return;
        }
        trains[totalTrains].inputTrainDetails();
        totalTrains++;
        cout << "Train added successfully!" << endl;
    }

//sari train display karta hai
    void displayAllTrains() {
        if (totalTrains == 0) {
            cout << "No train records available!" << endl;
            return;
        }
        for (int i = 0; i < totalTrains; i++) {
            cout << "Train " << i + 1 << " details:" << endl;
            trains[i].displayTrainDetails();
        }
    }

    //train number se train detarils dikhata hai
    void searchTrainByNumber(int number) {
        for (int i = 0; i < totalTrains; i++) {
            if (trains[i].getTrainNumber() == number) {
                trains[i].displayTrainDetails();
                return;
            }
        }
        cout << "Train with number " << number << " not found!" << endl;
    }

    // default data ke liye
    void addInitialTrain(int no, const char* name, const char* src, const char* dest, const char* time) {
        trains[totalTrains].setTrainNumber(no);
        trains[totalTrains].setTrainName(name);
        trains[totalTrains].setSource(src);
        trains[totalTrains].setDestination(dest);
        trains[totalTrains].setTrainTime(time);
        totalTrains++;
    }
};

int main() {
    RailwaySystem rs;
    int choice, number;

    rs.addInitialTrain(101, "Okha Express", "Surat", "Mumbai", "10 AM");
    rs.addInitialTrain(102, "Gujarat Mail", "Surat", "Delhi", "6 PM");
    rs.addInitialTrain(103, "Flying Ranee", "Mumbai", "Surat", "7 AM");

    do {//user choice ke liye option dikhate raho jab tak user 4 enter na kare
        cout << "\n--- Railway Reservation System Menu ---\n";
        cout << "1. Add New Train Record\n";
        cout << "2. Display All Train Records\n";
        cout << "3. Search Train by Number\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";//user input
        cin >> choice;

        switch (choice) {
            case 1:
                rs.addTrain();      //train add karne ke liye 
                break;

            case 2:
                rs.displayAllTrains();      //sabhi train ke liye 
                break;

            case 3:     //train number se train details search karne ke liye
                cout << "Enter Train Number to search: ";
                cin >> number;
                rs.searchTrainByNumber(number);
                break;

            case 4:     //exit karne ke liye
                cout << "Exiting the system. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}
