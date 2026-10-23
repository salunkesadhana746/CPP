
#include <iostream>
using namespace std;

class Time
{
public:
    int seconds;
    int hours;
    int minutes;
    int remainingSeconds;

    void setData()
    {
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    void getData()
    {
        hours = seconds / 3600;
        minutes = (seconds % 3600) / 60;
        remainingSeconds = seconds % 60;

        cout << "Time - ";

        if (hours < 10)
            cout << "0";
        cout << hours << ":";

        if (minutes < 10)
            cout << "0";
        cout << minutes << ":";

        if (remainingSeconds < 10)
            cout << "0";
        cout << remainingSeconds << endl;
    }
};

int main()
{
    Time a;

    a.setData();
    a.getData();

    return 0;
}

