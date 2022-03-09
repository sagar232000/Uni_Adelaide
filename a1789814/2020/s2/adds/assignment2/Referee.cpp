#include <iostream>
#include "Referee.h"
#include <string>
using namespace std;

Referee::Referee()
{
}

char Referee::refGame(HumanPlayer& player1, ComputerPlayer& player2)
{
    //int plays = player1.plays;

    char results = 'T';
    char hMove = player1.makeMove();
    //char cMove = player2.makeMove();
    if (hMove == 'R')
    {
        results = 'T';
    }
    else if (hMove == 'S')
    {
        results = 'L';
    }
    else
    {
        results = 'W';
    }
    return results;
}
