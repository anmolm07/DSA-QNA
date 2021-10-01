
//https://leetcode.com/problems/generate-parentheses/
class Solution {
public:
    
     string solve(int n,int left,int right, string x , vector<string>& answers){
        
        if(left == n && right ==n)
        {
            answers.push_back(x);
            return x; 
        }
        
        if(left<n)
        solve(n,left+1 , right , x+"(" , answers);
        
        if(right<left)
        solve(n,left , right+1 , x+")" , answers);

        return "";
    }
    
      vector<string> generateParenthesis(int n) {
        vector<string> answers;
        solve(n,0,0,"",answers);
        
        return answers ;
    }
  
   
};
