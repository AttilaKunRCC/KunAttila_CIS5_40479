/* 
  File:   Gaddis_8thEd_Chapter5_Prob13_TheGreatestAndLeast.cpp
  Author: Attila Kun
  Created on January 20, 2017, 12:20 PM
  Purpose: 
 * - Write a program with a loop that lets the user enter a series of integers
 * - the user should enter -99 to signal the end of the series
 * - after all the numbers have been entered, the program should display the largest and the smallest numbers entered
 * Reference: http://www.cplusplus.com/forum/beginner/115708/ (bottom example)
 */

//System Libraries
#include <iostream>
using namespace std;


//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int number = 0, highest = 0, lowest = 10;
    
    //Input values
    for (int i=0; number!=-99; i++){
                //Process by mapping inputs to outputs         
                cout << "Type some integers (enter -99 to quit): \n";
                cin >> number;
                
                if(number == -99){
                          break;
                }
               //calculate large and small numbers 
               if(number > highest)
                         highest = number;
               if(number < lowest)
                         lowest = number;             
    }//end for
    
//Output values
cout << "\n\nThe highest number is : " << highest << " and the lowest is: " << lowest << endl;

//Exit stage right!
return 0;
}
