#include "Book.h"
#include "Journal.h"
#include <iostream>
using namespace std;


int main() {
 Book b1("Norton’s Star Atlas", "A.P. Norton", 510);
 Book b2("Pocket Sky Atlas", "J. Sinot", 511);
 if (equals(b1,b2)) {
   cout << "The books are the same" << endl ;
}
 else{
   cout << "The books are different" << endl ;
 b1.print();
 b2.print();

 
}
return 0;
}
