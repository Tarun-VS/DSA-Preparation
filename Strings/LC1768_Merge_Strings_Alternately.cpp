/*
LeetCode 1768 - Merge Strings Alternately

Topic:
Strings, Two Pointers

Time Complexity: O(n + m)
Space Complexity: O(n + m)
*/

class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string result = "";

        int s = word1.size();
        int t = word2.size();

        int n = min(s, t);

        for (int i = 0; i < n; i++) {
            result += word1[i];
            result += word2[i];
        }

        for (int i = n; i < s; i++) {
            result += word1[i];
        }

        for (int i = n; i < t; i++) {
            result += word2[i];
        }

        return result;
    }
};
