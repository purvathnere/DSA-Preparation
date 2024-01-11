class Solution {
public:
    int countNodes(TreeNode* root) {

        //BASE CONDITION CHECK
        if(root==NULL)
        {
            return 0;
        }
        //RECURSIVE
    return countNodes(root->left)+ countNodes(root->right)+1;


    }
};
