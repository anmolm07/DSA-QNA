//https://practice.geeksforgeeks.org/problems/maximum-difference-of-zeros-and-ones-in-binary-string4111/1

class Solution{
public:	
	int maxSubstring(string s)
	{
	    // Your code goes here
	    int max_until=0;
	    int ma=INT_MIN;
	    
	    for(int i=0;i<s.length();i++){
	        
	        int x=(s[i]=='0')?1:-1;
	        max_until+=x;
	        if(max_until>ma)ma=max_until;
	        if(max_until<0)max_until=0;
	    }return ma;
	}
};
