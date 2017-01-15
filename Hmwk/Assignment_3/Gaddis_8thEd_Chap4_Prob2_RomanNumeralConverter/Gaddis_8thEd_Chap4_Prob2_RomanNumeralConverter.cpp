/* 
  File:   Gaddis_8thEd_Chap4_Prob2_RomanNumeralConverter.cpp
  Author: Attila Kun
  Created on January 14, 2017, 5:24 PM
  Purpose:  
 * - write a program that ask the user to enter a number within the range of 1 through 10
 * - use a switch statement to display the Roman numeral version of that number.
 * - Input validation: Do not accept a number less than 1 or greater than 10
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int number;
     
    //Input values
    cout << "Please a number  from 1 to 10 to convert: \n";
    cin >> number;
    
    switch(number){
        case 1: cout << "You entered I \n";
                break;
        case 2: cout << "You entered II \n";
                break;
        case 3: cout << "You entered III \n";
                break;
        case 4: cout << "You entered IV \n";
                break;
        case 5: cout << "You entered V \n";
                break;
        case 6: cout << "You entered VI \n";
                break;
        case 7: cout << "You entered VII \n";
                break;
        case 8: cout << "You entered VIII \n";
                break;
        case 9: cout << "You entered IX \n";
                break;
        case 10: cout << "You entered X \n";
                break;
        default: cout << "You entered a number outside of the required range. \n";
                break;

    }while (number >= 1 && number <= 10);
    
    cout << "\n\n";
    
    //Exit stage right!
    return 0;
}
