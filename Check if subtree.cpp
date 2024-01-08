
class Solution
{
  public:
  bool check(Node* T , Node* S)
  {
      if(T==NULL && S==NULL)
      {
          return true;
      }
      else if(T==NULL || S==NULL)
      {
          return false;
      }
      return T->data==S->data && check(T->left,S->left) && check(S->right,T->right);
  }
    //Function to check if S is a subtree of tree T.
    bool isSubTree(Node* T, Node* S) 
    {
       if(T==NULL && S==NULL)
      {
          return true;
      }
      else if(T==NULL || S==NULL)
      {
          return false;
      }
       if(T->data==S->data)
       {
       bool val=check(T,S);
       if(val) return true;
       }
       return isSubTree(T->left,S)||isSubTree(T->right,S);
    }
};
