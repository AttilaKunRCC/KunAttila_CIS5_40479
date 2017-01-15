/* 
  File:   Gaddis_8thEd_Chap4_Prob1_MinimumMaximum.cpp
  Author: Attila Kun
  Created on January 14, 2017, 5:05 PM
  Purpose:  
 * - write a program that ask the user to enter 2 numbers
 * - the program should use the conditional operator to determine which number is the smaller and which is larger
 * 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int number1, number2;
     
    //Input values
    cout << "Please type the 1st number: \n";
    cin >> number1;
    cout << "Please type the 2nd number: \n";
    cin >> number2;
    
    (number1 > number2) ? cout << "The first number is larger than the 2nd \n" : cout << "The 2nd number is larger than the 1st number \n";
     
    
    cout << "\n\n";
    
    //Exit stage right!
    return 0;
}
