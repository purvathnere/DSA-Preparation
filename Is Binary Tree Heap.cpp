class Solution {
  public:
  
    bool isHeap1(struct Node* root)
    {
        if(root == NULL)
            return true;
        else
        {
            int lt = INT_MIN, rt = INT_MIN;
            
            if(root->left) lt = root->left->data;
            if(root->right) rt = root->right->data;
            
            bool check = (lt <= root->data) && (rt <= root->data);
            
            return check && isHeap1(root->left) && isHeap1(root->right);
        }
    }
  
    int countNodes(struct Node* root)
    {
        if(root == NULL)
            return 0;
        else
            return 1 + countNodes(root->left) + countNodes(root->right);
    }
  
    bool isHeap2(struct Node* root, int idx, int nodes)
    {
        if(root == NULL)
            return true;
        else
        {
            bool check = idx < nodes;
            return check && isHeap2(root->left, 2 * idx + 1, nodes) && isHeap2(root->right, 2 * idx + 2, nodes);
        }
    }
  
    bool isHeap(struct Node* tree) {
        
        int nodes = countNodes(tree);
        int idx = 0;
        
        return isHeap1(tree) && isHeap2(tree, idx, nodes);
    }
};



