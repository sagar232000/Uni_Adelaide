#include <iostream>
#include "Referee.h"
#
#include <string>
using namespace std;

Referee::Referee()
{
}

Player* Referee::refGame(Player* p1, Player* p2)
{
    //int plays = player1.plays;

    Player* winner = NULL;
    char hMove = p1->makeMove();
    char cMove = p2->makeMove();
    if ( hMove == cMove)
    {
        winner= p1;
    }
    else if (hMove == 'S' && cMove == 'R')
    {
        winner = p2;
    }
    else if (hMove == 'R' && cMove == 'P')
    {
        winner = p2;
    }
    else if (hMove == 'P' && cMove == 'R')
    {
        winner = p1;
    }
    else if (hMove == 'S' && cMove == 'P')
    {
        winner = p1;
    }
   return winner;
}
