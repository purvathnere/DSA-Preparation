vector<int>v;
    
    void r(Node *root)
    {
        if(root==NULL)return;
        
        v.push_back(root->data);
        r(root->left);
        r(root->right);
    }
    
    vector<int> merge(Node *root1, Node *root2)
    {
       //Your code here
       r(root1);
       r(root2);
       
       sort(v.begin(),v.end());
       
       return v;
       
       
    }
