#include <iostream>
using namespace std;

int *readNumbers(int n)
{
	 int *num;
    num = new int[n];
    for (int i =0 ;i<n ;i++){
    cin >> num[i];

    }
    return num;
}

void printNumbers(int *numbers,int length)
{
	for(int i=0; i<length;i++)
	{
		cout<<i<<" ";
		cout<<*(numbers+i)<<endl;
	}
}

void months(int* monthNumbers,int length)
{
	int *arr = new int[length];
	for(int i=0; i<length; i++)
	{
		arr[i] = *(monthNumbers+i);
	}

	for(int j=0; j<length; j++)
	{
		cout<<j<<" ";
		cout<<arr[j]<<" ";
		switch(arr[j])
		{
			case 1:cout<<"January";break;
			case 2:cout<<"Febuary";break;
			case 3:cout<<"March";break;
			case 4:cout<<"April";break;
			case 5:cout<<"May";break;
			case 6:cout<<"June";break;
			case 7:cout<<"July";break;
			case 8:cout<<"August";break;
			case 9:cout<<"September";break;
			case 10:cout<<"October";break;
			case 11:cout<<"November";break;
			case 12:cout<<"December";break;
			default: break;
		}
		cout<<endl;
	}
}