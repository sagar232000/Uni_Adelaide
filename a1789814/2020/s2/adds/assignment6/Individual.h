// #ifndef _INDIVIDUAL_H
// #define _INDIVIDUAL_H
// #include <string>
// #include <vector>

// class Individual
// {
// public:
// 	Individual(int f);
// 	Individual(std::string s);
// 	std::string getString();
// 	int getBit(int pos);
// 	void flipBit(int pos);
// 	int getMaxOnes();
// 	int getLength();
// 	//~Individual();
// private:
// 	//std::string binarystr;
// 	int len;
// 	std::vector<int> DNA;
// 	int max = 0;
// };
// #endif
#ifndef _INDIVIDUAL_H_
#define _INDIVIDUAL_H_
#include <string>
using namespace std;


class Individual{
public:
    Individual(string bitString){
        m_bitString = bitString;
    }

    Individual(int length) {
        m_bitString = string(length, '0');
    }

    string getString() {
        return m_bitString;
    }

    int getBit(int pos) {
        if( pos < 1 && pos > getLength()) {
            return -1;
        }
        return m_bitString[pos - 1];
    }

    void flipBit(int pos){
        int bit = getBit(pos);
        if( bit != -1 ) {
            m_bitString[pos - 1] = (bit == '0' ? '1' : '0');
        }
    }

    int getMaxOnes();
    int getLength() {
        return (int)m_bitString.size();
    }
private:
    string m_bitString;
protected:
};

#endif
