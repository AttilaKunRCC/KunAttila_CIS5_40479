/* 
  File:   MidTerm_Prob2
  Author: Attila Kun
  Created on January 24, 2017, 20:40 PM
  Purpose: 
 2)  Read a 4 character number.  Output the result in the following format, input = 9873
3 ***
7 *******
8 ********
9 *********

If one of the numbers is not a digit, then put a ? mark
input = 98a3
3 ***
a ?
8 ********
9 ********* 
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!
int main(int argc, char** argv)
{
    //declare variables
    string input;
    char cchr;
    
    //input value
    cout << "Enter an integer: ";
    cin >> input;
    
    for (int i = input.length()-1; i >= 0; i--){ //print reverse number
        
        cchr = input[i];
        cout << cchr << " ";            
            if(cchr >= '0' && cchr <= '9'){
                for(int j = 0;j < cchr - '0'; j++){
                    cout <<"*";
                }                
            }
            else{
                cout << "?";
            }
        cout << endl;
    }
    
    //exit stage right
    cin >> cchr;
return 0;       
}
