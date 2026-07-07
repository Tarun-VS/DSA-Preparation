/*
LeetCode 852 - Peak Index in a Mountain Array

Topic:
Binary Search

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end - start) / 2;

        while (start < end) {

            if (arr[mid + 1] > arr[mid]) {
                start = mid + 1;
            }
            else if (arr[mid + 1] < arr[mid]) {
                end = mid;
            }

            mid = start + (end - start) / 2;
        }

        return start;
    }
};
