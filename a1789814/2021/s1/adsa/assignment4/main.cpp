#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
class Puzzle
{
};

int chartoint(char c)
{
    return (c - '0');
}
int findvalue(char c)
{
    if (islower(c))
    {
        return (c - '0') - 23;
    }
    else
    {
        return (c - '0') - 17;
    }
    return 0;
}

string removecomma(string str)
{
    int strlength = str.length();
    string temp;
    for (int i = 0; i < strlength; i++)
    {
        if (str[i] != ',')
        {
            temp += str[i];
        }
    }
    return temp;
}

int addvalue(int num, vector<vector<int>> country, vector<vector<int>> build)
{
    int countrysize = country.size();
    int min = build[num][num + 1];
    for (int i = num + 1; i < countrysize; i++)
    {

        if (min > build[num][i])
        {
            min = build[num][i];
        }
       // cout << num << " " << i << endl;
    }
   // cout << "add" << min << endl;
    return min;
}
vector<vector<int>> buildcountryroadn(vector<vector<int>> country, vector<vector<int>> build)
{
    vector<vector<int>> addcityroad;
    vector<int> addcityroadtemp;
    int countrysize = country.size();
    for (int i = 0; i < countrysize; i++)
    {
        for (int j = 0; j < countrysize; j++)
        {
            if (country[i][j] == 1)
            {
                addcityroadtemp.push_back(build[i][j]);
            }
            else
            {
                addcityroadtemp.push_back(0);
            }
        }
        addcityroad.push_back(addcityroadtemp);
        addcityroadtemp.clear();
    }

    return addcityroad;
}
int destroyroad(int road, int desroad)
{
    return desroad;
}
int checkConnection(int rowlength, vector<vector<int>> country, vector<vector<int>> build, vector<vector<int>> destroy)
{
    vector<vector<int>> countryroadn;
    if (country.size() < 2)
    {
        return 0;
    }
    else if (country.size() < 3)
    {
        if (country[1][0] == 1)
        {
            return 0;
        }
        else if (country[1][0] == 0)
        {
            return build[1][0];
        }
        return 0;
    }

    else
    {
        countryroadn = buildcountryroadn(country, build);
        //bool visited = false;
        // for (int i = 0; i < rowlength; i++)
        // {
        //     for (int j = 0; j < rowlength; j++)
        //     {
        //         cout << country[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // for (int i = 0; i < rowlength; i++)
        // {
        //     for (int j = 0; j < rowlength; j++)
        //     {
        //         cout << countryroadn[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        int count, total, addtotal = 0, countcountryconnected;
        total = 0;
        countcountryconnected = 0;
        int destroytotal = 0;

        for (int i = 0; i < rowlength - 1; i++)
        {
            int temp = 0;
            count = 0;
            int countones = 0;
            //int min = build[i][0];
            for (int j = 1 + i; j < rowlength; j++)
            {
               // cout << "delete" << endl;
               // cout << i << " " << j << endl;
                if (country[i][j] == 1)
                {
                    // visited = true;
                    if (count == 1)
                    {
                        if (temp >= destroy[i][j])
                        {
                            destroytotal += destroy[i][j];
                            //cout<<"temp"<<temp<<endl;
                           // cout << "delete" << destroytotal << " ";
                        }
                        else
                        {
                            destroytotal += temp;
                            temp = destroy[i][j];
                            //cout<<"temp"<<destroy[i][j] << endl;
                            count = 1;
                            countones++;
                          //  cout << "delete" << destroytotal << " ";
                        }
                    }
                    else
                    {

                        temp = destroy[i][j];
                        count++;
                        countones++;
                    }
                    //cout << countones ;
                }

                else
                {
                    countones += 0;
                }
            }
            if (countones < 1)
            {
                // visited = false;

                addtotal += addvalue(i, country, build);
                //cout<< addtotal;
            }

            //cout<<visited<<" ";
            //cout<<i;
            countcountryconnected++;
        }
        // if (visited == false)
        // {
        //     for (int i = 0; i < rowlength - 1; i++)
        //     {

        //     }
        // }

        if (countcountryconnected != rowlength)
        {
            //cout << "addtotal "<<addtotal << " "<<" deletetotal "  << destroytotal;
            total = addtotal + destroytotal;
            //cout << "total" << total;
            return total;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{

    string str, input;
    getline(cin, str);
    char interval = ' ';
    //char comma = ',';
    int i = 0;
    string countrysplit, buildsplit, destroysplit;
    string removecommacountrysplit;
    string removecommabuildsplit;
    string removecommadestroysplit;
    stringstream stream(str);
    // stringstream ss(str);
    int j = 0;
    int countrow = 0;
    while (getline(stream, input, interval))
    {
        (i == 0) ? countrysplit = input : destroysplit = input;
        (i == 1) ? buildsplit = input : destroysplit = input;
        i++;
    }
    //cout<<countrysplit<<endl;
    //cout<<countrysplit.length()<<endl;
    int countrysplitsize = countrysplit.size();
    //cout << countrysplitsize << endl;
    for (i = 0; i < countrysplitsize; i++)
    {
        (countrysplit[i] == ',') ? countrow++ : countrow;
        j++;
    }
    removecommacountrysplit = removecomma(countrysplit);
    removecommabuildsplit = removecomma(buildsplit);
    removecommadestroysplit = removecomma(destroysplit);

    int rowlength = countrow + 1;

    //cout << rowlength << endl;
    vector<vector<int>> country;
    vector<vector<int>> build;
    vector<vector<int>> destroy;
    vector<int> vectorcountry;
    vector<int> vectorbuild;
    vector<int> vectordestroy;

    //char country[rowlength][rowlength];
    //char build[rowlength][rowlength];
    //char destroy[rowlength][rowlength];

    int num = 0;
    int numb, numd;
    numb = 0;
    numd = 0;
    for (int i = 0; i < rowlength; i++)
    {
        for (int j = 0; j < rowlength; j++)
        {

            vectorcountry.push_back(chartoint(removecommacountrysplit[num]));

            num++;
        }
        country.push_back(vectorcountry);
        vectorcountry.clear();
    }
    for (int i = 0; i < rowlength; i++)
    {
        for (int j = 0; j < rowlength; j++)
        {
            vectorbuild.push_back(findvalue(removecommabuildsplit[numb]));
            numb++;
        }
        build.push_back(vectorbuild);
        vectorbuild.clear();
    }
    for (int i = 0; i < rowlength; i++)
    {
        for (int j = 0; j < rowlength; j++)
        {
            vectordestroy.push_back(findvalue(removecommadestroysplit[numd]));
            numd++;
        }
        destroy.push_back(vectordestroy);
        vectordestroy.clear();
    }
    // for (int i = 0; i < rowlength; i++)
    // {
    //     for (int j = 0; j < rowlength; j++)
    //     {
    //         cout << build[i][j] <<" ";
    //     }
    //     cout << endl;
    // }
    cout << checkConnection(rowlength, country, build, destroy);
    //cout <<"find"<< findvalue('A') << "find";
    return 0;
}