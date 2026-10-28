#include <iostream>
using namespace std;

class Time{
	int seconds; 
	int hours; 
	int minutes; 
	int remainingSeconds;
	
	public :
		Time(){
			cout << "watch time in hours:second:minutes" << endl;
			cout << endl;
			
			cout << "Enter seconds = ";
			cin >> seconds;
			cout << endl;
		}
		
		
		void getTime(){
			
			hours = seconds / 3600;
			minutes = (seconds / 3600) / 60;
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
        			 
        			 cout << endl;
		}
		
		~Time(){
			cout << "Thank you to watch time ..." << endl;
			cout << endl;
		}
};

int main(){
	
	Time a;
	
	a.getTime();
	
	return 0;
}
