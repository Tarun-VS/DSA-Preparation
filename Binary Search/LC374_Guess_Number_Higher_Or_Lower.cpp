/*
Problem: Guess Number Higher or Lower (LeetCode 374)
Topic: Binary Search

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int guessNumber(int n) {
        int start = 0;
        int end = n;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            int ans = guess(mid);

            if (ans == 0) {
                return mid;
            }
            else if (ans == -1) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return -1;
    }
};
