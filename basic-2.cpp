#include <bits/stdc++.h>
using namespace std;

int main(){
     
     cout <<"int range between "  << INT_MIN << " TO " << INT_MAX;
     
     int a= 100000;
     int b = 100000;
     long int c = a*b;  
     // print wrong value || OverFlow condition
     cout << endl << c;
     
     long long int c1 = a * 1LL * b;  
     //1LL = 1 long long 
     cout << endl << c1;
    
    double a1 = 10000000000;
    cout <<  endl << a1;    //print 1e+10
    cout << endl << fixed << a1;  // default precision is 5
    cout << endl << fixed << setprecision(0) << a1;
}