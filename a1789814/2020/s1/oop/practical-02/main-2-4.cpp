#include<iostream>

using namespace std;

extern int sum_min_and_max(int array[],int length);
extern int min_integer(int array[],int length);
extern int max_integer(int array[],int length);
int main(){
	int array[4]={23,21,2,3};

	int length=4;
	cout << sum_min_and_max(array, length) << endl;
	return 0;
}
