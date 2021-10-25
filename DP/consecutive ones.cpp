//https://leetcode.com/problems/max-consecutive-ones/submissions/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int n=nums.size();
        int currmax=0;
            int max1=0;
        
        for(int i=0;i<n;i++){
            
            if(nums[i]==1){
                currmax++;}
            
             else
             {currmax=0;}
            
                max1=max(currmax,max1);
           
        }
        
        return max1;
    }
};consecutive
