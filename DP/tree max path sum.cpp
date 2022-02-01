//https://practice.geeksforgeeks.org/problems/maximum-path-sum/1/#

class Solution {
public:
    int helper(Node * root,int &res)
    {
        if(root==NULL)
        return INT_MIN;
        if(root->left==NULL && root->right==NULL)
        return root->data;
        
        int l=helper(root->left,res);
        int r=helper(root->right,res);
        if(root->left && root->right)
        {
            res=max(res,l+r+root->data);
            return max(l,r)+root->data;
        }
        return root->left ? l+root->data:r+root->data;
    }
    int maxPathSum(Node* root)
    {
        int res=INT_MIN;
        int ans= helper(root,res);
        if(res==INT_MIN)
        return ans;
        return res;
        // code here
    }
};
