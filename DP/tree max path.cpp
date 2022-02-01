//https://leetcode.com/problems/binary-tree-maximum-path-sum/

class Solution {
public:
    
    int helper(TreeNode* root,int &res){
        
        if(root==NULL)
            return 0;
        
        int l=helper(root->left,res);
        int r=helper(root->right,res);
        
        int temp=max(max(l,r)+root->val,root->val);
        int ans=max(temp,l+r+root->val);
        res=max(res,ans);
        return temp;
    }
    int maxPathSum(TreeNode* root) {
        
        int res=INT_MIN;
        helper(root,res);
        
        return res;
    }
};
