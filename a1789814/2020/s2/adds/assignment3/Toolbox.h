#ifndef TOOLBOX_H
#define TOOLBOX_H
#include "Player.h"
class Toolbox : public Player
{
public:
        Toolbox();
        char makeMove();
        string whoAreYou();
        void reset();
};

#endif
