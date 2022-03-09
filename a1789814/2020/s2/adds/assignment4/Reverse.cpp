#include<iostream>
#include "Reverse.h"

Reverse::Reverse(){

}

int Reverse::reverseDigit(int i){
	if(i>=0){
		 int num = i;
		//int rev = 0;
		//int rem = 0;
		if(num < 10)
			{
				return num;
			}
		else{
			int ld = num % 10;
			int rem = num/10;
			int c = rem;
			while(c>0){
				c/=10;
				ld = ld*10;
				//std::cout<< ld <<std::endl;
			}
			return ld + reverseDigit(rem);

		}
	}
	else {
		//std::cout << "EROOR"<<std::endl;
		return 0;
	}
}

std::string Reverse:: reverseString(std::string str){
	if(str.length()==1){
		return str;
	}
	else{
		return reverseString(str.substr(1,str.length()))+str.at(0);
	}
}
