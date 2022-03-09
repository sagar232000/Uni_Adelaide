#include<iostream>

using namespace std;

void print_summed_matrices(int array1[3][3],int array2[3][3]){
	int array3[3][3];
        for(int i = 0; i<3;i++){
                for(int j=0;j<3;j++){
                        array3[i][j] = array1[i][j]+array2[i][j] ;
                }
        }


        for (int i = 0; i<3;i++){
                for(int j=0;j<3;j++){
                       cout << array3[i][j];
                        cout << " ";
                }
                cout << endl;
        }
}

