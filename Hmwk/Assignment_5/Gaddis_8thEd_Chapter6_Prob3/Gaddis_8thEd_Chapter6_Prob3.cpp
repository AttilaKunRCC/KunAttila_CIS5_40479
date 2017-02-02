/* 
  File:   Gaddis_8thEd_Chapter6_Prob3.cpp
  Author: Attila Kun
  Created on February 1, 2017, 21:15 PM
  Purpose: Write a program that determines which of a company’s four divisions (Northeast,
Southeast, Northwest, and Southwest) had the greatest sales for a quarter. It should
include the following two functions, which are called by main .
• double getSales() is passed the name of a division. It asks the user for a division’s
quarterly sales figure, validates the input, then returns it. It should be called once for
each division.
• void findHighest() is passed the four sales totals. It determines which is the largest
and prints the name of the high grossing division, along with its sales figure.
Input Validation: Do not accept dollar amounts less than $0.00.
 */

//System Libraries
#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

//Function Prototypes
float getSales();
float findHighest(float, float, float, float);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare the 4 divisions
    float northEast=0.0f;
    float southEast=0.0f;
    float northWest=0.0f;
    float southWest=0.0f;
    
    //Input values. Asks the user for each division's sales figures
    cout << "Enter NorthEast sales!" ;
    northEast = getSales();
    cout << "Enter SouthEast sales!"; 
    southEast = getSales();
    cout << "Enter NorthWest sales!$";
    northWest = getSales();
    cout << "Enter SouthWest sales!";
    southWest = getSales();
    
    //Process by mapping inputs to outputs
    findHighest(northEast, southEast, northWest, southWest);

    //Exit stage right!
    return 0;
}

float getSales(){
      float sales = 0.0f;
      cout << "\nWhat is the sales for this division?";
      cin >> sales;      
      if(sales < 0)
		{
                cout << "Error: Only enter sale figures above zero";
		exit(0);
		}
      return sales;    
}
float findHighest (float neSales, float seSales, float nwSales, float swSales) 
{
    if(neSales >= seSales && neSales >= nwSales && neSales >= swSales){
        cout << "The highest number is: " << neSales << " at NorthEast.";
    }
    if(seSales >= neSales && seSales >= nwSales && seSales >= swSales){
        cout << "The highest number is: " << seSales << " at SouthEast.";
    }
    if(nwSales >= neSales && nwSales >= swSales && nwSales >= swSales){
        cout << "The highest number is: " << nwSales << " at NorthWest.";
    }
    if(swSales >= neSales && swSales >= seSales && swSales >= nwSales){
        cout << "The highest number is: " << swSales << " at SouthWest.";
    }
    
    return 0;
}

	
