#include<iostream>
#include<string>

using namespace std;

void print_as_binary(std::string decimal_number){
	int number = stoi(decimal_number);
	int count=0;
	int array[100];
	for(int i=0 ;number>0;i++){
		array[i]=number%2;
		number=number/2;
		count++;
	}
	for (int i=count-1;i>=0;i--){
		cout<<array[i];
	}
	cout <<" "<< endl;
}
