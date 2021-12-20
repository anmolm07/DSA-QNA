/*

Given a binary tree, the task is to find the maximum path sum. The path may start and end at any node in the tree.

Input:
     10
    /  \
   2   -25
  / \  /  \
 20 1  3  4
Output: 32
Explanation: Path in the given tree goes
like 10 , 2 , 20 which gives the max
sum as 32.

LINK - https://practice.geeksforgeeks.org/problems/maximum-path-sum-from-any-node/1#

LINK -  https://practice.geeksforgeeks.org/problems/maximum-path-sum/1#


*/

class Solution {
  public:
    //Function to return maximum path sum from any node in a tree.
    int helper(Node * root,int &res)
    {
        if(root==NULL)
        return 0;
        int l=helper(root->left,res);
        int r=helper(root->right,res);
        int temp=max( max(l,r)+root->data,root->data);
        int ans=max(temp, l+r+root->data);
        res=max(res,ans);
        return temp;
    }
    int findMaxSum(Node* root)
    {
        int res=INT_MIN;
        helper(root,res);
        return res;
        // Your code goes here
    }
};
