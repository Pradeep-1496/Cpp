/* Pradeep Prajapati */
// https://codeforces.com/problemset/problem/1133/A 

#include<bits/stdc++.h>

using namespace std;

int main(){

string t1;
string t2;
cin>>t1>>t2;

float h1 = stoi(t1.substr(0, 2));
float h2 = stoi(t2.substr(0, 2));

int m1 = stoi(t1.substr(3, 2));
int m2 = stoi(t2.substr(3, 2));

float mh = (h1+h2)/2;
int mm = (m1+m2)/2;

int des = (mh - ((int)mh))*10;
mh = (int)mh;
mm += des *6; 
if(mm >= 60){
    mh++;
    mm = mm-60;
}

cout << setfill('0') << setw(2) << mh << ':' << setfill('0') << setw(2) << mm << endl;
return 0;
}