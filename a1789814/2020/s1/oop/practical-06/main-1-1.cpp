#include <iostream>
#include "meerkat.h"

using namespace std;

int main()
{
	meerkat *one, *two, *three, *four;
	one = new meerkat();
	one->setName("one");

	two = new meerkat();
	two->setName("two");

	three = new meerkat();
	three->setName("three");

	four = new meerkat();
	four->setName("four");

	one->setAge(2);
	two->setAge(3);
	three->setAge(6);
	four->setAge(4);


	cout << "Meerkat: " << one->getName() << " has age " << one->getAge() << endl ;
	cout << "Meerkat: " << two->getName() << " has age " << two->getAge() << endl ;
	cout << "Meerkat: " << three->getName() << " has age " << three->getAge() << endl ;
	cout << "Meerkat: " << four->getName() << " has age " << four->getAge() << endl ;
}