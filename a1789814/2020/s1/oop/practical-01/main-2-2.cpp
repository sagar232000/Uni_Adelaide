#include<iostream>

using namespace std;

extern int maximum(int[],int);

int main(){
        int array[5] = {1,2,6,4,3};
        cout << "Maximum value is: " << maximum(array,5) << endl;
        return 0;

}    
