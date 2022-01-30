/*

The alternating sum of a 0-indexed array is defined as the sum of the elements at even indices minus the sum of the elements at odd indices.

For example, the alternating sum of [4,2,5,3] is (4 + 5) - (2 + 3) = 4.
Given an array nums, return the maximum alternating sum of any subsequence of nums (after reindexing the elements of the subsequence).

A subsequence of an array is a new array generated from the original array by deleting some elements (possibly none) without changing the 
remaining elements' relative order. For example, [2,7,4] is a subsequence of [4,2,3,7,2,1,4] (the underlined elements), while [2,4,2] is not.

Input: nums = [4,2,5,3]
Output: 7
Explanation: It is optimal to choose the subsequence [4,2,5] with alternating sum (4 + 5) - 2 = 7.

LINK - https://leetcode.com/problems/maximum-alternating-subsequence-sum/

*/

  

  
  class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long sum = 0, odd = 0, even = 0;
        for (int i = 0; i < nums.size(); i++){
            even = max(odd+nums[i], even);
            odd = max(even-nums[i], odd);   
            sum = max(even, max(odd,sum));
        }
        return sum;
    }
};
