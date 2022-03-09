#include<iostream>

using namespace std; 

extern int diagonal(int array[4][4]);

int main(){

	int array[4][4] ={ {1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	int i,j;	
	for ( i = 0; i < 4 ; i++){
		for( j=0; j < 4 ;j++){
			cout << array[i][j];
			cout<< " "; 	
		}
		cout<<endl;
	}
	cout << "The sum of the array is: " << diagonal(array) << endl;
	return 0;

}
