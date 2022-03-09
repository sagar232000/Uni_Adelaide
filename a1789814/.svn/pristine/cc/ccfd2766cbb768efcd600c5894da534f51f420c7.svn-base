#include<iostream>
#include<vector>
#include "registor.h"
#include <stdlib.h>
#include <unistd.h>

using namespace std;
//all libraries required are included along with the right .h files
extern int prompt(vector<string>&);
extern bool Register_user(User&);
extern void admin(int (*promptptr)(vector<string>&), vector<Registor>*&patient_register);
//functions from other classes are called
int main(){
 //vectors for storing patient details and symptoms
    int input_number;
    bool is_registration_active = true;
    vector<string>menu_options = {"Registration", "Admin", "Quit"};
    vector<Registor> *patient_register = new vector<Registor>;
     while(is_registration_active)
    {
        //the appropriate functions for each available input choice are called
        std::cout << "\nWelcome to The COVID-19 Check up and Registration System" << endl;
        input_number = prompt(menu_options);

        if (input_number == 1)
        {
            patient_register->push_back(Registor());
            if(!Register_user(patient_register->back()))
            {
                //all the patient details and choices are stored in the vector at first and then removed later if required
                patient_register->pop_back();
                //the patient which do not have sufficient marks are removed from the vector with the popback function
                system("clear");
            }

        }
        else if(input_number == 2)
        {
            admin(prompt, patient_register);
            //admin is allowed to access the registor vectors and their contents
        }
        else if(input_number == 3)
        {
            //the program is terminated
            std::cout << "The Program Has Been Successfully Terminated" << endl;
            is_registration_active = false;
        }
    }
    delete patient_register;
    return 0;
}

