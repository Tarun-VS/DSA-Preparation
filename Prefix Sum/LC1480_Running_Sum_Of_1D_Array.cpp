/*
LeetCode 1480 - Running Sum of 1d Array

Topic:
Prefix Sum

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        int n = nums.size();

        for (int i = 1; i < n; i++) {
            nums[i] += nums[i - 1];
        }

        return nums;
    }
};
