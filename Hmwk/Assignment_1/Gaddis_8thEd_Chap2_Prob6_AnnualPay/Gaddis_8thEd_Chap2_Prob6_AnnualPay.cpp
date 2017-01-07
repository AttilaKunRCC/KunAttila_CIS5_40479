#include <iostream>
//#include <fstream>
using namespace std;
int main(int argc, char** argv) {
/*******************************************************************************************************************************************
This is a program that shows your salary increase based on the companies 7.6% pay increase and what the company
owes you in back pay from the last 6 months.
*/

    // I will define my variables here

    double AnnualPay, PayPeriod = 26;
    double PayAmount=2200.0;

    // I will now let the user know what the program's intended use is

    cout << "\n\nHello employee, this is to calculate your total annual pay by multiplying the pay amount by the number of pay periods in a year ";
    cout << "store the result in the AnnualPay variable on the screen!!\n\n";
       
    //Here I will create my formuals

    AnnualPay = PayPeriod * PayAmount;

    //Now I will display the output to the user

    cout << "\n";
    cout << "Your new yearly salary is: ";
    cout << AnnualPay;
    cout << "\n";

    return 0;
}


