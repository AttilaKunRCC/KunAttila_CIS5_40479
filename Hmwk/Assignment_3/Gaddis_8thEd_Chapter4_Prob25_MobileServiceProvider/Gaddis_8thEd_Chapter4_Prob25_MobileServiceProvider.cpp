/* 
  File:   Gaddis_8thEd_Chapter4_Prob25_MobileServiceProvider.cpp
  Author: Attila Kun
  Created on January 15, 2017, 19:15 PM
  Purpose:  
 * - mobile phone service has 3 different subscription packages
 * - additional minutes are $0.45 per minute
 * - package A: for $39.99/month, 450 minutes are provided. Additional minutes are $0.45/minute
 * - package B: for $59.99/month, 900 minutes are provided. Additional minutes are $0.40/minute
 * - package C: for $69.99/month, unlimited minutes provided
 * 
 * Write a program, that calculates a customer's monthly bill. It should ask which package the customer has purchased
 * and how many minutes were used. It should then display the total amount due.
 * Input Validation: Be sure he user only selects packages A, B or C. 
 * 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

//global constant
const float packageA = 39.99, packageB = 59.99, packageC = 69.99;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    double minutes, additionalMinutes, limit;
    char package;
    

    //Input values
    cout << "Which package do you have A, B, or C? : ";
    package = cin.get();
    
if(package == 'A' || package == 'a' || package == 'B' || package == 'b' || package == 'C' || package == 'c'){
        cout << "\nHow many minutes were used: ";
        cin >> minutes;
//}//end if above
    
    if(package == 'A' || package == 'a'){
           if(minutes > 450){
                      limit = 450;
                      additionalMinutes = (minutes - limit) * 0.45 + packageA;
           cout << "\nYour new total amount is now: " << additionalMinutes;
           }//end if
           else//{
                         cout << "\nYour normal monthly rate applies: $39.99 \n" << endl;
           //}//end else
    }//end if above

    if(package == 'B' || package == 'b'){
               if(minutes > 900){
                          limit = 900;
                          additionalMinutes = (minutes - limit) * 0.40 + packageB;
               cout << "\nYour new total amount is now: " << additionalMinutes;
               }//end if above
               else{
                    cout << "\nYour normal monthly rate applies: $59.99 \n" << endl;
               }//end else
    }//end if package select

    if(package == 'C' || package == 'c'){
        cout << "\nYour normal monthly rate applies regardless of your minutes: $69.99 \n";
    }//end if package select C
}    
else{
        cout << "\nYou did not enter A, B, or C packages! \n\n"
             << "Please run the program again!! \n\n";
}//ending package choice and else

cout << "\n";
    
system("pause");

//Exit stage right!
return 0;
}
