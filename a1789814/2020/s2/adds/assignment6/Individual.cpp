// #include "Individual.h"
// #include <iostream>
// #include <string>
// using namespace std;
// Individual::Individual(int length){
// 	// len = i;
// 	// int TEMP[len];
// 	// DNA = TEMP;

// 	for(int i = 0 ; i<length ; i++){
// 		// DNA[i]=0;
// 		DNA.push_back(0);
// 	}

// }

// Individual::Individual(std::string str){
// 	len = str.size();
// 	// DNA[len];
// 	for(int i=0; i<str.length() ; i++){
// 		DNA.push_back(str.at(i) - '0');
// 	}
// }

// int Individual::getMaxOnes(){
// 	int count;
// 	//max = 0;
// 	for(int i=0; i<DNA.size() ; i++){
// 		if(DNA.at(i)==1){
// 			count += 1;
// 			if (max < count){
// 				max = count;
// 			}
// 		}

// 		else
// 		{

// 			count = 0;
// 		}
// 	}


// 	return max;
// }

// std::string Individual::getString(){
// 	std::string returnString = "";
// 	for(int i=0; i<DNA.size() ; i++){
// 		//returnString += DNA[i];
// 		cout<<DNA.at(i);
// 		//returnString += to_string(DNA[i]);
// 		// return to_string(DNA[i]);
// 	}
// 	cout<<endl;
// 	return returnString;
// }


// int Individual::getBit(int pos){
// 	if (pos > DNA.size() && pos < 0){
// 		return -1;
// 	}
// 	return DNA.at(pos);
// }
// void Individual::flipBit(int pos){
// 		if (DNA.at(pos) == 1){
// 			DNA.at(pos) = 0;
// 		}
// 		else{
// 			DNA.at(pos) = 1;
// 		}
// 		std::cout << DNA.at(pos) <<std::endl;
// }

// int Individual::getLength(){
// 	return DNA.size();
// }
#include "Individual.h"

int Individual::getMaxOnes()
{
    int max = 0;
    int tmp = max;
    for (int i = 0; i < getLength(); i++)
    {
        if (m_bitString[i] == '1')
        {
            tmp++;
        }
        else
        {
            if (tmp > max)
            {
                max = tmp;
            }
            tmp = 0;
        }
    }
    return max > tmp ? max : tmp;
}
