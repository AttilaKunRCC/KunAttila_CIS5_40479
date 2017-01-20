/* 
  File:   Gaddis_8thEd_Chapter5_Prob4_CaloriesBurned.cpp
  Author: Attila Kun
  Created on January 19, 2017, 22:14 PM
  Purpose: 
 * - running on a thread mill you can burn 3.6 calories per minutes
 * - write a program that uses a loop to display the number of calories burned after 5,10,15, 20, 25, and 30 minutes
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    
    //Output values
    int minutes; 
       
    cout << "If you can burn 3.6 calories/minute by running on a threadmill \n";
    for (minutes=5; minutes <= 30; minutes += 5){
        float calories = 3.6 * minutes;
        cout << "\nthen in " << minutes << " minutes you've burned " << calories ;
           
    }//end for loop

    cout << "\n\n";
  
    //Exit stage right!
    return 0;
}
