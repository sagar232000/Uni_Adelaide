#include "BubbleSort.h"
using namespace std;

BubbleSort::BubbleSort(){
}
	
vector<int> BubbleSort::sorting(vector<int> arr){

	int  length = arr.size();
	
	vector<int> a;
	for(int i = length-1; i>=0;i--){
		a.push_back(arr.at(i));
	}

	int temp;  
	for(int i=0;i<length;i++){
		for(int j = 0; j<length-i-1 ; j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] =  a[j+1];
				a[j+1] = temp;	
			}
		}
		
	}
	return a;
}
	




