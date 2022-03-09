#include <iostream>
#include <vector>
#include "user.h"
using namespace std;

bool Register_user(User& patient)
{
    //function which asks for personal details and choices by calling functions
    bool sufficient_symptoms = true;

    patient.personal_detail_prompt();
    patient.blood_select();
    patient.last_tour_select();
    patient.symptoms_prompt();
    sufficient_symptoms = patient.sufficient_symptoms();
    //checks if marks are sufficient by comparing to the sufficient marks and returns false if not
    if(!sufficient_symptoms)
    {
        sufficient_symptoms = false;
        return sufficient_symptoms;
    }
    return sufficient_symptoms;
}
