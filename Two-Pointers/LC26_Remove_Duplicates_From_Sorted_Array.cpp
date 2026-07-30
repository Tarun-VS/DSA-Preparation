/*
Problem: Remove Duplicates from Sorted Array (LeetCode 26)
Topic: Two Pointers

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
      
        int i = 0;
        int j = 1;
        int count = 1;
        int n = nums.size();

        while (j < n) {
            if (nums[j] == nums[j - 1]) {
                j++;
            }
            else {
                nums[i + 1] = nums[j];
                count++;
                i++;
                j++;
            }
        }
        return count;
    }
};
