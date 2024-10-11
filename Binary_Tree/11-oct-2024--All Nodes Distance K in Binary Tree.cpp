
/*

All Nodes Distance K in Binary Tree
Link:-
https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/

prob:-
Given the root of a binary tree, the value of a target node target, and an integer k, return an array of the values of all nodes that have a distance k from the target node.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void makeParent(TreeNode* root,TreeNode* target,unordered_map<TreeNode*,TreeNode*>&parent_tracker){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            if(curr->left){
                parent_tracker[curr->left]=curr;
                q.push(curr->left);
            }
            if(curr->right){
                parent_tracker[curr->right]=curr;
                q.push(curr->right);

            }
        }
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {

        unordered_map<TreeNode*,TreeNode*>parent_tracker;
        makeParent(root,target,parent_tracker);
        unordered_map<TreeNode*,bool>visited;
        queue<TreeNode*>q;

        q.push(target);
        visited[target]=true;
        int curr_lvl=0;
        while(!q.empty()){
            int size=q.size();
            if(curr_lvl==k) break;
            for(int i=0;i<size;i++){
                TreeNode* current=q.front();
                q.pop();
                if(current->left && !visited[current->left]){
                    q.push(current->left);
                    visited[current->left]=true;
                }
                if(current->right && !visited[current->right]){
                    q.push(current->right);
                    visited[current->right]=true;
                }
                if(parent_tracker[current] && !visited[parent_tracker[current]]){
                    q.push(parent_tracker[current]);
                    visited[parent_tracker[current]]=true;
                }
            }
            curr_lvl+=1;

        }
        vector<int>ans;
        while(!q.empty()){
            TreeNode * current=q.front();
            q.pop();
            ans.push_back(current->val);

        }
        return ans;
        
    }
};
