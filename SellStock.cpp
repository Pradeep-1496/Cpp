/* Pradeep Prajapati */
/* Problem name or link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/ */

#include<bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
        int profit = 0;
        int min = prices[0];
        for (int i = 0; i < prices.size(); i++) {
            min = (min > prices[i]) ? prices[i] : min;
            profit = max(profit, prices[i] - min);
        }
    return profit;
    }

int main(){
int arr[] = {2, 4, 1};

vector<int> v(std::begin(arr), std::end(arr));
cout << maxProfit(v) << endl;
return 0;
}