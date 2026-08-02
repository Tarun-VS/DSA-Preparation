/*
Problem: Roman to Integer (LeetCode 13)
Topic: String

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int value(char c){
        if(c=='I') return 1;
        else if(c=='V') return 5;
        else if(c=='X') return 10;
        else if(c=='L') return 50;
        else if(c=='C') return 100;
        else if(c=='D') return 500;
        else return 1000;
    }

    int romanToInt(string s) {
        int ans=0;

        for(int i=0; i<s.size()-1; i++){
            if(value(s[i])<value(s[i+1])){
                ans-=value(s[i]);
            }
            else{
                ans+=value(s[i]);
            }
        }

        ans+=value(s.back());

        return ans;
    }
};
