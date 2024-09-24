#include <bits/stdc++.h>
using namespace std;

string fun(int k, string s){
    int j = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if((s[i] =! "a") && 
        (s[i] =! "e") && 
        (s[i] =! "i") && 
        (s[i] =! "o") && 
        (s[i] =! "u")){
            j++;
        }
    }
    cout << endl << s << endl << n;
    return (k == j) ? "Yes":"No";
    
}


int main()
{   
    char text[] = "abace";
    int k = 2;
    cout << fun(k, text);
    return 0;
}