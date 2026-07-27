/*
Problem: Two Sum (LeetCode 1)
Topic: Arrays
Approach: Brute Force
Time Complexity: O(n²)
Space Complexity: O(1)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int firstindex = 0;
        int secondindex = 0;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    firstindex = i;
                    secondindex = j;
                }
            }
        }

        return {firstindex, secondindex};
    }
};
