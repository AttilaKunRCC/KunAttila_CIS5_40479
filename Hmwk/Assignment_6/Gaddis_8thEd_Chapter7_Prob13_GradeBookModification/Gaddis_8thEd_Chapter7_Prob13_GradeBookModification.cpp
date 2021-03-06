/* 
  File:   Gaddis_8thEd_Chapter7_Prob13_GradeBookModification.cpp
  Author: Attila Kun
  Created on January 5, 2017, 13:15 PM
  Purpose:  Grade Book Modification
Modify the grade book application in Programming Challenge 13 so it drops each student’s
lowest score when determining the test score averages and letter grades.
 */

//the program needs additional debugging

//System Libraries
#include <iostream>
using namespace std;

//function prototype
void calcdata(int, float);
void getLowest(int, int);

    const int NUM_NAMES = 5;                    //how many occurrences
    const int NAMESIZE = 11;                    //how long names can be, 10 letters
    const int NUM_TESTS = 4;                    //how many tests
    char name[NUM_NAMES][NAMESIZE];             //two-dimensional name array
    char grade[5];                              //grade letter for each student array
    float testscore[NUM_NAMES][NUM_TESTS];     //test score for each student
    float average[5];                          //average for each student array

//start of main
int main(int argc, char** argv) { 
    
    cout <<  "Enter the student's name. \n";
    for (int count = 0; count < NUM_NAMES; count++)
    {
    	cout << "Student  " << (count +1) <<": ";
    	cin >> name[count];
    }
    	for (int student = 0; student < NUM_NAMES; student++)
    	{
    		for (int testnum = 0; testnum < NUM_TESTS; testnum++)
    		{
    			cout << "what is the NUMBER test score for " << name[student];
    			cout << " for test:" << testnum+1<< endl;
    			cin >> testscore[student][testnum];
    	
    			while (testscore[student][testnum] < 0 || testscore[student][testnum] > 100)
    			{
    				cout << "Please enter a number between 0 and 100" << endl;
    				cin >> testscore[student][testnum];
                        cout << endl;
    		
    			}
    		}
    	}
    
    // Get the lowest test score?????.
    getLowest(NUM_NAMES, NUM_TESTS);

    //call to function
    calcdata(NUM_NAMES, NUM_TESTS);
 
    return 0;
} //end of main
    
void calcdata(int NUM_NAMES, float testscore[][NUM_TESTS])
    {
    	float total, lowest;
    //get each students average score
    for (int row = 0; row < NUM_NAMES; row++)
    {
    	//set the accumulator.
    	total = 0;
    	//sum a row
    	for (int col = 0; col < NUM_TESTS; col++)
    	
    		total += testscore[row][col];
    		//get the average
    		average[row] = total / NUM_TESTS - lowest;
    	
    		//get the grade
    		if (average[row] < 60)
    			grade[row] = 'F';
    		else if (average[row] < 70)
    			grade[row] = 'D';
    		else if (average[row] < 80)
    			grade[row] = 'C';
    		else if (average[row] < 90)
    			grade[row] = 'B';
    		else if (average[row] < 100)
    			grade[row] = 'A';
    			
    }
    for (int i = 0; i < 5; i++)
    cout << "Student: " << name[i]
          <<" average: " << average[i]
           <<" grade: " << grade[i]
           << endl;
} //end
void getLowest(const int array[], int size){
   float lowest;
   // Get the first array first element.
   lowest = array[0];

   // Step through the rest of the array. When a
   // value less than lowest is found, assign it
   // to lowest.
   for (int count = 1; count < size; count++)
   {
      if (array[count] < lowest)
         lowest = array[count];
   }
   cout << lowest;
}