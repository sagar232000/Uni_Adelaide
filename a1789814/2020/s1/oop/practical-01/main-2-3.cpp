#include<iostream>

using namespace std;

extern void twofivenine(int[],int);

int main(){
        int array[13] = {2,2,2,5,5,5,5,5,9,9,9,9,9};
	cout << "result is: "  << endl;
        twofivenine(array,13);
	return 0;

}
    
