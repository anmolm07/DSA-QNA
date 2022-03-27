/*
You are given the root of a binary tree containing digits from 0 to 9 only.

Each root-to-leaf path in the tree represents a number.

For example, the root-to-leaf path 1 -> 2 -> 3 represents the number 123.
Return the total sum of all root-to-leaf numbers. Test cases are generated so that the answer will fit in a 32-bit integer.

A leaf node is a node with no children.

Input: root = [1,2,3]
Output: 25
Explanation:
The root-to-leaf path 1->2 represents the number 12.
The root-to-leaf path 1->3 represents the number 13.
Therefore, sum = 12 + 13 = 25.

LINK - https://leetcode.com/problems/sum-root-to-leaf-numbers/


*/

class Solution {
public:
    int ans;
    void fun(TreeNode *root,int sum)
    {
        if(root==NULL)
            return;
        sum=sum*10+root->val;
        if(root->left==NULL && root->right==NULL)
        {
            ans+=sum;
            return;
        }
        fun(root->left,sum);
        fun(root->right,sum);
        
    }
    int sumNumbers(TreeNode* root) {
        fun(root,0);
        return ans;
    }
};
