class Solution
{
    public:
    bool ch = true;
    int i(Node* root){
    if(!root) return 0;
    
     int l=i(root->left);
     int r=i(root->right);
     if(l+r==root->data || !l&&!r)
     return l+r+root->data;
     else
     {
         ch=false;
     }
    }
    bool isSumTree(Node* root)
    {
         i(root);
         return ch;
    }
};
