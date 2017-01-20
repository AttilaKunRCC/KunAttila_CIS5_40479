/* 
  File:   Gaddis_8thEd_Chap5_Prob12_CelsiusToFahrenheit.cpp
  Author: Attila Kun
  Created on January 19, 2017, 10:25 PM
  Purpose:  
 * - write a program that converts Celsius to Fahrenheit with a loop to display a table of the Celsius temps 0-20
 * and their Fahrenheit equivalents
 * Formula solved:
 * fahrenheit=(celsius*9)/5+32;
 * 
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int celsius;
    float fahrenheit;
    
    cout << "Below are the equivalent Celsius to Fahrenheit temperatures! \n";
    
    //Find equivalent values
    for(int celsius = 0; celsius <= 20; celsius++){
            
    cout << "Celsius: " << celsius;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    fahrenheit=(celsius*9)/5.f+32;
    
    cout << "\t Fahrenheit: ";
    cout << fahrenheit << endl;
    
    }
    
    cout << "\n\n";
    system("pause");
    //Exit stage right!
    return 0;
}
