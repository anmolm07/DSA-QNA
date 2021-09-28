//https://leetcode.com/problems/pascals-triangle/submissions/

class Solution {
public:
       vector<vector<int>> generate(int n) {
        
           vector<vector<int>> ans;
           
           for(int r=0;r<n;r++){
           vector<int> result(r+1,1);
        
        for(int i=1;i<r;i++){
            
            for(int j=i;j>0;j--)
                
                result[j]+=result[j-1];
        } ans.push_back(result);}
           return ans;
        
    }
   
   
   


};
