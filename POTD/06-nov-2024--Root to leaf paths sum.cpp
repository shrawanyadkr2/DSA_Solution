/*
Link:
https://www.geeksforgeeks.org/problems/root-to-leaf-paths-sum/1

prob:
Root to leaf paths sum

*/

/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

class Solution {
  public:
   int ans=0;
  void Solve(Node* root,int res){
      if(root==NULL)
      return;
      if(root->left==NULL && root->right==NULL){
          res=res*10+root->data;
          ans+=res;
          return;
      }
      Solve(root->left,res*10+root->data);
      Solve(root->right,res*10+root->data);
  }
    int treePathsSum(Node *root) {
        Solve(root,0);
        return ans;
    }

        
    
};
