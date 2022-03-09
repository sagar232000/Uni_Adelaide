#ifndef USER_H
#define USER_H

#include<iostream>
#include<vector>
using namespace std;

class User{
    private:


    protected:
        string firstname;
        string lastname;
        string address;
        string country;
        vector<string> blood_group;
        vector<string> last_tour;
        string blood_group_choice;
        string last_tour_choice;
        string symptoms_choice;

        int num_blood_group;
        int num_last_tour;
        int num_symptoms;
    public:
        User();
        virtual void personal_detail_prompt() = 0;
        void blood_select();
        void last_tour_select();
        virtual void symptoms_prompt() = 0;
        virtual bool sufficient_symptoms() = 0;
        string getfirstname();
        string getlastname();
        string getaddress();
        string getcountry();
        string getbloodgroup();
        string lasttour();
        string getsymptoms();
};

#endif