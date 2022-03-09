#ifndef AVALANCHE_H
#define AVALANCHE_H
#include "Player.h"
class Avalanche : public Player
{
public:
        Avalanche();
        char makeMove();
        string whoAreYou();
        void reset();
};

#endif
