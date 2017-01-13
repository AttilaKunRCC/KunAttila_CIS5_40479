/* 
  File:   Gaddis_8thEd_Chap3_Prob24_WordGame.cpp
  Author: Attila Kun
  Created on January 10, 2017, 9:25 PM
  Purpose:  
 * - a bag of cookies holds 30 cookies
 * - the bag claims there are 10 "servings" in the bag and one serving equals 300 calories!!!!
 * - write a program that ask the user to input how many cookies he/she had actually ate and then reports how many calories were consumed
 * 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    string name, city, collegeName, profession, animal, petName;
    int age;
     
    //Input values
    cout << "What is your name: \n";
    cin >> name; 
    cout << "How old are you: \n";
    cin >> age;  
    cout << "Where do you live: \n";
    cin >> city;
    cout << "What college did you graduate from: \n";
    cin >> collegeName;
    cout << "What's your job title: \n";
    cin >> profession;
    cout << "What animals do you like: \n";
    cin >> animal;
    cout << "What name would you give your pet:\n";
    cin >> petName;
    
    
    cout <<"There once was a person named " << name << " who lived in " << city << ". At the age of " << age << ", "<< name << " went to college at " << collegeName << ". " 
         << name << " graduated and went to work as a " << profession << "." << " Then " << name << " adopted a(n) " << animal << " named " << petName << ". They both lived"
         " happily over after!"; 
    
    cout << "\n\n";
     
    //Exit stage right!
    return 0;
}
