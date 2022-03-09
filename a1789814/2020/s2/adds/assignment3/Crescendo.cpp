#include "Crescendo.h"
#include <iostream>

using namespace std;

static int num2 = 0;

Crescendo::Crescendo()
{
}

char Crescendo::makeMove()
{
        char array[3] = {'P', 'S', 'R'};
        char move = array[num2];
        num2++;
        return move;
}

string Crescendo::whoAreYou(){
        return "Crescendo";
}

void Crescendo::reset(){
        num2 = 0;
}
