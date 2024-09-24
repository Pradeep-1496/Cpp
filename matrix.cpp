#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;   // n*n matrix
    cout << "Enter matrix size: ";
    cin >> n;
    string s;
    int arr[n][n];
    for(int i = 0; i<n; i++){
        if(i+1 == 1){
            s = "st";
            }
        else if(i+1 == 2){
            s = "nd";
            }
        else if(i+1 == 3){
            s = "rd";
            }else{
                s = "th";
                }
        cout << "Row " << i+1 << s << endl;
        for(int j = 0; j <n; j++){
            cin >> arr[i][j];
            
            }
        cout << endl;
        }
        
     for(int i = 0; i<n; i++){
        for(int j = 0; j <n; j++){
            cout << arr[i][j] << " ";
            
            }
        cout << endl;
        }
}
