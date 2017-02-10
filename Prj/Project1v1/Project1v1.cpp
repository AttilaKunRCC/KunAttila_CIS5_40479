/* 
  File:   Project1v1
  Author: Attila Kun
  Created on January 8, 2017, 22:00 PM
  Purpose:  Template to be used in all programming
            projects!
 */

//System Libraries
#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
using namespace std;
char word[100];
char letter,usedLetters[40];
//string word[100];
 
char hang[17][17]{
//1   2   3   4   5   6   7   8   9   1   1   2   3   4   5   6   7
'0','0','0','0','0','0','0','0','0','0','0','0','0',' ',' ',' ',' ',//1
'0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','0',' ',' ',' ',' ',//2
'0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','0',' ',' ',' ',' ',//3
'0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',//4
'0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',//5
'0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',//6
'0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',//7
'0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',//8
'0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',//9
'0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',//1
'0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',//1
'0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',//2
'0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',//3
'0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',//4
'0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',//5
'0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',//6
'0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}; //7


bool guessLetters[20],guess=true;
int i,leftLetters,tries=6,chosenWord;       //tries = number of attempts; 

//Function Prototypes
void mistakes()
{
 
    if(tries==5)
    {
        hang[3][12]='1';
        hang[4][11]='1';
        hang[4][13]='1';
        hang[5][12]='1';
    }
 
    if(tries==4)
    {
        hang[6][12]='2';
        hang[7][12]='2';
        hang[8][12]='2';
    }
 
    if(tries==3)
    {
        hang[6][11]='3';
        hang[7][10]='3';
        hang[8][9]='3';
    }
    if(tries==2)
    {
        hang[6][13]='4';
        hang[7][14]='4';
        hang[8][15]='4';
    }
 
    if(tries==1)
    {
        hang[9][11]='5';
        hang[10][10]='5';
        hang[11][9]='5';
        hang[12][8]='5';
    }
 
    if(tries==0)
    {
        hang[9][13]='6';
        hang[10][14]='6';
        hang[11][15]='6';
        hang[12][16]='6';
    }
}
void display(){
 
    for(i=0; i<=16; i++)
    {
        for(int j=0; j<=16; j++)
        {
            cout<<hang[i][j];
        }
        cout<<endl;
    }
    for(i=0; i<strlen(word); i++)
    {
        if(int(word[i])!=32 && guessLetters[i]==true) cout<<" "<<word[i];
        else if (int(word[i])!=32) cout<<" _";
        else cout<<"  ";
    }
    cout<<endl;
}

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    ifstream inf;
    inf.open("words");
    chosenWord=6;       //chosen words
    int nWords=0;       //number words
    string string, helper;
 
    while(getline(inf,string))
    {
        nWords++;
        cout<<nWords<<endl;
 
    }
    if(!inf.is_open()){
        cout<<"The file \"words.txt\" does not exist";
        return 0;
    }
    inf.clear();
    inf.seekg(0); //to read the file a second time, we reset the reading pointer
    
    //Input values
    cout<<"We will choose a random word from \"words.txt\"";
    cout<<endl;
    cout<<word;
    cout<<"Insert a smaller number than ";
    cout<<nWords;
    cout<<endl;
    cin>>chosenWord;
    
    if(chosenWord>=nWords)
    {
        cout<<"You typed a wrong number";
        return 0;
    }
 
    nWords=0;
    while(getline(inf,string))
    {
        if(chosenWord==nWords) 
           helper=string;
        nWords++;
        cout<<nWords<<endl; 
    };
    
    //string helper;
    cout<<helper;
    strcpy(word,helper.c_str());
    cout <<"Insert the word \n";
    cin.getline(word,100);
    for(i=0; i<strlen(word); i++)
    {
        word[i]=tolower(word[i]);
    }
    leftLetters=strlen(word);
    
while(leftLetters>0)
    {
        display();

        if(tries<1)
        {
            cout<<"You didn't win...";
            cout<<endl;
            cout<<"This is the word :";
            cout<<endl;
            cout<<word;
            break;
        }
        cout<<"You ";
        cout<<tries;
        cout<<" tries.";
        cout<<endl;
        cout<<"You have ";
        cout<<leftLetters;
        cout<<" letters left";
        cout<<endl;
        cout<<"Type a letter :  ";
        cin>>letter;

        letter=tolower(letter);
        cout<<endl;
        guess=false;
        for(i=0; i<strlen(word); i++)
        {
            if(letter==word[i])
            {
                if(guess==false) 
                    leftLetters--;
                guessLetters[i]=true;
                guess=true;
            }
        }
        if(guess==false)
        {
            tries--;
            mistakes();
        }
    }
    cout<<"Congrats, you guessed the word :\n"<<word;

    //Exit stage right!
    return 0;
}