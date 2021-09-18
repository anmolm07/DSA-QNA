class Solution {
    bool isSymmetrical(TreeNode* left, TreeNode* right){
        if(!left || !right)
        return left==right;
        
        if(left->val != right->val) return false;
        return isSymmetrical(left->left,right->right) && isSymmetrical(left->right,right->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        return root==NULL || isSymmetrical(root->left,root->right);
    }
};
