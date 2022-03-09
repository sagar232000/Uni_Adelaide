#include <iostream>
#include "Coach.h"
#include <string>

int Coach::nextID = 0;

Coach::Coach(){
    name = "default";
	occupation = "coach";
	serviceLength = 17;
    personID=nextID;
	nextID ++;
}
Coach::Coach(string n, int sl) : Person(n, sl)
{
	name = n;
	occupation = "coach";
	serviceLength = sl;
    personID=nextID;
	nextID ++;

}

int Coach::get_salary()
{
	if(serviceLength < 15)
	{
		return salary;
	}
	else
	{
		return (salary*3);
	}
}