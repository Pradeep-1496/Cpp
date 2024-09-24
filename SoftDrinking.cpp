#include <bits/stdc++.h>

using namespace std;

int SoftDrinking(int num[])
{
    int n = num[0], k = num[1], l = num[2], c = num[3], d = num[4], p = num[5], nl = num[6], np = num[7];
    int toasts = (k * l) / n;
    int lime = c * d;
    int salts = p / np;

    int m = (toasts > lime) ? lime : toasts;
    m = (m > salts) ? salts : m;
    return m/n;
}

int main()
{

    int num[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> num[i];
    }
    

    cout << SoftDrinking(num) << endl;
    return 0;
}

// n = frinds
// k = bottle
// l = milli liter
// c = limes
// d = cut lime in d slice
// p = salt gram
// nl=  each friend needs n*l milliliters of the drink