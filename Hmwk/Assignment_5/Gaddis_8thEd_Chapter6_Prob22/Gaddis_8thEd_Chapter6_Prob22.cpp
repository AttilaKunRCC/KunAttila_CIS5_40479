/* 
  File:   Gaddis_8thEd_Chapter6_Prob22.cpp
  Author: Attila Kun
  Created on February 2, 2017, 17:50 PM
  Purpose: 
  isPrime Function
A prime number is a number that is only evenly divisible by itself and 1. For example,
the number 5 is prime because it can only be evenly divided by 1 and 5. The number 6,
however, is not prime because it can be divided evenly by 1, 2, 3, and 6.
Write a function name isPrime , which takes an integer as an argument and returns
true if the argument is a prime number, or false otherwise. Demonstrate the function
in a complete program.
*/
#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
bool isPrime(int);

int main(int argc, char** argv)
{
    int number;
    cout << "Enter a number to find out if it's prime or not: ";
    cin >> number;
    
    if(isPrime(number))
        cout << "The number " << number << " is prime.\n";
    else 
        cout << "The number " << number << " is not prime.\n";
    
    return 0;
}
bool isPrime(int number){
    int i;
    for(i=2; i<number; i++){
        if(number % i == 0){
            return false;
        }//end inner if
    }//end outer if
}//end bool isPrime function
