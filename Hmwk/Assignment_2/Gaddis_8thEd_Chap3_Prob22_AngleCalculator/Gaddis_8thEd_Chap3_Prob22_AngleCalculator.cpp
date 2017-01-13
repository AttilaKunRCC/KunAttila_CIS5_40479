/* 
  File:   Gaddis_8thEd_Chap3_Prob22_AngleCalculator.cpp
  Author: Attila Kun
  Created on January 10, 2017, 8:41 PM
  Purpose:  
 * - write a program that asks the user for an angle, entered in radians
 * - the program should display the sine, cosine and tangent  of the tangle
 * - the out should be displayed in fixed-point notation, rounded to four decimal places of precision
 * 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int angle;
       
    //Input values
    cout << "Enter your angle in radians:\n";
    cout << fixed << setprecision(4);
    cin >> angle;
   
    cout << "sin(angle)= " << fixed << setprecision(4) << sin(angle) << endl;
    cout << "cos(angle)= " << fixed << setprecision(4) << cos(angle) << endl;
    cout << "tan(angle)= " << fixed << setprecision(4) << tan(angle) << endl;
    
   
    cout << "\n\n";
    
    //Exit stage right!
    return 0;
}
