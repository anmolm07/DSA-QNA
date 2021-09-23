/*
Shortest Word Distance leetcode
https://leetcode.com/problems/shortest-word-distance/
Closest Strings GFG
https://practice.geeksforgeeks.org/problems/closest-strings0611/1
*/

/*
Given a list of words followed by two words, the task to find the minimum distance between the given two words in the list of words

Example 1:

Input:
S = { "the", "quick", "brown", "fox", "quick"}
word1 = "the"
word2 = "fox"
Output: 3
Explanation: Minimum distance between the words "the" and "fox" is 3
*/

class Solution{
public:	
	
	int shortestDistance(vector<string> &s, string word1, string word2)
	{
		map<string, vector<int>> words;
		int i, j, min=INT_MAX, temp;
		for(i=0; i<s.size(); ++i){
		    words[s[i]].push_back(i);
		}
		i=0, j=0;
		while(i<words[word1].size() && j<words[word2].size()){
		    temp = abs(words[word1][i]-words[word2][j]);
		    if(temp<min){
		        min = temp;
		    }
		    if(words[word1][i]<words[word2][j]) i++;
		    else j++;
		}
		return min;
	}
};
