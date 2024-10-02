

 /*
prob :-
Given the root of a binary tree, return the postorder traversal of its nodes' values.


Link:-
https://leetcode.com/problems/binary-tree-postorder-traversal/


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
    void postorder(TreeNode* root,vector<int>&ans){
        //base case of the recursive cal
        if(root==nullptr) return;

        //write the one caselogic
        postorder(root->left,ans);
        postorder(root->right,ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        //agin have to return something like vector
        vector<int>ans;
        postorder(root,ans);
        return ans;
    }
};
