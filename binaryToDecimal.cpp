#include <bits/stdc++.h>

using namespace std;


int btd(int bits){
    int num = bits;
    int ans = 0;
    int base = 1;
    
    while(num){
        int ld = num % 10;
        num = num/10;
        
        ans += ld * base;
        base = base * 2;
        
        }
    return ans;
    }

int main()
{
        int bits;
        cout << "Enter binary number: ";
        cin >> bits;
        cout  << btd(bits) << endl;
}