/* 
  File:   Gaddis_8thEd_Chap2_Prob8_TotalPurchase
  Author: Attila Kun
  Created on January 7, 2017, 12:15 PM
  Purpose:  calculate the total purchase
 */

//System Libraries
#include <iostream>

using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float item1=15.95, item2=24.95, item3=6.95, item4=12.95, item5=3.95, Sales_total_with_tax, tax=0.07, Total_amount_items;
    float Sales_tax;
    
   //Output values

    cout << "\nYour item1 price is: \n" << item1;
    cout << "\nYour item2 price is: \n" << item2;
    cout << "\nYour item3 price is: \n" << item3;
    cout << "\nYour item4 price is: \n" << item4;
    cout << "\nYour item5 price is: \n" << item5;
    
    //Sales_tax formula and Sales_total
    Total_amount_items = item1+item2+item3+item4+item5;
    Sales_tax = Total_amount_items * tax;
    Sales_total_with_tax = Total_amount_items;
    
    cout << "\n\nThe Total amount for items purchased is: \n" << Total_amount_items;
    
    cout << "\n\nThe Sales tax amount for this purchase is: \n" << Sales_tax;
   
    cout << "\n\nThe Sales Total amount with tax for this purchase is: \n" << Sales_total_with_tax + Sales_tax;

    //Exit stage right!
    return 0;
}

