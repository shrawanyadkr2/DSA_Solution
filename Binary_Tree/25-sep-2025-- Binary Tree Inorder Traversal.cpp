


/*
prob:- Given the root of a binary tree, return the inorder traversal of its nodes' values.

Link:-
https://leetcode.com/problems/binary-tree-inorder-traversal/
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inOrder(TreeNode* root,vector<int>&ans){
        if(root==nullptr) return;
        //here the logi and the recursin will come into the picture

        inOrder(root->left,ans);
        ans.push_back(root->val);
        inOrder(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        //first of create a vector
        vector<int>ans;
        inOrder(root,ans);
        return ans;
    }
};
