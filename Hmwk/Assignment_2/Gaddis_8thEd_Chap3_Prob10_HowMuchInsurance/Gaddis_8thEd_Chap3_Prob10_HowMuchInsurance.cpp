/* 
  File:   Gaddis_8thEd_Chap3_Prob10_HowMuchInsurance.cpp
  Author: Attila Kun
  Created on January 10, 2017, 9:36 PM
  Purpose:  
 * - Home and building insurance for at least 80% of the amount it would cost to replace the structure
 * - write a program that ask the user to input the replacement cost of a building and then displays the minimum amount of insurance he or she should
 * buy for the property 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float MinimumReplacementAmount=0.8;
    int BuildingWorth, MinimumInsuranceNeeded; 
    
    
    //Input values
    cout << "How much money is the property worth:\n";
    cin >> BuildingWorth;
    
    MinimumInsuranceNeeded = BuildingWorth * MinimumReplacementAmount;
    
    cout << "\nYou would to purchase an insurance of at least $" << MinimumInsuranceNeeded << " to replace the building!";
    cout << "\n\n";
    
    //Exit stage right!
    return 0;
}
