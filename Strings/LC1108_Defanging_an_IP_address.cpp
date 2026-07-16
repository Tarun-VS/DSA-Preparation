/*
LeetCode 1108 - Defanging an IP Address

Topic:
Strings

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    string defangIPaddr(string address) {
        string result = "";

        for (int i = 0; i < address.length(); i++) {
            if (address[i] == '.') {
                result += "[.]";
            } else {
                result += address[i];
            }
        }

        return result;
    }
};
