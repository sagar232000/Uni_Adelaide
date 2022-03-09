#include <iostream>
#include <string>
using namespace std;

extern float arithmetic_ops(float, float, string);

int main()
{
	cout<< arithmetic_ops(10,5,"+")<<endl;
}