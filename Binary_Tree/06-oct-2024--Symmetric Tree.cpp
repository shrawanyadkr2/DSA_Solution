/*
Link:
https://leetcode.com/problems/symmetric-tree/submissions/1413234318/

prob:
Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).


*/
// Symmetric Tree



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
    bool isSymmetric(TreeNode* root) {
        return (root==nullptr) || isSymmetricSolver(root->left,root->right);
    }
    private:
    bool isSymmetricSolver(TreeNode* rootLeft,TreeNode * rootRight){
        if(rootLeft==nullptr || rootRight==nullptr){
            return rootLeft==rootRight;
        }
        if(rootLeft->val!=rootRight->val) return false;
        return ((isSymmetricSolver(rootLeft->left,rootRight->right))
               && (isSymmetricSolver(rootLeft->right,rootRight->left)));
    }
};
