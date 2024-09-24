#include<bits/stdc++.h>

using namespace std;

int BeautifulMatrix(int num[5][5]){
    int count;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(num[i][j] == 1){
                count = abs(i - 2) + abs(j - 2);
                break;
            }
        }
    }
   

    return count;
}

int main(){

int num[5][5];
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
       cin >> num[i][j];
    }
    
}


cout << BeautifulMatrix(num) << endl;
return 0;
}