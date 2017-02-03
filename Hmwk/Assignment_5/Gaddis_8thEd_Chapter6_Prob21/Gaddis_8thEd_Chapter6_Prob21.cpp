/* 
  File:   Gaddis_8thEd_Chapter6_Prob21.cpp
  Author: Attila Kun
  Created on February 2, 2017, 17:50 PM
  Purpose: 
  Multiple Stock Sales
Use the function that you wrote for Programming Challenge 20 (Stock Profit) in a
program that calculates the total profit or loss from the sale of multiple stocks. The
program should ask the user for the number of stock sales and the necessary data for
each stock sale. It should accumulate the profit or loss for each stock sale and then
display the total.
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getData(int &, float &, float &, float &, float &, int);
float stockProfitLoss(int, float, float, float, float);
float totalProfitLoss(int);

int main(int argc, char** argv)
{
	int nSales;
	float Total;

	cout << "Calculate the total profit (or loss) from  sales of stock.\n";
	cout << "What is the number of stock sales? ";
	cin  >> nSales;

	Total = totalProfitLoss(nSales);

	cout << "Total profit or loss from sales of stock: $";
	cout << fixed << showpoint << setprecision(2);
	cout << Total << endl << endl;

	return 0;
}

float totalProfitLoss(int nSales)
{
	int nShares;
	
	float PurchPrice, PurchComm, SalePrice, SaleComm, ProfitLoss, Total = 0;

	for (int Sale = 1; Sale <= nSales; Sale++)
	{
		getData(nShares, PurchPrice, PurchComm, SalePrice, SaleComm, Sale);

		ProfitLoss = stockProfitLoss(nShares, PurchPrice, PurchComm, SalePrice, SaleComm);
		Total += ProfitLoss;

		cout << endl;
	}

	return Total;
}


void getData(int &nShares, float &PurchPrice, float &PurchComm, float &SalePrice, float &SaleComm, int Sale)
{
	cout << "Please enter the follow data for stock sale #"
		 << Sale << ":\n";
	cout << "What is the number of shares? ";
	cin  >> nShares;
	cout << "What is the purchase price per share? ";
	cin  >> PurchPrice;
	cout << "What is the purchase commission paid? ";
	cin  >> PurchComm;
	cout << "What is the sale price per share? ";
	cin  >> SalePrice;
	cout << "What is the sale commission paid? ";
	cin  >> SaleComm;
}

float stockProfitLoss(int nShares, float PurchPrice, float PurchComm, float SalePrice, float SaleComm)
{
	return ((nShares * SalePrice) - SaleComm) - ((nShares * PurchPrice) + PurchComm);
}