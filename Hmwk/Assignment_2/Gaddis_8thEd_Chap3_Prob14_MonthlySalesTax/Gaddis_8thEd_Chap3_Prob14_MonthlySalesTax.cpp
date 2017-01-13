/* 
  File:   Gaddis_8thEd_Chap3_Prob14_MonthlySalesTax.cpp
  Author: Attila Kun
  Created on January 12, 2017, 10:25 PM
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
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv){

//declare and initialize variables
string month="" ;                 //month
int year;                         //year
float totalIncomeAmount;                //total amount collected at the cash register
float productSales;                      //the amount of product sales
float countySalesTax;             //result County Sales Tax
float stateSalesTax;              //result State Sales Tax
float CountySalesTax = 0.02;      //county sales tax
float StateSalesTax=0.04;         //state sales tax 
float totalSalesTax;              //total sales tax

//prompt and get values
cout << "Enter the month: ";
cin >> month;
cout << "Enter the year: ";
cin >> year;
cout << "Enter the total amount collected at the cash register: $";
cin >> totalIncomeAmount;

//calculate sales tax
productSales = totalIncomeAmount/1.06;                         //amount of product sales
countySalesTax = productSales * CountySalesTax;               //county sales tax
stateSalesTax = productSales * StateSalesTax;                 //state sales tax
totalSalesTax = countySalesTax + stateSalesTax;       //total sales tax

//output the result with 2 decimal places
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);

cout << "\nMonth: " << month << endl
	<< "Year : " << year << endl
	<< "===============================\n";
cout << "Total Collected:	$" << setw(10) << totalIncomeAmount << endl
	 << "Sales:             $" << setw(10) << productSales << endl
	 << "County Sales Tax:	$" << setw(10) << countySalesTax << endl
	 << "State sales tax:	$" << setw(10) << stateSalesTax << endl
	 << "Total sales tax: 	$" << setw(10) << totalSalesTax << endl;
	

return 0;

} //end main

