#include<iostream>

using namespace std;

extern int minimum(int[],int);

int main(){
	int array[5] = {1,2,6,4,3};
	cout << "Minimum value is: " << minimum(array,5) << endl;
	return 0;

}
