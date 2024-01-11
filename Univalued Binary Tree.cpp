
class Solution {
public:
void solve(int value , TreeNode* root , bool &answer)
{
    if(root==NULL) return ;
    if(root->val!=value)
    {
        answer=false;
        return ;
    }
    solve(value , root->left,answer);
    solve(value , root->right,answer);
}
    
    bool isUnivalTree(TreeNode* root) {
       bool answer = true ;
       solve(root->val , root , answer);
       return answer; 
    }
};
