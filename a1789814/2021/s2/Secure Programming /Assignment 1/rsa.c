#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>

#ifndef BITSIZE
#define BITSIZE 1024
#endif

#define BYTESIZE ((BITSIZE + 7) / 8)
#define WORDSIZE ((BYTESIZE + sizeof(uint32_t) - 1) / sizeof(uint32_t))

/* 
 * Represents a number BITSIZE bits wide.
 * Implemented as an array of int32_t in little endian order.  That is, 
 * num = \sum 2^{32*i}*array[i]
 */
typedef uint32_t num_t[WORDSIZE];

/*
 * Represents a number 2*BITSIZE bits wide
 * Same format as num_t, only twice as long
 */
typedef uint32_t bignum_t[WORDSIZE * 2];

/*
 * Converts a num_t to a hexadecimal string. The memory for the string is allocated
 * with malloc and needs to be freed after use.
 */
char *num_toString(const num_t n);

/*
 * Converts a hexadecimal string (without 0x) to a num_t.
 */
int num_fromString(num_t in, const char *s);

/* Computes res = n1 + n2.  Returnes the carry */
uint32_t num_add(num_t res, const num_t n1, const num_t n2);

/* Computes res = n1 * n2. */
void num_mul(bignum_t res, const num_t n1, const num_t n2);

/* Computes res = n^2. */
void num_square(bignum_t res, const num_t n);

/* Trims a bignum_t n to num_t */
void num_trim(num_t res, const bignum_t n);

/* Computes numerator/denominator. Returns the quotient and the remainder. */
int num_div(bignum_t quotient, num_t remainder, const bignum_t numerator, const num_t denominator);

/******************************************************************************\
*                   IMPLEMENT THE THREE FUNCTIONS BELOW                        *  
\******************************************************************************/

/* Calculates res = base ^ exp modulo mod */
void num_modexp(num_t res, const num_t base, const num_t exp, const num_t mod)
{

  char *x = "1";
  char *exphax;
  //char exphax2[100];
  // exphax2[0] = "";
  char exphax2[1024] = {'\0'};

  int i = 0;
  num_t tempres2, X, mulbybase2;
  bignum_t tempres, quo, mulbybase;
  num_fromString(X, x);
  exphax = num_toString(exp);
  int length = strlen(exphax);

  while (exphax[i])
  {
    switch (exphax[i])
    {
    case '0':
      if (!strcmp(exphax2, ""))
      {
        strcpy(exphax2, "0000");
      }
      else
      {
        strcat(exphax2, "0000");
      }
      break;
    case '1':
      if (!strcmp(exphax2, ""))
      {
        strcpy(exphax2, "0001");
      }
      else
      {
        strcat(exphax2, "0001");
      }
      break;
    case '2':
      if (!strcmp(exphax2, ""))
      {
        strcpy(exphax2, "0010");
      }
      else
      {
        strcat(exphax2, "0010");
      }
      break;
    case '3':
      if (!strcmp(exphax2, ""))
      {
        strcpy(exphax2, "0011");
      }
      else
      {
        strcat(exphax2, "0011");
      }
      break;
    case '4':
      if (!strcmp(exphax2, ""))
      {
        strcpy(exphax2, "0100");
      }
      else
      {
        strcat(exphax2, "0100");
      }
      //printf("0100");
      break;
    case '5':
      // strcat(exphax2,"0101");
      if (!strcmp(exphax2, ""))
      {
        strcpy(exphax2, "0101");
      }
      else
      {
        strcat(exphax2, "0101");
      }
      // printf("0101");
      break;
    case '6':
      //strcat(exphax2,"0110");
      if (!strcmp(exphax2, ""))
      {
        strcpy(exphax2, "0110");
      }
      else
      {
        strcat(exphax2, "0110");
      }
      //printf("0110");
      break;
    case '7':
      // strcat(exphax2,"0111");
      if (!strcmp(exphax2, ""))
      {
        strcpy(exphax2, "0111");
      }
      else
      {
        strcat(exphax2, "0111");
      }
      // printf("0111");
      break;
    case '8':
      //  strcat(exphax2,"1000");
      if (!strcmp(exphax2, ""))
      {
        strcpy(exphax2, "1000");
      }
      else
      {
        strcat(exphax2, "1000");
      }
      //printf("1000");
      break;
    case '9':
      //strcat(exphax2,"1001");
      if (!strcmp(exphax2, ""))
      {
        strcpy(exphax2, "1001");
      }
      else
      {
        strcat(exphax2, "1001");
      }
      // printf("1001");
      break;
    case 'A':
    case 'a':
      //strcat(exphax2,"1010");
      if (!strcmp(exphax2, ""))
      {
        strcpy(exphax2, "1010");
      }
      else
      {
        strcat(exphax2, "1010");
      }
      //printf("1010");
      break;
    case 'B':
    case 'b':
      // strcat(exphax2,"1011");
      if (!strcmp(exphax2, ""))
      {
        strcpy(exphax2, "1011");
      }
      else
      {
        strcat(exphax2, "1011");
      }
      //printf("1011");
      break;
    case 'C':
    case 'c':
      // strcat(exphax2,"1100");
      if (!strcmp(exphax2, ""))
      {
        strcpy(exphax2, "1100");
      }
      else
      {
        strcat(exphax2, "1100");
      }
      //printf("1100");
      break;
    case 'D':
    case 'd':
      // strcat(exphax2,"1101");
      if (!strcmp(exphax2, ""))
      {
        strcpy(exphax2, "1101");
      }
      else
      {
        strcat(exphax2, "1101");
      }
      //printf("1101");
      break;
    case 'E':
    case 'e':
      // strcat(exphax2,"1110");
      if (!strcmp(exphax2, ""))
      {
        strcpy(exphax2, "1110");
      }
      else
      {
        strcat(exphax2, "1110");
      }
      //printf("1110");
      break;
    case 'F':
    case 'f':
      // strcat(exphax2,"1111");
      if (!strcmp(exphax2, ""))
      {
        strcpy(exphax2, "1111");
      }
      else
      {
        strcat(exphax2, "1111");
      }
      //printf("1111");
      break;
    default:
      printf("\nInvalid hexadecimal digit %c",
             exphax[i]);
    }
    i++;
  }
  //printf("%s",exphax2[0]);
  /* starting algorithm from here */
  char *rem1 = "0";
  num_t rem2;
  num_fromString(rem2, rem1);
  //printf("startng value of X::%d",X[0]);
  for (int i = 0; i <= strlen(exphax2) - 1; i++)
  {

    num_square(tempres, X);
    //printf(" Value of X inside in the for loop:: %d\n\n\n", X[0]);
    //num_trim(tempres2, tempres);
    //printf(" Value of tempres2x inside in the for loop:: %d\n\n\n", tempres[0]);

    num_div(quo, X, tempres, mod);
    // printf("\n\n\n Value of remainder just after the numdiv:: %d\n", X[0]);
    // printf(" Value of mod just after the numdiv:: %d\n", mod[0]);
    // printf(" Value of X * 2  just after the numdiv:: %d\n\n\n", tempres[0]);

    if (exphax2[i] == 49)
    {

      num_mul(mulbybase, X, base);
      // printf("\n\n\n Value of remainder just after the num_mul:: %d\n", X[0]);
      // printf(" Value of Base just after the num_mul:: %d\n", base[0]);
      // printf(" Value of X * C just after the num_mul:: %d : X:%d :C:%d \n\n\n", mulbybase[0], X[0], base[0]);

      num_div(quo, X, mulbybase, mod);
      //  printf("\n\nFinal Value of X numdiv:: %d\n\n\n", X[0]);
    }
    // printf("Final Value of X just after the loop:: %d\n\n\n", X[0]);
  }
  //printf("Final Value of X :: %s\n\n\n", num_toString(X));
  //printf("\n\n\n %s\n\n",exphax2);

  num_add(res, X, rem2);
  // printf("\n\n\n %s \n\n\n",num_toString(res));
}

/* 
 * Pads message using PKCS#1 v1.5 and encrypts with a public RSA key (n, e)
 * Returns 0 on success and 1 on failure.
 *
 * You can assume that n is full size, i.e. n>=2^{BITSIZE - 1}
 */
int rsa_pkcs_encrypt(
    num_t ciphertext,
    const uint8_t *message,
    int messagelen,
    const num_t e,
    const num_t n)
{
  char *padding1 = "0002";
  char *padding2 = "00";
  char *padding = malloc(sizeof(char) * 256);
  //char padding[BITSIZE];
  char a[16] = "123456789ABCDEF";
  int length = 256 - (3 + messagelen);
  num_t padding_message;
  char *arr_size_of_random_length = malloc(sizeof(int) * length);

  while (length--)
  {
    arr_size_of_random_length[length] = a[rand() % 15];
  }
  strcat(padding, padding1);
  //printf("%s\n\n", padding);

  strcat(padding, arr_size_of_random_length);
  strcat(padding, padding2);
  // printf("%s\n\n", padding);

  strcat(padding, message);
  //printf("padded message\n\n%s\n\n" , padding);

  num_fromString(padding_message, padding);
  //printf("num_t padded message \n\n%s\n\n" , num_toString(padding_message));

  //printf("",);
  num_modexp(ciphertext, padding_message, e, n);
  //printf("num_t padded message \n\n%s\n\n" , num_toString(ciphertext));

  return 0;
}

/*
 * Decrypts ciphertext using (n, d) and verifies that it is in PKCS#1 v1.5 format.
 * If the format is correct, writes the message in messagebuf and returns the 
 *    message length. If the length of the decrypted message is larger than
 *    messagebuflen, only the first messagebuflen bytes of the message are written.
 * If the message is not in PKCS#1 v1.5 format, returns -1.
 * In case of other errors, returns -2.
 *
 * You can assume that n is full size, i.e. n>=2^{BITSIZE - 1}
 */
int rsa_pkcs_decrypt(
    uint8_t *messagebuf,
    int messagebuflen,
    const num_t ciphertext,
    const num_t d,
    const num_t n)
{
  num_t messagebufdecry;
  //printf("\n\n Ciphertext %s\n \n ", num_toString(ciphertext));
  num_modexp(messagebufdecry, ciphertext, d, n);
 messagebuf = num_toString(messagebufdecry);
  int length = strlen(messagebuf);
  int size = length - messagebuflen;
  int sizeofrand = size - 3;
  char *padding1 = "2";
  char *padding2 = "00";
  char a[16] = "123456789ABCDEF";
  int j = 0;
 // int length = 256 - (3 + messagelen);
  char *plaintext = malloc(sizeof(char)* messagebuflen);
  char *point = malloc(sizeof(char) * sizeofrand);
  while (sizeofrand--)
  {
    point[sizeofrand] = a[rand() % 15];
  }

  for(int i = size; i<= length; i++){
    plaintext[j] = messagebuf[i];
    j++;
  }
  int total = size + messagebuflen ;
  int sizeofcipher = strlen(num_toString(ciphertext)); 
  //printf("\n\ncipher length:  %d \n\n ", sizeofcipher);
  //printf("\n\ntotal length:  %d \n\n ", total);
  char *padding = malloc(sizeof(char)*sizeofcipher) ;
strcat(padding, padding1);
strcat(padding, point);
strcat(padding, padding2);
strcat(padding,plaintext);

  if(total != strlen(padding)){
    return -1;
  }
  else if(total == sizeofcipher){
      return 0;
  }

  return -2;
}

/******************************************************************************\
*                     DO NOT MODIFY BELOW THIS LINE                            *  
\******************************************************************************/

uint32_t num_add(num_t res, const num_t n1, const num_t n2)
{
  uint64_t s = 0ULL;
  for (int i = 0; i < WORDSIZE; i++)
  {
    s += (uint64_t)n1[i] + (uint64_t)n2[i];
    res[i] = s & 0xffffffffULL;
    s >>= 32;
  }
  return (uint32_t)s;
}

void num_mul(bignum_t res, const num_t n1, const num_t n2)
{
  for (int i = 0; i < WORDSIZE * 2; i++)
    res[i] = 0;

  for (int i = 0; i < WORDSIZE; i++)
  {
    uint64_t s = 0;
    for (int j = 0; j < WORDSIZE; j++)
    {
      s += (uint64_t)res[i + j] + (uint64_t)n1[i] * (uint64_t)n2[j];
      res[i + j] = s & 0xffffffffULL;
      s >>= 32;
    }
    res[i + WORDSIZE] += s;
  }
}

void num_trim(num_t res, const bignum_t n)
{
  for (int i = 0; i < WORDSIZE; i++)
    res[i] = n[i];
}

static uint32_t shiftleft(uint32_t *a, const uint32_t *b, int n, int d)
{
  uint64_t carry = 0;
  for (int i = 0; i < n; i++)
  {
    carry |= ((uint64_t)b[i]) << d;
    a[i] = carry & 0xFFFFFFFFULL;
    carry >>= 32;
  }
  return carry;
}

static uint64_t Step_D3(uint32_t *uj, uint32_t *v, int n)
{
  uint64_t hat = ((uint64_t)uj[n] << 32) + uj[n - 1];
  uint64_t qhat = hat / v[n - 1];
  uint64_t rhat = hat % v[n - 1];
  if (qhat == 0x100000000ULL || (n > 1 && (qhat * v[n - 2] > 0x100000000ULL * rhat + uj[n - 2])))
  {
    qhat--;
    rhat += v[n - 1];
    if (rhat < 0x100000000ULL && n > 1 && (qhat * v[n - 2] > 0x100000000ULL * rhat + uj[n - 2]))
    {
      qhat--;
      rhat += v[n - 1];
    }
  }
  return qhat;
}

static uint32_t Step_D4(uint32_t *uj, uint32_t *v, uint64_t qhat, int n)
{
  uint64_t borrow = 0;
  for (int i = 0; i < n; i++)
  {
    borrow += uj[i];
    borrow -= qhat * v[i];
    uj[i] = borrow & 0xFFFFFFFFULL;
    borrow >>= 32;
    if (borrow)
      borrow |= 0xFFFFFFFF00000000ULL; // The borrow is always non-positive...
  }
  borrow += uj[n];
  uj[n] = borrow & 0xFFFFFFFFULL;
  return borrow >> 32; // The return value is 16 bits, so no need for extending the sign bit
}

static void Step_D6(uint32_t *uj, uint32_t *v, int n)
{
  uint64_t carry = 0;
  for (int i = 0; i < n; i++)
  {
    carry += uj[i];
    carry += v[i];
    uj[i] = carry & 0xFFFFFFFFULL;
    carry >>= 32;
  }
  carry += uj[n];
  uj[n] = carry & 0xFFFFFFFFULL;
  //assert(carry > 0xFFFF); // We ignore further carry
}

static void shiftright(uint32_t *u, int n, int d)
{
  if (d == 0)
    return;
  for (int i = 0; i < n; i++)
    u[i] = (u[i] >> d) | (u[i + 1] << (32 - d));
  u[n] >>= d;
}

static int reallen(const uint32_t *u, int l)
{
  while (l-- > 0)
  {
    if (u[l] != 0)
      return l + 1;
  }
  return 0;
}

// Using Algorithm 4.3.1 D of Knuth TAOCP
int num_div(bignum_t quotient, num_t remainder, const bignum_t numerator, const num_t denominator)
{
  // Use Knuth's variable names:
  //   u -- numerator
  //   v -- denominator
  //   q -- quotient
  //   d -- normalisation factor
  //   n -- length of denominator
  //   m -- length difference between numerator and denominator
  //   b -- base = 0x100000000
  // Our base (b) is 2^32, so we can use the shift method to calculate d.
  // We use the space of the remainder for the normalised numerator, so
  // need to allocate another variable for that.
  if (quotient == numerator ||
      remainder == denominator)
    return -1;

  // Step D1
  int n = reallen(denominator, WORDSIZE);
  if (n == 0)
    return -1;
  int d = 0;
  uint32_t t = denominator[n - 1];
  assert(t != 0); // This is OK from the calculation of n
  while ((t & 0x80000000) == 0)
  {
    t <<= 1;
    d++;
  }
  num_t vbn;
  memset(vbn, 0, sizeof(num_t));
  uint32_t *v = vbn;
  t = shiftleft(v, denominator, n, d);
  assert(t == 0);

  int nl = reallen(numerator, WORDSIZE * 2);
  int m = nl < n ? 0 : nl - n;

  memset(remainder, 0, sizeof(num_t));
  uint32_t ubn[2 * WORDSIZE + 1];
  memset(ubn, 0, sizeof(ubn));
  uint32_t *u = ubn;
  u[nl] = shiftleft(u, numerator, nl, d);

  uint32_t *q = quotient;

  // Steps D2, D7
  for (int j = m; j >= 0; j--)
  {
    // Step D3
    uint64_t qhat = Step_D3(u + j, v, n);

    // Step D4
    uint32_t borrow = Step_D4(u + j, v, qhat, n);

    // Step D5
    q[j] = qhat;
    if (borrow)
    {
      //Step D6
      assert(qhat != 0);
      Step_D6(u + j, v, n);
      q[j]--;
    }
  }

  // Step D8
  assert((u[0] & ((1 << d) - 1)) == 0);
  shiftright(u, n, d);
  for (int i = m + 1; i < WORDSIZE * 2; i++)
    q[i] = 0;
  for (int i = n + 1; i < WORDSIZE; i++)
    ubn[i] = 0;
  num_trim(remainder, ubn);

  return 0;
}

int num_fromString(num_t in, const char *s)
{
  num_t tmp = {0};
  for (int i = 0; i < WORDSIZE; i++)
    in[i] = 0;

  while (*s)
  {
    if (!isxdigit(*s))
      return -1;
    int c;
    if (isdigit(*s))
      c = *s - '0';
    else if (islower(*s))
      c = *s - 'a' + 10;
    else
      c = *s - 'A' + 10;
    shiftleft(tmp, in, WORDSIZE, 4);
    memcpy(in, tmp, sizeof(num_t));
    in[0] += c;
    s++;
  }
  return 0;
}

char *num_toString(const num_t n)
{
  char *rv = malloc(2 * BYTESIZE + 1);
  if (rv == NULL)
    return NULL;
  char *p = rv;
  for (int i = WORDSIZE; i--;)
  {
    if (n[i] == 0)
      continue;
    sprintf(p, "%08X", n[i]);
    p += sizeof(uint32_t) * 2;
  }
  if (p == rv)
    *p++ = '0';
  *p = 0;
  return rv;
}

void num_square(bignum_t res, const num_t n)
{
  num_mul(res, n, n);
}
