#include <sys/types.h>
#include <sys/mman.h>
#include <stdint.h>
#include <stdlib.h>
#include <inttypes.h>
#include <assert.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

#include "spalloc.h"

// Driver code
// Language: c
// Path: Desktop/a1789814/2021/s1/adsa/a1789814/driver.c
int main()
{
    uint32_t seed = 2, sr;
    sp_seed(seed);
    //sr = sa_random();
    //uint64_t seedp;
    //seed = sp_rand();
    for (int i = 0; i < 999999; i++)
    {

      printf("%lu\n", seed);
      //sp_malloc(seed);
      //sp_calloc(seed,seed);
      //sp_realloc(sp_calloc(0,seed),0);
      sp_free(sp_calloc(seed,seed));

      
        //sp_seed(seed);
     seed = sp_rand();
    }
    return 0;
}