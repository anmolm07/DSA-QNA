/* Problem - Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.
solution - 
Link - https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
*/
int maxSubarraySum(int arr[], int n){
        int max_so_far=0,max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            max_so_far+=arr[i];
            if(max_so_far>max)
            max=max_so_far;
            if(max_so_far<0)
            max_so_far=0;
        }
        return max;
    }
