#include<iostream>

using namespace std;

extern bool descending(int[],int);

int main(){
        int array[5]={5,4,3,2,1};

        if(descending(array,5)){
                cout << "The order is in descending." << endl ;
        }
        else{
                cout << "The order is not descending. " << endl ;
        }
}

