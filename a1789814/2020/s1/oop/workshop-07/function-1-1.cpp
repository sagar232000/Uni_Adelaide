#include <iostream>
using namespace std;

int *readNumbers(int n)
{
	int *arr = new int[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	return arr;
}

void printNumbers(int *numbers,int length)
{
	for(int i=0; i<length;i++)
	{
		cout<<i<<" ";
		cout<<*(numbers+i)<<endl;
	}
}
