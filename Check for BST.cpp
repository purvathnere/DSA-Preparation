class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
        Node* prevv = NULL;
    bool isBST(Node* root) 
    {
        if(root==NULL){
            return true;
        }
        if(isBST(root->left)==false){
            return false;
        }
        if(prevv!=NULL && root->data<=prevv->data){
            return false;
        }
        prevv = root;
        return isBST(root->right);
    }
};
