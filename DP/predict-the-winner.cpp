/*

You are given an integer array nums. Two players are playing a game with this array: player 1 and player 2.

Player 1 and player 2 take turns, with player 1 starting first. 
Both players start the game with a score of 0. At each turn, the player takes one of the numbers from either end of the array 
(i.e., nums[0] or nums[nums.length - 1]) which reduces the size of the array by 1. The player adds the chosen number to their score.
The game ends when there are no more elements in the array.

Return true if Player 1 can win the game. If the scores of both players are equal,
then player 1 is still the winner, and you should also return true. You may assume that both players are playing optimally.


Input: nums = [1,5,2]
Output: false
Explanation: Initially, player 1 can choose between 1 and 2. 
If he chooses 2 (or 1), then player 2 can choose from 1 (or 2) and 5. If player 2 chooses 5, then player 1 will be left with 1 (or 2). 
So, final score of player 1 is 1 + 2 = 3, and player 2 is 5. 
Hence, player 1 will never be the winner and you need to return false.

LINK - https://leetcode.com/problems/predict-the-winner/
 

*/

class Solution {
public:
    int DP[1001][1001];
    long long solve(vector<int>nums ,int i,int j,int sum)
    {
        if(i>j)
            return 0;
        if(j==i+1)
            return nums[i]>nums[j]?nums[i]:nums[j];
        if(DP[i][j]!=-1)
            return DP[i][j];
        long long a=sum-solve(nums,i+1,j,sum-nums[i]);
        long long b=sum-solve(nums,i,j-1,sum-nums[j]);
        return DP[i][j]=a>b?a:b;
    }
    bool PredictTheWinner(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
            sum+=nums[i];
        memset(DP,-1,sizeof DP);
        if(solve(nums,0,n-1,sum)>=(sum+1)/2)
            return true;
        else 
            return false;
        
    }
};
