#ifndef MUSICIAN_H
#define MUSICIAN_H
using namespace std;
#include<string>
class Musician
{
 public:
         Musician(); // a default constructor
//   a constructor that takes the instrument played and the years of

         Musician(std::string instrument, int experience);
         string get_instrument(); // returns the instrument played
         int get_experience(); // returns the number of years experience
         ~Musician();

         int Experince;
         string Instrument;
};

#endif