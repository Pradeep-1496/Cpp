/* Pradeep Prajapati */
/* Problem name or link : https://codeforces.com/problemset/problem/723/A */

#include<bits/stdc++.h>
using namespace std;


int meetingFriends(int num[]){
    int temp[3];
    copy(num, num + 3, temp);
    sort(temp, temp+3);
    int m = temp[1];
    return (abs(num[0]-m) + abs(num[1]-m) + abs(num[2]-m));
}

int main(){
int num[3];
for (int i = 0; i < 3; i++)
{
    cin >> num[i];
}

cout << meetingFriends(num) << endl;
return 0;
}