#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    int temp = 0;
    for (int i = 0; i < h; i++)
    {
        if ((i % 2) == 0)
        {
            for (int j = 0; j < w; j++)
            {
                cout << "#";
            }
        }
        else
        {
            if (temp == 0)
            {
                for (int j = 0; j < w - 1; j++)
                {
                    cout << ".";
                }
                cout << "#";
                temp = 1;
            }
            else
            {
                cout << "#";
                for (int j = 0; j < w - 1; j++)
                {
                    cout << ".";
                }
                temp = 0;
            }
        }
        cout << endl;
    }
    return 0;
}