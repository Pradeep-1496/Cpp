/* Pradeep Prajapati */
// https://codeforces.com/problemset/problem/1027/A
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t, n;
    string result = "YES";
    cin >> t;
    while (t--)
    {
        cin >> n;

        char arr[n];
        cin >> arr;
        int i = 0;
        int j = n - 1;
        while(i < j)
        {
            // cout << arr[i] << " " << arr[j] << " " << (arr[i] == arr[j]) << endl;
            if ((arr[i] != arr[j]))
            {
                result = "NO";
                break;
            }
            i++;
            j--;
        }

        cout << result << endl;
    }

    return 0;
}