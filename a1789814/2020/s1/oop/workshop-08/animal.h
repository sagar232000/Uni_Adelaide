#include<iostream.h>
#ifndef animal_h
#define animal_h
class animal{
        private:
                int id ;
                string species;
                string name;
        public:
                static int currentId;
                animal(string specoes);
                void set_name(string name);
                string get_species();
                string get_name();
                int get_id();
}