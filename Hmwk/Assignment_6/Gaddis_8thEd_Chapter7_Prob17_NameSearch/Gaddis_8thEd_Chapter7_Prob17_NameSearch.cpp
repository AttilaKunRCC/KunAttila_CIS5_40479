/* 
  File:   Gaddis_8thEd_Chapter7_Prob17_NameSearch.cpp
  Author: Attila Kun
  Created on January 6, 2017, 21:50 PM
  Purpose:  Name Search
If you have downloaded this book’s source code from the companion Web site, you
will find the following files in this chapter’s folder:
• GirlNames.txt—This file contains a list of the 200 most popular names given to girls
born in the United States from 2000 to 2009.
• BoyNames.txt—This file contains a list of the 200 most popular names given to boys
born in the United States from 2000 to 2009.
Write a program that reads the contents of the two files into two separate arrays or
vector s. The user should be able to enter a boy’s name, a girl’s name, or both, and
the application should display messages indicating whether the names were among the
most popular.
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

const int RANK = 1000;
int n;

int main(int argc, char** argv)
{
	ifstream names;
	string target, boyname, girlname;
	bool findBoy, findGirl;
	int rank, i;
	int rankArray[RANK];
	string boyArray[RANK];
	string girlArray[RANK];
	vector<string> s;
	names.open("BoyNames");
        names.open("GirlNames");
	
	for(i=0;i<RANK;i++){ //loads list of top 1000 baby boy and girl names into arrays
		names >> rank >> boyname >> girlname;
		rankArray[i]=rank;
		boyArray[i]=boyname;
		girlArray[i]=girlname;	
	}
	
	while(true) {		
		cout << "Enter a name (or EXIT when done): ";
		cin >> target;
		cout << endl;
		if(target=="EXIT") break;
		
		for(n=0;n<RANK;n++){ //checks if name input is on list
			if(target==boyArray[n]){
				cout << target << " is ranked " << (n+1) << " in popularity among boys." << endl;
				findBoy=true;
			}
			if(target==girlArray[n]){
				cout << target << " is ranked " << (n+1) << " in popularity among girls." << endl;
				findGirl=true;
			}
		}
		
		if(findBoy!=true) cout << target << " is not ranked among the top 1000 boy names." << endl;
		if(findGirl!=true) cout << target << " is not ranked among the top 1000 girl names." << endl;
	}
	return 0;
}