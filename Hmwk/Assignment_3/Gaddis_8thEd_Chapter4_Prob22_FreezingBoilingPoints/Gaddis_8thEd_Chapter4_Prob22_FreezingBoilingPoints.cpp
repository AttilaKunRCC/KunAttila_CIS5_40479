/* 
  File:   Gaddis_8thEd_Chapter4_Prob22_FreezingBoilingPoints.cpp
  Author: Attila Kun
  Created on January 15, 2017, 16:05 PM
  Purpose:  
 * - write a program that asks the user to enter a temperature and then shows all the substances that will freeze
 * at that temperature and all that will boil at that temperature
 * - for example, if the user enters -20 the program should report that water will freeze and oxygen will boil at
 * that temperature.
 * 
 * Reference: http://programology.wordpress.com for structure
 * 
 * --> I checked the Values, program logic myself
 */

//System Libraries
#include <iostream>
using namespace std;


//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float temperature;
    
    //Input values
    cout << "Enter a temperature in Farenheit: \n";
    cin >> temperature;
    
    //Process by mapping inputs to outputs
    cout << "Substances that will freeze are: \n";
    if(temperature <= -173)
        cout << "Ethyl Alcohol \n";
    if(temperature <= -38)
        cout << "Mercury \n";
    if(temperature <= - 362)
        cout << "Oxygen \n";
    if(temperature <= 32)
        cout << "Water \n";
    cout << "\n\n";
    
    cout << "Substances that will boil: \n";
    if(temperature >= 172)
        cout << "Ethyl Alcohol \n";
    if(temperature >= 676)
        cout << "Mercury \n";
    if(temperature >= -306)
        cout << "Oxygen \n";
    if(temperature >= 212)
        cout << "Water \n";
    
    cout << "\n\n";
    
    
    system("pause");

    //Exit stage right!
    return 0;
}
