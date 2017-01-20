/* 
  File:   Gaddis_8thEd_Chapter5_Prob2_CharsAsciiCodes.cpp
  Author: Attila Kun
  Created on January 19, 2017, 21:30 PM
  Purpose: 
 * - write a program that uses a loop to display the characters for the ASCII codes 0-127
 * - display 16 characters on each line
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    
    //Output values
    
    cout << "I will display the characters from 0 through 127 for ASCII! \n";
    
    for (int i=0; i<=127; i++){
        cout << i << (char)i << " ";        
        if(i % 16 == 0){
               cout << endl;               
        }
           
    }//end for loop

    cout << "\n\n";

       
    //Exit stage right!
    return 0;
}
