#include "../leetcode.h"

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // vector<int> ans = nums;
        // for(int i = 1; i < nums.size(); i++) {
        //     for(int j = 0; j < i; j++) {
        //         ans[i] += nums[j];
        //     }
        // }
        // return (vector<int>)ans;
        
        for(int i = 1; i < nums.size(); i++)
            nums[i] += nums[i-1];
        return nums;
    }
};