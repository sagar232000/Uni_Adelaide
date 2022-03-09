    #include <iostream>
    #include <vector>
    #include <stdlib.h>
    using namespace std;
    //this function clears the screen and also makes sure that the input that has been entered is correct
    //aspects of this function have been saved in the other .cpp files
int prompt(vector<string>& vec)
{
    string input;
    int i;
    bool is_input = true;
    int inputnum;
    std::string::size_type sz;
	while (is_input)
    {
        for (i=0; i<vec.size(); i++)
        {
            if (i == 0) {cout << "\n"; }
            std::cout << i+1 << "." << vec[i] << endl;
        }
        std::cout << "\nSelect One of The Following Option: ";
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
    return inputnum;
}
