#include <iostream>
#include <vector>
#include "registor.h"
using namespace std;

extern int prompt(vector<string>&);
//admin registration function
void admin(int (*promptptr)(vector<string>&), vector<Registor>*&patient_register)
{
    string username;
    string password;
    bool is_authenticated = false;

    cout << "Admin Login" << endl;
        while(!is_authenticated)
        {
            //admin password and username is asked for and it loops till they are entered correctly
            cout << "\nEnter UserName: ";
            cin >> username;
            cout << "Password: ";
            cin >> password;
            if(username == "admin" && password == "admin") {is_authenticated = true; }
            else {continue; }
        }
    cout << "\nLogin Successful!" << endl;
    //if admin login is successful then student enrollments are approved for both undergrads and post grads
    vector<string>admin_menu = {"Registration Details"};
    int admin_menu_input;
    admin_menu_input = promptptr(admin_menu);
            if(admin_menu_input == 1)
            {
                //cout << "First Name" << "\t" << "Last Name" << "\t" << "Address" << "\t" << "Last visit" << "\t" << "Country" << "\t" << "Blood group" << "\t" << "Covid-19 Symptoms" << endl;
                //cout<<endl;
                for (int i=0; i<patient_register->size(); i++)
                {
                    cout << "First Name::" << "\t" << patient_register->at(i).getfirstname() << "\n" <<"Last Name::" << "\t" << patient_register->at(i).getlastname()<< "\n" <<"Address::" << "\t" << patient_register->at(i).getaddress()<< "\n" << "Last visit::" << "\t" << patient_register->at(i).lasttour() << "\n" << "Country:: "<< "\t" << patient_register->at(i).getcountry()<< "\n" <<"Blood group::" << "\t" << patient_register->at(i).getbloodgroup()<< "\n" << "Covid-19 Symptoms::" << "\n"<< patient_register->at(i).getsymptoms() <<"\t" << endl;
                }
            }

}