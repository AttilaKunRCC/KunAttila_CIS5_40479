/*File:   Gaddis_8thEd_Chap4_Prob7_TimeCalculator.cpp
  Author: Attila Kun
  Created on January 14, 2017, 6:32 PM
 * 
 * - write a program that asks the user to enter a number of seconds
 * - if the number >=60 seconds, it should display the number of minutes in that many seconds
 * - there are 3600 seconds in an hour. If the number >=3,600, the program should display the number of hours in that many seconds
 * - there are 86,400 seconds in a day. If the number >=86,400 seconds , the prog should display the number in that many seconds
 * 
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    //declare variables and global constants
    int seconds = 0, minutes = 60, hours = 3600, days = 86400, timeInDays, timeInHours, timeInMinutes ;    
       
    //user input needed
    cout << "Enter amount of seconds: \n";
    cin >> seconds;
    
    if(seconds >= minutes){ //convert to minutes
               timeInMinutes = seconds/minutes;
               cout << "\nThere are " << timeInMinutes << " minutes in " << seconds << " seconds!\n";
    }
    else if(seconds >= hours){ //convert to hours
               timeInHours = seconds/hours;
               cout << "\nThere are " << timeInHours << " hours in " << seconds << " seconds!\n";
    }
    else if(seconds >= days){ //convert to days
               timeInDays = seconds/days;
               cout << "\nThere are " << timeInDays << " days in " << seconds << " seconds!\n";
    }
    else //output seconds
         cout << seconds << " seconds is just " << seconds << " seconds.\n";
    
    
    cout << "\n\n";
    
    return 0;
}

