#ifndef _Mutator_H_
#define _Mutator_H_
#include <string>
#include "Individual.h"
using namespace std;


class Mutator{
public:
    virtual Individual* mutate(Individual* ind, int k) = 0;
private:
protected:
};

#endif
