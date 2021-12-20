/*
Given the root of a binary tree, return the sum of values of its deepest leaves.


Input: root = [1,2,3,4,5,null,6,7,null,null,null,null,8]
Output: 15

LINK - https://leetcode.com/problems/deepest-leaves-sum/
*/

class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        if(root == NULL)
            return 0;
        queue<TreeNode*> q;
        q.push(root);
        int sum = 0;
        while(!q.empty())
        {
            int n = q.size();
            sum = 0;                                           
            
            for(int i = 0; i < n; i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                
                sum += temp->val;
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
        }
        return sum;
    }
};
