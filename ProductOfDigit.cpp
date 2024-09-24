/* Product of Given number 
EG: 123 => 1*2*3 = 6
And last digit of Product have to 2, 3, 5 then print "YES"
Else "No"
*/


#include<bits/stdc++.h>

using namespace std;

void Function(int n){
    long long int result=1;
    while(n>0){
          int last = n%10;
          result *= last;
          n = n/10;
          } 
          int last = result%10;
          if((last == 2) || (last == 3) || (last == 5)){
            cout << "YES"<<endl;
          }
          else{
            cout << "NO"<<endl;
            }
}

int main(){
    int t;
    cout << "Test case are: ";
    cin >> t;
while(t--){
    int n;
    cin >> n;
    if (n == 0){
        break;
    }
    Function(n);
}
return 0;
}