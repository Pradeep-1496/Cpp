/* String to Capital and seperate in new line*/


#include<bits/stdc++.h>

using namespace std;

string upper(string str){
    for(int i=0; i<str.length(); i++){
        str[i] = 'A'+(str[i]-'a');
    }
    cout << str << endl;

}

int main(){

    while(1){
        string s;
        cin >> s;
        if(s.length() == 0){
            break;
        }
        s = upper(s);
    }
return 0;
}