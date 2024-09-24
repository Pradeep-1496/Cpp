#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    string result = "EASY";
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1)
        {
            result = "HARD";
        }
    }
    cout << result << endl;
    return 0;
}