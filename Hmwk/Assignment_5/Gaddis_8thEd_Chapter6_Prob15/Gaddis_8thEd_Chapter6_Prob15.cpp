/* File:   Gaddis_8thEd_Chapter6_Prob15.cpp
 * Author: Attila Kun
  Created on February 2, 2017, 19:29 PM
  Purpose:  Overloaded Hospital
Write a program that computes and displays the charges for a patient’s hospital stay.
First, the program should ask if the patient was admitted as an in-patient or an outpatient.
If the patient was an in-patient, the following data should be entered:
• The number of days spent in the hospital
• The daily rate
• Hospital medication charges
• Charges for hospital services (lab tests, etc.)
The program should ask for the following data if the patient was an out-patient:
• Charges for hospital services (lab tests, etc.)
• Hospital medication charges
The program should use two overloaded functions to calculate the total charges. One
of the functions should accept arguments for the in-patient data, while the other function
accepts arguments for out-patient information. Both functions should return the
total charges.
Input Validation: Do not accept negative numbers for any data. 
 */

//System Libraries
#include <iostream>
using namespace std;

//Function Prototypes
float calcData(int, float, float, float);
float calcData(float, float);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char inOut; //for in-patient or out-patient
    int NumberDays; //number of days in hospital
    float dailyRate, servCharges, medCharges, totCharges;
    
    //Input values
    cout<<"Is the patient still in the hospital! Enter 'I' for in-patient and 'O'\n";
    cin>>inOut;
    
    //Process by mapping inputs to outputs
    switch(inOut)
	{
		case 'i' :
		case 'I' :  do{
				cout << "How many days were spent in the hospital? ";
				cin  >> NumberDays;
		   		if (NumberDays < 0)
		   		{
        	   			cout << "Number of days must be greater than 0.\n";
		   		}
			   	} while(NumberDays < 0);
                            do{
				cout << "What was the daily rate? ";
				cin  >> dailyRate;
                                    if (dailyRate < 0){
				   		cout << "Daily rate must be greater than 0.\n";
                                    }
				} while(dailyRate < 0);
                case 'o' :
		case 'O' :  do{
				cout << "Enter the charges for hospital services " << "(lab tests, etc.): ";
				cin  >> servCharges;
                                    if (servCharges < 0){
                                                cout << "Charges for hospital services must be greater than 0.\n";
                                    }
			    } while (servCharges < 0);
		
				    do
				    {
				    	cout << "Enter the hospital medication charges: ";
				    	cin  >> medCharges;

				    	if (medCharges < 0)
				    	{
				    		cout << "Hospital medication charges must be greater than 0.\n";
				    	}
				    } while(medCharges < 0);

	}
					
    
    //Output values

    //Exit stage right!
    return 0;
}
