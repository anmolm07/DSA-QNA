/*Problem-Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. 
Task is to check whether a2[] is a subset of a1[] or not. 
Both the arrays can be sorted or unsorted. 
It may be assumed that elements in both array are distinct.

link -https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1

solution- 
*/
string isSubset(int a1[], int a2[], int n, int m) {
    unordered_set<int>S;
    for(int i=0;i<n;i++)
    {
        S.insert(a1[i]);
    }
    for(int i=0;i<m;i++)
    {
        if(S.find(a2[i])!=S.end())
        continue;
        else
        return "No";
    }
    return "Yes";
}
