#include<bits/stdc++.h>

using namespace std;

int normalFun(int n){
    n++;
    return n;
}

void nonReturnFun(int n ){  // Use to just print. And the values is temporary change in function only Or Local scope
    n++;
    cout << "Value of Non-return function: "<<n << endl;
}

void ByReference(int &n){ // In this int &n i.e the value is change globaly. It is known as Value pass By Refrence  
    n++;
}

int main(){
    int a = 3;
cout << a << endl;
a = normalFun(a);  //a = a++
cout << "Normal function that return value: " << a << endl;
nonReturnFun(a);
ByReference(a); 
cout << "Global change function: " << a << endl;
return 0;
}