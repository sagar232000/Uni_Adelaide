#include <iostream>
#include <vector>
#include "registor.h"
using namespace std;

extern bool Register_user(User&);

int main()
{
    vector<Registor> *patient_register = new vector<Registor>;
    cout << "1.Registor" <<endl;
    int input;
    cin >> input;
    if(input == 1)
    {
        patient_register->push_back(Registor());
            if(!Register_user(patient_register->back()))
            {
                patient_register->pop_back();
            }
    }
    else
    {
        cout << "Invalid input"<< endl;
    }
}