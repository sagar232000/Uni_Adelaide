#include<iostream>
#include "person.h"

using namespace std;

int main(){
 person *sagar , *umang, *harsh , *jatin, *deepa;
 sagar = new person();
 sagar->person("sagar",10000);

 umang = new person();
 umang->setName("umang");
 umang->setSalary(100000);

harsh= new person();
 harsh->setName("harsh");
 harsh->setSalary(100000);

 jatin = new person();
 jatin->setName("jatin");
 jatin->setSalary(100000);

deepa= new person();
 deepa->setName("deepa");
 deepa->setSalary(100000);

	cout << "person: " << sagar->getName() << " has salary " << sagar->getSalary() << endl ;
	cout << "person: " << umang->getName() << " has salary " << umang->getSalary() << endl ;
	cout << "person: " << harsh->getName() << " has salary " << harsh->getSalary() << endl ;
	cout << "person: " << jatin->getName() << " has salary " << jatin->getSalary() << endl ;
}