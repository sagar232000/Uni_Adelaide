#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person
{
private:


public:
	Person();
	Person(std::string n, string o, int sl);
	Person(string n, int sl);    // creates a person of name n, occupation o, and service length sl                       // the unique ID of a person
	void set_salary(int s);
	void set_name(string pname);
	void set_occupation(string poccupation);
	virtual int get_salary() = 0;
	string get_name();
	string get_occupation();
	int get_personID();
	string name;                       // the name of a person
 	string occupation;                 // the occupation of a person
 	int salary;                        // the salary of a person; takes only non-negative values
 	int serviceLength;                   // the service length of a person
	int personID;
};
#endif