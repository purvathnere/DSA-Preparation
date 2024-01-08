class Solution
{
    public:
    void rightView(Node *root,vector<int>& ans,int level)
    {
       //base case
       if(root==NULL)
       {
           return;
       }
       if(level==ans.size())
       {
           ans.push_back(root->data);
       }
       rightView(root->right,ans,level+1);
       rightView(root->left,ans,level+1);
    }


    vector<int> rightView(Node *root)
    {
       vector<int> ans;
       rightView(root,ans,0);
       return ans;
    }
};
