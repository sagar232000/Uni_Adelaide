#ifndef CART_H
#define CART_H

using namespace std;

#include <string>
#include "meerkat.h"
class cart
{
public:
		cart();                         // create an empty cart object
		bool addMeerkat(meerkat cat);   // adds a meerkat to the cart, returns false if full
		void emptyCart();               // remove all meerkats from the cart
		void printMeerkats();           // print the name, a space, the age, then a new line                              // for each meerkat in the order they were added
		int number;
		meerkat mcat[5];
};
#endif //CART_H