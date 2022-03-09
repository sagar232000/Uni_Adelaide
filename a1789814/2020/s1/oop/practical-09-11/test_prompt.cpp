#include <iostream>
#include <vector>
using namespace std;

extern int prompt(vector<string>& vec);

int main()
{
    vector<string>menu_options = {"ab", "cd", "ef", "gh"};
    int test = prompt(menu_options);
    cout<<test<<endl;
    return 0;
}