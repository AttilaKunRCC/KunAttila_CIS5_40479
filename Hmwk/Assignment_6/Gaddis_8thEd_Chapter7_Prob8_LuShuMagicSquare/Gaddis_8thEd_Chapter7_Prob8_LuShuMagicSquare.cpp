/* 
  File:   Gaddis_8thEd_Chapter7_Prob8_LoShuMagicSquare.cpp
  Author: Attila Kun
  Created on January 4, 2017, 10:06 PM
  Purpose:  Lo Shu Magic Square
The Lo Shu Magic Square is a grid with 3 rows and 3 columns shown in Figure 7-19 .
The Lo Shu Magic Square has the following properties:
• The grid contains the numbers 1 through 9 exactly.
• The sum of each row, each column, and each diagonal all add up to the same
number. This is shown in Figure 7-20 .
In a program you can simulate a magic square using a two-dimensional array. Write a
function that accepts a two-dimensional array as an argument, and determines whether
the array is a Lo Shu Magic Square. Test the function in a program.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

// Global constants
const int COLS = 3;      // Number of columns in each array
const int ROWS = 3;        // Number of rows in table

//Function Prototypes
int showArray(const int [ROWS][COLS], int); // Function prototype

//Executable code begins here!!!
int main(int argc, char** argv) {
   //Declare Variables
   int table[ROWS][COLS] = {1, 2, 3, 4, 5, 6, 7, 8, 9};    
    
   //input values
   int n; 
   cout<< "Please enter an odd integer: ";
   cin>>n; 
    
   showArray(table, ROWS);

   //Exit stage right!
   return 0;
}

int showArray(const int array[ROWS][COLS], int rows)
{
    
   
for(int count =0; count < 9; count++){
            bool isNumberUsed = true;
            int number = rand() % 9 + 1;    //get random number between 1 and 9
            if(usedNumbers[number - 1] == 0){
                usedNumbers[number -1] = number;
            }             
} 
        int number;
        if(number>1 && number<9){

                    for (int x = 0; x < rows; x++)
                    {
                       for (int y = 0; y < COLS; y++)
                       {
                          cout << setw(4) << array[x][y] << " ";
                       }
                       cout << endl;
                    }
        }//end if
        else{
               cout << "You need to enter numbers between 1-9. \n";
        }

}