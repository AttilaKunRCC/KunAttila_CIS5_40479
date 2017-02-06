/* 
  File:   Gaddis_8thEd_Chapter7_Prob5_MonkeyBusiness.cpp
  Author: Attila Kun
  Created on January 5, 2017, 18:46 PM
  Purpose:  Template to be used in all programming
            projects!
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;


//Executable code begins here!!!
int main(int argc, char** argv) {
    // Declare variables and initialize
    const int NUM_MONKEYS = 3;
    const int NUM_DAYS = 7;
    double food[NUM_MONKEYS][NUM_DAYS];
    int monkeys;
    int days;
    int max = 0;
    int min = 0;
    float total = 0;
    float average = 0;
    // Fill array with numbers
    for (monkeys = 0; monkeys < NUM_MONKEYS; monkeys++)
    {
            for (days = 0; days < NUM_DAYS; days++)
            {
                    cout << " Enter food eaten (in pounds) by each monkey per day!\n";
                    cout << " Monkey " << (monkeys + 1)
                        << ", Days " << (days + 1) << ": ";
                    cin >> food[monkeys][days];
                    cout << food[monkeys][days];
            }
    cout << endl;
    }
    
    // Sum all food eaten (array elements) by all monkeys
    for (int monkeys = 0; monkeys < NUM_MONKEYS; monkeys++)
    {
            for (int days = 0; days < NUM_DAYS; days++)
            total += food[monkeys][days];          
    }
    
    // Average amount of food eaten per day by all monkeys
    average = total / 21;
    min = food [0][0];
    
    // Figure the most amount eaten and least amount eaten
    for (int monkeys = 0; monkeys < NUM_MONKEYS; monkeys++){
        for (int days = 1; days < NUM_DAYS; days++){
            if (food[monkeys][days] > max)
                max = food[monkeys][days];
	    if (food[monkeys][days] < min)
                min = food[monkeys][days];   
        }//end in for
    }//end out for
	        cout << "The total amount of food eaten (in pounds) is: " << total << " pounds." << endl;  
	        cout << "The average amount of food eaten (in pounds) by all monkeys is: " << setw(4) << fixed << setprecision(1) << average << " pounds." << endl;
	        cout << "The greatest amount of food eaten (in pounds) by one monkey this week is: " << setw(4) << fixed << setprecision(1) << max << " pounds." << endl;
	        cout << "The least amount of food eaten (in pounds) by one monkey this week is: " << setw(4) << fixed << setprecision(1) << min << " pounds." << endl;
	        cout << endl;

    //Exit stage right!
    return 0;
}