/* 
  File:   MidTerm_Prob1
  Author: Attila Kun
  Created on January 23, 2017, 21:50 PM
  Purpose:  Input the number than make an X in the following way, for instance, when you input a 5 you output.
 * Note:  Instructor will not type in a number <1 or >50
 
5   1
 4 2
  3
 4 2
5   1

when you input a 7 you output

7     1
 6   2
  5 3
   4
  5 3
 6   2
7     1

if you input an even number

1  4
 23
 23
1  4

Use for-loops, and Flowchart this solution.

 * 
 */

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string operator*(const string& s, unsigned int n) {
    stringstream out;
    while (n--)
        out << s;
    return out.str();
}

string operator*(unsigned int n, const string& s) { return s * n; }

//Executable code begins here!!!
int main(int argc, char** argv)
{
  //Declare Variables
  int x;
  cout << "Type your number: ";
  cin >> x;
  int hx = x / 2;
  int hx2 = x / 2;
  int y = x - (x - 1);
  int fs = 0;
  int ms = x - 2;
  
  if (x % 2 != 0){
  	string ffs = " ";
  	string mms = " ";
  	for(hx; hx > 0; hx = hx -1){
  		cout << ffs * fs << x << mms * ms << y << endl;
  		x -= 1;
  		y += 1;
  		fs += 1;
  		ms -= 2;
	  }
	cout << ffs * fs << x << endl;
	for(hx2; hx2 > 0; hx = hx2 -1){
		fs -=1;
		ms += 2;
		x +=1;
		y -=1;
		cout << ffs * fs << x << mms * ms << y << endl;
	}
  }
  else {
  	string ffs = " ";
  	string mms = " ";
  	for(hx; hx > 0; hx = hx -1){
  		cout << ffs * fs << y << mms * ms << x << endl;
  		x -= 1;
  		y += 1;
  		fs += 1;
  		ms -= 2;
	  }
	for(hx2; hx2 > 0; hx = hx2 -1){
		fs -=1;
		ms += 2;
		x +=1;
		y -=1;
		cout << ffs * fs << y << mms * ms << x << endl;
  	
        }
}//end last else
  
  return 0;
}//end int main
