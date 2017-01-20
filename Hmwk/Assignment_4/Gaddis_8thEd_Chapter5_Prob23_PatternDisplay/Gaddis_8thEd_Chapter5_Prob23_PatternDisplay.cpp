/* 
  File:   Gaddis_8thEd_Chapter5_Prob23_PatternDisplay.cpp
  Author: Attila Kun
  Created on January 20, 2017, 13:15 PM
  Purpose:
 * write a program that uses a loop to display Pattern A below, followed by another loop that displays Pattern B
 * Reference: https://www.programiz.com/article/c%2B%2B-programming-pattern
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int i,j;
   
    //Process by mapping inputs to outputs     
    cout << "Pattern A\n";
    cout << "---------\n";
    //prints the pattern from 1 to 10
    for(i = 1; i <= 10; i++){
    // prints the pattern *(same as below)
        for(j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }

    cout << "Pattern B\n";
    cout << "-----------\n";
    //prints the pattern from 10 to 1
    for(i = 10; i >= 1; i--){
    // prints the pattern * (same as above)
        for(j = 1; j <= i; j++){
           cout<<"*";
        }
        cout<<"\n";
    }

    //Exit stage right!
    return 0;
}
