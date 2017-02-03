/* 
  File:   Gaddis_8thEd_Chapter6_Prob11.cpp
  Author: Attila Kun
  Created on February 1, 2017, 11:50 PM
  Purpose: 
 * Write a program that calculates the average of a group of test scores, where the lowest
score in the group is dropped. It should use the following functions:
• void getScore() should ask the user for a test score, store it in a reference parameter
variable, and validate it. This function should be called by main once for each
of the five scores to be entered.
• void calcAverage() should calculate and display the average of the four highest
scores. This function should be called just once by main and should be passed the
five scores.
• int findLowest() should find and return the lowest of the five scores passed to it.
It should be called by calcAverage , which uses the function to determine which of
the five scores to drop.
Input Validation: Do not accept test scores lower than 0 or higher than 100.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototypes
void getScore(int&);
void calcAverage(int, int, int, int, int);
int findLowest(int score1, int score2, int score3, int score4, int score5);


//Executable code begins here!!!
int main(int argc, char** argv) {
    
    //Declare Variables
    int score1, score2, score3, score4, score5;
    
    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);
	
    calcAverage(score1, score2, score3, score4, score5);
   
    //Exit stage right!
    return 0;
}

void getScore(int &score){    
         
    //Input values
    cout << "Enter a score: ";
    cin >> score;
    if(score < 0 || score > 100){
    	cout << "Invalid test score! "
    			<< "Test score must be between 0 and 100.";  			
	}
}

int findLowest(int n, int s, int e, int w, int c){
    if(n <= s && n <= e && n <= w && n <= c){
        cout << "The lowest number is: " << n << endl;
        return n;
    }
    if(s <= n && s <= e && s <= w && s <= c){
        cout << "The lowest number is: " << s<< endl;
        return s;
    }
    if(e <= n && e <= s && e <= w && e <= c){
        cout << "The lowest number is: " << e<< endl;
        return e;
    }
    if(w <= n && w <= s && w <= e && w <= c){
        cout << "The lowest number is: " << w<< endl;
        return w;
    }
    if(c <= n && c <= s && c <= e && c <= w){
        cout << "The lowest number is: " << c<< endl;
        return c;
    }    
}

void calcAverage(int score1, int score2, int score3, int score4, int score5){
	// Find lowest and average.
	int lowest = findLowest(score1, score2, score3, score4, score5);
	float average = (((float)score1 + score2 + score3 + score4 + score5) - lowest) / 4.0;

	// Print them out..
	cout << setw(4);
	cout << fixed << showpoint << setprecision(2);
	cout << "The average of the 4 highest scores is " << average << endl;
}

	


