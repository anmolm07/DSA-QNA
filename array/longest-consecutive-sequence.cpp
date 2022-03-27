/*

Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.


Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

LINK - https://leetcode.com/problems/longest-consecutive-sequence/



*/


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp.insert(nums[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int count=0;
            if(mp.find(nums[i]-1)==mp.end())
            {
                int j=nums[i];
                while(mp.find(j)!=mp.end())
                {
                    count++;
                    j++;
                }
                ans=max(count,ans);
            }
        }
        return ans;
    }
};
