/*
Given an array of size N. The task is to sort the array elements by completing functions heapify() and buildHeap() which are used to implement Heap Sort.

Input:
N = 5
arr[] = {4,1,3,9,7}
Output:
1 3 4 7 9
Explanation:
After sorting elements
using heap sort, elements will be
in order as 1,3,4,7,9.

LINK - https://practice.geeksforgeeks.org/problems/heap-sort/1

*/

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left=2*i + 1;
    int right=2*i + 2;
    if(left<n && arr[left]>arr[largest])
    largest=left;
    if(right<n && arr[right]>arr[largest])
    largest=right;
    if(i!=largest)
    {
        swap(&arr[i],&arr[largest]);
        heapify(arr,n,largest);
    }
    // Find largest among root, left child and right child
    
}

// Main function to do heap sort
void buildHeap(int arr[], int n) {
    int i;
    for(i=n/2 - 1;i>=0;i--)
        heapify(arr,n,i);
        
    for(i=n-1;i>0;i--)
    {
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
    
}
