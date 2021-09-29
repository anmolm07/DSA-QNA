/*
Given two sorted arrays arr1[] of size N and arr2[] of size M. Each array is sorted in non-decreasing order.
Merge the two arrays into one sorted array in non-decreasing order without using any extra space.

LINK-https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1


*/

class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    int i=0,j=0,k=n-1;
	    while(i<=k && j<m)
	    {
	        if(arr1[i]<arr2[j])
	            i++;
	       else
	       {
	           swap(arr2[j++],arr1[k--]);
	       }
	       
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	}
};
