/* 
  File:   Gaddis_8thEd_Chapter5_Prob1_SumOfNumbers.cpp
  Author: Attila Kun
  Created on January 19, 2017, 19:30 PM
  Purpose:  
 * Sum of Numbers
 * - write a program that asks the user for a positive integer value
 * - the prog should loop to get the sum of all the integers from 1 up to the number entered
 * - Input Validation: Do not accept a negative starting number
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int input, i, result = 0;

    do{
       cout << "Please enter a positive number: \n";
       cin >> input;    

              for (i=1; i <= input; i++){
               result += i;            
              }

     }while(input < 0);
     
     cout << "The sum of 1 through " << i << " is "<< result << endl;
    

    //Exit stage right!
    return 0;
}//close int main
