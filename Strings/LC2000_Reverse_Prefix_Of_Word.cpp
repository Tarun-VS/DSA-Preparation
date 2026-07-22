/*
Problem: Reverse Prefix of Word (LeetCode 2000)
Topic: Strings

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    string reversePrefix(string word, char ch) {
        string result = "";
        int index = 0;

        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch) {
                index += i;
                break;
            }
        }

        if (index == 0) {
            return word;
        }

        for (int i = index; i >= 0; i--) {
            result += word[i];
        }

        for (int i = index + 1; i < word.size(); i++) {
            result += word[i];
        }

        return result;
    }
};
