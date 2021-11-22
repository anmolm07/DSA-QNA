/*
Given an input stream of A of n characters consisting only of lower case alphabets.
The task is to find the first non repeating character,
each time a character is inserted to the stream. If there is no such character then append '#' to the answer.

Input: A = "aabc"
Output: "a#bb"
Explanation: For every character first non
repeating character is as follow-
"a" - first non-repeating character is 'a'
"aa" - no non-repeating character so '#'
"aab" - first non-repeating character is 'b'
"aabc" - first non-repeating character is 'b'

LINK - https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1
*/

class Solution {
	public:
		string FirstNonRepeating(string A){
		    queue<char>Q;
		    string str;
		    int count[26]={0};
		    for(int i=0;i<A.size();i++)
		    {
		        Q.push(A[i]);
		        count[A[i]-'a']++;
		        while(!Q.empty())
		        {
		            if(count[Q.front()-'a']>1)
		            {
		                Q.pop();
		            }
		            else{
		                str.push_back(Q.front());
		                break;
		            }
		        }
		        if(Q.empty())
		        {
		            str.push_back('#');
		        }
		        
		    }
		    return str;
		}

};
