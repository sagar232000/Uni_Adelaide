#include <iostream>
#include "cart.h"
#include "meerkat.h"

using namespace std;

cart::cart()
{
	number =0;
}

bool cart::addMeerkat(meerkat cat)
{

	int arr[4];

	arr[0] = 5;

	if(number>4)
	{
		return false;
	}
	else
	{
		mcat[number] = cat;
		number++;
		return true;
	}
}

void cart::emptyCart()
{
	number = 0;
}

void cart::printMeerkats()
{
	for(int i=0; i<number;i++)
	{
		cout<<mcat[i].getName()<<" "<<mcat[i].getAge()<<endl;
	}
}