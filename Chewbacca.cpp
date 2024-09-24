/* Pradeep Prajapati */
#include <bits/stdc++.h>
using namespace std;

string Chewbacca(string num)
{
    string result = "";;
    for(int i =0 ; i<num.length(); i++){
        result += num[0];
    }
    return result;
}

int main()
{
    string num;
    cin >> num;
    cout << Chewbacca(num) << endl;
    return 0;
}