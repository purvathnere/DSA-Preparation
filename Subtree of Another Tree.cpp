
class Solution {
public:
    bool isSameTree(TreeNode* r , TreeNode* s)
    {
        if(r==NULL && s==NULL)
        {
            return true;
        }
        if(r==NULL || s==NULL)
        {
            return false;
        }
        if(r->val!=s->val)
        {
            return false;
        }
        return isSameTree(r->left,s->left)&&isSameTree(r->right,s->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL || subRoot==NULL) return false;
        if(isSameTree(root,subRoot))
        return true;
        return isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
    }
};
