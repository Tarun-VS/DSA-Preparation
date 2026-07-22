/*
Problem: Reverse Words in a String (LeetCode 151)
Topic: Strings

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <sstream>
#include <vector>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> words;
        string word;

        while (ss >> word) {
            words.push_back(word);
        }

        string ans = "";

        for (int i = words.size() - 1; i >= 0; i--) {
            ans += words[i];

            if (i != 0) {
                ans += " ";
            }
        }
        return ans;
    }
};
