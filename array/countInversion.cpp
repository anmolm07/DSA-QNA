/*Problem - Given an array of integers. Find the Inversion Count in the array. 

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

Link -https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
    
*/


long long int merge(long long arr[],long long temp[],long long l,long long mid,long long r)
{
    long long int count=0;
    long long i=l;
    long long j=mid;
    long long k=l;
    while(i<=mid-1 && j<=r)
    {
        if(arr[i]<=arr[j])
        {
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            count+=(mid-i);
        }
    }
    while(i<=mid-1)
    {
        temp[k++]=arr[i++];
    }
    while(j<=r)
    {
        temp[k++]=arr[j++];
    }
    for(long long i=l;i<=r;i++)
    arr[i]=temp[i];
    return count;
}
long long int mergeSort(long long arr[],long long temp,long long l,long long r)
{
    long long int count=0;
    if(l<r)
    {
        long long mid=l+(r-l)/2;
        count+=mergeSort(arr,temp,l,mid);
        count+=mergeSort(arr,temp,mid+1,r);
        count+=merge(arr,temp,l,mid+1,r);
    }
    return count;
}

long long int inversionCount(long long arr[], long long N)
{
    long long temp[N];
    return mergeSort(arr,temp,0,N-1);
}
