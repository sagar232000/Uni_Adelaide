#include <iostream>
#include <string.h>
#include "Human.h"

using namespace std;

HumanPlayer::HumanPlayer(){

	
	moves=new char[plays];
	Cmove=0;
	cin >> plays;

	for(int i=0; i<plays; i++)
	{
		cin >> moves[i];
	}
} 

char HumanPlayer::makeMove(){
	char humanMove = moves[Cmove];
	Cmove =Cmove+1;
	return humanMove;
}
