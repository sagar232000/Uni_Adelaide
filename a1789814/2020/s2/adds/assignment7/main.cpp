#include <iostream>
//#include "Sort.h"
#include <vector>
#include "BubbleSort.h"
using namespace std;
int main(){
	vector<int> arr;
	for(int i = 5;i>=0;i--){
		arr.push_back(i);
	} 
	BubbleSort b;
	vector<int> foo = b.sorting(arr);
	for (int i = 0; i<foo.size(); i++) {
		cout << foo.at(i) << " ";
	}
	cout << endl;
	// cout << b.sorting(arr) << endl;
	return 0;
}
