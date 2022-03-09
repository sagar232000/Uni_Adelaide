#ifndef REGISTOR_H
#define REGISTOR_H
#include "user.h"

class Registor : public User {
    //the user class public attributes are inherited
    private:

    protected:
        //these vectors are declared and can only be accessed by this class and those that inherit it




    public:
    Registor();
    void personal_detail_prompt() override;
    void symptoms_prompt() override;
    bool sufficient_symptoms() override;
    vector<string> symptoms;
    string report;


};


#endif