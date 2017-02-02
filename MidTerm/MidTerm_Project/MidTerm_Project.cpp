/* 
  File:   MidTerm_Project.cpp
  Author: Attila Kun
  Created on January 28, 2017, 12:15 PM
  Purpose:  Program your favorite game in C++, with at least 100 lines of code.
 * - also write a writeup on the code.
 */

//System Libraries
#include <iostream>
#include <stdlib.h>

using namespace std;

//Function Prototypes
char Square1=('1');
char Square2=('2');
char Square3=('3');
char Square4=('4');
char Square5=('5');
char Square6=('6');
char Square7=('7');
char Square8=('8');
char Square9=('9');
int  PlayerTurn(1);
bool GameOver;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables

    
    do{
    //Display board
		cout<<endl<<Square1<<"|"<<Square2<<"|"<<Square3<<endl;
		cout<<"-+-+-"<<endl;
		cout<<Square4<<"|"<<Square5<<"|"<<Square6<<endl;
		cout<<"-+-+-"<<endl;
		cout<<Square7<<"|"<<Square8<<"|"<<Square9<<endl<<endl;
                
        
    //Sign setting. X for Player1 and O for Player2
		char PlayerSign;
		if(PlayerTurn==1){
			PlayerSign='X';
		}
		else{
			PlayerSign='O';
		}

    //Output a message and wait for move
        	cout<<"Player "<<PlayerTurn<<":"<<endl;
		bool ValidMove;
    
    //verify move
		do{
			ValidMove=true;
			char NextMove; 
			cin>>NextMove;
			if (Square1=='1' && NextMove=='1')
				Square1=PlayerSign;
			else if (Square2=='2' && NextMove=='2')
				Square2=PlayerSign;
			else if (Square3=='3' && NextMove=='3')
				Square3=PlayerSign;
			else if (Square4=='4' && NextMove=='4')
				Square4=PlayerSign;
			else if (Square5=='5' && NextMove=='5')
				Square5=PlayerSign;
			else if (Square6=='6' && NextMove=='6')
				Square6=PlayerSign;
			else if (Square7=='7' && NextMove=='7')
				Square7=PlayerSign;
			else if (Square8=='8' && NextMove=='8')
				Square8=PlayerSign;
			else if (Square9=='9' && NextMove=='9')
				Square9=PlayerSign;
			else
				{
				cout<<"The square "<<NextMove<<" is already taken.\nTry again:";
				ValidMove = false;
				}
		}while (!ValidMove);
                
                GameOver=false;
		bool GameWon=true;
                
                //Verify if the game ended (8 methods)
		if (Square1 != '1') {
			if (Square2 == Square1 && Square3 == Square1) {
				GameOver = true;
			}
			if (Square4 == Square1 && Square7 == Square1) {
				GameOver = true;
			}
		}
		if (Square5 != '5') {
			if (Square1 == Square5 && Square9 == Square5) {
				GameOver = true;
			}
			if (Square2 == Square5 && Square8 == Square5) {
				GameOver = true;
			}
			if (Square4 == Square5 && Square6 == Square5) {
				GameOver = true;
			}
			if (Square3 == Square5 && Square7 == Square5) {
				GameOver = true;
			}
		}
		if (Square9 != '9') {
			if (Square3 == Square9 && Square6 == Square9) {
				GameOver = true;
			}
			if (Square7 == Square9 && Square8 == Square9) {
				GameOver = true;
			}
		}
		//We verify if anyone won
		if (Square1!='1' && Square2!='2' && Square3!='3' &&
			Square4!='4' && Square5!='5' && Square6!='6' &&
			Square7!='7' && Square8!='8' && Square9!='9'&&!GameOver)
			{
			 GameOver=true;
                         GameWon=false;
			}
		if (GameOver){
			if (GameWon)
			{
				cout<<"Player "<<PlayerTurn<<" Won!"<<endl;
			}
		//Display final scoreboard
		cout<<Square1<<"|"<<Square2<<"|"<<Square3<<endl;
		cout<<"-+-+-"<<endl;
		cout<<Square4<<"|"<<Square5<<"|"<<Square6<<endl;
		cout<<"-+-+-"<<endl;
		cout<<Square7<<"|"<<Square8<<"|"<<Square9<<endl<<endl;

		//Play again?
		cout<<"Game Over"<<endl;
		cout<<"Play again? (y/n)"<<endl;
		char PlayAgain;
		cin>>PlayAgain;
		if (PlayAgain=='y')
		{
			GameOver=false;
			//Restart scoreboard
			Square1='1';
			Square2='2';
			Square3='3';
			Square4='4';
			Square5='5';
			Square6='6';
			Square7='7';
			Square8='8';
			Square9='9';
		}
		PlayerTurn=1;
		}else
			//Change Row of players (Player 1 will be second and Player 2 the first
			if (PlayerTurn==1){
				PlayerTurn=2;}
			else{
				PlayerTurn=1;}
	system ("CLS");
	}
    while(!GameOver);
}

                
                



