/* 
  File:   MidTerm_Prob4.cpp
  Author: Attila Kun
  Created on January 25, 2017, 21:40 PM
  Purpose:
 * An ISP has 3 different subscription packages
	a)  $16.75 per month, 5 hours access.  Additional hours
	    are $0.75 up to 20 hours then $1 for all additional
	    hours.
	b)  $23.75 per month, 15 hours access.  Additional hours
        are $0.55 up to 25 hours then $0.70 for each
	    hour above this limit.
	c)  $29.95 per month unlimited access
Write a program that calculates a customers monthly bill.  
Ask which package, and how many hours then display the monthly charge.  
Also, output when customers should transition to another package and 
what package that should be to save the most money.  Calculate the money saved. 
 */

//System Libraries
#include <iostream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char package;
    float hours;
    float total, total2, save, charges;
    float charges2=23.75;
    
    //Input values
    cout << "A: For $16.75 per month, you can get 5 hours of access."
         << "\nAdditional hours are $0.75 up to 20 hours "
         << "then $1 for all additional hours.\n";
    cout << "B: For $23.75 per month, you can get 15 hours access.  "
         << "\nAdditional hours are $0.55 up to 25 hours then $0.70 for "
         << "\neach hour above this limit.\n";
    cout << "C: For $29.95 per month, you get unlimited access. \n";
    
    //Process by mapping inputs to outputs
    cout<<"Which package do you have A, B or C? Type in capital letters!: ";
    cin>>package;
    
    if(package == 'A' || package == 'B' || package == 'C'){
                  cout<<"\nHow many hours have been used: ";
                  cin>>hours;
    }//end if choice packages
    
    if(package == 'A'){
               charges=16.75;
               total2=(hours-20)*1;//waiting on an answer
               if(hours>5 && hours<=20){                   
                   total=charges+((hours-5)*0.75);                   
                   cout << "Your total payments for this month is $"<<total<<endl;
                   if(hours>=15&&hours<=25){
                               save=charges2-charges;
                               cout<<"You should consider upgrading your package to B!";
                               cout<<"\nBecause you have "<<hours<<" hours you could save $"<<save
                               <<" by switching to plan B!\n";
                               
                   }
                   else if(hours>=25){
                        cout<<"Upgrade to plan C for unlimited!";
                   }
                   else
                       cout<<"You are fine with plan A!";
               }
               else if(hours<5){
                   cout<<"Your total payment for this month is $"<<charges<<endl;                       
               }
               else if(hours>20){
                   cout<<"Your total payment this month is "<<total2<<endl;
                   cout<<"You should really consider upgrading your package!";
               }
    }//end if A
    if(package == 'B'){
               charges=23.75;
               if(hours>15 && hours<=25){                   
                   total=charges+((hours-15)*0.55);                   
                   cout << "Your total payment for this month is $"<<total<<endl;
               }
               else if(hours<15){
                   cout<<"Your total payment for this month is $"<<charges<<endl;                       
               }
               else if(hours>25){
                    total2=charges+(hours-25)*0.70;
                   cout<<"Your total payment for this month is $"<<total2<<endl;
                   cout<<"You should really consider upgrading your package to unlimited!";                   
               }
    }//end if B
    if(package == 'C'){
                   charges=29.95;
                   cout << "Your total payment for this month is $"<<charges<<endl;    
    }//end if C
 
 
    cout<<"\n\n";

    //Exit stage right!
    return 0;
}
