#include "Team.h"
#include "Coach.h"
#include "Player.h"
Team::Team()
{
	team = new Person*[5];
	for (int i = 0; i<5 ; i++ ){
	    if (i==0 && i==4){
	        team[i]=new Coach();
	    }
	    else{
	        team[i] = new Player();
	    }
	}

}



**Team::get_team()
{
	return team;
}