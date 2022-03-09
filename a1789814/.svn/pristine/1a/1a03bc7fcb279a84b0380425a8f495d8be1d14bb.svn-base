#include<iostream>
#include "TruckLoads.h"
using namespace std;

int Truckloads::numTrucks(int num, int load){
    numCrates = num;
    loadSize = load;

    if (loadSize == 1){
        //numoftruck = numCrates;
        return numCrates;
    }
    else if(numCrates <= loadSize) {
        return 1;
    }
   int numCrates1 = numCrates/2;
   int rem = numCrates % 2;
   int numCrates2 = numCrates1+rem;
  int  numoftruck = numTrucks(numCrates1, loadSize);
   numoftruck += numTrucks(numCrates2, loadSize);
   return numoftruck;

}