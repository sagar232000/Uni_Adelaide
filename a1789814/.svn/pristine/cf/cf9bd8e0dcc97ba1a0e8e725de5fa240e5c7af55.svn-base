#ifndef _Rearrange_H_
#define _Rearrange_H_
#include <string>
#include "Mutator.h"
using namespace std;


class Rearrange: public Mutator{
public:
    virtual Individual *mutate(Individual *ind, int k){
        if ( ind->getLength() < 1 || k < 1 ) {
            return ind;
        }
        string ps = ind->getString();
        string offstrings;
        int pos = (k-1) % ind->getLength();
        for (int i = pos ; i < ind->getLength(); i++) {
            offstrings.push_back(ps[i]);
        }
        for (int i = 0; i < pos ; i++) {
            offstrings.push_back(ps[i]);
        }
        Individual* ni = new Individual(offstrings);
        return ni;
    }
private:
protected:
};

#endif
