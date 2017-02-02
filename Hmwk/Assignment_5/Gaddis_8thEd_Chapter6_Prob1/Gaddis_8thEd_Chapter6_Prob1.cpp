/* 
 * File:   Gaddis_8thEd_Chapter6_Prob1.cpp
 * Author: Attila Kun *
 * Created on February 1, 2017, 8:57 PM
//Write a program that asks the user to enter an item’s wholesale cost and its markup
//percentage. It should then display the item’s retail price. For example:
//• If an item’s wholesale cost is 5.00 and its markup percentage is 100%, then the
//item’s retail price is 10.00.
• If an item’s wholesale cost is 5.00 and its markup percentage is 50%, then the item’s
retail price is 7.50.
The program should have a function named calculateRetail that receives the
wholesale cost and the markup percentage as arguments and returns the retail price
of the item.
Input Validation: Do not accept negative values for either the wholesale cost of the
item or the markup percentage.
*/
#include<iostream>
#include<iomanip>
using namespace std;

float calculateRetail(float, float);

int main(int argc, char** argv){
	//declare variables
	float wlSale;
	float markPercent, total;
	
	//set up numeric output formatting
	cout << fixed << showpoint << setprecision(2);
	
	//ask a user to enter an item wholesale cost and it's markup percentage
	cout << "Enter a whole sale cost: ";
	cin >> wlSale;
	
	//it should then display the item retail price
	if(wlSale < 0){
		cout << "ERROR enter positive number " << endl;
		cin >> wlSale;
	}
	
	cout << "Enter marked percent: ";
	cin >> markPercent;
	
	if(markPercent < 0){
		cout << "ERROR enter positive number " << endl;
		cin >> markPercent;
	}
	
	markPercent = markPercent * .01; //so 50 converts to .50%	
	total = calculateRetail(wlSale, markPercent); //function call
	
	cout << fixed << setprecision(2);
	//fixed so it for all output	
	cout << "Retail Price is " << total;
	
	return 0;
}
float calculateRetail(float num1, float num2){
	float answer;		//local variable its scope is only in function
	
	answer = (num1*num2) + num1;
	return answer;
	
	
}

