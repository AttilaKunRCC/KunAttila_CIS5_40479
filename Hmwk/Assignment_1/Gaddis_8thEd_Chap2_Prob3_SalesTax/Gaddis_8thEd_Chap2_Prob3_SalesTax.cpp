
/* 
 * File:   Gaddis_8thEd_Chap2_Prob3_SalesTax
 * Author: Attila Kun
 *
 * Created on January 6, 2017, 12:24 AM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    float Total_Salex_Tax, purchase, State_Tax=0.04, County_Sales_Tax=0.02;
    //Input values
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout << "Type your purchase amount:\n";
    cin >> purchase;
    
    
    Total_Salex_Tax = purchase + (purchase*State_Tax)+(County_Sales_Tax*purchase);
    cout << "the total is: \n" << Total_Salex_Tax;
    
    //Exit stage right!
    return 0;
}