#include "Tournament.h"
#include "Referee.h"

Player * play(Player *p1,Player *p2, int round){
    Referee ref;
    int p1win=0;
    int p2win=0;
    for (int i = 0; i<round;i++){
        Player *winner = ref.refGame(p1,p2);
        if(winner == p1){
            p1win++;
        }else {
            p2win++;
        }
    }
    Player* winner = NULL;
    if (p1win >= p2win){
        winner = p1;
    }else{
        winner = p2;
    }
    return winner;
}

Player * Tournament:: run(array<Player *,8>competitors){
    vector<Player *> round_one;
    vector<Player *> round_two;
    vector<Player *> round_three;
    int indexes[] = {1,2,3,4,5,6,7};

    int count = sizeof(indexes)/sizeof(int);

    for(int i = 0;i<count;i++){
        competitors[i];
    }
    for (int i=0;i<count ; i++){
        Player * p1 = competitors[indexes[i]];
        Player *p2 = competitors[indexes[i+1]];
        Player *winner=play(p1,p2);
        round_one.push_back(winner);
    }
    for (int i=0;i<round_one.size() ; i++){
        Player * p1 = round_one[i];
        Player *p2 = round_one[i+1];
        Player *winner=play(p1,p2);
        round_two.push_back(winner);
    }
    Player * p1 = round_two[0];
    Player *p2 = round_two[1];
    return play(p1,p2);
}