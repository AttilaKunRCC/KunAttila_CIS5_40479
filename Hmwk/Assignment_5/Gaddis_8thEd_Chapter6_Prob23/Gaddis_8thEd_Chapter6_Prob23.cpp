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
#include <fstream>
#include <cstdlib>
using namespace std;

//function prototype
bool isPrime(int);

int main(int argc, char** argv)
{
    int number;    
    isPrime(number); 
    
    ofstream outFile;
    outFile.open("1-100.txt");
    
    for(int i=1;i<100;i++){
        if(isPrime(i)){
            outFile<<i<<"\t"<<endl;
        }
    }//end for loop
    return 0;
}
bool isPrime(int number){    
    for(int i=2; i<number; i++){
        if(number % i == 0){
            return false;
        }//end inner if
    }//end outer if    
}//end bool isPrime function
