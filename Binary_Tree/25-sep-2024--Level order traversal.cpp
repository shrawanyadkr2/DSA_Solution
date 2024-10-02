

/*
prob:-

Given a root of a binary tree with n nodes, find its level order traversal.
Level order traversal of a tree is breadth-first traversal for the tree.

Link:-
https://www.geeksforgeeks.org/problems/level-order-traversal/1

*/
/* A binary tree Node

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


class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
      //Your code here
      vector<int>ans;
      queue<Node*>track;
      track.push(root);
      while(!track.empty()){
          Node* temp=track.front();
          track.pop();
          if(temp->left!=nullptr) track.push(temp->left);
          if(temp->right!=nullptr) track.push(temp->right);
          ans.push_back(temp->data);
          
          
      }
      return ans;
    }
};
