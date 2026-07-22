/*
Problem: Truncate Sentence (LeetCode 1816)
Topic: Strings

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    string truncateSentence(string s, int k) {
        string result = "";
        int spaces = 0;
        int index = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                spaces++;
            }

            if (spaces == k) {
                index = i;
                break;
            }
        }

        if (spaces != k) {
            return s;
        }

        for (int j = 0; j < index; j++) {
            result += s[j];
        }

        return result;
    }
};
