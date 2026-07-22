/*
Problem: Ransom Note (LeetCode 383)
Topic: Hash Table, Strings

Time Complexity: O(n + m)
Space Complexity: O(1)
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26, 0);

        for (char ch : magazine)
            freq[ch - 'a']++;

        for (char ch : ransomNote) {
            freq[ch - 'a']--;

            if (freq[ch - 'a'] < 0)
                return false;
        }

        return true;
    }
};
