//find better sol using binary search 
/* 

Given an array and an integer B, traverse the array (from the beginning) and if the element in array is B, double B and continue traversal. 
Find the value of B after the complete traversal.




LINK -https://practice.geeksforgeeks.org/problems/doubling-the-value4859/1
*/

class Solution
{
    public:
    long long solve(int n, long long a[], long long b)
    {
        //code here.
        
long long start = b;
sort(a, a + n);
for (int i = 0; i < n; i++) {
if (a[i] == start) {
start = start * 2;
}
}
return start;

    }  
};
