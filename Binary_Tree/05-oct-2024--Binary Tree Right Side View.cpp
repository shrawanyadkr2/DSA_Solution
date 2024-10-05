/*
link:-https://leetcode.com/problems/binary-tree-right-side-view/




prob:-
Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

*/


class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        solver(root, 0, ans);
        return ans;
    }

private:
    void solver(TreeNode* root, int level, vector<int>& ans) {
        if (root == nullptr) return;
        if (level == ans.size()) {
            ans.push_back(root->val);
        }
        solver(root->right, level + 1, ans);
        solver(root->left, level + 1, ans);
    }
};
