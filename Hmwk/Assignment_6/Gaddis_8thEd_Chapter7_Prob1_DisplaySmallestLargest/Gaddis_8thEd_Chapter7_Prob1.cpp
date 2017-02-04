/* 
  File:   Gaddis_8thEd_Chapter7_Prob1_DisplaySmallestLargest
  Author: Attila Kun
  Created on January 4, 2017, 13:53 PM
  Purpose:  Largest/Smallest Array Values
Write a program that lets the user enter 10 values into an array. The program should
then display the largest and smallest values stored in the array.
 */

//System Libraries
#include <iostream>
using namespace std;

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int values[9];
    int small, large,n;
    large = small = values[0];
    
    //Repeated Input values
    for(int i=0;i<n;i++)
	{
		cout<<"Enter elements from 1 to 10: ";
		cin>>values[i];
	}
            
    //Assign small and large the first character input
    small=values[0];
    large=values[0];
    
    //Compare to find small and large
   for(int i=1;i<n;i++)
	{
		if(values[i]<small)
			small=values[i];
		if(values[i]>large)
			large=values[i];
	}
    //display largest and smallest
    cout<<"\nLargest element is :"<<large;
    cout<<"\nSmallest element is :"<<small;

    //Exit stage right!
    return 0;
}
