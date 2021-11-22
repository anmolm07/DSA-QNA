/*
Given an array of positive integers. Find the length of the longest sub-sequence such that elements
in the subsequence are consecutive integers, the consecutive numbers can be in any order.

Input:
N = 7
a[] = {2,6,1,9,4,5,3}
Output:
6
Explanation:
The consecutive numbers here
are 1, 2, 3, 4, 5, 6. These 6 
numbers form the longest consecutive
subsquence.

LINK - https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1
 
*/

class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        unordered_set<int>S;
        int res=0;
        for(int i=0;i<N;i++)
        S.insert(arr[i]);
        for(int i=0;i<N;i++)
        {
            int x=0;
            if(S.find(arr[i]-1)==S.end())
            {
                int j=arr[i];
                while(S.find(j)!=S.end()){
                    x++;j++;
                }
                res=x>res?x:res;
            }
        }
        return res;
      //Your code here
    }
};
