#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include "Player.h"
#include <vector>
#include<array>
using namespace std;
Player *play (Player *p1,Player *p2,int round =5);
class Tournament{

    public:
    Player *run (array<Player*,8>competitors);
};
#endif
