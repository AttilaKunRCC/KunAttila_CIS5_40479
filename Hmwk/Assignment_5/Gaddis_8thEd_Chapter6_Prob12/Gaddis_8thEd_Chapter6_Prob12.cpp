/* 
  File:   Gaddis_8thEd_Chapter6_Prob12.cpp
  Author: Attila Kun
  Created on February 2, 2017, 15:50 PM
  Purpose: 
 A particular talent competition has five judges, each of whom awards a score between
0 and 10 to each performer. Fractional scores, such as 8.3, are allowed. A performer’s
final score is determined by dropping the highest and lowest score received, then averaging
the three remaining scores. Write a program that uses this method to calculate a
contestant’s score. It should include the following functions:
	• void getJudgeData() should ask the user for a judge’s score, store it in a reference
	parameter variable, and validate it. This function should be called by main once for
	each of the five judges.
	• float calcScore() should calculate and display the average of the three scores that
	remain after dropping the highest and lowest scores the performer received. This
	function should be called just once by main and should be passed the five scores.
	
The last two functions, described below, should be called by calcScore , which uses
the returned information to determine which of the scores to drop.
	• int findLowest() should find and return the lowest of the five scores passed to it.
	• int findHighest() should find and return the highest of the five scores passed to it.

	Input Validation: Do not accept judge scores lower than 0 or higher than 10.
 */

#include <iostream>
using namespace std;

// Function Prototypes
void getJudgeData(float &);
float calcScore(float, float, float, float, float);
int findHighest(float, float, float, float, float);
int findLowest(float, float, float, float, float);

int main()
{
	float Score1, Score2, Score3, Score4, Score5;

	// Call function getJudgeData once for each judge
	getJudgeData(Score1);
	getJudgeData(Score2);
	getJudgeData(Score3);
	getJudgeData(Score4);
	getJudgeData(Score5);

	cout << "\nThe contestant’s score is ";

	// Call function calcScore passing to it the five scores 
	cout << calcScore(Score1, Score2, Score3, Score4, Score5);

	cout << endl;

	return 0;
}

void getJudgeData(float &Score)
{
	do
	{
		cout << "Enter a judge’s score: ";
	    cin  >> Score;

	    if (Score < 0 || Score > 10)
	    {
	    	cout << "\nError! Invalid score.\n"
	    		 << "Judge score must be greater than 0 and less than 10.\n";
	    }

	} while (Score < 0 || Score > 10);
}

float calcScore(float Score1, float Score2, float Score3, float Score4,
	             float Score5)
{	
	int    High, Low;
	float  Avg; 

	// Call function findHighest and findLowest passing 5 scores to them
	High = findHighest(Score1, Score2, Score3, Score4, Score5);	
	Low  = findLowest(Score1, Score2, Score3, Score4, Score5);

	if (High == static_cast<int>(Score1))
	{
		if (Low == static_cast<int>(Score2))
			Avg = (Score3 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score3))
			Avg = (Score2 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score4))
			Avg = (Score3 + Score2 + Score5)/3;
		else
			Avg = (Score2 + Score3 + Score4)/3;
	}
	else if (High == static_cast<int>(Score2))
	{
		if (Low == static_cast<int>(Score1))
			Avg = (Score3 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score3))
			Avg = (Score1 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score4))
			Avg = (Score3 + Score1 + Score5)/3;
		else
			Avg = (Score1 + Score3 + Score4)/3;
	}
	else if (High == static_cast<int>(Score3))
	{
		if (Low == static_cast<int>(Score2))
			Avg = (Score1 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score1))
			Avg = (Score2 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score4))
			Avg = (Score1 + Score2 + Score5)/3;
		else
			Avg = (Score2 + Score1 + Score4)/3;
	}
	else if (High == static_cast<int>(Score4))
	{
		if (Low == static_cast<int>(Score2))
			Avg = (Score3 + Score1 + Score5)/3;
		else if (Low == static_cast<int>(Score3))
			Avg = (Score2 + Score1 + Score5)/3;
		else if (Low == static_cast<int>(Score1))
			Avg = (Score3 + Score2 + Score5)/3;
		else
			Avg = (Score2 + Score3 + Score1)/3;
	}
	else
	{
		if (Low == static_cast<int>(Score2))
			Avg = (Score3 + Score4 + Score1)/3;
		else if (Low == static_cast<int>(Score3))
			Avg = (Score2 + Score4 + Score1)/3;
		else if (Low == static_cast<int>(Score4))
			Avg = (Score3 + Score2 + Score1)/3;
		else
			Avg = (Score2 + Score3 + Score4)/3;
	}

	return Avg;
}

int findHighest(float Score1, float Score2, float Score3, float Score4,float Score5)
{
	if (Score1 > Score2 && Score1 > Score3 && Score1 > Score4 && Score1 > Score5)
		return Score1;
	else if (Score2 > Score1 && Score2 > Score3 && Score2 > Score4 &&
			 Score2 > Score5)
		return Score2;
	else if (Score3 > Score2 && Score3 > Score1 && Score3 > Score4 &&
			 Score3 > Score5)
		return Score3;
	else if (Score4 > Score2 && Score4 > Score3 && Score4 > Score1 &&
			 Score4 > Score5)
		return Score4;
	else
		return Score5;
}//end findHighest

int findLowest(float Score1, float Score2, float Score3, float Score4, float Score5)
{	
	if (Score1 < Score2 && Score1 < Score3 && Score1 < Score4 && Score1 < Score5)
		return Score1;
	else if (Score2 < Score1 && Score2 < Score3 && Score2 < Score4 && Score2 < Score5)
		return Score2;
	else if (Score3 < Score2 && Score3 < Score1 && Score3 < Score4 && Score3 < Score5)
		return Score3;
	else if (Score4 < Score2 && Score4 < Score3 && Score4 < Score1 && Score4 < Score5)
		return Score4;
	else
		return Score5;
}//end int findLowest