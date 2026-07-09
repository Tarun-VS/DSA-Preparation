/*
LeetCode 2413 - Smallest Even Multiple

Topic:
Math

Time Complexity: O(1)
Space Complexity: O(1)
*/

class Solution {
public:
    int smallestEvenMultiple(int n) {

        if (n % 2 != 0) {
            return n * 2;
        }
        else {
            return n;
        }
    }
};
