/*
LeetCode 153 - Find Minimum in Rotated Sorted Array

Topic:
Binary Search

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int findMin(vector<int>& nums) {

        if (nums[0] < nums[nums.size() - 1]) {
            return nums[0];
        }

        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;

        while (start < end) {

            if (nums[mid] >= nums[0]) {
                start = mid + 1;
            }
            else {
                end = mid;
            }

            mid = start + (end - start) / 2;
        }

        return nums[start];
    }
};
