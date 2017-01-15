/* 
  File:   Gaddis_8thEd_Chap4_Prob11_MathTutor
  Author: Attila Kun
  Created on January 14, 2017, 8:06 PM
  Purpose:  
 * - write a program that can be used as a math tutor for a young student
 * - the program should display two random numbers to be added, such as 247+129/
 * - the program should then pause while the student works on the problem. 
 * - When the student is ready to check the answer, he/she can press a key and the program will display the correct solution
 * - If the answer is correct a message should be displayed to congratulate the user, if it is incorrect, the correct answer
 * should be displayed
 * 
 */

//System Libraries
#include <iostream>
#include <iomanip> //for setw
#include <cstdlib> //for rand and srand
#include <ctime>   //for the time function
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int first, second, solution;
    unsigned seed = time(0);    //set the seed
    srand(seed);                //generate new random number
   
        //Output values
   //assign 2 random number from 1 to 1000     
   first = rand()%1000+1;       //from 1 to 1000
   second = rand()%1000+1;      //from 1 to 1000
   
   //display an exercise
   cout << setw(5) << first << "+" << endl
        << setw(5) << second << endl
        << "------\n ";
   cin >> solution;
   
   //check the solution
   if(solution == first + second){
             cout << "\nThat is correct! Congratulations!\n";
   }
             else{
                  cout << "\nThat is incorrect! The answer is: " << first + second << endl;
//             break;
   }
    
    cout << "\n\n";
    //Exit stage right!
    return 0;
}
