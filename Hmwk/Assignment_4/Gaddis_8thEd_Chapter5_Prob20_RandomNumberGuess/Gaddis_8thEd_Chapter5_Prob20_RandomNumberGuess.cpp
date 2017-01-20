/* 
  File:   Gaddis_8thEd_Chapter5_Prob20_RandomNumberGuess.cpp
  Author: Attila Kun
  Created on January 20, 2017, 10:15 PM
  Purpose:  
 * - write a program that generates a random number and asks the user to guess what the number is
 * - if the user's guess is higher than the random number, display "Too high, try again"
 * - if too low, "Too low, try again".
 * - the program should use a loop that repeats until the user correctly guesses the random number
 */

//System Libraries
#include <iostream>
#include <cstdlib> //for rand and srand
#include <ctime>   //for the time function
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int number, guess;
    unsigned seed = time(0);    //set the seed
    srand(seed);                //generate new random number
        
    //assign 2 random number from 1 to 10
    number = rand()%10+1;       //from 1 to 10
    
    //Process by mapping inputs to outputs
    //Input values    
                     
    do{
                     cout << "\nGuess what number between 1 and 10 that I picked: \n " << endl;
                     cin >> guess;
                     
                     //check the solution
                     if (guess < number){
                                  cout << "Too low! Try again.\n";
                      }//end else if
                      else if (guess > number){
                                  cout << "Too high! Try again.\n";                                  
                      }//end else if above
                      else{
                                  cout << "That is correct!\n";
                      } //end else
   }while (guess != number); //end while
                         
    //Output values
    system("pause");
    //Exit stage right!
    return 0;
}
