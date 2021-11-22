/*
Given an array arr[], its starting position l and its ending position r. Sort the array using merge sort algorithm.
Input:
N = 5
arr[] = {4 1 3 9 7}
Output:
1 3 4 7 9

LINK -https://practice.geeksforgeeks.org/problems/merge-sort/1

*/

class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int n1 = m - l + 1;
        int n2 = r - m;
        int L[n1], R[n2];
        
        for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
        for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
        
        int i=0,j=0,k=l;
        while(i<n1 && j<n2)
        {
            if(L[i]<=R[j])
            {
             arr[k]=L[i];
             i++;
            }
            else{
                arr[k]=R[j];
                j++;
            }
            k++;
        }
        while(i<n1)
        {
            arr[k]=L[i];
            i++;
            k++;
        }
        while(j<n2)
        {
            arr[k]=R[j];
            j++;
            k++;
        }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r)
        return ;
        int mid=l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
        
        //code here
    }
};
