/*
LeetCode 2011 - Final Value of Variable After Performing Operations

Topic:
Arrays, Strings

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int finalVal = 0;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "++X" || operations[i] == "X++") {
                finalVal++;
            } else {
                finalVal--;
            }
        }

        return finalVal;
    }
};
