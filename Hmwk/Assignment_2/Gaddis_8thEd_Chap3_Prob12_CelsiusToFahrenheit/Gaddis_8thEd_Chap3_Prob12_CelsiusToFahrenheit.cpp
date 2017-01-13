/* 
  File:   Gaddis_8thEd_Chap3_Prob12_CelsiusToFahrenheit.cpp
  Author: Attila Kun
  Created on January 11, 2017, 10:25 PM
  Purpose:  
 * - write a program that converts Celsius to Fahrenheit
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
     
    //Input values
    cout << "How many degrees Celsius you want to convert to Fahrenheit:\n";
    cin >> celsius;
    
    fahrenheit=(celsius*9)/5+32;
    
    cout << "\nThe Celsius temperature in Fahrenheit temperature is: ";
    cout << fahrenheit << endl;
    
    cout << "\n\n";

    //Exit stage right!
    return 0;
}