
/*
Link:-
https://www.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1

prob:




*/


/*
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/


class Solution {
    public:
        Node* insert(Node* node, int data) {
            // If the tree is empty, create a new node and return it
            if (node == nullptr) {
                return new Node(data);
            }

            // Initialize a pointer to traverse the tree
            Node* curr = node;
            while (true) {
                // If data is equal to the current node's value, return as duplicates are not allowed
                if (curr->data == data) {
                    break; // No insertion, as the value already exists
                }
                // If data is greater than the current node's value
                else if (curr->data < data) {
                    // Move to the right if the right child exists
                    if (curr->right != nullptr) {
                        curr = curr->right;
                    } else {
                        // Otherwise, insert the new node to the right
                        curr->right = new Node(data);
                        break;
                    }
                } 
                // If data is less than the current node's value
                else {
                    // Move to the left if the left child exists
                    if (curr->left != nullptr) {
                        curr = curr->left;
                    } else {
                        // Otherwise, insert the new node to the left
                        curr->left = new Node(data);
                        break;
                    }
                }
            }

            // Return the root of the tree
            return node;
        }
};
