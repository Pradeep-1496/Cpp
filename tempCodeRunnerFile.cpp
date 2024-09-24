/* Pradeep Prajapati */

/* Github : https://github.com/Pradeep-1496 */
/* LinkedIn : https://ca.linkedin.com/in/pradeep-prajapati-764a97311 */
/* Code Forces : https://codeforces.com/profile/pradeep_1496 */
/* Leetcode : https://leetcode.com/u/Pradeep_1496/ */

/* Problem name or link : https://leetcode.com/problems/summary-ranges/ */

#include<bits/stdc++.h>

using namespace std;

vector<string> summaryRanges(vector<int>& nums) {
        int min;
        int max = 0;
        
        vector<string> result;
        for (int i = 0; i < nums.size(); i++) {
            min = nums[i];
            while ((nums[i] + 1) == nums[i + 1]) {
                max = nums[i + 1];
                i++;
            }
            if(i == nums.size()){
                result.push_back(std::to_string(min));
                break;
            }else{

            result.push_back(std::to_string(min) + "->" + std::to_string(max));
            }
            
            
        }
        return result;
    }


int main(){
int a[] = {0,1,2,4,5,7};
int n = sizeof(a) / sizeof(a[0]);
vector<int> nums(a, a + n);

cout << summaryRanges(nums) << endl;
return 0;
}