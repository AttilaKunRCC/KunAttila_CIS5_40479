/* 
  File:   Gaddis_8thEd_Chap3_Prob3_TestAverage.cpp
  Author: Attila Kun
  Created on January 10, 2017, 8:41 PM
  Purpose:  
 * - write a program that asks for 5 test scores
 * - the program should calculate the average test and display it
 * - the number display should be formatted in fixed-point notation with one decimal point of precision
 * 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int n1, n2, n3, n4, n5;
    double average;
   
        //Output values
    cout << "type your first number:\n";
    cin >> n1;
    
    cout << "type your second number:\n" ;
    cin >> n2;
    
    cout << "type your first number:\n";
    cin >> n3;
    
    cout << "type your second number:\n" ;
    cin >> n4;
    
    cout << "type your second number:\n" ;
    cin >> n5;
    
    
   average = (n1+n2+n3+n4+n5)/5;
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    std::cout << "the total is: \n" << average;
    
    cout << "\n\n";
    
    //Exit stage right!
    return 0;
}
