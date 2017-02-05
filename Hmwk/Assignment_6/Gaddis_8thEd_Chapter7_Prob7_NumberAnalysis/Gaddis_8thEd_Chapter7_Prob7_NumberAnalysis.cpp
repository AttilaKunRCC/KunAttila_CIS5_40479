/* 
  File:   Gaddis_8thEd_Chapter7_Prob7_NumberAnalysis
  Author: Attila Kun
  Created on January 4, 2017, 19:06 PM
  Purpose:  Number Analysis Program
Write a program that asks the user for a file name. Assume the file contains a series of
numbers, each written on a separate line. The program should read the contents of the
file into an array and then display the following data:
• The lowest number in the array
• The highest number in the array
• The total of the numbers in the array
• The average of the numbers in the array
If you have downloaded this book’s source code from the companion Web site, you
will find a file named numbers.txt in the Chapter 07 folder. You can use the file to
test the program. (The companion Web site is at www.pearsonhighered.com/gaddis .)
 */

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//Function Prototypes
int highest(int [], int, int);
int lowest(int [], int, int);
int getTotal(int [], int, int);
int average(int [], int, int n);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int ARRAY_SIZE = 12; // Array size
    int numbers[ARRAY_SIZE]; // Array with 10 elements
    int count = 0, n, units; // Loop counter variable
    ifstream inputFile; // Input file stream object
    
    // Open the file
    //asks the user for a file name
    inputFile.open("numbers.txt");
    
    // Read the numbers from the file into the array.
    while (count < ARRAY_SIZE && inputFile >> numbers[count])
            count++;
    
    // Close the file.
    inputFile.close();
    
    // Display the numbers read:
    cout << "The numbers in the text file are: ";
    for (count = 0; count < ARRAY_SIZE; count++)
            cout << numbers[count] << " ";
            cout << endl;
            
            
    highest(numbers, ARRAY_SIZE, n); // Calling function 
    lowest(numbers, ARRAY_SIZE, n); // Calling function
    getTotal(numbers, ARRAY_SIZE, n);
    average(numbers, ARRAY_SIZE, n);
    
    //Exit stage right!
    return 0;
    
} //end main

int lowest(int numbers[], int ARRAY_SIZE, int n){
    cout << " The value of 'n': ";
    cin >> n;
    
    for(int count = 0; count < ARRAY_SIZE; count++){
        
        if(numbers[count]>n)
            cout << numbers[count] << " " << endl;
    
    }//end for  
    
}//end void lowest


int highest(int numbers[], int ARRAY_SIZE, int n){
    cout << " The value of 'n': ";
    cin >> n;
    
    for(int count = 0; count < ARRAY_SIZE; count++){
        
        if(numbers[count]>n)
        
    cout << numbers[count] << " " << endl;
    
    }//end for  
    
}//end void highest


// Get the total
int getTotal(int units[], int ARRAY_SIZE, int n){
        int total = 0;
        
        for(int count = 0; count < ARRAY_SIZE; count++ )
            total += units[count];
        
        return total;
}

int average(int numbers[], int ARRAY_SIZE, int n){
    int total = 0;
    int average;
    
    for(int count = 0; count < ARRAY_SIZE; count++){
        
        total += numbers[count];
        average = total / ARRAY_SIZE;
    
    }//end for  
    
}//end void average



 
 
 

 

 