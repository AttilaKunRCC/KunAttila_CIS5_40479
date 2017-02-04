/* 
  File:   Gaddis_8thEd_Chapter7_Prob1_DisplaySmallestLargest.cpp
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
    
    //Input values
    for(int i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<":";
		cin>>values[i];
	}
            
    //Process by mapping inputs to outputs
    small=values[0];
    large=values[0];
    
    //Output values
   for(int i=1;i<n;i++)
	{
		if(values[i]<small)
			small=values[i];
		if(values[i]>large)
			large=values[i];
	}

	cout<<"\nLargest element is :"<<large;
	cout<<"\nSmallest element is :"<<small;

    //Exit stage right!
    return 0;
}
