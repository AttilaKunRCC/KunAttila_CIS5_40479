/* 
  File:   Lab3_DebtPerPerson.cpp
  Author: Attila Kun
  Created on January 13, 2017, 15:25 PM
  Purpose: 
 * -Calculate the Debt per person given the following years
 * Here are your references to use
Population 2008  -> 304 Million = 304,000,000 = 3.04e8
Population 2016  -> 322 Million = 322,000,000 = 3.22e8
Federal Debt as of  2008  ->  9.7 Trillion = 9,700,000,000,000 = 9.7e12
Federal Debt as of  2016  ->   20 Trillion = 20,000,000,000,000 = 2e13
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv){

//declare and initialize variables
float USdebt2008 = 9.7e12, USdebt2016 = 2e13 , pop2008 = 3.04e8, pop2016 = 3.22e8, debt2008person, debt2016person;

//formulas for percentages (Military budget / US Spending) * 100
debt2008person = USdebt2008/pop2008;
debt2016person = USdebt2016/pop2016;

//output the result with 5 decimal places
std::cout.precision(6);
  std::cout << '\n';
  std::cout << "scientific:\n" << std::scientific;
  std::cout << "In 2008 the debt per person was: " << debt2008person << '\n' << "In 2016 the debt per person was: " << debt2016person << '\n';
  
std::cout.precision(2);
  std::cout << '\n';
  std::cout << "fixed:\n" << std::fixed;
  std::cout << "Meaning in 2008 the debt per person was: " << debt2008person << '\n' << "And in 2016 the debt per person was: " << debt2016person << '\n';
  

return 0;

} //end main

