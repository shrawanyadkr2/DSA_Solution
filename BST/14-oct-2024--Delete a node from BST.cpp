
/*
Link:-
https://www.geeksforgeeks.org/problems/delete-a-node-from-bst/1

prob:-






*/
//
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;

//     // Constructor
//     Node(int x) : data(x), left(nullptr), right(nullptr) {}
// };

class Solution
{
    public:
    Node* helper(Node* root){
    if(root->right == NULL) return root->left;
    else if(root->left == NULL) return root->right;
    
        Node* LastRight = FindLastRight(root->left);
        LastRight->right = root->right;
        return root->left;
    }
    Node* FindLastRight(Node* root)
    {
        if(root->right == NULL) return root;
        return FindLastRight(root->right);
    }
};

Node *deleteNode(Node *root, int x) {
    Solution obj;
    if(root == NULL) return NULL;
    if(root->data == x) return obj.helper(root);
    Node* dummy = root;
    while(root != NULL)
    {
        if(root->data > x)
        {
            if(root->left != NULL && root->left->data == x) 
            {
                root->left = obj.helper(root->left);
                break;
            }
            else root = root->left;
        }
        else
        {
            if(root->right != NULL && root->right->data == x) 
            {
                root->right = obj.helper(root->right);
                break;
            }
            else root = root->right;
        }
    }
    return dummy;
}

// // Helper function to perform in-order traversal
// void inorder(Node* root) {
//     if (root == nullptr) return;
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// int main() {
//     // Create a sample tree
//     Node* root = new Node(2);
//     root->left = new Node(1);
//     root->right = new Node(3);

//     // Instantiate the solution class
//     Solution sol;

//     // Perform deletion
//     root = sol.deleteNode(root, 12);  // Try to delete node with value 12 (not present)

//     // Print the in-order traversal of the modified tree
//     inorder(root);
//     cout << endl;

//     return 0;
