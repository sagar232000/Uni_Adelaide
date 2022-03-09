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


bool twinArray(int* numbers, int length)
{
	int *arr = new int[length];
	for(int i=0; i<length;i++)
	{
		arr[i] = *(numbers+i);
	}
	int flag = 0;
	int i =0;
	int size = length;
	while(flag=0 && i<size)
	{
		if(arr[i]==arr[i+1])
		{
			flag = 0;
			i = i + 2;
		}
		else
		{
			flag = 1;
		}
	}
	if(flag==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}