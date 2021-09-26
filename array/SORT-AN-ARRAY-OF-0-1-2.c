/*
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
Link- https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
*/

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort012(int a[], int n)
{
    int l=0,r=n-1;
    for(int i=0;i<=r;i++)
    {
        if(a[i]==0)
        {
            swap(&a[i],&a[l]);
            l++;
        }
        else if(a[i]==2)
        {
            swap(&a[i],&a[r]);
            r--;
            i--;
        }
            
    }
    
}
