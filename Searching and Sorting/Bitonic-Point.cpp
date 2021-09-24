/*

Given an array arr of n elements which is first increasing and then may be decreasing, find the maximum element in the array.
Note: If the array is increasing then just print then last element will be the maximum value.



link- https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1
*/

class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int beg=0, end=n-1;
	    
	    while(beg<=end){
	        
	        int mid=beg+ (end-beg)/2;
	        
	        if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1])
	        return arr[mid];
	        else if (arr[mid]>arr[mid+1])
	        end=mid-1;
	        else if(arr[mid]<arr[mid+1])
	        beg=mid+1;
	    }
	}
};
