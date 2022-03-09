#include<iostream>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// // but will be implemented somewhere else

extern int size_of_variable_star_t() ;


int main(){

cout<< size_of_variable_star_t()<<endl;
	return 0;

}