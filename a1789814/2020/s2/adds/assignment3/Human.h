#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
class HumanPlayer:public Player
{
	public:
	HumanPlayer();
	char makeMove();
	int plays;
	char *moves;
	int Cmove;

};
#endif
