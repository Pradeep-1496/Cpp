/* Pradeep Prajapati */
/* Problem name or link : https://codeforces.com/problemset/problem/1352/A */

#include<bits/stdc++.h>

using namespace std;

int main(){
int t, n;
cin >> t;
while(t--){
    cin >> n;
    int count = 0;
    string str = to_string(n);

    int len = str.length();

    string ans[len];

    for(int i=0; i<len; i++){
        if(str[i] != '0'){
           ans[i] = str[i];
           count++;
           for(int j =len-i-1; j>0; j--){
                ans[i] += '0';
            }
        }
    }

    int result[len];
    cout << count << endl;

    for(int i=0; i<len; i++){
        if(str[i] != '0'){
        result[i] = stoi(ans[i]);
        cout << result[i] << " ";
        }
    }
    cout << endl;
}

return 0;
}