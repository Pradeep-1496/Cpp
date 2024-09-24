#include <iostream>
using namespace std;

int main()
{
    char ch, ch1;
    cout << "Enter a char: ";
    cin >> ch;

    if ((ch > 64) && (ch < 97))
    {
        ch1 = ch + 32;
    }
    else
    {
        ch1 = ch - 32;
    }

    cout << "Ascii " << (int)ch << endl;
    cout << ch1 << endl;
    cout << "Ascii " << (int)ch1;
}

/* A = 65 to Z = 90
   a = 97 to z = 122 */