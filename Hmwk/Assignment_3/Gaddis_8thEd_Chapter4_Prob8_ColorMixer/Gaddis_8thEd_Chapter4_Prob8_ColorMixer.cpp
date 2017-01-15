/* 
  File:   Gaddis_8thEd_Chapter4_Prob8_ColorMixer.cpp
  Author: Attila Kun
  Created on January 15, 2017, 2:50 PM
  Purpose:  
 * - the colors red, blue and yellow are known as the primary colors because they cannot be made by mixing other colors
 * - when you mix two primary colors, you get a secondary color, as shown here:
 * when you mix red and blue, you get purple
 * when you mix red and yellow, you get orange
 * when you mix blue and yellow, you get green
 * 
 * - write a program that prompts the user to enter the names of two primary colors to mix
 * - if the user enters anything other than red, blue or yellow, the program should display an error message
 * - otherwise, the program should display the name of the secondary color that results by mixing two primary colors. 
 * 
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    string color1, color2;
    
    //Input values
    cout << "Type the first color: \n";
    cin >> color1;
    cout << "Type the second color: \n";
    cin >> color2;
    
    //Process by mapping inputs to outputs
    if ((color1 == "red" && color2 == "blue")||(color2 == "red" && color1 == "blue")){
            cout << "purple";
    }
    else if ((color1 == "red" && color2 == "yellow")||(color2 == "red" && color1 == "yellow")){
            cout << "orange";
    }
    else if ((color1 == "blue" && color2 == "yellow")||(color2 == "blue" && color1 == "yellow")){
            cout << "green";
    }
    else {
        cout << "You entered an invalid color! \n\n";
    }

    
    //Exit stage right!
    return 0;
}
