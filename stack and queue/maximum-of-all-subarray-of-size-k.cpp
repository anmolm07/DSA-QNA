/*
Given an array arr[] of size N and an integer K. Find the maximum for each and every contiguous subarray of size K.

N = 9, K = 3
arr[] = 1 2 3 1 4 5 2 3 6
Output: 
3 3 4 5 5 5 6 
Explanation: 
1st contiguous subarray = {1 2 3} Max = 3
2nd contiguous subarray = {2 3 1} Max = 3
3rd contiguous subarray = {3 1 4} Max = 4
4th contiguous subarray = {1 4 5} Max = 5
5th contiguous subarray = {4 5 2} Max = 5
6th contiguous subarray = {5 2 3} Max = 5
7th contiguous subarray = {2 3 6} Max = 6

LINK - https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1
*/

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        deque<int>Q(k);
        vector<int>res;
        int i=0;
        for(;i<k;i++)
        {
            while(!Q.empty() && arr[i]>=arr[Q.back()])
            {
                Q.pop_back();
            }
            Q.push_back(i);
        }
        for(;i<n;i++)
        {
            res.push_back(arr[Q.front()]);
            while(!Q.empty() && Q.front()<=i-k)
            Q.pop_front();
            while(!Q.empty() && arr[i]>=arr[Q.back()])
            Q.pop_back();
            Q.push_back(i);
        }
        res.push_back(arr[Q.front()]);
        return res;
    }
};
