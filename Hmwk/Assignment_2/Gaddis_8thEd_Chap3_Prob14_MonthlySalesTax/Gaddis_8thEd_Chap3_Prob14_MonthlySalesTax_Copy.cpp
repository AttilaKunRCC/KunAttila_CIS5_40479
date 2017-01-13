/* 
  File:   Gaddis_8thEd_Chap3_Prob14_MonthlySalesTax.cpp
  Author: Attila Kun
  Created on January 11, 2017, 10:25 PM
  Purpose:
 * -retail company must file a monthly sales tax report listing the sales for the month
 * and the amount of sales tax collected.
 * -write a program that asks for the month, the year, and the total amount collected at the cash register (meaning, sales plus sales tax)
 * -State tax is 4%, and the county sales tax is 2%
 * - if the total amount collected is known and the total sales tax is 6%, the amount of product sales may be calculated asL
 * S=T/1.06
 * S is the product sales, T is the total income (product sales plus sales tax)
 * 
 */

//System Libraries
#include <iostream>
#include <iomanip>

//#include <cstdio>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int countySalesTax, stateSalesTax, totalSalesTax;
    int totalCollected, sales;
     
    //Input values
    cout << "Month : October\n";
    cout << "____________________";
    
    totalCollected = sales + countySalesTax + stateSalesTax + totalSalesTax;
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "\n\nTotal Collected: $" << totalCollected;    
    
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "\nEnter Sales amount:       $";    
    cin >> sales;
        
    countySalesTax= totalCollected * 0.02;
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "\nCounty Sales Tax:       $" << countySalesTax;
    
    stateSalesTax = totalCollected * 0.04;
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "\nState Sales Tax:       $" << stateSalesTax;
    
    totalSalesTax = totalCollected * 0.06;
    std::cout << std::fixed;
    std::cout << std::setw(10);

    std::cout << std::setprecision(2);
    std::cout << "\nTotal Sales Tax:       $" << totalSalesTax;
    
       
    cout << "\n\n";
    
    
    //Exit stage right!
    return 0;
}
