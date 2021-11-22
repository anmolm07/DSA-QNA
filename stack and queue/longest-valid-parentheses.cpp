/*
Given a string S consisting of opening and closing parenthesis '(' and ')'. Find length of the longest valid parenthesis substring.

A parenthesis string is valid if:

For every opening parenthesis, there is a closing parenthesis.
Opening parenthesis must be closed in the correct order.

Input: S = ((()
Output: 2
Explaination: The longest valid 
parenthesis substring is "()".

LINK - https://practice.geeksforgeeks.org/problems/longest-valid-parentheses5657/1
*/

class Solution{
public:
    int maxLength(string S){
        stack<int>st;
        int result=0;
        st.push(-1);
        for(int i=0;S[i]!='\0';i++)
        {
            if(S[i]=='(')
            st.push(i);
            else{
                if(!st.empty())
                {
                    st.pop();
                }
                if(!st.empty())
                {
                    result=max(result,i-st.top());
                }
                else{
                    st.push(i);
                }
            }
        }
        return result;
        // code here
    }
};
