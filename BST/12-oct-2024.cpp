

/*



link:
https://www.geeksforgeeks.org/problems/minimum-element-in-bst/1

prob:-
Given the root of a Binary Search Tree. The task is to find the minimum valued element in this given BST.


*/
// Function to find the minimum element in the given BST.

/* struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
*/

class Solution {
  public:
    int minValue(Node* root) {
        // Code here
        if(root->left==nullptr) return root->data;
        minValue(root->left);
        // return root->data;
        
        
    }
};
