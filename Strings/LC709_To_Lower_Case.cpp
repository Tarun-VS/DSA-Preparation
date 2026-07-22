/*
Problem: To Lower Case (LeetCode 709)
Topic: Strings

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    string toLowerCase(string s) {
        string result = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                result += s[i] - 'A' + 'a';
            } else {
                result += s[i];
            }
        }

        return result;
    }
};
