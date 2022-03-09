#include <iostream>
using namespace std;

extern void print_sevens(int *,int) ;

int main()
{
	int arr[4] = {7,14,49,70};
	int *ptr;
	ptr = &arr[0];
	print_sevens(ptr, 4);
}