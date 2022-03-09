#include<iostream>
#include<cmath>

int binary_to_number(int binary_digits[], int number_of_digits){

    int number = 0;

    int base = pow(2,number_of_digits);
    for(int i = 0 ; i<number_of_digits ;i++){
        number |= binary_digits[i] << (number_of_digits-i-1) ;
        base = base/2;
    }
    return number;
}