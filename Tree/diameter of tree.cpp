//Problem - Given a Binary Tree, find diameter of it.
//The diameter of a tree is the number of nodes on the longest path between two end nodes in the tree. 
//The diagram below shows two trees each with diameter nine, 
//the leaves that form the ends of a longest path are shaded (note that there is more than one path in each tree of length nine, but no path longer than nine nodes).
//http://geeksforgeeks.org/wp-content/uploads/tree_diameter.GIF

//Solution - 
class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int diameterOpt(struct Node* root,int *height){
        int lh = 0, rh = 0;
        int ldiameter = 0, rdiameter = 0;
  
        if (root == NULL) {
            *height = 0;
            return 0; 
        }
        ldiameter = diameterOpt(root->left, &lh);
        rdiameter = diameterOpt(root->right, &rh);
  
        *height = max(lh, rh) + 1;
  
        return max(lh + rh + 1, max(ldiameter, rdiameter));
    }
    int diameter(Node* root) {
        int height=0;
        return diameterOpt(root,&height);
        
        // Your code here
    }
};

//UPDATED 


class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int diameterOpt(struct Node* root,int &height){
        int l = 0, r= 0;
  
        if (root == NULL) {
            return 0; 
        }
        l = diameterOpt(root->left, height);
        r = diameterOpt(root->right, height);
  
        int temp = max(l, r) + 1;
        int ans=max(temp,1+l+r);
        height= max(height,ans);
        return temp;
    }
    int diameter(Node* root) {
        int height=INT_MIN;
        diameterOpt(root,height);
        return height;
        
        // Your code here
    }
};
