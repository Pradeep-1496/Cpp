#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int output = 0;
    string input;

    unordered_map<string, int> shape_values = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}};

    while (t--)
    {
        cin >> input;
        output += shape_values[input];
    }

    cout << output << endl;
    return 0;
}