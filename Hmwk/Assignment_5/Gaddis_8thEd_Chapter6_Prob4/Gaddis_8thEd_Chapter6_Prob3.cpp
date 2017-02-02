/* 
  File:   Gaddis_8thEd_Chapter6_Prob3.cpp
  Author: Attila Kun
  Created on February 1, 2017, 11:20 PM
  Purpose:  
 * Write a program that determines which of five geographic regions within a major city
(north, south, east, west, and central) had the fewest reported automobile accidents last
year. It should have the following two functions, which are called by main .
• int getNumAccidents() is passed the name of a region. It asks the user for the
number of automobile accidents reported in that region during the last year, validates
the input, then returns it. It should be called once for each city region.
• void findLowest() is passed the five accident totals. It determines which is the
smallest and prints the name of the region, along with its accident figure.
Input Validation: Do not accept an accident number that is less than 0.
 */

//System Libraries
#include <iostream>
using namespace std;

//Function Prototypes
int getNumAccidents(int&);
int findLowest(int, int, int, int, int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int north=0, south=0, east=0, west=0, central=0;
    
    //Input values
    cout << "Enter the number of auto accidents in north side: ";
    getNumAccidents(north);
    cout << "Enter the number of auto accidents in south side: ";
    getNumAccidents(south);
    cout << "Enter the number of auto accidents in east side: ";
    getNumAccidents(east);
    cout << "Enter the number of auto accidents in west side: ";
    getNumAccidents(west);
    cout << "Enter the number of auto accidents in central side: ";
    getNumAccidents(central);
    
    //Process by mapping inputs to outputs
    findLowest(north, south, east, west, central);

    //Exit stage right!
    return 0;
}

int getNumAccidents(int &number){
    cin >> number;
    while(number < 0){
        cout << "The number is below 0. Input a positive number:" << number;
    }
    return number;    
}
int findLowest(int n, int s, int e, int w, int c){
    if(n <= s && n <= e && n <= w && n <= c){
        cout << "The lowest number is: " << n << " at North.";
    }
    if(s <= n && s <= e && s <= w && s <= c){
        cout << "The lowest number is: " << s << " at South.";
    }
    if(e <= n && e <= s && e <= w && e <= c){
        cout << "The lowest number is: " << w << " at East.";
    }
    if(w <= n && w <= s && w <= e && w <= c){
        cout << "The lowest number is: " << c << " at West.";
    }
    if(c <= n && c <= s && c <= e && c <= w){
        cout << "The lowest number is: " << c << " at Central.";
    }
    
    return 0;
    
}