/*
Problem - Given an array of n positive integers and a number k. Find the minimum number of swaps required to bring all the numbers less than or equal to k together.

Link - https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1
solution - 
 
    
 */
int minSwap(int *arr, int n, int k) {
    int good=0,bad=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=k)
        good++;
    }
    for(int i=0;i<good;i++)
    {
        if(arr[i]>k)
        bad++;
    }
    int ans=bad;
    for(int i=0,j=good;j<n;j++,i++)
    {
        if(arr[i]>k)
        --bad;
        if(arr[j]>k)
        ++bad;
        ans=min(ans,bad);
    }
    return ans;
    // Complet the function
}
