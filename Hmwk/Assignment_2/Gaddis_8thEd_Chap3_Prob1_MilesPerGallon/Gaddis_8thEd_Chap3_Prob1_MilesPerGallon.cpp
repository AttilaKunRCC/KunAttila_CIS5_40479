/* 
  File:   Gaddis_8thEd_Chap3_Prob1_MilesPerGallon.cpp
  Author: Attila Kun
  Created on January 10, 2017, 20:15 PM
  Purpose:  
 * - calculate a car's gas mileage
 * - Ask the user to enter the number of gallons of gas the car can hold
 * - the number of miles it can be driven on a full tank
 * - it should then display the number of miles that may be driven per gallon of gas
 * 
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int full_tank_miles, hold_gallons;
    float mpg;
    
    //Input values
    cout << "\nHow many gallons can you gas tank hold: \n\n";
    cin >> hold_gallons;
    cout << "\nHow many miles can it be driven on a full tank: \n\n";
    cin >> full_tank_miles;
    
    //Formula for miles per gallons (find distance per gallon)   
    mpg = full_tank_miles/hold_gallons;
    
    //Output values
    cout << "\nMiles per gallons your car gets: \n\n" << mpg ;
    
    cout << "\n\n";
    //Exit stage right!
    return 0;
}

