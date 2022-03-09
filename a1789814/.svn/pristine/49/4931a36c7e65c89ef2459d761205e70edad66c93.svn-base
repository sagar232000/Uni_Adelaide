#include "Referee.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "Tournament.h"
#include "RandomComputer.h"
#include <iostream>
#include <array>
using namespace std;

int main()
{
    RandomComputer rc;
    array<Player *, 8> players = {
        new Avalanche(), new Bureaucrat(), new Bureaucrat(),
        new Toolbox(), new Toolbox(), new Crescendo(),
        new Crescendo(), new FistfullODollars()};

    players = {
        new Avalanche(), new Toolbox(), new Bureaucrat(),
        new Toolbox(), new Toolbox(), new Avalanche(),
        new Bureaucrat(), new Bureaucrat()};
    //Avalanche Toolbox Bureaucrat Toolbox Avalanche Avalanche Avalanche Avalanch

        Tournament t;
    Player *winner = t.run(players);
    //cout<<winner<<endl;
    cout << winner->whoAreYou() << endl;
    return 0;
}