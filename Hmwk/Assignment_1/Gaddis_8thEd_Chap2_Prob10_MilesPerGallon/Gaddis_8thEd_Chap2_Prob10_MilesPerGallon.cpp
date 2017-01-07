/* 
  File:   Gaddis_8thEd_Chap2_Prob10_MilesPerGallon.cpp
  Author: Attila Kun
  Created on January 3, 2017, 12:15 PM
  Purpose:  Template to be used in all programming
            projects!
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int distance=375;
    int gallons = 15, mpg = 33;
         
    //Formula
    mpg = distance/gallons;
    //Output values
    cout << "\nMiles per gallons your car gets: \n\n" << mpg ;
    
    cout << "\n\n";
    
    //Exit stage right!
    return 0;
}

