#include <stdio.h>
#include <stdint.h>

int rotate(uint32_t number, uint32_t count){  
    return (number << count)|(number >> (8 - count));
}