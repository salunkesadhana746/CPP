
#include<iostream>
using namespace std;

int main() {
    int mark;
    int grade;

    cout << "Enter your mark = ";
    cin >> mark;

    if(mark < 0 || mark > 100) {
        cout << "Invalid marks!";
        return 0;
    }
    else if(mark >= 90 && mark <= 100) {
        grade = 1;
    }
    else if(mark >= 70 && mark < 90) {
        grade = 2;
    }
    else if(mark >= 50 && mark < 70) {
        grade = 3;
    }
    else if(mark >= 40 && mark < 50) {
        grade = 4;
    }
    else if(mark >= 30 && mark < 40) {
        grade = 5;
    }
    else {
        grade = 6;
    }

    switch(grade) {
        case 1:
            cout << "Grade A Excellent";
            break;

        case 2:
            cout << "Grade B Very good";
            break;

        case 3:
            cout << "Grade C Good";
            break;

        case 4:
            cout << "Grade D Satisfactory/Average";
            break;

        case 5:
            cout << "Grade E Pass";
            break;

        case 6:
            cout << "Grade F Fail";
            break;
    }

    return 0;
}

