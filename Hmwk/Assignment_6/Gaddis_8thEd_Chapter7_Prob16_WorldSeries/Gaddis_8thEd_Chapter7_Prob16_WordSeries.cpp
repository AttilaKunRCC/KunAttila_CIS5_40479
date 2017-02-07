/* 
  File:   Gaddis_8thEd_Chapter7_Prob16_WordSeries.cpp
  Author: Attila Kun
  Created on January 6, 2017, 21:15 PM
  Purpose:  World Series Champions
If you have downloaded this book’s source code from the companion Web site, you
will find the following files in this chapter’s folder:
• Teams.txt—This file contains a list of several Major League baseball teams in alphabetical
order. Each team listed in the file has won the World Series at least once.
• WorldSeriesWinners.txt—This file contains a chronological list of the World Series’
winning teams from 1903 to 2012. (The first line in the file is the name of the team
that won in 1903, and the last line is the name of the team that won in 2012. Note
that the World Series was not played in 1904 or 1994.)
Write a program that displays the contents of the Teams.txt file on the screen and
prompts the user to enter the name of one of the teams. The program should then display
the number of times that team has won the World Series in the time period from
1903 to 2012.
 */

//Professor I was not able to find the text files in the Source Code I downloaded for the book. I made it some lists myself.

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 50;
    string array[SIZE]; 
    int i=0; 
    string line; 

    ifstream in ("Teams.txt");    
    if (in.is_open()){
                while (! in.eof() ){
                    getline (in,line);
                    array[i] = line;
                    cout << array[i] << endl;
                    i++;
                }
                    in.close(); 
    }
    string tempstr, team;
    int count = 0, num = 0;

    ifstream infile ("WorldSeriesWinners.txt");		
    cout<<"Choose a team and see how many times they have won since 1903.\n";
    getline(cin,team);
    
    while(infile >> tempstr){
            if(tempstr == team){
                num++;
            }
            count++;
    }
    cout<< "\nThe " << team << " has won the World Series " << num << " times since 1903.\n";

    //Exit stage right!
    return 0;
}