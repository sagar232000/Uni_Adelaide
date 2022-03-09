#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include "Player.h"
class RandomComputer : public Player
{
public:
        RandomComputer();
        char makeMove();
        string whoAreYou();
        void reset();
};

#endif
