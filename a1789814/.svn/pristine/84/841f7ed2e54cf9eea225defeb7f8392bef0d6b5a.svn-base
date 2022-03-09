#include <iostream>
#include <string>
using namespace std;

int min_integer(int integers[],int length){
	int min=integers[0];
	for(int i = 0;i<length ; i++){
		if(min>integers[i]){
			min = integers[i];
		}
	}	return min;
}

int max_integer(int integers[],int length){
        int max=integers[0];
        for(int i = 0;i<length ; i++){
                if(max<integers[i]){
                        max = integers[i];
                }
        }
	
	return max;
}

int sum_min_and_max(int integers[],int length){
        int sum=0;
        sum = max_integer(integers,length)+min_integer(integers,length);
	return sum;
}
