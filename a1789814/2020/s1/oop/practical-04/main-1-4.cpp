#include <iostream>
using namespace std;

extern void cpyda(double *,double *,int) ;

int main()
{
	int length = 2;
	double arr[2] = {1.1,2.2};
	double arr1[2];
	double *ptr, *ptr1;
	ptr = arr;
	ptr1 = arr1;
	cpyda(ptr,ptr1,length);
	return 0;
}