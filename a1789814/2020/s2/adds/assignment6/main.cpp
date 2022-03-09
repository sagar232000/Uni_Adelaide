#include <vector>
#include <iostream>
#include <string.h>
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
vector<string> split_by(string& input,
    const char* delimiter= " ") {
    vector<string> inputs;
    char* pch = strtok((char*)input.c_str(),
        delimiter);
    while (pch != NULL)
    {
        string s = string(pch);
        inputs.push_back(s);
        pch = strtok (NULL, delimiter);
    }
    return inputs;
}

Individual * execute(Individual * indPtr, Mutator * mPtr, int k) {
    return mPtr->mutate(indPtr, k);
}
int main() {
    string input;
    getline(cin, input);
    vector<string> strs = split_by(input);
    string binarystr1 = strs[0];
    int k1 = atoi(strs[1].c_str());
    string binarystr2 = strs[2];
    int k2 = atoi(strs[3].c_str());
    Mutator* bitflip = new BitFlip();
    Mutator* rearrange = new Rearrange();


    Individual* i1 = new Individual(binarystr1);
    Individual* i2 = new Individual(binarystr2);
    Individual* r1 = execute( i1, bitflip, k1);
    Individual* r2 = execute( i2, rearrange, k2);
    int longest = r2->getMaxOnes();
    // int longest = max( r1->getMaxOnes(), r2->getMaxOnes());
    cout << r1->getString() << " "
         << r2->getString() << " "
         << longest << endl;

    return 0;
}