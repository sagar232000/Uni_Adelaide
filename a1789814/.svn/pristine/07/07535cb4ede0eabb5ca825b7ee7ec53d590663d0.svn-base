#include "SortPerson.h"

void SortPerson::sort(Person **people, int n)
{
	Person *swap1, *swap2;
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<i-n-1;j++)
		{
			if((people[j]->get_personID()) > (people[j+1]->get_personID()))
			{
				swap1 = people[j];
				swap2 = people[j+1];
				people[j] = swap2;
				people[j+1] = swap1;
			}
		}
	}
}
