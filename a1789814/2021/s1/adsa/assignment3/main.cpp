
#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;
class ArrangeHashTable
{
public:
    string AtoZTable[26];

    int getIndexofChar(char c)
    {
        return (c - '0') - 49;
    }

    char LastCharofString(string str)
    {
        reverse(str.begin(), str.end());
        //cout << str[0];
        return str[0];
    }

    ArrangeHashTable()
    {
        std::fill(begin(AtoZTable), end(AtoZTable), "never used");
        //cout<<"hi"<<endl;
    }
    void OutputTheArrangeHashTable()
    {
        int i = 0;
        bool print = true;
        while (print)
        {
            if (AtoZTable[i] != "never used" && AtoZTable[i] != "tombstone")
            {
                cout << AtoZTable[i] << " ";
            }
            i++;
            if (i == 26)
                print = !print;
        }
    }

    int Index(string key)
    {
        return getIndexofChar(LastCharofString(key));
    }

    void insertIntoArrangeHashTable(string hash)
    {

        if (findTheKey(hash) != "")
        {
            return;
        }
        int i = Index(hash);
        if (AtoZTable[i] == "never used" || AtoZTable[i] == "tombstone")
        {
            //cout<< hash<<endl;
            AtoZTable[i] = hash;
        }

        else
        {
            int num = i + 1;
            while (num != i)
            {
                if (num == 26)
                {
                    num = 0;
                }
                if (AtoZTable[num] == "never used" || AtoZTable[num] == "tombstone")
                {
                    // cout << hash << endl;
                    AtoZTable[num] = hash;
                    return;
                }

                num++;
            }
        }
    }
    void DeleteFromArrangeHashTable(string hash)
    {
        int i = Index(hash);
        //cout<< AtoZTable[i]<< i;
        if (AtoZTable[i] == hash)
        {   
            makeTombstone(hash, i);
        }
        else
        {
            int num = i + 1;
            while (num != i)
            {
                if (num == 26)
                {
                    num = 0;
                }
                     // (AtoZTable[num] == hash) ? makeTombstone(hash,num) : donothing(num) ;
                        
                          // (AtoZTable[num] == "never used") ? donothing() :  makeTombstone(hash, num);
                            //return;
                if (AtoZTable[num] == "never used")
                {
                    return;
                }
                else if (AtoZTable[num] == hash)
                {
                  //  cout << AtoZTable[num] <<" "<< num <<" "<< hash << endl;
                    
                    makeTombstone(hash, num);
                    return;
                }
                num++;
            }
            return;
        }
    }

    void makeTombstone(string hash, int num)
    {
        
        AtoZTable[num] = "tombstone";
    }

    void donothing(int num)
    {
        if (AtoZTable[num] == "never used")
       {
            return;
       }
    }

    string findTheKey(string key)
    {
        int i = Index(key);

        if (AtoZTable[i] != key)
        {
            int num = i + 1;
            do
            {
                if (num == 26)
                {
                    num = 0;
                }
                if (key == AtoZTable[num])
                {
                    return AtoZTable[num];
                }
                else if (AtoZTable[num] == "never used")
                {
                    return "";
                }

                num++;
            } while (num != i);
            return "";
        }
        else if (AtoZTable[i] == key)
        {
            return AtoZTable[i];
        }
        return "";
    }
};

int main()
{
    ArrangeHashTable hash;
    string str, input;
    getline(cin, str);
    stringstream ss(str);
    // hash.LastCharofString(str);
    while (getline(ss, input, ' '))
    {
        // cout<<input<<endl;
        //checking if it is 'A' or 'D'
        string input_check = input;
        reverse(input_check.begin(), input_check.end());
        if (input_check.back() == 'D')
        {
            //cout<< input.back();
            //Delete the string from the hash Table
            hash.DeleteFromArrangeHashTable(input.substr(1));
        }
        else
        {
            //Adding the string to the hashtablr
            // cout << "input.back()"<<endl;
            hash.insertIntoArrangeHashTable(input.substr(1));
        }
    }
    hash.OutputTheArrangeHashTable();
    return 0;
}