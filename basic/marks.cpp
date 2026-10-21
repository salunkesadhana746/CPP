#include<iostream>
using namespace std;

int main(){
	int mark;
	char grade;
	
	cout << "Enter your mark =";
	cin >> mark;
	
	if(mark >= 100 && mark < 90){
		grade << 'A';
	}
	else if(mark >= 90 && mark < 70){
		grade << 'B';
	}
	else if(mark >= 70 && mark > 50){
		grade << 'C';
	}
	else if(mark >= 50 && mark > 40){
		grade << 'D';
	}
	else if(mark >= 40 && mark > 30){
		grade << 'E';
	}
	else {
		grade << 'F';
	}
	
	cout << "your grade is = "; 
	cin >> grade;
	
}
