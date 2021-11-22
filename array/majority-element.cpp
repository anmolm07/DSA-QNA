/*
Given an array A of N elements. Find the majority element in the array. 
A majority element in an array A of size N is an element that appears more than N/2 times in the array.


LINK- https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1

N = 3 
A[] = {1,2,3} 
Output:
-1
Explanation:
Since, each element in 
{1,2,3} appears only once so there 
is no majority element.

*/

int majorityElement(int a[], int size)
{
    int candidate=-1,vote=0;
    for(int i=0;i<size;i++)
    {
        if(vote==0)
        {
            candidate=a[i];
            vote=1;
        }
        else{
            if(candidate==a[i])
            vote++;
            else
            vote--;
        }
    }
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==candidate)
        count++;
    }
    if(count>size/2)
    return candidate;
    else
    return -1;
        
}
