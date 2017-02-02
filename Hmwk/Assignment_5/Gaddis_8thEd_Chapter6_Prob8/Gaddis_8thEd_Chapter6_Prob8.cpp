/* 
  File:   Gaddis_8thEd_Chapter6_Prob8.cpp
  Author: Attila Kun
  Created on February 1, 2017, 11:50 PM
  Purpose: 
 * Coin Toss
Write a function named coinToss that simulates the tossing of a coin. When you call
the function, it should generate a random number in the range of 1 through 2. If the
random number is 1, the function should display “heads.” If the random number is 2,
the function should display “tails.” Demonstrate the function in a program that asks
the user how many times the coin should be tossed and then simulates the tossing of
the coin that number of times.
 */

//System Libraries
#include <iostream>
#include <cstdlib> //for rand and srand
#include <ctime>   //for the time function
using namespace std;

//Function Prototypes
int coinToss(int &, int &);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //set the seed
    unsigned seed = time(0);    //set the seed
    srand(seed);                //generate new random number   
    
    //Declare Variables
    int toss=0, heads=0, tails=0, total=0;
    
    //Input values
    cout << "How many times do you want to flip the coin: ";
    cin >> toss;
    
    //Output values
    for(int run=0; run < toss; run++){
        coinToss(heads, tails);
    }
    
    total = heads + tails;
    cout << "Out of " << total << " the coin flipped heads: " << heads << " times\n"
         << "And the coin flipped tails: " << tails << " times\n";
    
    //Exit stage right!
    return 0;
}

int coinToss(int &head, int &tail){    
         
    //assign 2 random number from 1 to 2
    int number = rand()%2+1;       //from 1 to 2

    //if rand number == 1 then ++head else ++tails
    if(number == 1) head++;
    else if (number == 2) tail++;
    
    return 0;
    
}
