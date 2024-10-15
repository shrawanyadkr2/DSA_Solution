

/*
Link:
https://www.geeksforgeeks.org/problems/check-for-bst/1

prob:




*/

class Solution {
    
    // class Solution {
private:
    bool isBSTsolver(Node* root, long minval, long maxval) {
        if (root == nullptr) return true;
        if (root->data > maxval || root->data < minval) return false;
        return isBSTsolver(root->left, minval, root->data) &&
               isBSTsolver(root->right, root->data, maxval);
    }

public:
    // Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) {
        return isBSTsolver(root, LONG_MIN, LONG_MAX);
    }
};
