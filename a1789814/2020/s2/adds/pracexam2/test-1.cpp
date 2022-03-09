#include <iostream>

using namespace std;

 


int square(int n)
{
 static int sum = 0;
  static int tail = 2*n-1;
   if(tail<=0){
    return sum;
   }
     sum +=tail;
     tail -=2;
     return square(tail);
}

int main(){
   cout<< square(5);

    return 0;
}
