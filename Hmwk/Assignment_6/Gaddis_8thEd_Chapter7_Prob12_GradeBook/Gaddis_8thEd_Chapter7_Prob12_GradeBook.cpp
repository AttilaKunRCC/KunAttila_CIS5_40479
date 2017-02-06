/* 
  File:   Gaddis_8thEd_Chapter7_Prob12_GradeBook.cpp
  Author: Attila Kun
  Created on January 5, 2017, 13:15 PM
  Purpose:  Grade Book
A teacher has five students who have taken four tests. The teacher uses the following
grading scale to assign a letter grade to a student, based on the average of his or her
four test scores.
Test Score  Letter Grade
90–100      A
80–89       B
70–79       C
60–69       D
0–59        F
Write a program that uses an array of string objects to hold the five student names,
an array of five characters to hold the five students’ letter grades, and five arrays of
four double s to hold each student’s set of test scores.
The program should allow the user to enter each student’s name and his or her four
test scores. It should then calculate and display each student’s average test score and a
letter grade based on the average.
Input Validation: Do not accept test scores less than 0 or greater than 100.
 */

//System Libraries
#include <iostream>
using namespace std;
    const int NUM_NAMES = 5;                    //how many occurances
    const int NAMESIZE = 11;                    //how long names can be, 10 letters
    const int NUM_TESTS = 4;                    //how many tests
    char name[NUM_NAMES][NAMESIZE];             //two-dimensional name array
    char grade[5];                              //grade letter for each student array
    double testscore[NUM_NAMES][NUM_TESTS];     //test score for each student
    double average[5];                          //average for each student array
    //function prototype
    void calcdata(int, double[][NUM_TESTS]);
    //start of main
    int main()
    {
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
    			cout << "what is the test score for " << name[student];
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
    //call to function calcdata
    calcdata(NUM_NAMES, testscore);
 
    return 0;
    } //end of main
    
    void calcdata(int NUM_NAMES, double testscore[][NUM_TESTS])
    {
    	double total;
    //get each students average score
    for (int row = 0; row < NUM_NAMES; row++)
    {
    	//set the accumulator.
    	total = 0;
    	//sum a row
    	for (int col = 0; col < NUM_TESTS; col++)
    	
    		total += testscore[row][col];
    		//get the average
    		average[row] = total / NUM_TESTS;
    	
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
    } //end of getdata
