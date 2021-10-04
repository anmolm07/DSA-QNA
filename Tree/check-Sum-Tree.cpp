/*
Given a Binary Tree. Return 1 if, for every node X in the tree other than the leaves, 
its value is equal to the sum of its left subtree's value and its right subtree's value. Else return 0.

An empty tree is also a Sum Tree as the sum of an empty tree can be considered to be 0. A leaf node is also considered a Sum Tree.

LINK- https://practice.geeksforgeeks.org/problems/sum-tree/1


*/

class Solution
{
    public:
    bool isSumTree(Node* root)
    {
        if(root==NULL)
        return true;
        else if(root->left==NULL && root->right==NULL)
        return true;
        if(isSumTree(root->left) && isSumTree(root->right))
        {
            int l=0;
            int r=0;
            if(root->left){
                if(root->left->left==NULL && root->left->right==NULL)
                l=root->left->data;
                else
                l= 2* root->left->data;
            }
            if(root->right)
            {
                if(root->right->left==NULL && root->right->right==NULL)
                r=root->right->data;
                else
                r= 2* root->right->data;
            }
            return root->data==(l+r);
            
        
        }
        return false;
        
    }
};
