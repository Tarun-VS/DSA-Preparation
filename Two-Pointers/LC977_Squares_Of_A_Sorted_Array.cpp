/*
Problem: Squares of a Sorted Array (LeetCode 977)
Topic: Two Pointers

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        vector<int> ans(nums.size());
        int index = nums.size() - 1;

        while (left <= right) {
            if (abs(nums[left]) > abs(nums[right])) {
                ans[index] = nums[left] * nums[left];
                left++;
            }
            else {
                ans[index] = nums[right] * nums[right];
                right--;
            }

            index--;
        }
        return ans;
    }
};
