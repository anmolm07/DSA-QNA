class Solution {
void leftBoundry(Node* node,vector<int>&res){
    while(true){
        if(node->left){
            res.push_back(node->data);
            node=node->left;
        }
        else if(node->right){
            res.push_back(node->data);
            node=node->right;
        }
        else break;
        
    }
}
void leafNodes(Node* node,vector<int>&res){
    if(node==NULL)
    return;
    if(!node->left && !node->right){
       res.push_back(node->data);
       return;
    }
    leafNodes(node->left,res);
    leafNodes(node->right,res);
}
void RightBundry(Node* node,stack<int>&st){
    while(true){
        if(node->right){
            st.push(node->data);
            node=node->right;
        }
        else if(node->left){
            st.push(node->data);
            node=node->left;
        }
        else break;
        
    }
}
public:
    vector <int> printBoundary(Node *root)
    {
        //Your code here
        vector<int>res;
        if(root==NULL)
        return res;
         if(root->left){
        leftBoundry(root,res);
         }
         else res.push_back(root->data);
        leafNodes(root,res);
        stack<int>st;
        if(root->right)
        RightBundry(root->right,st);
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        return res;
    }
};
