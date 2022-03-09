#ifndef _BitFlipProb_H_
#define _BitFlipProb_H_
#include <string>
#include <stdlib.h>
#include <time.h>
#include "Mutator.h"
using namespace std;


class BitFlipProb: public Mutator{
public:
    BitFlipProb(double p){
        srand (time(NULL));
        m_p = p;
    }
    virtual Individual *mutate(Individual *ind, int k){
        Individual* ni = new Individual(ind->getString());
        for (int i = 0; i < ind->getLength(); i++)
        {
            if( (rand() / RAND_MAX) >= m_p) {
                ni->flipBit(i);
            }
        }
        return ni;
    }
private:
    double m_p;
protected:
};

#endif
