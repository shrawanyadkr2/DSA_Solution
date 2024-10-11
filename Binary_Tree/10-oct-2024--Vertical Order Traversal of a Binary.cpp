/*

Vertical Order Traversal of a Binary
link:-
https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/

prob:-
Given the root of a binary tree, calculate the vertical order traversal of the binary tree.

For each node at position (row, col), its left and right children will be at positions (row + 1, col - 1) and (row + 1, col + 1) respectively. The root of the tree is at (0, 0).

The vertical order traversal of a binary tree is a list of top-to-bottom orderings for each column index starting from the leftmost column and ending on the rightmost column. There may be multiple nodes in the same row and same column. In such a case, sort these nodes by their values.

Return the vertical order traversal of the binary tree.

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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>nodes;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});

        while(!q.empty()){
            auto p=q.front();
            q.pop();
            TreeNode* temp=p.first;
            int x=p.second.first;
            int y=p.second.second;

            nodes[x][y].insert(temp->val);

            if(temp->left!=nullptr){
                q.push({temp->left,{x-1,y+1}});
            }
            if(temp->right!=nullptr){
                q.push({temp->right,{x+1,y+1}});
            }


        }
        vector<vector<int>>ans;
        for(auto m:nodes){
            vector<int>col;
            for(auto n:m.second){
                col.insert(col.end(),n.second.begin(),n.second.end());
            }
            ans.push_back(col);
        }
        return ans;
        
    }
};
