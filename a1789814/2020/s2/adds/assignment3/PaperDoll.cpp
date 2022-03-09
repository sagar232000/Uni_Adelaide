#include "PaperDoll.h"
#include <iostream>

using namespace std;

static int num = 0;

PaperDoll::PaperDoll()
{
}

char PaperDoll::makeMove()
{
        char array[3] = {'P', 'S', 'S'};
        char move = array[num];
        num++;
        return move;
}

string PaperDoll::whoAreYou(){
        return "Paper doll";
}

void PaperDoll::reset(){
        num = 0;
}