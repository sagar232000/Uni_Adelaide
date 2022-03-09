#include<iostream>
#include<string>
#include "Musician.h"

using namespace std;

Musician::Musician(){
    Instrument = "?";
    Experince = 0;
}

Musician::Musician(string instrument, int experience){
     Instrument = instrument ;
    Experince = experience;
}
string Musician::get_instrument(){
    return Instrument;
}
int Musician::get_experience(){
    return Experince;
}
Musician::~Musician(){
    cout<<"deleted" << Instrument <<endl;
}
