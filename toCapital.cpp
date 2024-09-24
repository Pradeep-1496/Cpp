#include <bits/stdc++.h>

using namespace std;

string toCapital(string str){
    
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 97) && (str[i] <= 122))
        {
            str[i] = str[i] - 32;
        }
    }
    return str;
    }

int main()
{
    string str;
    cout << "Enter a string with space: ";
    getline(cin, str);
    cout << toCapital(str);
}