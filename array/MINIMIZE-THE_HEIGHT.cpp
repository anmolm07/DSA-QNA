/*
Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. 
Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.
Link -https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1
*/
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int minE,maxE;
        int res=arr[n-1]-arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=k && arr[n-1]>=k)
            {
                maxE=max(arr[i-1]+k,arr[n-1]-k);
                minE=min(arr[i]-k,arr[0]+k);
                res=min(res,maxE-minE);
            }
        }
        return res;
    }
};
