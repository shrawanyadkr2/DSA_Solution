
/*
Link:-
https://www.geeksforgeeks.org/problems/root-to-leaf-paths/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=root-to-leaf-paths


prob:-

Given a Binary Tree of nodes, 
you need to find all the possible paths from the root node to all the leaf nodes of the binary tree.
*/




/*

Definition for Binary Tree Node
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

class Solution {
  public:
   void solver(Node* root,vector<vector<int>>&ans,vector<int>&res){
        if(root==nullptr) return;
        res.push_back(root->data);
        if(root->left==nullptr && root->right==nullptr){
            ans.push_back(res);
        }
        else{
            solver(root->left,ans,res);
            solver(root->right,ans,res);
        }
        res.pop_back();
    }
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int>>ans;
        vector<int>res;
        solver(root,ans,res);
        return ans;
    }
    // private:
   
};
