#include "user.h"

User::User()
    //deatails for patients
    //default user data

    {
    firstname = "None";
    lastname = "None";
    address= "None";
    country = "None";
    blood_group = {"A+","A-", "B+","B-" ,"AB+","AB-","O+","O-"};
    last_tour = {"Just arrived","Between 1 to 15 days"," More than 15 days","None"};
    blood_group_choice = "None";
    last_tour_choice = "None";
    symptoms_choice = "None";
    num_blood_group = 0;
    num_last_tour = 0 ;
    num_symptoms = 0;

    }
// selecion for the blood group
void User::blood_select(){
    string input;
    int inputnum;
    std::string::size_type sz;
    int i;
    bool is_input = true;

	while (is_input)
    {
        for (i=0; i<blood_group.size(); i++)
        {
            if (i == 0) {cout << "\n"; }
            std::cout << i+1 << "." << blood_group[i] << endl;
        }
        std::cout << "\nSelect The Blood group That You have: ";
        cin >> input;
        system("clear");
        for(int j=0; j<(input.length()-1); j++)
        {
            if(input.substr(j,j+1) != "1" || input.substr(j,j+1) != "2" || input.substr(j,j+1) != "3" || input.substr(j,j+1) != "4" || input.substr(j,j+1) != "5" || input.substr(j,j+1) != "6" || input.substr(j,j+1) != "7" || input.substr(j,j+1) != "8" ||  input.substr(j,j+1) != "9")
            {
                input = "0";
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
    blood_group_choice = blood_group[inputnum-1];
    num_blood_group = inputnum;
}
//select the last tour that patient had
void User::last_tour_select(){
    string input;
    int inputnum;
    std::string::size_type sz;
    int i;
    bool is_input = true;

	while (is_input)
    {
        for (i=0; i<last_tour.size(); i++)
        {
            if (i == 0) {cout << "\n"; }
            std::cout << i+1 << "." << last_tour[i] << endl;
        }
        std::cout << "\nSelect the number of days since you got back to this country: ";
        cin >> input;
        system("clear");
        for(int j=0; j<(input.length()-1); j++)
        {
            if(input.substr(j,j+1) != "1" || input.substr(j,j+1) != "2" || input.substr(j,j+1) != "3" || input.substr(j,j+1) != "4" || input.substr(j,j+1) != "5" || input.substr(j,j+1) != "6" || input.substr(j,j+1) != "7" || input.substr(j,j+1) != "8" ||  input.substr(j,j+1) != "9")
            {
                input = "0";
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
    last_tour_choice = last_tour[inputnum-1];
    num_last_tour = inputnum;
    if (num_last_tour < 4){
        cout << "Enter the country name that you had last visited::";
        cin >> country;
    }
}

// returning all the data
string User::getfirstname()
{
    return firstname;
}


string User::getlastname()
{
    return lastname;
}

string User::getaddress(){
    return address;
}
string User::getcountry(){
    return country;
        }
string User::getbloodgroup(){
    return blood_group_choice;
        }
string User::lasttour(){
    return last_tour_choice;
        }
string User::getsymptoms(){
    return symptoms_choice;
        }