#include <iostream>
using namespace std;

extern int *readNumbers(int n) ;
extern int* mergeArrays(int* A, int* B, int length) ;

int main()
{
	int *arr = readNumbers(4);
	int *arr1 = readNumbers(4);
	int *merge = mergeArrays(arr, arr1, 4);
	for(int i=0; i<8;i++)
	{
		cout<<*(merge+i)<<" ";
	}
	delete[] arr;
	delete[] arr1;
	delete[] merge;
	return 0;
}