/* 
  File:   Gaddis_8thEd_Chap2_Prob1_SumOf2Numbers.cpp
  Author: Attila Kun
  Created on January 7, 2017, 12:15 PM
  Purpose:  SumOf2Numbers
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int n1, n2, total;
   
        //Output values
    cout << "type your first number:\n";
    cin >> n1;
    
    cout << "type your second number:\n" ;
    cin >> n2;
    
    total = n1+n2;
    cout << "the total is: \n" << total;

    //Exit stage right!
    return 0;
}
