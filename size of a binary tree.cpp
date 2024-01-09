//Size of Binary Tree
int getSize(Node* node)
{
    
    //Base Condition
   if(node==NULL)
   {
       return 0;
   }
   
   //Recursively
   int left=getSize(node->left);
   int right=getSize(node->right);
   return 1+left+right;
   
}
