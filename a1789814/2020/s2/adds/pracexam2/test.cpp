#include <iostream>

using namespace std;

 int sum = 0;


int square(int n)
{
   if(n==0){
    return sum;
   }
     sum +=2*n-1;

     return square(n-1);
}

int main(){
   cout<< square(5);

    return 0;
}
