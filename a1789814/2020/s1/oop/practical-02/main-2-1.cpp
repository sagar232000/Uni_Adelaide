#include<iostream>

using namespace std;

extern void print_as_binary(std::string decimal_number);

int main(){
	string decimal_number = "8";	
	print_as_binary(decimal_number);
	return 0;

}
