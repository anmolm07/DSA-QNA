/*Problem - Given an array arr[] of N integers arranged in a circular fashion. Your task is to find the maximum contiguous subarray sum.
solution -

link - https://practice.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1

*/
int kadane(int arr[], int n)
    {
        int max_so_far = INT_MIN, max_ending_here = 0;
        int i;
        for (i = 0; i < n; i++) 
        {
            max_ending_here = max_ending_here + arr[i];
            if (max_so_far < max_ending_here)
            {
                max_so_far = max_ending_here;
            }
            if (max_ending_here < 0)
            max_ending_here = 0;
        }
        return max_so_far;
        
    }
    int circularSubarraySum(int arr[], int n){
        int kad=kadane(arr,n);
        if(kad<0)
        return kad;
        int max=0;
        for(int i=0;i<n;i++)
        {
            max+=arr[i];
            arr[i]=-arr[i];
        }
        int kad1=kadane(arr,n);
        return (kad1+max < kad)?kad:kad1+max;
        
        // your code here
    }
