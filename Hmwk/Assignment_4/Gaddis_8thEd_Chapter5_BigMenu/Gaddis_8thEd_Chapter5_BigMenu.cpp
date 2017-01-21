/* 
  File:   /* 
 * File:   Gaddis_8thEd_Chapter5_BigMenu.cpp
 * Author: Attila Kun *
 * Created on January 20, 2017, 4:58 PM
 *The 10th problem will be for you to create a menu, that has all the 9 problems in 1 program/project.  Use the following menu and example as a guideline
 * https://github.com/ml1150258/LehrMark_CSC5_CIS5_40488-9_40107-8/blob/master/Lab/ExampleMenuWithSwitchAndDoWhileLoop/main.cpp
 * https://github.com/ml1150258/LehrMark_CSC5_CIS5_40488-9_40107-8/blob/master/Lab/ExampleMenuWithSwitchAndDoWhileLoopWith3Problems/main.cpp
 *
 *
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
using namespace std;


//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list:"<<endl;
        cout<<"Type 1 for Problem with Do-While -> Random Number Guess"<<endl;
        cout<<"Type 2 for Problem with Do-While -> Random Number Guess and Guesses Count"<<endl;
        cout<<"Type 3 for Problem with For -> The Greatest And Least Number"<<endl;
        cout<<"Type 4 for Problem with Switch -> Math Tutor"<<endl;
        cout<<"Type 5 for Problem with Do-While -> Sum of Numbers"<<endl;
        cout<<"Type 6 for Problem with For -> Calories Burnt"<<endl;
        cout<<"Type 7 for Problem with For -> Char Ascii Code"<<endl;
        cout<<"Type 8 for Problem with Nested For Loops -> Pattern Display"<<endl;
        cout<<"Type 9 for Problem with For -> Celsius to Fahrenheit"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{
                 //Gaddis_8thEd_Chapter5_Prob20_RandomNumberGuess.cpp
                 //Declare Variables
                 int number, guess;
                 unsigned seed = time(0);    //set the seed
                 srand(seed);                //generate new random number
        
                 //assign 2 random number from 1 to 10
                 number = rand()%10+1;       //from 1 to 10
    
                 //Process by mapping inputs to outputs
                 //Input values    
                     
                     do{
                        cout << "\nGuess what number between 1 and 10 I picked: \n " << endl;
                        cin >> guess;
                     
                        //check the solution
                        if (guess < number){
                                  cout << "Too low! Try again.\n";
                                  }//end else if
                                  else if (guess > number){
                                  cout << "Too high! Try again.\n";                                  
                                  }//end else if above
                                  else{
                                       cout << "That is correct!\n";
                                       } //end else 
                     }while (guess != number); //end while
                         
                         //Output values
                         system("pause");
                         break;
            }//end case '1'
            
            case '2':{
                 //Gaddis_8thEd_Chapter5_Prob20_RandomNumberGuessCount.cpp
                //Declare Variables
                int number, guess;
                char count;
                unsigned seed = time(0);    //set the seed
                srand(seed);                //generate new random number
        
                //assign 2 random number from 1 to 10
                number = rand()%10+1;       //from 1 to 10
    
                //Process by mapping inputs to outputs
                //Input values    
                     
                     do{
                                  cout << "\nGuess what number between 1 and 10 that I picked: \n " << endl;
                                  cin >> guess;
                     
                                  //check the solution
                                  if (guess < number){
                                            cout << "Too low! Try again.\n";
                                            count++;
                                  }//end else if
                                  else if (guess > number){
                                                 cout << "Too high! Try again.\n";
                                                 count++;                                  
                                  }//end else if above
                                  else{
                                       cout << "That is correct!\n";
                                       cout << "You guessed: " << static_cast<int>(count) << endl;
                                  } //end else
                     }while (guess != number); //end while

                         //Output values
                         system("pause");
                         }//end case '2'
                         
            case '3':{
                // FROM Gaddis_8thEd_Chapter5_Prob13_TheGreatestAndLeast.cpp
                int number = 0, highest = 0, lowest = 10;
    
                //Input values
                for (int i=0; number!=-99; i++){
                    //Process by mapping inputs to outputs         
                    cout << "Type some integers (enter -99 to quit): \n";
                    cin >> number;
                
                    if(number == -99){
                          break;
                    }
                    //calculate large and small numbers 
                    if(number > highest)
                         highest = number;
                    if(number < lowest)
                         lowest = number;             
                }//end for case '3'
    
                //Output values
                cout << "\n\nThe highest number is : " << highest << " and the lowest is: " << lowest << endl;

                 //Output values
                         system("pause");
                 }//end case '3'
                 
            case '4':{
                 //Gaddis_8thEd_Chapter5_Prob8_MathTutor
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
                          }//end switch menu
                }while(true); //end do while loop
                }//end case '4'
    
           case '5':{
                     //Gaddis_8thEd_Chapter5_Prob1_SumOfNumbers.cpp
                      //Declare Variables
                      int input, i, result = 0;

                      do{
                         cout << "Please enter a positive number: \n";
                         cin >> input;    

                         for (i=1; i <= input; i++){
                         result += i;            
                         }

                         }while(input < 0);
     
                         cout << "The sum of 1 through " << i << " is "<< result << endl;
    
                         system("pause");
                         }
           
           case '6':{
                //Gaddis_8thEd_Chapter5_Prob4_CaloriesBurnt.cpp
                
                //Output values
                int minutes; 
       
                cout << "If you can burn 3.6 calories/minute by running on a threadmill \n";
                for (minutes=5; minutes <= 30; minutes += 5){
                    float calories = 3.6 * minutes;
                    cout << "\nthen in " << minutes << " minutes you've burned " << calories ;
                }//end for loop

                cout << "\n\n";
                system("pause");  
                
           }//end case '6'
            
            case '7':{     
                 //Output values
    
                 cout << "I will display the characters from 0 through 127 for ASCII! \n";
    
                 for (int i=0; i<=127; i++){
                     cout << i << (char)i << " ";        
                          if(i % 16 == 0){
                               cout << endl;               
                          }
                 }//end for loop
            }//end case '7'    
            
            case '8':{
                      //Declare Variables
                      int i,j;
   
                      //Process by mapping inputs to outputs     
                      cout << "Pattern A\n";
                      cout << "---------\n";
                      //prints the pattern from 1 to 10
                      for(i = 1; i <= 10; i++){
                      // prints the pattern *(same as below)
                                for(j = 1; j <= i; j++){
                                cout << "*";
                                }
                      cout << "\n";
                      }

                      cout << "Pattern B\n";
                      cout << "-----------\n";
                      //prints the pattern from 10 to 1
                      for(i = 10; i >= 1; i--){
                      // prints the pattern * (same as above)
                      for(j = 1; j <= i; j++){
                            cout<<"*";
                      }
                      cout<<"\n";
                      }
                      //Output values
                      system("pause");
               }
               
               case '9':{
                    //Gaddis_8thEd_Chap5_Prob12_CelsiusToFahrenheit.cpp
                    //Declare Variables
                    int celsius;
                    float fahrenheit;
    
                    cout << "Below are the equivalent Celsius to Fahrenheit temperatures! \n";
    
                    //Find equivalent values
                    for(int celsius = 0; celsius <= 20; celsius++){
            
                    cout << "Celsius: " << celsius;
    
                    cout.setf(ios::fixed);
                    cout.setf(ios::showpoint);
                    cout.precision(1);
                    fahrenheit=(celsius*9)/5.f+32;
    
                    cout << "\t Fahrenheit: ";
                    cout << fahrenheit << endl;
    
                    }
    
                    cout << "\n\n";
                    system("pause");
                           
                           
               }//end case '9'
                 
               default:
                         cout<<"You are exiting the program"<<endl;
               }
    }while(choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}
