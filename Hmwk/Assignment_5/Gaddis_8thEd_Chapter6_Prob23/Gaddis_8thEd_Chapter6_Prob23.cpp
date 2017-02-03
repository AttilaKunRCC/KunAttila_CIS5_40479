/* 
  File:   Gaddis_8thEd_Chapter6_Prob23.cpp
  Author: Attila Kun
  Created on February 2, 2017, 17:50 PM
  Purpose: 
  Prime Number List
Use the isPrime function that you wrote in Programming Challenge 22 in a program
that stores a list of all the prime numbers from 1 through 100 in a file.
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
    
    //Close the file
    output.close();
}//end bool isPrime function
