#ifndef SORTPERSON_H
#define SORTPERSON_H

#include "Person.h"
#include "Team.h"
class SortPerson
{
public:
	static void sort(Person **people, int n);      // sorts the array of n persons in ascending
                                              // order base on their personID
};

#endif