/* 
  File:   Gaddis_8thEd_Chap2_Prob18_EnergyDrinkConsumption
  Author: Attila Kun
  Created on January 7, 2017, 15:55 PM
  Purpose:  Energy Drink Consumption customer calculation
 */

//System Libraries
#include <iostream>

using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
//declare variables
	int numberOfcustomers;					//INPUT - The Number of customers
 	float rateOfEnergyDrinkCustomers;			//INPUT - Rate of Energy Drink Customers
        float rateOfCitrusCustomers;				//INPUT - Rate of Citrus Customers
	float numberOfEnergyDrinkCustomers;                     //OUTPUT - The Number of Energy Drink Customers
 	float numberOfCitrusCustomers;				//OUTPUT - The Number of Citrus Customers
 	int approximate;					//OUTPUT - I am going to assign float to int
//
// Initialize Program Variables
	numberOfcustomers = 16500;
	rateOfEnergyDrinkCustomers = 15;
	rateOfCitrusCustomers = 58;
	numberOfEnergyDrinkCustomers;
	numberOfCitrusCustomers;
//
//  Compute the number of EnergyDrinkCustomers
	numberOfEnergyDrinkCustomers = numberOfcustomers * rateOfEnergyDrinkCustomers /100;
//
//  Assigns numberOfEnergyDrinkCustomers (float) to approximate (int)
//  because the approximate number of customers should be integer.
	approximate = numberOfEnergyDrinkCustomers;
//
//  Output Result
	cout << "The approximate number of customers in the survey "
		 << "who purchase one or more energy drinks per week is " 
		 << approximate << endl;
//
//  Compute the number of CitrusCustomers
	numberOfCitrusCustomers = numberOfEnergyDrinkCustomers * rateOfCitrusCustomers / 100;
//
//  Assigns numberOfCitrusCustomers (float) to approximate (int)
//  because the approximate number of customers should be integer.
	approximate = numberOfCitrusCustomers;
//
//  Output result
	cout << "The approximate number of customers in the survey " 
		 << "who prefer citrus flavored energy drinks is " 
	     << approximate << endl;
        
//Exit stage right!
	return 0;
}

