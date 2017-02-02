/* 
  File:   MidTerm_Prob5
  Author: Attila Kun
  Created on January 26, 2017, 12:15 AM
  Purpose: The company pays "straight-time" for the first 20 hours worked, double time for all 
 * hours worked in 
excess of 20 hours but less than 40 hours, and triple time for any hours worked over 40 hours. 
 * Inputs to the program would be hours worked 
and rate of pay.  Output would be gross pay.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    //doubleTime, tripleTime, standardTime
    float dbTime, triTime; 
    cout << fixed << showpoint;
    cout << setprecision(2);
    float hours = 0, rate = 0;
    
    //inputs to the program would be hours worked and rate of pay
    cout << "How many hours did you work: ";
    cin >> hours;
    cout << "What's your pay rate: ";
    cin >> rate;
    
    //straight-time first 20 hours
    if(hours <= 20){
        float sTime = hours * rate;
        float dboTime = 0;
        cout << "You get paid: $" << sTime;        
    }//end if <=20
    
    //double time for all hours worked over 20, but less than 40 hours
    else if(hours > 20 && hours <= 40){
        float sTime, total, dboTime;
        dboTime = hours - 20 ; //to find overtime rate amount
        sTime = (hours - dboTime) * rate; //standard pay   
        float dbTime = dboTime * (rate * 2); //to find doubleTime amount
        total = dbTime + sTime;
        //float
        cout << "\nYour standard pay is $" << sTime;
        cout << "\nFor overtime you get paid $" << dbTime;        
        cout << "\nYour gross pay is $" << total << endl;
    }//end if > 20
    
    //triple time for any hours worked over 40 hours! It WORKS!!!
    else if(hours > 40){
        float dboTime, total, sTime;
        
        //triple time over 40 hours
        float triTime = hours - 40; //find out how much tripleTime was entered by user
        float Pay4 = triTime * (rate * 3); //$$$ amount to get paid for tripleTime 
        
        //double time 20-40 hours
        dboTime = hours - triTime - 20; //to find overtime hours for 20 to 40 hours
        float Pay2 =  dboTime * (rate * 2); // $$$ doubleTime hours pay
        
        //find out standard time without overtime
        sTime = hours - triTime - dboTime; // to find amount of standard hours 
        float sPay = sTime * rate;  //$$$ standardTime hours pay      
        
        cout << "\nYour standard pay is $" << sPay;
        cout << "\nFor double time you get paid $" << Pay2;  
        cout << "\nFor triple time you get paid $" << Pay4;
        
        total = sPay + Pay2 + Pay4;
        cout << "\nYour gross pay is $" << total << endl;
        
    }
    

    //Exit stage right!
    return 0;
}