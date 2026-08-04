/*
Problem: Maximum Average Subarray I (LeetCode 643)
Topic: Fixed Size Sliding Window

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        double avg=0;

        for(int i=0; i<k; i++){
            sum+=nums[i];
            avg=sum/k;
        }

        double maximum=avg;

        for(int i=k; i<nums.size(); i++){
            sum=sum-nums[i-k]+nums[i];
            avg=sum/k;
            maximum=max(maximum,avg);
        }
        return maximum;
    }
};
