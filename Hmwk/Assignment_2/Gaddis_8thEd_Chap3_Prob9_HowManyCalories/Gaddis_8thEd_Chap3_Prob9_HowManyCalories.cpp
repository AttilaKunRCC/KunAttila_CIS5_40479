/* 
  File:   Gaddis_8thEd_Chap3_Prob9_HowManyCalories.cpp
  Author: Attila Kun
  Created on January 10, 2017, 9:25 PM
  Purpose:  
 * - a bag of cookies holds 30 cookies
 * - the bag claims there are 10 "servings" in the bag and one serving equals 300 calories!!!!
 * - write a program that ask the user to input how many cookies he/she had actually ate and then reports how many calories were consumed
 * 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int OneServing=300, cookie, CaloriesConsumed;
     
    //Input values
    cout << "How many cookies have you had:\n";
    cin >> cookie;
    
    CaloriesConsumed = cookie * OneServing;
    
    cout << "\n You ate " << CaloriesConsumed << " calories!";
    
    cout << "\n\n";
    
    //Exit stage right!
    return 0;
}
