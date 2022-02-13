//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        int c=0;
        while(N!=0)
        {
            N= N & (N<<1);
            c++;
        }
        return c;
    }
};


// { Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends


// Input: N = 14
// Output: 3
// Explanation: 
// Binary representation of 14 is 
// 1110, in which 111 is the longest 
// consecutive set bits of length is 3.
