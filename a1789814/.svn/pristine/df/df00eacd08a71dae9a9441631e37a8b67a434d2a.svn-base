#include<iostream>

using namespace std;

int *readNumbers(int n){
    int *num;
    num = new int[n];
    for (int i =0 ;i<n ;i++){
    cin >> num[i];

    }
    return num;
}

void printNumbers(int *numbers,int length){
    for (int i=0; i<length;i++){
        cout<< i <<" ";
        cout<<*(numbers+i)<<endl;
    }
}

int* mergeArrays(int* A, int* B, int length)
{
	int newLen = length * 2;
	int *arr = new int[newLen];
	for(int i=0; i<newLen; i++)
	{
		if(i < length)
		{
			arr[i] = *(A+i);
		}
		else
		{
				arr[i] = *(B+(i - length));
		}
	}
	return arr;
}