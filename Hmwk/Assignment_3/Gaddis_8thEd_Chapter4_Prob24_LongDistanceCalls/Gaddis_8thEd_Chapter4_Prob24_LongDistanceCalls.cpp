/* 
  File:   Gaddis_8thEd_Chapter4_Prob24_LongDistanceCalls.cpp
  Author: Attila Kun
  Created on January 15, 2017, 15:00 PM
  Purpose:  
* - a program that asks the starting time and the number of minutes of the call and displays the charges
* - the prog should ask for the time to be entered as a floating-point number in the form HH.MM.
* - the program should not accept times that are greater than 23:59. 
 * Also, no number whose last 2 digits are greater than 59 should be accepted.      
            
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float time, time2, minutes, charges;
    
    time2 = time - static_cast<int>(time); //gets the fractional part (minutes)
    
    if(time2 > 0.59){
        cout << "Starting time (minutes) cannot be greater than 59!!\n\n"
                << "Enter the time again (HH.MM): ";
        cin >> time;
    }
    
    //Input values
    cout << setprecision(2) << fixed;
	cout << "What is the time? \n";
	cout << "Remember to enter the time in this format: HH.MM, HH is hours and MM is minutes:  \n";
	cin >> time;
        
    if(time < 00.00 || time > 23.59 && time)
	{
		cout << "Please enter a time between 00.00 hours and 23.59 hours." << endl;
		system("pause");
		return 0;
	}
      
    //Process by mapping inputs to outputs
    cout << "How many minutes was your call?  ";
	cin >> minutes;
	cout << "\n\nI will display the charges depending on when the call was made\n";
	cout << "and how many minutes the call was." << endl;
	if(time >= 00.00 && time <= 06.59){
		charges = 0.05;
		cout << "\nThe rate of the starting time of call is " << charges << "." << endl;
	}
	else if(time >= 07.00 && time <= 19.00){
		charges = 0.45;
		cout << "\nThe rate of the starting time of call is " << charges << "." << endl;
	}
	else if(time >= 19.01 && time <= 23.59){
		charges = 0.20;
		cout << "\nThe rate of the starting time of call is " << charges << "." << endl;
	}
	else if(time > 23.59){
		cout << "\nThe minutes in HH.MM cannot exceed 59." << endl;
		system("pause");
		return 0;
	}


    //Output values
    system("pause");
    //Exit stage right!
    return 0;
}
