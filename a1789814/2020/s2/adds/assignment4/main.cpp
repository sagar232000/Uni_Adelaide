#include<iostream>
#include <map>
#include<vector>
#include "Reverse.h"
#include "TruckLoads.h"
#include "EfficientTruckLoads.h"
#include <string.h>
using namespace std;
vector<string> split_by(string& input, const char* delimiter = " "){
	vector<string> inputs;
	char* pch = strtok((char*)input.c_str(),delimiter);
	while(pch!=NULL){
		string s = string(pch);
		inputs.push_back(s);
		pch = strtok(NULL,delimiter);
	}
	return inputs;
}
int main(){
	string in;
	getline(cin,in);
	vector<string> str = split_by(in," ");
	int n = -1;
	int n1= -1;
	int n2= -1;
	string s=" ";

	try{
		n=std::stoi(str[0]);
	}
	catch(const std::exception&){
		cout<<"ERROR";
	}


	try{
		n1=std::stoi(str[2]);
		n2=std::stoi(str[3]);
	}
	catch(const std::exception&){
		cout<<"ERROR";
	}
	s = str[1];
	Truckloads T;
	EfficientTruckloads et;
	Reverse r1;
	Reverse r2;
	if(r1.reverseDigit(n)==0 ){
	cout << "ERROR" << " " << r2.reverseString(s)<<" ";
	}
	else{
	cout << r1.reverseDigit(n) << " " <<r2.reverseString(s)<<" ";
	}
	if(n1>0 && n2>0){
	cout << T.numTrucks(n1,n2) << " ";
	cout << et.numTrucks(n1,n2);
	}
	else{
		cout << "ERROR ERROR";

	}
	cout << endl;
return 0;
}
