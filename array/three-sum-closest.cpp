/*
Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

Return the sum of the three integers.

You may assume that each input would have exactly one solution.

Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

LINK - https://leetcode.com/problems/3sum-closest/

*/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int res=1000000;
        for(int i=0;i<n;i++)
        {
            if(i-1>-1 && nums[i]==nums[i-1])
                continue;
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==target)
                    return target;
                if( abs( nums[i]+nums[j]+nums[k] - target) <abs( res-target))
                {
                    res=nums[i]+nums[j]+nums[k];
                }
                if(nums[i]+nums[j]+nums[k]>target)
                {
                    while(j<k && nums[k]==nums[k-1])
                        k--;
                    k--;
                }
                else
                {
                    while(j<k && nums[j]==nums[j+1])
                        j++;
                    j++;
                }
            }
        }
        return res;
    }
    
};
