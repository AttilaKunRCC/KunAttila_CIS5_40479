/* 
  File:   Gaddis_8thEd_Chapter5_Prob8_MathTutor
  Author: Attila Kun
  Created on January 19, 2017, 11:11 PM
  Purpose:  
 * - write a program that can be used as a math tutor for a young student
 * - the program should display two random numbers to be added, subtracted, multiplied, and divided
 * - the program should then pause while the student works on the problem. 
 * - When the student is ready to check the answer, he/she can press a key and the program will display the correct solution
 * - If the answer is correct a message should be displayed to congratulate the user, if it is incorrect, the correct answer
 * should be displayed
 * - After the user has finished the math problem, the program should display the menu again and it should continue until the user chooses to quit
 * - Input Validation: If the user selects an item not on the menu, display an error message and display the menu again
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
    char menu;
    unsigned seed = time(0);    //set the seed
    srand(seed);                //generate new random number
   
do{
   //display an exercise
   cout << "Select: \n" << "1. Addition\n" << "2. Substraction\n" << "3. Multiplication\n"
        << "4. Division\n" << "5. Quit Program\n";
   cin >> menu;
   
       switch(menu){
                case '1': {
                     //assign 2 random number from 1 to 1000     
                     first = rand()%1000+1;       //from 1 to 1000
                     second = rand()%1000+1;      //from 1 to 1000
                     
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
                                  
                      }    
                      system("pause"); 
                      break;   
                }//end case 1
                case '2': {
                     //assign 2 random number from 1 to 1000     
                     first = rand()%1000+1;       //from 1 to 1000
                     second = rand()%1000+1;      //from 1 to 1000
                     
                     cout << setw(5) << first << "-" << endl
                          << setw(5) << second << endl
                          << "------\n ";
                          cin >> solution;
                          
                      //check the solution
                      if(solution == first - second){
                                  cout << "\nThat is correct! Congratulations!\n";
                      }
                      else{
                                  cout << "\nThat is incorrect! The answer is: " << first - second << endl;
                                  
                      }    
                      system("pause");
                      break;    
                }//end case 2
                case '3': {
                     //assign 2 random number from 1 to 1000     
                     first = rand()%1000+1;       //from 1 to 1000
                     second = rand()%1000+1;      //from 1 to 1000
                     
                     cout << setw(5) << first << "*" << endl
                          << setw(5) << second << endl
                          << "------\n ";
                          cin >> solution;

                      //check the solution
                      if(solution == first * second){
                                  cout << "\nThat is correct! Congratulations!\n";
                      }
                      else{
                                  cout << "\nThat is incorrect! The answer is: " << first * second << endl;
                                  
                      }    
                      system("pause"); 
                      break;   
                }//end case 3
                case '4': {
                     //assign 2 random number from 1 to 1000     
                     first = rand()%1000+1;       //from 1 to 1000
                     second = rand()%1000+1;      //from 1 to 1000
                     
                     cout << setw(5) << first << "/" << endl
                          << setw(5) << second << endl
                          << "------\n ";
                          cin >> solution;

                      //check the solution
                      if(solution == (first/second)){
                                  cout << "\nThat is correct! Congratulations!\n";
                      }
                      else{
                                  cout << "\nThat is incorrect! The answer is: " << first/second << endl;
                                  
                      }    
                      system("pause");
                      break;                         
                }//end case 4
                case '5': {
                   cout << "Exiting the tutor! \n";
                   return 1;   //success 
                          
                }//end case 5
                
                default: {
                   cout << "You've chosen an invalid option! Returning you to tutor... \n";
                   //system("pause");
                   //break;    
                          
                }//end case default  
       }
}while(true);
             
    //Exit stage right!
    return 0;
}
