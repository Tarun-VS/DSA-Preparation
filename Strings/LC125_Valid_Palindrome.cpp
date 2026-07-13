/*
LeetCode 125 - Valid Palindrome

Topic:
Strings, Two Pointers

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
private:
    bool valid(char ch){
        return (ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9');
    }

    char toLower(char ch){
        if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
            return ch;
        return ch-'A'+'a';
    }

    bool isPalindrome(string &str){
        int start=0,end=str.size()-1;

        while(start<end){
            if(str[start]!=str[end])
                return false;
            start++;
            end--;
        }
        return true;
    }

public:
    bool isPalindrome(string s){
        string temp="";

        for(int i=0;i<s.length();i++){
            if(valid(s[i]))
                temp.push_back(s[i]);
        }

        for(int i=0;i<temp.length();i++)
            temp[i]=toLower(temp[i]);

        return isPalindrome(temp);
    }
};
