/* 
  File:   Gaddis_8thEd_Chapter7_Prob10_DriversLicenseExam.cpp
  Author: Attila Kun
  Created on January 5, 2017, 12:10 AM
  Purpose:  Driver’s License Exam
The local Driver’s License Office has asked you to write a program that grades the written
portion of the driver’s license exam. The exam has 20 multiple choice questions.
Here are the correct answers:
1. A
2. D
3. B
4. B
5. C
6. B
7. A
8. B
9. C
10. D
11. A
12. C
13. D
14. B
15. D
16. C
17. C
18. A
19. D
20. B
Your program should store the correct answers shown above in an array. It should ask
the user to enter the student’s answers for each of the 20 questions, and the answers
should be stored in another array. After the student’s answers have been entered, the
program should display a message indicating whether the student passed or failed the
exam. (A student must correctly answer 15 of the 20 questions to pass the exam.) It
should then display the total number of correctly answered questions, the total number
of incorrectly answered questions, and a list showing the question numbers of the
incorrectly answered questions.
Input Validation: Only accept the letters A, B, C, or D as answers.
 */

//System Libraries
#include <iostream>
using namespace std;

//Function Prototypes
void checkAnswers(char[], char[], int, int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int numQuestions = 20; //maximum questions asked
    const int minQuestions = 15; //minimum questions to pass
    char answers[numQuestions] = {'A', 'D', 'B', 'B', 'C',  //Array of the correct answers
                                 'B', 'A', 'B', 'C', 'D',
                                 'A', 'C', 'D', 'B', 'D',
                                 'C', 'C', 'A', 'D', 'B'};
    char stu_answers[numQuestions]; //student questions
    
    //Input values
    //Loop for users answers
    for (int replies = 0; replies < numQuestions; replies++){
        cout<< "Please enter your answers (Hint: Use capital letters): "
            << (replies + 1) << ": ";
        cin >> stu_answers[replies];
        
    //Validation of users answers
        while (stu_answers[replies] != 'A' && stu_answers[replies] != 'B' && stu_answers[replies] != 'C' && stu_answers[replies] != 'D') {
            cout << "You must enter A, B, C, or D\n";
            cout<< "Please enter your answers (Hint: Use capital letters): "
                << (replies + 1) << ": ";
            cin >> stu_answers[replies];
        }//end while
   }//end for
    
    //Output values
    checkAnswers(answers, stu_answers, numQuestions, minQuestions);
    
    //Exit stage right!
    return 0;
}//end main

void checkAnswers(char answers1[], char stu_answers1[], int NUM_QUESTIONS, int MIN_CORRECT){
	    int correctAnswers = 0;

	    //Check the student's replies against the correct answers
	    for (int i = 0; i < NUM_QUESTIONS; i++)  {
	        if (answers1[i] == stu_answers1[i])
	            correctAnswers++;
	    }
	    //Did they pass or fail?
	    cout << "\nYou must have at least 15 correct to pass.";
	    if (correctAnswers >= MIN_CORRECT) {
	        cout << "\nStudent passed the exam\n\n";
	    }
	    else {
	        cout <<"\nStudent failed the exam\n\n";
	    }

	    //Display a list of the questions that were incorrectly answered.
	    cout << "The list below shows the question numbers of the incorrectly";
	    cout << " answered questions.\n";
	    for (int i = 0; i < NUM_QUESTIONS; i++)  {
	        if (answers1[i] != stu_answers1[i])
	            cout << "Question # " << i << " is incorrect." << endl;
	    }

	    //Display the number of correct and incorrect answers provided by the student.
	    cout << "\nCorrect Answers = " << correctAnswers << endl;
	    cout << "Incorrect Answers = " << NUM_QUESTIONS - correctAnswers << endl;
}