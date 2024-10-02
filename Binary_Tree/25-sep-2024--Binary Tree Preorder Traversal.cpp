// Binary Tree Preorder Traversal

/*
prob:- Given the root of a binary tree, return the preorder traversal of its nodes' values.

Link:-
https://leetcode.com/problems/binary-tree-preorder-traversal/
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

void preorder(TreeNode* root, vector<int> &arr){
    if(root == nullptr){
        return;
    }
    arr.push_back(root->val);
    preorder(root->left, arr);
    preorder(root->right, arr);
}
vector<int> preorderTraversal(TreeNode* root) {
     

// Function to initiate preorder traversal
// and return the resulting vector

    // Create an empty vector to
    // store preorder traversal values
    vector<int> arr;
    // Call the preorder traversal function
    preorder(root, arr);
    // Return the resulting vector
    // containing preorder traversal values
    return arr;

    }
};
