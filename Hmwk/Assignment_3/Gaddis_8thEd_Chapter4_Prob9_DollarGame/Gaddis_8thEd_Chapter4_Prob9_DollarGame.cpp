/* 
  File:   Gaddis_8thEd_Chapter4_Prob9_DollarGame.cpp
  Author: Attila Kun
  Created on January 15, 2017, 15:20 PM
  Purpose:  
 * - create a change-counting game that gets the user to enter the number of coins required to make exactly one dollar
 * - the prog should ask the user to enter the number of pennies, nickels, dimes and quarters
 * - if the total value of the coins entered is equal to one dollar, the program should congratulate the user for winning the game
 * - otherwise, the program should display a message indicating whether the amount entered was more than or less than one dollar 
 * 
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float pennies, nickels, dimes, quarters, total;
    
    
    cout << "You will be asked to type the amount of pennies, \n "
            << "nickels, dimes and quarters that make up 1 dollar! \n\n";
    
    //Ask user to enter amount of coins
    cout << "Enter the number of pennies: \n";
    cin >> pennies;
    cout << "Enter the number of nickels: \n";
    cin >> nickels;
    cout << "Enter the number of dimes: \n";
    cin >> dimes;
    cout << "Enter the number of quarters: \n";
    cin >> quarters;
    
    total = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) + (quarters * 0.25);
    
    if(total == 1.00){
        cout << "Success! You won the game. You entered 1 dollar! \n";
    } //closed if above
    else{
         if(total < 1.00 && total > 0){
                  cout << "Sorry! You lost the game!";
         }//closed if above
         else{
              if (total > 1.00){
                        cout << "\nYou entered more than one dollar! Try again later! \n\n";
              } //closed if above
          
              else{
                         cout << "\n The number of coins have to be greater than 0! Try again ... \n\n";
              }//closed else above
         }//close first else
    }
    
    //Exit stage right!
    return 0;
}
