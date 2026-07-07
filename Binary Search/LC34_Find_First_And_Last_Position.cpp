/*
LeetCode 34 - Find First and Last Position of Element in Sorted Array

Topic:
Binary Search

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int firstOcc(vector<int>& nums, int target) {

        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;
        int occ1 = -1;

        while (start <= end) {

            if (nums[mid] == target) {
                occ1 = mid;
                end = mid - 1;
            }
            else if (target > nums[mid]) {
                start = mid + 1;
            }
            else if (target < nums[mid]) {
                end = mid - 1;
            }

            mid = start + (end - start) / 2;
        }

        return occ1;
    }

    int lastOcc(vector<int>& nums, int target) {

        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;
        int occ2 = -1;

        while (start <= end) {

            if (nums[mid] == target) {
                occ2 = mid;
                start = mid + 1;
            }
            else if (target > nums[mid]) {
                start = mid + 1;
            }
            else if (target < nums[mid]) {
                end = mid - 1;
            }

            mid = start + (end - start) / 2;
        }

        return occ2;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        int first = firstOcc(nums, target);
        int last = lastOcc(nums, target);

        return {first, last};
    }
};
