/* Pradeep Prajapati */
/* Problem name or link : https://leetcode.com/problems/find-closest-number-to-zero/description/ */

#include<bits/stdc++.h>

using namespace std;

 int findClosestNumber(vector<int>& nums) {
         int min = nums[0];

        for(int i = 1; i < nums.size();i++){
            int diff = abs(min - 0);
            int result = abs(nums[i] - 0);

            if(result < diff){
                min = nums[i];
            }
            if(result == diff){
                min = max(min, nums[i]);
            }
        }
        return min;
    }


int main(){
    int arr[] = {-4,-2,1,4,8, -1};

    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> nums(arr, arr + n); 

    cout << findClosestNumber(nums) << endl;
return 0;
}