/* 
  File:   Gaddis_8thEd_Chapter7_Prob4_LargerN
  Author: Attila Kun
  Created on January 4, 2017, 15:40 PM
  Purpose:  Larger Than n
In a program, write a function that accepts three arguments: an array, the size of the
array, and a number n . Assume that the array contains integers. 
 * The function should display all of the numbers in the array that are greater than the number n .
 */

//System Libraries
#include <iostream>
using namespace std;

//Function Prototypes 
int highest(int[], int, int); 

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 10;                                         //array and size
    int nums[SIZE] = {0 ,5, 10, 15, 20, 25, 30, 35, 40, 45};    //Assume that the array contains integers
    int n;                                                  //declared number n
    
    cout << " The value of 'n': ";
    cin >> n;
    

    highest(nums, SIZE, n); // Calling function   

    //Exit stage right!
    return 0;
}

int highest(int nums[], int SIZE, int n){
    int highest = nums[0];
    for(int count = 0; count < SIZE; count++){
        if(nums[count]>highest)
            highest = nums[count];
    cout << nums[count] << endl;
    
    }//end for  
    
}//end void highest
