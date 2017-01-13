/* 
  File:   Lab3_Assigment_NASA_and_Army_Spending.cpp
  Author: Attila Kun
  Created on January 13, 2017, 12:25 AM
  Purpose: 
 * -use float literals with scientific notation
 * -to calculate the percentage of the federal budget that the Military and NASA are funded.
 * 
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv){

//declare and initialize variables
float USspending=3.54e12 , NASAspending=1.85291e10, armySpending = 5.8e11, NASA, Army;

//formulas for percentages (Military budget / US Spending) * 100
NASA = (NASAspending/USspending) * 100;
Army = (armySpending/USspending) * 100;

//output the result with 5 decimal places
std::cout.precision(5);
  std::cout << '\n';
  std::cout << "scientific:\n" << std::scientific;
  std::cout << "NASA funding is: " << NASA << '\n' << "Army Funding is: " << Army << '\n';
	

return 0;

} //end main

