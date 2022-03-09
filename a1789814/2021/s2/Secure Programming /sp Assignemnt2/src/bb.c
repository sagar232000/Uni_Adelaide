#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "rsa.h"
#include "oracle.h"
int bb_step0(num_t low, num_t high, num_t si, const num_t c0, const num_t e, const num_t n);

//calculate c * s0^e mod n, and check that value with the oracle
int bb_blind(num_t c0, num_t s0, const num_t c, num_t e, const num_t n)
{

    int x = 0;
    int k = 0;
    //m_mul(mulwith8,tempofk,8);

    //printf("\n Size of tempofK is : :%d\n\n",multo8);
    //printf("\n Size of mulofKwith8 is : :%s\n\n", tempofk);

    num_t mod_res, mul, rem;
    bignum_t mod_mul, dem;
    num_t low, high, si;
    while (x != 1)
    {
        num_rand(s0);
        num_modexp(mod_res, s0, e, n);
        num_mul(mod_mul, c, mod_res);
        //num_trim(mul,mod_mul);
        num_div(dem, c0, mod_mul, n);

        x = oracle(c0);
    }

   // printf("printing N number:%s \n", num_toString(n));
    int b = bb_step0(low, high, si, c0, e, n);
     //printf("printing low number:%s \n", num_toString(low));
    // printf("printing High number:%s \n", num_toString(high));
    
    return 0;
}
//(2Bs1 - B3 + 1)/n and going up to ((3B-1)s1 - B2)/n
int bb_step0(num_t low, num_t high, num_t si, const num_t c0, const num_t e, const num_t n)
{
    num_t twoB, rim, finaladd, s1;
    num_t threeB, minus1, threeBm1, m0;
    bignum_t resforbig, res, ressi, resc0, resofsi, resofc0, tempm0;
    bignum_t gruminus, grlminus, grl, gru, finalu, finall, finalgr;
    num_t lgr, ugr, finalures, uminus, lminus, rimgru, rimgrl, finallres;
    num_t ri, rimofrange, lowerfinalrange, lowerof, upperof;
    num_t addof3inlower, mulwithnlower, resoflower, rimtemp;
    bignum_t mulwithn, divwithsi, templowermulwithn, temp, temp1;
    bignum_t mod_mul, dem;
    num_t rimofurange, upperfinalrange,zeros;
    num_t addof3inupper, mulwithnupper, resofupper,templow,temphigh,padding;
    bignum_t uppermulwithn, upperdivwithsi, tempuppermulwithn, temps1;
    char dest[3],dest1[3];
    num_fromString(minus1, "1");
    num_fromString(zeros,"0");
    num_fromString(padding,"0002");

    num_fromString(twoB, "000200000000000000000000000000000000000000000000");
    num_fromString(threeB, "000300000000000000000000000000000000000000000000");
    num_sub(threeBm1, threeB, minus1);
   // printf("printing 2B number:%s \n", num_toString(twoB));
   // printf("printing 3B-1 number:%s \n", num_toString(threeBm1));
    //printf("printing 'High' number:%s \n", num_toString(high));
    //printf("printing 'Low' number:%s \n", num_toString(low));

    //int i = oracle(threeBm1);
    num_mul(resforbig, n, minus1);
    num_div(res, rim, resforbig, threeB);
    int x = 0;
   // printf("::::%s::::", num_toString(res));
    num_trim(si, res);

    // {
    //     //si mod n
    num_mul(temps1, si, minus1);
    num_trim(s1, temps1);
    while (x != 1)
    {
        num_inc(s1);
        // num_rand(s0);
        num_modexp(temp, s1, e, n);
        num_mul(mod_mul, c0, temp);
        //num_trim(mul,mod_mul);
        num_div(dem, temp, mod_mul, n);
        x = oracle(temp);
    }

  //  printf("\n\n::::::::%s:::::::\n\n ", num_toString(temp));
   // printf("\n\n::::::::%s:::::::\n\n ", num_toString(s1));

    // num_fromString(ri, "4");
    //
    //(2Bs1 - 3B + 1)/n <= r <= ((3B - 1)s1 - 2B)/n
    bignum_t grla, addfinal, grum, div2bwithsi;
    num_t grlas, grums, rimofrangewith2B, tempnsi, tempdiv2b, tempdiv3b;
    //lower r
    num_mul(finall, twoB, s1);
    num_div(grl, rimgrl, finall, n);
    num_add(finaladd, threeB, minus1);
    num_mul(addfinal, finaladd, minus1);
    num_div(grla, rimgrl, addfinal, n);
    num_trim(grlas, grla);
    num_trim(lgr, grl);
    num_sub(finallres, lgr, grlas);

    //upper r
    num_mul(finalu, threeBm1, s1);
    num_div(gru, rimgru, finalu, n);
    // num_trim(finalures, finalu);
    num_mul(gruminus, twoB, minus1);
    num_div(grum, rimgru, gruminus, n);
    num_trim(ugr, gru);
    num_trim(grums, grum);
    num_sub(finalures, ugr, grums);
    
   // printf("\n\nprinting 'Upper r ' number:%s \n\n", num_toString(finalures));
    //printf("\n\nprinting 'Lower r ' number:%s \n\n", num_toString(finallres));
num_inc(finalures);
    // lower bounds range
    while (strcmp(num_toString(finallres), num_toString(finalures)))
    {
        //finding ri.n/s1
        num_mul(mulwithn, n, finallres);
        num_div(divwithsi, rimofrange, mulwithn, s1);
        num_trim(tempnsi, divwithsi); 

        //div 2b/si
        num_mul(templowermulwithn, twoB, minus1);
        num_div(div2bwithsi, rimofrangewith2B, templowermulwithn, s1);
        num_trim(tempdiv2b, div2bwithsi);
        num_add(templow, tempdiv2b, tempnsi);

        // upper bounds range
        num_mul(tempuppermulwithn, threeBm1, minus1);
        num_div(upperdivwithsi, rimofurange, tempuppermulwithn, s1);
        num_trim(tempdiv3b, upperdivwithsi);
        num_add(temphigh, tempdiv3b, tempnsi);
        strncpy(dest,num_toString(templow),4);
        strncpy(dest1,num_toString(temphigh),4);

        if((strcmp(dest,"0002")==0) && (strcmp(dest1,"0002")==0))
        {
            num_add(low,templow,zeros);
            num_add(high,temphigh,zeros);
            return 0;
        }

        // int y = oracle(low);
        // int z = oracle(high);
      //  printf("\n\nprinting 'n*n/si range ' number:%s \n\n",num_toString(templow));
    //    printf("\n\nprinting 'n*n/si range ' number:%s \n\n",num_toString(temphigh));

       // printf("::::::%d:::::::%d::::::::",y,z);
        
        //printf("\n\nprinting 'final r range  ' number:%s \n\n", num_toString(finallres));
         num_inc(finallres);
    }
  //      printf("\n\nprinting 'uppper range  ' number:%s \n\n", num_toString(low));
//        printf("\n\nprinting 'uppper range  ' number:%s \n\n", num_toString(high));


    return 0;
}
