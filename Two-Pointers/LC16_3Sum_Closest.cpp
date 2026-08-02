/*
Problem: 3Sum Closest (LeetCode 16)
Topic: Sorting, Two Pointers

Time Complexity: O(n²)
Space Complexity: O(1)
*/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans=nums[0]+nums[1]+nums[2];
      
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size()-2; i++){
            int j=i+1;
            int k=nums.size()-1;

            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];

                if(abs(target-sum)<abs(target-ans)){
                    ans=sum;
                }

                if(sum==target){
                    return sum;
                }
                else if(sum<target){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
    }
};
