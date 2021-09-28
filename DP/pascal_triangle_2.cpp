//https://leetcode.com/problems/pascals-triangle-ii/submissions/
class Solution {
public:
    vector<int> getRow(int r) {
        vector<int> result(r+1,1);
        
        for(int i=1;i<r;i++){
            
            for(int j=i;j>0;j--)
                
                result[j]+=result[j-1];
        }return result;
        
    }
};
