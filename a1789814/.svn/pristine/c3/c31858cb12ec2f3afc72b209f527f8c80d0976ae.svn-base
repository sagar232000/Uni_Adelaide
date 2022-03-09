#include "registor.h"
#include <stdlib.h>
#include <unistd.h>
using namespace std;

Registor::Registor() :
    User(),
    symptoms({"fever","dry cough","tiredness","aches and pains","sore throat","diarrhoea","conjunctivitis","headache","loss of taste or smell","a rash on skin, or discolouration of fingers or toes","difficulty breathing or shortness of breath","chest pain or pressure","loss of speech or movement","None"})
    {}

void Registor::personal_detail_prompt()
{
    string first_name, last_name, home_address, last_country;
    cout << "Enter your First Name:";
    cin >> first_name;
    firstname = first_name;
    cout << "Enter your Last Name:";
    cin >> last_name;
    lastname = last_name;
    cout<< "Enter your home Address:";
    cin >> home_address;
    address = home_address;
}

void Registor::symptoms_prompt(){
    string input;
    int inputnum;
    std::string::size_type sz;
    int i;
    bool is_input = true;

	while (is_input)
    {
        for (i=0; i<symptoms.size(); i++)
        {
            if (i == 0) {cout << "\n"; }
            std::cout << i+1 << "." << symptoms[i] << endl;
        }
        std::cout << "\nSelect the Symptoms That You have in your body: ";
        cin >> input;
        system("clear");
        for(int j=0; j<(input.size()); j++)
        {
            if(!(input[j] >= '0' && input[j] <= '9'))
            {
                input = "0";
                break;
            }
        }
        inputnum = stoi(input, &sz);
        if (inputnum < 1 || inputnum > i)
        {
            continue;
        }
        else
        {
            is_input = false;
        }
    }
    symptoms_choice = symptoms[inputnum-1];
    num_symptoms = inputnum;

}

bool Registor::sufficient_symptoms()
{

    //checking that paitent have POSITIVE or NEGATIVE
    bool is_sufficient = true;
    if (num_symptoms==symptoms.size())
    {
        cout << "\nYou have NEGATIVE Symptoms in COVID-19, " << endl;
        cout << "Thank You For Using The Registration Form." << endl;
        usleep(900000);
        system("clear");
        is_sufficient = false;
    }
    else if(num_symptoms<=3)
    {
        cout << "You have Minor symptoms of COVID-19. " << endl;
        cout << "You need to quarantine yourself for 15 days. You will be fine by normal medication." << endl;
        usleep(900000);
        system("clear");
    }
    else if( num_symptoms>=3 && num_symptoms<=10){
        cout << "You have Major symptoms of COVID-19. " << endl;
        cout << "You need to quarantine yourself. You need to take more advice from the nearest covid-19 centre." << endl;
        usleep(900000);
        system("clear");
    }
    else{
        cout << "You have Serious symptoms of COVID-19. " << endl;
        cout << "You need to quarantine yourself. You should go to the nearest covid-19 centre." << endl;
        usleep(900000);
        system("clear");
    }
    return is_sufficient;
}
