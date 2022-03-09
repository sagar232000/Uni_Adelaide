#include "animal.h"

int animal:currentId = 0;

animal::animal(string spec){
    species = spec;
    id=++ currentId;

}
