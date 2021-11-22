/*
Quick Sort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot.
Given an array arr[], its starting position low and its ending position high.

Implement the partition() and quickSort() functions to sort the array.

N = 5 
arr[] = { 4, 1, 3, 9, 7}
Output:
1 3 4 7 9

LINK - https://practice.geeksforgeeks.org/problems/quick-sort/1
*/

void quickSort(int arr[], int low, int high)
{
    if(low>=high)
    return;
    int n=partition(arr,low,high);
    quickSort(arr,low,n-1);
    quickSort(arr,n+1,high);
    // code here
}
    
int partition (int arr[], int low, int high)
{
    int key=arr[high];
    int partitioni=low;
    for(int i=low;i<high;i++)
    {
        if(arr[i]<key)
        {
            int c=arr[i];
            arr[i]=arr[partitioni];
            arr[partitioni]=c;
            partitioni++;
        }
    }
    int c=arr[high];
    arr[high]=arr[partitioni];
    arr[partitioni]=c;
    return partitioni;
   // Your code here
}
