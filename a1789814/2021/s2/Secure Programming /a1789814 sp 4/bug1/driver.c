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
    //get value from the text file 
    FILE *fp;
    fp = fopen("input.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }
    //int n;
    
    
    uint32_t seed;
    fscanf(fp, "%lu", &seed);
    //scanf("%lu", &seed);
    sp_seed(seed);
    //sr = sa_random();
    //uint64_t seedp;ls

    seed = sp_rand();
    for (int i = 0; i < 99999; i++)
    {

       printf("%lu\n", seed);
      //sp_malloc(seed);
      sp_calloc(seed,seed);
      //sp_realloc(sp_malloc(seed),seed);
      //sp_free(sp_calloc(seed,seed));

        // if (a == NULL)
        // {
        //     //printf("Error: %s\n", strerror(errno));
        //     return -1;
        // }
        // else
        // {
        //     printf("%p\n", *a);
        // }

        //  int* b = sp_(seed);
        // if (b == NULL)
        // {
        //     //printf("Error: %s\n", strerror(errno));
        //     return -1;
        // }
        // else
        // {
        //     printf("%p\n", *b);
        // }
        //sp_seed(seed);
     seed = sp_rand();
    }
    return 0;
    fclose(fp);
}