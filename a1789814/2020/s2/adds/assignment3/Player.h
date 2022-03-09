#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;
class Player
{

public:
	virtual char makeMove() = 0;
	virtual string whoAreYou() = 0;
	virtual void reset() = 0; 
};
#endif
