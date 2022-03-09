#ifndef _BitFlip_H_
#define _BitFlip_H_
#include <string>
#include "Mutator.h"
using namespace std;


class BitFlip: public Mutator{
public:
    virtual Individual *mutate(Individual *ind, int k){
        Individual* ni = new Individual(ind->getString());
        int pos = k % ni->getLength();
        pos = pos == 0 ?ni->getLength(): pos; 
        ni->flipBit(pos);
        return ni;
    }

private:
protected:
};

#endif
