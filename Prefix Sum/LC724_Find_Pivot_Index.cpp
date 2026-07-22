/*
Problem: Find Pivot Index (LeetCode 724)
Topic: Prefix Sum

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int leftsum = 0;
        int rightsum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            rightsum = sum - leftsum - nums[i];

            if (leftsum != rightsum) {
                leftsum += nums[i];
            } else {
                return i;
            }
        }

        return -1;
    }
};
