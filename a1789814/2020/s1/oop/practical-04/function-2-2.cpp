#include <iostream>
using namespace std;
int maximum_sum(int *nums,int length)
{
	int a[length];
	int *ptr;
	ptr = a;
	for(int j = 0; j<length;j++)
	{
		*(ptr+j) = *(nums+j);
	}

	int max_so_far = a[0];
    int curr_max = a[0];

   for (int i = 1; i < length; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}