#include "EfficientTruckLoads.h"

int EfficientTruckloads::numTrucks(int numCrates,int loadSize){

if (loadSize == 1){
         return numCrates;

    }
    else if(numCrates <= loadSize) {
        return 1;
    }
    int num1 = numCrates / 2;
    int rem = numCrates % 2;
    int  num2 = num1 + rem;
    int ans = 0;
    std::map<int,int>::iterator it = cache.find(num1);
    if (it != cache.end()){
        ans = it-> second;
    }else {
        ans = numTrucks(num1,loadSize);
        cache[num1] = ans;
    }
    int ans1 = 0;
    it = cache.find(num2);
    if (it != cache.end()){
        ans1 = it->second;
    }
    else{
        ans1 = numTrucks(num2,loadSize);
        cache[num2] = ans1;
    }
    return ans+ans1;
}