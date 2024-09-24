#include <bits/stdc++.h>

using namespace std;


int main()
{
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(height) / sizeof(height[0]);
    int Min, dis, temp = 0;
    int Max = 0;
    int i = 0;
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if(i == j){
                break;
            }
            Min = (height[i]>height[j])? height[j]:height[i];
            dis = j - i;
            temp = Min * dis;
            Max = (temp > Max)? temp:Max;
            
            
        }
    }
    cout << Max << endl;

    return 0;
}