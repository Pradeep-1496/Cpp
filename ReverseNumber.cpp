// Reverse a given number

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number to Reverse: ";
    cin >> n;
    int sum = 0;

    while (n != 0)
    {
        int last = n % 10;
        sum = sum * 10 + last;
        n = n / 10;
    }
    cout << sum;
    return 0;
}