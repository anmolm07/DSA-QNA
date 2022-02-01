//https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1

class Solution {
  public:
  
  int helper(Node* root,int &res){
      
      if(root==NULL)
      return 0;
      
      int l=helper(root->left,res);
      int r=helper(root->right,res);
      
      int temp=max(l,r)+1;
      
      int ans=max(temp,l+r+1);
      res=max(ans,res);
      
      
      return temp;
  }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        
        int res=INT_MIN;
        helper(root,res);
        return res;
        // Your code here
    }
};
