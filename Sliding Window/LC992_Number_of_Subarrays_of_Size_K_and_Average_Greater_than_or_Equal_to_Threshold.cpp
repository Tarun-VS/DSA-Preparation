/*
Problem: Sub-arrays with K Different Integers (LeetCode 992)
Topic: Fixed Size Sliding Window

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0;
        int avg=0;
        int ans=0;

        for(int i=0; i<k; i++){
            sum+=arr[i];
            avg=sum/k;
        }

        if(avg>=threshold){
            ans+=1;
        }

        for(int i=k; i<arr.size(); i++){
            sum=sum-arr[i-k]+arr[i];
            avg=sum/k;

            if(avg>=threshold){
                ans+=1;
            }
        }
        return ans;
    }
};
