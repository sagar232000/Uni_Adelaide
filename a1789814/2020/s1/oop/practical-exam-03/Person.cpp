#include <iostream>
#include "Person.h"

using namespace std;

Person::Person()
{

}

Person::Person(string n, int sl)
{
	n= name;
	sl = serviceLength;
	personID = 0;
}

Person::Person(string n, string o, int sl)
{
	n = name;
	o = occupation;
	sl = serviceLength;
}

void Person::set_salary(int s)
{
	if(s>0)
	{
		salary = s;
	}
}

int Person::get_salary()
{
	return salary;
}

void Person::set_name(string pname)
{
	name = pname;
}

void Person::set_occupation(string poccupation)
{
	occupation = poccupation;
}

string Person::get_name()
{
	return name;
}

string Person::get_occupation()
{
	return occupation;
}

int Person::get_personID()
{
	return personID;
}