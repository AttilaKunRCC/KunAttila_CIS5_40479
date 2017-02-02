/* 
  File:   MidTerm_Prob3.cpp
  Author: Attila Kun
  Created on January 27, 2017, 10:50 AM
  Purpose:  write a paycheck
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <iomanip>
#include <stdlib.h>
using namespace std;

//global variables
int NumbersToWords();

//Executable code begins here!!!
int main(int argc, char** argv) {    
        
    //input date, payee, amount and account holder
    float amount;    
    string payee= "", accHolder = "", reason = "GOTTA PAY THE RENT", address = "1234 Street Way", city = "Corona, CA, 92879", date = "01/01/15";
        
    //Process by mapping inputs to outputs
    cout << "The date: " << date << endl;
    cout << "Payee name: ";
    getline(cin, payee);  
    cout << "\nAmount: ";
    cin >> amount;
    
    if(amount >= 1 && amount <= 1999){
                cout << fixed << showpoint;
                cout << setprecision(2);
        accHolder = payee;
        cout << "\nThe account holder is? ";
        cin.ignore();
        getline(cin, accHolder);        
        cout << "\n\n##### Outputting check below ########";
        //output in specific format, but the amount needs to be numerically, just like a check. Range from 1 to 1999 (integers, no cents)
        cout << "\n" << payee;
        cout << "\n" << address;
        cout << "\n" << city;
        cout << "\t\t\t\t" << "Date: " << date << "\n";
        cout << "\nPay to the order of: " << payee;
        cout << "\t\t\t" << "$ " << amount << "\n";

        //convert from float to string                        
        cout << NumbersToWords() << endl; //the amount will have to be typed when this function is called. THIS NEEDS more WORK and more hours!!!

        cout << "\nBANK OF CSC5" << endl;
        cout << "\nFor: " << reason << "\t\t\t\t" << payee;
    }//end if
    else
       cout << "Necessary funds not available! Please run the program again! ";
     
   
   //Exit stage right!
   return 0;
}

// Numbers As Words.cpp : main project file.
int NumbersToWords ()
{        
	int number;
	do
	{
	cout<<"Type integer number < 1999:";
	cin>> number;
	} while (number < 1 || number >=1999); // Check for number to be >=1 and < 1000

	int hundreds=number/100;
	int tens=(number-(hundreds*100))/10;
	int ones=number%10;
	
	switch (hundreds)
	{
            case (9):
                    cout<<"Nine Hundred ";
                    break;
            case (8):
                    cout<<"Eight Hundred ";
                    break;
            case (7):
                    cout<<"Seven Hundred ";
                    break;
            case (6):
                    cout<<"Six Hundred ";
                    break;
            case (5):
                    cout<<"Five Hundred ";
                    break;
            case (4):
                    cout<<"Four Hundred ";
                    break;
            case (3):
                    cout<<"Three Hundred ";
                    break;
            case (2):
                    cout<<"Two Hundred ";
                    break;
            case (1):
                    cout<<"One Hundred ";
                    break;
	}

	switch (tens)
	{
            case (9):
                    cout<<"Ninety ";
                    break;
            case (8):
                    cout<<"Eighty ";
                    break;
            case (7):
                    cout<<"Seventy ";
                    break;
            case (6):
                    cout<<"Sixty ";
                    break;
            case (5):
                    cout<<"Fifty ";
                    break;
            case (4):
                    cout<<"Fourty ";
                    break;
            case (3):
                    cout<<"Thirty ";
                    break;
            case (2):
                    cout<<"Twenty ";
                    break;

	case (1):
		{
			if (ones==1)
			{
				cout<<"Eleven";
				break;
			}
			else if (ones==2)
			{
				cout<<"Twelve";
				break;
			}
			else if (ones==3)
			{
				cout<<"Thirteen";
				break;
			}
			else if (ones==4)
			{
				cout<<"Fourteen";
				break;
			}
			else if (ones==5)
			{
				cout<<"Fifteen";
				break;
			}
			else if (ones==6)
			{
				cout<<"Sixteen";
				break;
			}
			else if (ones==7)
			{
				cout<<"Seventeen";
				break;
			}
			else if (ones==8)
			{
				cout<<"Eighteen";

				break;
			}else if (ones==9)
			{
				cout<<"Nineteen";
				break;
			}
			else
				break;
		}

	}
	if (tens>1 || number <10) // if number greater than 19 or number less than 10
	{
		switch (ones)
		{
		case (9):
			cout<<"Nine";
			break;
		case (8):
			cout<<"Eight";
			break;
		case (7):
			cout<<"Seven";
			break;
		case (6):
			cout<<"Six";
			break;
		case (5):
			cout<<"Five";
			break;
		case (4):
			cout<<"Four";
			break;
		case (3):
			cout<<"Three";
			break;
		case (2):
			cout<<"Two";
			break;
		case (1):
			cout<<"One";
			break;
		}
	}
} 

