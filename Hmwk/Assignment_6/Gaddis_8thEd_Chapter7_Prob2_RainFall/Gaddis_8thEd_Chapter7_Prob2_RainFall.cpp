/* 
  File:   Gaddis_8thEd_Chapter7_Prob2_RainFall.cpp
  Author: Attila Kun
  Created on January 3, 2017, 14:54 PM
  Purpose:  Rainfall Statistics
Write a program that lets the user enter the total rainfall for each of 12 months into
an array of float s. 
 * The program should calculate and display the total rainfall for
the year, the average monthly rainfall, and the months with the highest and lowest
amounts.
Input Validation: Do not accept negative numbers for monthly rainfall figures.
 * reference: http://www.dreamincode.net/forums/topic/73720-arrays-and-functions-in-a-program/
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

// Constant for the number of months
const int NUM_MONTHS = 12;

// Function prototypes
float getTotal(float []);
float getAverage(float []);
float getLargest(float [], int &);
float getSmallest(float [], int &);

//Executable code begins here!!!
int main(int argc, char** argv) {
    // Array to hold the rainfall data
    float rainFall[NUM_MONTHS];
    
    // Get the rainfall for each month.
    for (int month = 0; month < NUM_MONTHS; month++){
    
    // Get this month's rainfall.
	      cout << "Enter the rainfall (in inches) for month #";
	      cout << (month + 1) << ": ";
	      cin >> rainFall[month];

    // Validate the value entered.
	      while (rainFall[month] < 0){ 
	         cout << "Rainfall must be 0 or more.\n"
	              << "Please re-enter: ";
	         cin  >> rainFall[month];
	      }
	   }

    // Set the numeric output formatting.
    cout << fixed << showpoint << setprecision(2) << endl;
    
    // Display the total rainfall.
    cout << "The total rainfall for the year is ";
    cout << getTotal(rainFall)
        << " inches." << endl;
           
    // Display the average rainfall.
    cout << "The average rainfall for the year is ";
    cout << getAverage(rainFall)
	<< " inches." << endl;  
    
    /// Now display the largest & smallest amounts.
    // The subscript variable will be passed by reference
    // the the getLargest and getSmallets functions.
	   int subScript = 0;
           
           
    // Display the largest amount of rainfall.
    cout << "The largest amount of rainfall was ";
    cout << getLargest(rainFall, subScript)
	<< " inches in month ";
    cout << (subScript + 1) << "." << endl;
           
    // Display the smallest amount of rainfall.
    cout << "The smallest amount of rainfall was ";
    cout << getSmallest(rainFall, subScript)
	 << " inches in month ";
    cout << (subScript + 1) << "." << endl << endl;
	   
    return 0;
}
    
// Get Total, takes array and reads values from the array to get total.
// It goes for 0 to 11 (remember arrays start at 0)
    float getTotal(float rainFall[]){
    float total = 0;
    for (int count = 0; count < NUM_MONTHS; count++)
        total += rainFall[count];
    
    return total;
    }
    
// Get the total and calculate the average
float getAverage(float rainFall[]){
        float average = 0.0;
	average= getTotal(rainFall)/NUM_MONTHS;
        
        return average;
}
    
float getLargest(float rainFall[], int &subscript){    
        float largest;
	largest = rainFall[0];

            // Again start at zero and go until we hit 12, also remember to increment
            for (int month = 0; month < NUM_MONTHS; month++ ){
                         if ( rainFall[month] > largest ){
                              largest = rainFall[month];
                              subscript = month;
                         }
            }
    return largest;
}

float getSmallest(float rainFall[],  int &subscript){
	    float smallest;
	    smallest = rainFall[0];
	    for ( int month = 0; month < NUM_MONTHS; month++){
                if ( rainFall[month] < smallest ){
	             smallest = rainFall[month];
	             subscript = month; // Notice in each loop we record the month to our subscript
	        }
	    }
return smallest;
}

