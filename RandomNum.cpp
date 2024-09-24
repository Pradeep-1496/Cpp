#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter no of digit to print: ";
    cin >> n;
    
    srand(time(0));  // sequence of random number
    for(int i=0; i<n; i++){
    cout << rand() %10;   //fixed random number
    
    }
    return 0;
    }
