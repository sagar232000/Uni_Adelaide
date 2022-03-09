#include<iostream>

using namespace std;

extern int sumtwo(int[],int[],int);

int main(){
	int array[5]={1,2,3,4,5};
	int secondarray[5]={1,2,3,4,5};
	cout << "The total of the two array: "  << sumtwo(array,array,5) << endl ; 
	return 0;	
}
