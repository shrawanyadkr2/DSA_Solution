
/*
Link:
https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1


prob:-
Given a Binary Tree, return its Left view. 
The left view of a Binary Tree is a set of nodes visible when the tree is visited from the Left side.
If no left view is possible, return an empty array.

*/
/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

//Function to return a list containing elements of left view of the binary tree.
void solver(Node* root,int level,vector<int>&ans){
    if(root==nullptr) return ;
    if(level==ans.size()){
        ans.push_back(root->data);
    }
    solver(root->left,level+1,ans);
    solver(root->right,level+1,ans);
}
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>ans;
   solver(root,0,ans);
   return ans;
}
