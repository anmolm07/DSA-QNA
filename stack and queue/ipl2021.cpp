// Input: S = "(()("
// Output: 2
// Explanation: The longest valid 
// substring is "()". Length = 2.

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        int n = s.length();
        stack<int> stk;
        stk.push(-1);
        int result=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                stk.push(i);
            }
            else
            {
                if(!stk.empty())
                {
                    stk.pop();
                }
                if(!stk.empty())
                {
                    result = max(result,i-stk.top());
                }
                else
                {
                    stk.push(i);
                }
            }
        }
        return result;

    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends
