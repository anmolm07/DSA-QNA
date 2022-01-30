/*
Given a binary string S consisting of 0s and 1s. The task is to find the maximum difference of the 
number of 0s and the number of 1s (number of 0s – number of 1s) in the substrings of a string.

Note: In the case of all 1s, the answer will be -1.

Input : S = "11000010001" 
Output : 6 
Explanatio: From index 2 to index 9, 
there are 7 0s and 1 1s, so number 
of 0s - number of 1s is 6. 

LINK - https://practice.geeksforgeeks.org/problems/maximum-difference-of-zeros-and-ones-in-binary-string4111/1

*/

class Solution{
public:	
	int maxSubstring(string S)
	{
	    int x=0;
        int maxLen= INT_MIN;
    
        for (int i=0; i<S.length(); i++){  
           if (S[i] == '0') x++;
           else x--;
           
           maxLen = max(maxLen, x);
           x = x < 0 ? 0 : x;
        }
        return maxLen;
	}
};
