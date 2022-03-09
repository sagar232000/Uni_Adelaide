#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <bits/stdc++.h>
#include <typeinfo>
#include <math.h>
using namespace std;

int switchtoint(char i)
{
    int z = (int)i;
    return z;
}
string sumBase(string i1,
               string i2, int b)
{
    int len_i1, len_i2;

    len_i1 = i1.size();
    len_i2 = i2.size();
    int minimum, maximum = 0;
    string g, l;
    string sum, c;
    c = "";
    sum = "";

    if (len_i1 > len_i2)
    {
        maximum = len_i1;
        g = i1;
        minimum = len_i2;
        l = i2;
    }
    else
    {
        minimum = len_i1;
        l = i1;
        maximum = len_i2;
        g = i2;
    }

    for (int i = 1; i <= (maximum - minimum); i++)
    {
        c += "0";
    }

    l = c + l;
    //cout << "l ::" << l <<endl;
    // cout << "g ::" << g <<endl;
    int carry1, carry2 = 0;
    for (int i = maximum - 1; i >= 0; i--)
    {

        carry1 = carry2 + (g[i] - '0') + (l[i] - '0');

        carry2 = carry1 / b;

        carry1 = carry1 % b;

        sum = (char)(carry1 + '0') + sum;
    }
    if (carry2 > 0)
    {
        sum = (char)(carry2 + '0') + sum;
    }

    return sum;
}

string mulBase1(string i1, string i2, int b)
{
    int len_i1, len_i2 = 0;

    //cout << len_i1;
    len_i1 = i1.size();
    len_i2 = i2.size();
    int maximum, minimum;
    string g, l;
    string mul = "", c = "";
    if (len_i1 > len_i2)
    {
        maximum = len_i1;
        g = i1;
        minimum = len_i2;
        l = i2;
    }
    else
    {
        minimum = len_i1;
        g = i2;
        maximum = len_i2;
        l = i1;
    }
    // for (int i = 1; i <= abs(len_i1 - len_i2); i++)
    // {
    //     c += "0";
    // }
    string answer = "0";
    reverse(l.begin(), l.end());
    reverse(g.begin(), g.end());
    string multiplication;
    for (int i = 0; i < l.size(); i++)
    {
        // (g[j] - '0') = g[i] - '0';
        int carry = 0;
        for (int j = 0; j < g.size(); j++)
        {
            if (((g[j] - '0') * (l[i] - '0') + carry) >= b)
            {
                // cout << "g ::"<< (g[j] - '0') << "::::: l:: "<< (l[i] - '0')  << " " << endl;
                multiplication = to_string(((g[j] - '0') * (l[i] - '0') + carry) % b) + multiplication;
                carry = ((((g[j] - '0') * (l[i] - '0') + carry) - (((g[j] - '0') * (l[i] - '0') + carry) % b)) / b);
            }
            else
            {
                multiplication = to_string(((g[j] - '0') * (l[i] - '0')) + carry) + multiplication;
                carry = 0;
            }

            //cout << multiplication;
        }
        if (carry > 0)
        {
            multiplication = to_string(carry) + multiplication;
        }
        //cout << "multi: " << multiplication << endl;
        answer = sumBase(answer, multiplication, b);
        multiplication = "";
        for (int k = 0; k < i + 1; k++)
        {
            multiplication += "0";
            //cout << temp1[i];
        }
    }
    return answer;
}

string subBase(string i1, string i2, int b)
{
    int len_i1, len_i2 = 0;
    //cout << len_i1;
    len_i1 = i1.size();
    len_i2 = i2.size();
    string g, l;
    int minimum, maximum = 0;
    string sub, c;
    c = "";
    sub = "";
    if (len_i1 > len_i2)
    {
        maximum = len_i1;
        g = i1;
        minimum = len_i2;
        l = i2;
    }
    else
    {
        minimum = len_i1;
        g = i2;
        maximum = len_i2;
        l = i1;
    }

    for (int i = 1; i <= abs(len_i1 - len_i2); i++)
    {
        c += "0";
    }

    l = c + l;
    //cout << "i2"<<i2;

    int carry1 = 0;
    reverse(g.begin(), g.end());
    reverse(l.begin(), l.end());

    for (int i = 0; i < len_i1; i++)
    {
        if (switchtoint(g[i]) - switchtoint(l[i]) - carry1 < 0)
        {
            sub = to_string(switchtoint(g[i]) - switchtoint(l[i]) + b - carry1) + sub;
            // cout << switchtoint(g[i]);
            carry1 = 1;
        }
        else
        {
            sub = to_string(switchtoint(g[i]) - switchtoint(l[i]) - carry1) + sub;
            carry1 = 0;
        }
    }
    //cout << sub;
    //reverse(sub.begin(),sub.end());
    return sub;
}

string karatsubhaMulti(string i1, string i2, int b)
{
    string a1, a0, b0, b1, c1, g, l;
    int i1_len, i2_len, maximum, minimum;
    i1_len = i1.size();
    i2_len = i2.size();
    int num = max(i1_len, i2_len);
    if (i1_len > i2_len)
    {
        //maximum = i1_len;
        g = i1;
        //minimum = i2_len;
        l = i2;
    }
    else
    {
        //minimum = i1_len;
        g = i2;
        //maximum = i2_len;
        l = i1;
    }
    if (num = 3, num = 2, num = 1)
    {
        return mulBase1(g, l, b);
    }
    else if (num < 1)
    {
        return "0";
    }

    int num1 = ceil(num / 2);
    //cout << "num " << num1 << " ::" << i1_len<<"::" <<i2_len ;

    if (i1_len <= num1)
    {
        a1 += "0";
        a0 = g;
    }
    else
    {
        for (int i = 0; i < i1_len - num1; i++)
        {
            a1 = a1 + g[i];
            //cout << "a1::" << i << endl;
        }
        reverse(a1.begin(), a1.end());
        for (int j = (i1_len - num1); j < i1_len; j++)
        {
            a0 = a0 + g[j];
            // cout << "a0::" << j << endl;
        }
        reverse(a0.begin(), a0.end());
    }
    //cout << "a0:: " << a0 << endl;
    //cout << "a1:: " << a1 << endl;
    if (i2_len <= num1)
    {
        b1 += "0";
        b0 = l;
    }
    else
    {
        for (int i = 0; i < i2_len - num1; i++)
        {
            b1 = b1 + l[i];
            reverse(b1.begin(), b1.end());
        }
        reverse(b1.begin(), b1.end());
        for (int j = (i2_len - num1); j < i2_len; j++)
        {
            b0 = b0 + l[j];

            // reverse(b0.begin(),b0.end());
        }
        reverse(b0.begin(), b0.end());
    }
    //cout << "b0:: " << b0 << endl;
    //cout << "b1:: " << b1 << endl;

    c1 = karatsubhaMulti(sumBase(a0, a1, b), sumBase(b0, b1, b), b);

    string tmp1 = mulBase1((karatsubhaMulti(a1, b1, b)), to_string(int(pow(b, 2 * num1))), b);
    string tmp2 = sumBase((karatsubhaMulti(a1, b1, b)), (karatsubhaMulti(a0, b0, b)), b);
    string tmp3 = subBase(tmp2, c1, b);
    string tmp4 = mulBase1(tmp3, to_string(int(pow(b, num1))), b);
    string tmp5 = sumBase(tmp4, tmp1, b);
    string answer = sumBase(tmp5, karatsubhaMulti(a0, b0, b), b);

    // cout << tmp1 << endl;
    // cout << tmp2 << endl;
    // cout << tmp3 << endl;
    // cout << tmp4 << endl;
    // cout << tmp5 << endl;
    return answer;
}

int main()
{
    string i1, i2, b;
    string add, sub, mul, karatsubha;
    cin >> i1 >> i2 >> b;

    // Function Call
    add = sumBase(i1, i2, stoi(b));
    sub = subBase(i1, i2, stoi(b));
    mul = mulBase1(i1, i2, stoi(b));
    karatsubha = karatsubhaMulti(i1, i2, stoi(b));
    // mul = switchtoint('5');
    cout << add << " " << karatsubha << endl;

    return 0;
}