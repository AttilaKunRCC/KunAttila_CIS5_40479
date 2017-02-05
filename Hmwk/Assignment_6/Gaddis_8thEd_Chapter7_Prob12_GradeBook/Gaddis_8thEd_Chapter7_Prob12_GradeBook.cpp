/* 
  File:   Gaddis_8thEd_Chapter7_Prob12_GradeBook.cpp
  Author: Attila Kun
  Created on January 5, 2017, 13:15 PM
  Purpose:  Grade Book
A teacher has five students who have taken four tests. The teacher uses the following
grading scale to assign a letter grade to a student, based on the average of his or her
four test scores.
Test Score Letter Grade
90–100 A
80–89 B
70–79 C
60–69 D
0–59 F
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

//Function Prototypes
void getTestScores(float[], int);
void getNames(char [][STU_LENGTH]);

const int num_students = 5;
char num_tests = 4;
const int LETTERS = 5;
    

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables    
    string names[num_students];
    char grades[num_students];
    double scores[num_students][num_tests];
    
    int table1[TBL1_ROWS][COLS] = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10, 11, 12}};
    
    cout << "The contents of table1 are:\n";
    showArray(table1, TBL1_ROWS);
    
    
    //Input values
    const int SIZE = 4;      // Array size
    double testScores[SIZE], // Array of test scores
          total,            // Total of the scores
          lowestScore,      // Lowest test score
          average;          // Average test score

   // Set up numeric output formatting.
   cout << fixed << showpoint << setprecision(1);

    
    //Process by mapping inputs to outputs
    for (int num = 0; num < NUM_STUDENTS; num++)
   {
       cout << "Enter student's name: ";
       cin >> names[num];
       
       for (int test = 0; test < TESTS; test++)
       {
           cout << "Enter the test score: ";
           cin >> grades[num][test];
       }
}
    
    //Output values
    // Get the test scores from the user.
    getTestScores(testScores, SIZE);

    //Exit stage right!
    return 0;
}
void getTestScores(double scores[], int size)
{
   // Loop counter
   int index;
   
   // Get each test score.
   for(index = 0; index <= size - 1; index++)
   {
      cout << "Enter test score number " 
           << (index + 1) << ": ";
      cin >> scores[index];
   }
}

void showArray(const int array[][COLS], int rows)
{
   for (int x = 0; x < rows; x++)
   {
      for (int y = 0; y < COLS; y++)
      {
         cout << setw(4) << array[x][y] << " ";
      }
      cout << endl;
   }
}
void getNames(char names[][STU_LENGTH])
{
    for(int i=0;i < STU_NUM;i++)
    {
        cout << "Please enter student " << i+1 << " name : ";
        cin.getline(names[i],STU_LENGTH);
    }    
}