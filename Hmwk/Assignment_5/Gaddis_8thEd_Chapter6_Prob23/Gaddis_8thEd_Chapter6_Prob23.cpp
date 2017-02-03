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
#include <cstring>
#include <ctime>
#include <cstdlib>
using namespace std;

//function prototype
bool isPrime(int);

int main(int argc, char** argv)
{
    int number;    
    isPrime(number); 
    
    //Read the name of the file
    const int SIZE=20;
    char fileName[SIZE];
    cout<<"Type in a file name to use"<<endl;
    cin.getline(fileName,SIZE);
    
    //Fill this file with numbers
    ofstream output(fileName);
    int amountOfData=100;
    for(int i=1;i<amountOfData;i++){
        cout << 
    }
    
    //Close the file
    output.close();
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
