/*
Given an array of integers (A[])  and a number x, find the smallest subarray with sum greater than the given value.

Note: The answer always exists. It is guaranteed that x doesn't exceed the summation of a[i] (from 1 to N).

LINK - https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1
*/

int sb(int arr[], int n, int x)
    {
        int start=0,end=-1,sum=0,res=n;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            end++;
            if(sum>x)
            {
                while(sum-arr[start]>x)
                {
                    sum=sum-arr[start++];
                    
                }
                res=res<end-start+1?res:end-start+1;
            }
        }
        return res;
    }
