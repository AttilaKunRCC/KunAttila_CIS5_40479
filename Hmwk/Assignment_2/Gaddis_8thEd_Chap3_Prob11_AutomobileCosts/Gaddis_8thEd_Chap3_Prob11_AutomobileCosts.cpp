/* 
  File:   Gaddis_8thEd_Chap3_Prob11_AutomobileCosts.cpp
  Author: Attila Kun
  Created on January 10, 2017, 9:36 PM
  Purpose: 
 * - write a program that ask the user to input the expenses incurred from operating her/his automobile:loan payment, insurance, gas, oil, tires and
 * maintenance
 * - the program should then display the total monthly cost of these expenses, and the total annual cost of these expenses
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float loanPayment, insurance, gas, oil, tires, maintenance;
    float monthly, annual; 
    
    
    //Input values
    cout << "Type loan payment amount: $";
    cin >> loanPayment;
    cout << "\nThe insurance is: $ ";
    cin >> insurance;
    cout << "\nGas: $";
    cin >> gas;
    cout << "\nOil: $"; 
    cin >> oil;
    cout << "\nTires: $" ;
    cin >> tires;
    cout << "\nMaintenance: $";
    cin >> maintenance;
    
    
    monthly = loanPayment+insurance+gas+oil+tires+maintenance;
    annual = monthly * 12;
    
    cout << "\nYour montly costs are :$" << monthly << " and therefore your annual costs are: $" << annual;
    
    cout << "\n\n";
    
    //Exit stage right!
    return 0;
}
