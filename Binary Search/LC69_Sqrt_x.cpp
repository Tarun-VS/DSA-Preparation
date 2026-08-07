/*
Problem: Sqrt(x) (LeetCode 69)
Topic: Binary Search

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int mySqrt(int x) {
        int start=0;
        int end=x;
        int ans=0;

        while(start<=end){
            int mid=start+(end-start)/2;
            long long square=1LL*mid*mid;

            if(square==x){
                ans=mid;
                break;
            }
            else if(square>x){
                end=mid-1;
            }
            else{
                ans=mid;
                start=mid+1;
            }
        }
        return ans;
    }
};
