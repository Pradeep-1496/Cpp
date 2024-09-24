/* Pradeep Prajapati */
/* Problem name or link : https://leetcode.com/problems/is-subsequence/description/ */

#include<bits/stdc++.h>

using namespace std;

bool isSubsequence(string s, string t) {
        bool result;
        int count =0;
        int j = 0;

        for(int i=0; i<t.length(); i++){
          if(s[j] == t[i]){
            count++;
            j++;
          }
        }
        result = (count == s.length()) ? true:false;
        return result;
    }

int main(){
string s = "abc";
string t = "ahbgdc";
cout << isSubsequence(s, t) << endl;
return 0;
}