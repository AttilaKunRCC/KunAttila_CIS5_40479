/* 
 * File:   Gaddis_8thEd_Chap2_Prob4_RestaurantBill
 * Author: Attila Kun
 *
 * Created on January 6, 2017, 12:24 AM
Tax should be applied after the meal cost with tax!!!!!!!!!!!

*/

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    float Total_with_Sales_Tax, Total_with_tip, purchase;
    double Tax=0.0675, Tip=0.2;
    //Input values
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout << "Type your meal purchased amount:\n";
    cin >> purchase;
    
    
    Total_with_Sales_Tax = purchase + (purchase*Tax);
    cout << "\nThe total with Sales Tax is: \n\n" << Total_with_Sales_Tax;
    
    Total_with_tip= purchase + Total_with_Sales_Tax * Tip;
    cout << "\nThe total with tips included is: \n" << Total_with_tip;
    
    
    //Exit stage right!
    return 0;
}

