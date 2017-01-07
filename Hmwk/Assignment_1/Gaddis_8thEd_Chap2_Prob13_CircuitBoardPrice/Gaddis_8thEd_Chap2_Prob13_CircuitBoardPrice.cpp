/* 
  File:   Gaddis_8thEd_Chap2_Prob13_CircuitBoardPrice
  Author: Attila Kun
  Created on January 3, 2017, 12:15 PM
  Purpose:  Template to be used in all programming
            projects!
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {

    //Declare Variables
    double CompanyProfit=0.35, circuitBoardSelling;
    double circuitBoardCost = 14.95;
    
    //Formulas
    circuitBoardSelling = (0.35* circuitBoardCost)+ CompanyProfit;
    
    //Output values
    cout << "Your total selling price $" << circuitBoardSelling;

    cout << "\n\n";  

    //Exit stage right!
    return 0;
}

