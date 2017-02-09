/*  
2   File:   MarkSrt.cpp
3   Author: Attila Kun
4   Created on February 8th, 2017, 20:13 PM 
5   Purpose: Mark Sort with 3 functions 
 * Take the following 3 function sort and combine into one function.
 * In other words take (swap, smalst, and markSrt functions) and combine into one function markSrt.
6  */ 

 
//System Libraries 
#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std; 

//User Libraries 
 
//Global Constants 
//Such as PI, Vc, -> Math/Science values 
//as well as conversions from system of units to another 

 
//Function Prototypes 
 void filAray(int [],int); 
 void prntAry(int [],int,int); 
 
 void swap(int &,int &); 
 void smalst(int [],int,int); 
 void markSrt(int [],int); 
 
 
 //Executable code begins here!!! 
 int main(int argc, char** argv) { 
     //Set the random number seed 
     srand(static_cast<unsigned int>(time(0))); 
      
     //Declare Variables 
     const int SIZE=200; 
     const int utilize=SIZE/2; 
     int array[utilize]={}; 
      
     //Input values 
     filAray(array,utilize); 
     prntAry(array,utilize,10); 
      
     //Process by mapping inputs to outputs 
     markSrt(array,utilize);
      
     //Output values 
     prntAry(array,utilize,10); 
 
     //Exit stage right! 
     return 0; 
 } 

 
void markSrt(int a[],int n){ 
     for(int i=0;i<n-1;i++){ 
         smalst(a,n,i); 
     }     
 } 

 
void smalst(int a[],int n,int pos){ 
     for(int i=pos+1;i<n;i++){ 
         if(a[pos]>a[i])
             swap(a[pos],a[i]); 
     } 
 } 
 
 
void swap(int &a,int &b){ 
     a=a^b; 
     b=a^b; 
     a=a^b; 
 } 
 
void prntAry(int a[],int n,int perLine){ 
    cout<<endl; 
     for(int i=0;i<n;i++){ 
         cout<<a[i]<<" "; 
         if(i%perLine==perLine-1)cout<<endl; 
     } 
     cout<<endl; 
 } 
 
 
void filAray(int a[],int n){ 
     for(int i=0;i<n;i++){ 
         a[i]=rand()%90+10; 
     } 
 } 
