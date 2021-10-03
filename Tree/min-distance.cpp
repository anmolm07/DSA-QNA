/*
Given a binary tree and two node values your task is to find the minimum distance between them.
LINK - https://practice.geeksforgeeks.org/problems/min-distance-between-two-given-nodes-of-a-binary-tree/1#


*/


class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       if(root==NULL)
       return NULL;
       if(root->data==n1 || root->data==n2)
       return root;
       Node * left=lca(root->left,n1,n2);
       Node * right=lca(root->right,n1,n2);
       if(right!=NULL && left!=NULL)
       return root;
       
       return (left!=NULL)?left:right;
    }
    int findLevel(Node *root, int k, int level)
    {
        if(root == NULL) return -1;
        if(root->data == k) return level;
 
        int left = findLevel(root->left, k, level+1);
        if (left == -1)
            return findLevel(root->right, k, level+1);
        return left;
    }
    int findDist(Node* root, int a, int b) {
        Node * ancestor=lca(root,a,b);
        int d1=findLevel(ancestor,a,0);
        int d2=findLevel(ancestor,b,0);
        return d1+d2;
    }
};
