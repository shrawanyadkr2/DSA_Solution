
/*
Link:
https://www.geeksforgeeks.org/problems/minimum-depth-of-a-binary-tree/1



Minimum Depth of a Binary Tree



*/
class Solution {
  public:
    int solve(Node* root) {
        if (root == nullptr) {
            return 0;
        }
        if (root->left == nullptr && root->right == nullptr) {
            return 1;
        }
        int leftDepth = solve(root->left);
        int rightDepth = solve(root->right);

        if (root->left == nullptr) {
            return rightDepth + 1;
        }
        if (root->right == nullptr) {
            return leftDepth + 1;
        }
        return min(leftDepth, rightDepth) + 1;
    }

    int minDepth(Node *root) {
        if (root == nullptr) {
            return 0;
        }
        
        return solve(root);
    }
};

