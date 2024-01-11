class Solution {
    int answer =0;
    int dfs(TreeNode* root)
    {
        int left=(root->left)?dfs(root->left):0;
         int right=(root->right)?dfs(root->right):0;
         answer+=abs(left-right);
         return left+right+root->val;
    }
public:
    int findTilt(TreeNode* root) {
        if(root)dfs(root);
        return answer;
    }
};
