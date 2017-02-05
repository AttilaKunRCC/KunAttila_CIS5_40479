/* 
  File:   Gaddis_8thEd_Chapter7_Prob4_LargerN
  Author: Attila Kun
  Created on January 4, 2017, 15:40 PM
  Purpose:  Larger Than n
In a program, write a function that accepts three arguments: an array, the size of the
array, and a number n . Assume that the array contains integers. The function should
display all of the numbers in the array that are greater than the number n .
 */

//System Libraries
#include <iostream>
using namespace std;

//Function Prototypes
void showValue(int[], int); 

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 20;
    int numbers[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

    showValue(numbers, SIZE); // Calling function   

    //Exit stage right!
    return 0;
}

void showValue(int nums[], int size) // Function Definiton
{
    for(int index = 0; index < size; index++)
        cout << nums[index] << " ";
    cout << endl;
}
