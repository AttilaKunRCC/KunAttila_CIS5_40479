/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Problem 1 -> Sum the numbers between 1 and 10
 * Problem 2 -> Multiply the numbers between 1 and 10
 * Problem 3 -> Divide the numbers between 1 and 10
 * Modified on Mar 21st, 2016
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //General Menu Format
    //Display the selection
    cout<<"Type 1 to solve problem 1"<<endl;
    cout<<"Type 2 to solve problem 2"<<endl;
    cout<<"Type 3 to solve problem 3"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
    //Read the choice
    char choice;
    cin>>choice;
    //Solve a problem that has been chosen.
    switch(choice){
            case 49:{//Character '1' in Decimal
                int sum=1+2+3+4+5+6+7+8+9+10;
                cout<<endl;
                cout<<"Solution to 1 sum(1->10)="<<sum<<endl;
                cout<<endl;
                break;
            }
            case 062:{//Character '2' in Octal
                int prod=1*2*3*4*5*6*7*8*9*10;
                cout<<endl;
                cout<<"Solution n!(1->10)="<<prod<<endl;
                cout<<endl;
                break;
            }
            case 0x33:{//Character '3' in Hex
                float quot=1.0f/2/3/4/5/6/7/8/9/10;
                cout<<endl;
                cout<<"Solution to 3 quot(1->10)="<<quot<<endl;
                cout<<endl;
                break;
            }
            default:{
                    cout<<"Exit?"<<endl;
            }
    };
    return 0;
}