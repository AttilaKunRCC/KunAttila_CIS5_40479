/*
File:   MidTerm_Prob6.cpp
Author: Attila Kun
Created on January 23, 2017, 10:50 AM
Exercise 6:

Just another sequence,
sum = x - x^3/3! + x^5/5! - x^7/7! + ............

Input x and the number of terms=n, output the result.
Note:  x^1 = x,   x^2 = x*x,  x^3 = x*x*x
       3! = 1*2*3  5!=1*2*3*4*5

Flowchart and code this solution. 

#####################################
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
float x,n,sum=0,coeficient=1,factorial=1; //coefficient = the power of X
   cout<<"Enter x ";
   cin>>x;
   cout<<"Number of terms ";
   cin>>n;

   for(int i=1;i<=n;i++){ //runs through each factor
        for(int j=1;j<=coeficient;j++) 
            factorial*=j;  //we calculate x!
   if(i%2==1) 
       sum+=(pow(x,coeficient)/factorial);//adds to the sum
   else 
       sum-=(pow(x,coeficient)/factorial); 
        //subtract it from the sum .We first add it to the sum (x is  positive) and afterwards it is subtracted and so on.

   coeficient+=2; //reinitialization
   factorial=1; //reinitialization
   }

cout<<"Sum is "<<sum;
return 0;
}