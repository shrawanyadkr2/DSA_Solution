

/*
prob:-
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).




Link:-https://leetcode.com/problems/binary-tree-level-order-traversal/

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        //implimenting the level order traversal
        vector<vector<int>>ans;

        //it is very important to handle the edge case
        if(root==nullptr) return ans;
        queue<TreeNode*>track;
        track.push(root);
        while(!track.empty()){
            vector<int>level;
            int sizeOfLevel = track.size();
            for(int i=0;i<sizeOfLevel;i++){
                TreeNode* temp=track.front();
                track.pop();
                if(temp->left!=nullptr) track.push(temp->left);
                if(temp->right!=nullptr) track.push(temp->right);
                level.push_back(temp->val);

            }
            ans.push_back(level);
        }
        return ans;
    }
};
