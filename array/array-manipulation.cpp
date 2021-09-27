/*

Starting with a 1-indexed array of zeros and a list of operations,
for each operation add a value to each the array element between two given indices, inclusive. 
Once all operations have been performed, return the maximum value in the array.

LINK- https://www.hackerrank.com/challenges/crush/problem?h_r=profile
*/


long arrayManipulation(int n, vector<vector<int>> queries) {
    long int *arr=new long int[n+1]();
    for(long i=0;i<queries.size();i++)
    {
        arr[queries[i][0]]+=queries[i][2];
        if(queries[i][1]+1<=n)
        arr[queries[i][1]+1]-=queries[i][2];
    }
    long maxsum=0,sum=0;
    for(long i=1;i<n+1;i++)
    {
        sum+=arr[i];
        if(sum>maxsum)
        maxsum=sum;
    }
    return maxsum;

}
