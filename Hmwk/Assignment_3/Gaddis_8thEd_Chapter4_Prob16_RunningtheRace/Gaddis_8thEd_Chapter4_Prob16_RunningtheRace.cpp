/* 
 * File:   Gaddis_8thEd_Chapter4_Prob16_RunningtheRace.cpp
 * Author: Attila Kun
 * Created on January 14, 2017, 8:16 PM
 * - write a program that asks for the names of 3 runners and the time it took each of them to finish a race
 * - the program should display who came in 1st, 2nd, and 3rd place
 * - Input Validation: only accept positive numbers for the the times!!!
 * - some reference from sourcecodeera.com/blogs/Samath/Comparing-3-numbers-in-C.aspx
 */

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
void inputValidation(float runner_time);
int main(int argc, char** argv) {
    
    //declare variables and global constants
    unsigned int firstRunnerTime, secondRunnerTime, thirdRunnerTime; 
    string firstRunnerName, secondRunnerName, thirdRunnerName; 
    
       
    //user input needed
    cout << "Enter the 1st runner name: ";
    cin >> firstRunnerName;
    cout << "Enter the time recorded: ";
    cin >> firstRunnerTime;
    inputValidation(firstRunnerTime);
    cin.ignore(1);
        
    cout << "Enter the 2nd runner name: ";
    cin >> secondRunnerName;
    cout << "Enter the time recorded: ";
    cin >> secondRunnerTime; 
    inputValidation(secondRunnerTime);
    cin.ignore(1);
        
    cout << "Enter the 3rd runner name: ";
    cin >> thirdRunnerName;
    cout << "Enter the time recorded: ";
    cin >> thirdRunnerTime;
    inputValidation(thirdRunnerTime); 
    cin.ignore(1); 

    
    //check for first, second and third place
    if(firstRunnerTime < secondRunnerTime && firstRunnerTime < thirdRunnerTime && secondRunnerTime > thirdRunnerTime){ //find if 1st time is greater
               cout << firstRunnerName << " came in first!\n ";
               cout << thirdRunnerTime << " came in second!\n ";
               cout << secondRunnerTime << " came in third!\n ";
    }
    if(firstRunnerTime < secondRunnerTime && firstRunnerTime < thirdRunnerTime && secondRunnerTime < thirdRunnerTime){ //find if 1st time is greater
               cout << firstRunnerName << " came in first!\n ";
               cout << secondRunnerTime << " came in second!\n ";
               cout << thirdRunnerTime << " came in third!\n ";
    }
    if(secondRunnerTime < firstRunnerTime && secondRunnerTime < thirdRunnerTime && firstRunnerTime > thirdRunnerTime){ //find if 2nd time is greater
               cout << secondRunnerTime << " came in first!\n ";
               cout << thirdRunnerTime << " came in second!\n ";
               cout << firstRunnerName << " came in third!\n ";
    }
    if(secondRunnerTime < firstRunnerTime && secondRunnerTime < thirdRunnerTime && firstRunnerTime < thirdRunnerTime){ //find if 2nd time is greater
               cout << secondRunnerTime << " came in first!\n ";
               cout << firstRunnerName << " came in second!\n ";
               cout << thirdRunnerTime << " came in third!\n ";
    }
    if(thirdRunnerTime < secondRunnerTime && thirdRunnerTime < firstRunnerTime && secondRunnerTime > firstRunnerTime ){ //find if 3rd time is greater
               cout << thirdRunnerTime << " came in first!\n ";
               cout << firstRunnerName << " came in second!\n ";
               cout << secondRunnerTime << " came in third!\n ";
    }
    if(thirdRunnerTime < secondRunnerTime && thirdRunnerTime < firstRunnerTime && secondRunnerTime < firstRunnerTime ){ //find if 3rd time is greater
               cout << thirdRunnerTime << " came in first!\n ";
               cout << secondRunnerTime << " came in second!\n ";
               cout << firstRunnerName << " came in third!\n ";
    }

    
    
    system("pause");

    return 0;
}
void inputValidation(float runner_time){
         if(runner_time < 0){
                        cout << "Positive numbers only" << endl;
                        system("pause");
                        exit(0);
         }    
}

